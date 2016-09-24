#include "psmodel.h"
#include <QDebug>

cPSmodel::cPSmodel(QObject *parent) : QObject(parent)
{
    readSettings();
    connect(this, SIGNAL(addressChanged()), this, SLOT(saveSettings()));
    connect(this, SIGNAL(timer_send_intervalChanged()), this, SLOT(updateSendTimer()));
    //connect(this, SIGNAL(portChanged()), this, SLOT(saveSettings()));
    connect(&tcpClient, SIGNAL(connected()),this, SLOT(clientConnected())); // Клиент приконнектилася к указанному адресу по указанному порту.
    connect(&tcpClient, SIGNAL(disconnected()),this, SLOT(clientDisconnected())); // Клиент отвалился
    connect(&tcpClient, SIGNAL(bytesWritten(qint64)),this, SLOT(updateClientProgress(qint64)));
    connect(&tcpClient, SIGNAL(readyRead()),this, SLOT(readData()));
    connect(&tcpClient, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(displayError(QAbstractSocket::SocketError)));

    connect(&tcpClient, SIGNAL(connected()),this, SLOT(sendData())); //при установке исходящего соединения с аппаратом посылаем текущие данные.  !!! litovko
    //при изменении пользователем любого параметра сразу передаем данные
    connect(this, SIGNAL(lampChanged()),this, SLOT(sendData()));
    connect(this, SIGNAL(engineChanged()),this, SLOT(sendData()));
    connect(this, SIGNAL(pumpChanged()),this, SLOT(sendData()));
    //connect(this, SIGNAL(joystickChanged()),this, SLOT(sendData()));
    connect(this, SIGNAL(cameraChanged()),this, SLOT(sendData()));

    connect(&timer_connect, SIGNAL(timeout()), this, SLOT(start_client()));
    timer_connect.start(m_timer_connect_interval);
    connect(&timer_send, SIGNAL(timeout()), this, SLOT(sendData()));
    timer_send.start(m_timer_send_interval);
}
void cPSmodel::saveSettings()
{
    qDebug()<<"Rig saveSettings addres:"<<m_address<<"port:"<<m_port;
    QSettings settings("HYCO", "Rig Console");
    settings.setValue("RigAddress",m_address);
    settings.setValue("RigPort",m_port);
    settings.setValue("RigFreerun",m_freerun);
    settings.setValue("RigSendInterval",m_timer_send_interval);
    settings.setValue("RigConnectInterval",m_timer_connect_interval);
    settings.setValue("RigCheckType",m_check_type);

}

void cPSmodel::readSettings()
{

    QSettings settings("HYCO", "Rig Console");
    m_address=settings.value("RigAddress","localhost").toString();
    m_port=settings.value("RigPort","1212").toInt();
    setFreerun(settings.value("RigFreerun","0").toInt());
    m_timer_send_interval=settings.value("RigSendInterval","2000").toInt();
    m_timer_connect_interval=settings.value("RigConnectInterval","30000").toInt();
    m_check_type=settings.value("RigCheckType","false").toBool();

}

void cPSmodel::updateSendTimer()
{
    timer_send.stop();
    timer_send.start(m_timer_send_interval);
}

void cPSmodel::setPressure(const int &pressure)
{
    m_pressure = pressure;
    emit pressureChanged();
}

int cPSmodel::pressure() const
{
    return m_pressure;
}

void cPSmodel::setOiltemp(const int &oiltemp)
{
    m_oiltemp = oiltemp;
    emit oiltempChanged();
}

int cPSmodel::oiltemp() const
{
    return m_oiltemp;
}


void cPSmodel::setVoltage(const int &voltage)
{
    m_voltage = voltage;
    emit voltageChanged();
}

int cPSmodel::voltage() const
{
    return m_voltage;
}

void cPSmodel::setVoltage24(const int &voltage)
{
    m_voltage24 = voltage;
    emit voltage24Changed();
}

int cPSmodel::voltage24() const
{
    return m_voltage24;
}

void cPSmodel::setAmpere(const int &ampere)
{
    m_ampere = ampere;
    emit ampereChanged();
}

int cPSmodel::ampere() const
{
    return m_ampere;
}

void cPSmodel::setTurns(const int &turns)
{
    m_turns = turns;
    emit turnsChanged();
}

int cPSmodel::turns() const
{
    return m_turns;
}

void cPSmodel::setTemperature(const int &temperature)
{
    m_temperature = temperature;
    emit temperatureChanged();
}

int cPSmodel::temperature() const
{
    return m_temperature;
}

void cPSmodel::setRigtype(const QString &rigtype)
{
    if (m_rigtype == rigtype) return;
    m_rigtype = rigtype;
    emit rigtypeChanged();
    qDebug()<<"Rig: rigtype:"<<m_rigtype;
}

QString cPSmodel::rigtype() const
{
    return m_rigtype;
}

void cPSmodel::setLamp(const bool &lamp)
{
    m_lamp = lamp;
    emit lampChanged();
    qDebug()<<"RIG: Lamp swithced";
}

bool cPSmodel::lamp() const
{
    return m_lamp;
}

void cPSmodel::setCamera(const bool &camera)
{
    m_camera = camera;
    emit cameraChanged();
    qDebug()<<"Rig Camera power switched";
}

bool cPSmodel::camera() const
{
    return m_camera;
}

void cPSmodel::setEngine(const bool &engine)
{
    m_engine = engine;
    emit engineChanged();
}

bool cPSmodel::engine() const
{
    return m_engine;
}

void cPSmodel::setPump(const bool &pump)
{
    m_pump = pump;
    emit pumpChanged();
}

bool cPSmodel::pump() const
{
    return m_pump;
}

void cPSmodel::setJoystick_x1(const int &joystick)
{
    m_joystick_x1 = joystick;
    emit joystick_x1Changed();
}

int cPSmodel::joystick_x1() const
{
    return m_joystick_x1;
}
//-------------------------------
void cPSmodel::setJoystick_y1(const int &joystick)
{
    m_joystick_y1 = joystick;
    emit joystick_y1Changed();
}

int cPSmodel::joystick_y1() const
{
    return m_joystick_y1;
}
//----------------------------------
void cPSmodel::setJoystick_x2(const int &joystick)
{
    m_joystick_x2 = joystick;
    emit joystick_x2Changed();
}

int cPSmodel::joystick_x2() const
{
    return m_joystick_x2;
}
void cPSmodel::setJoystick_y2(const int &joystick)
{
    m_joystick_y2 = joystick;
    emit joystick_y2Changed();
}

int cPSmodel::joystick_y2() const
{
    return m_joystick_y2;
}

void cPSmodel::setAddress(const QString  &address)
{
    m_address = address;
    emit addressChanged();
}

QString cPSmodel::address() const
{
    return m_address;
}

int cPSmodel::port() const
{
    return m_port;
}

void cPSmodel::setPort(const int  &port)
{
    m_port = port;
    emit portChanged();
}

int cPSmodel::timer_send_interval() const
{
    return m_timer_send_interval;
}

void cPSmodel::setTimer_send_interval(const int  &timer_send_interval)
{
    m_timer_send_interval = timer_send_interval;
    emit timer_send_intervalChanged();
}

int cPSmodel::timer_connect_interval() const
{
    return m_timer_connect_interval;
}

void cPSmodel::setTimer_connect_interval(const int  &timer_connect_interval)
{
    m_timer_connect_interval = timer_connect_interval;
    emit timer_connect_intervalChanged();
}

bool cPSmodel::client_connected() const
{
    return m_client_connected;
}

bool cPSmodel::good_data() const
{
    return m_good_data;
}


//################################################################



void cPSmodel::start_client()
{
    if (m_client_connected) return;
    bytesWritten = 0;
    qDebug()<<"Rig Start client >>>"<<m_address<<"poprt"<<::QString().number(m_port);
    
    tcpClient.connectToHost(m_address, m_port);

}
void cPSmodel::clientConnected()
{
    qDebug()<<"Rig Client connected to address >>>"+this->address()+" port:"+ ::QString().number(m_port);
    m_client_connected=true;
    emit client_connectedChanged();
}
void cPSmodel::clientDisconnected()
{
    qDebug()<<"Rig Client disconnected form address >>>"+this->address()+" port:"+ this->port();
    m_client_connected=false;
    m_good_data=false;
    m_pressure=0;
    m_oiltemp=0;
    m_voltage=0;
    m_ampere=0;
    m_turns=0;
    m_temperature=0;
    emit pressureChanged();
    emit oiltempChanged();
    emit voltageChanged();
    emit ampereChanged();
    emit turnsChanged();
    emit temperatureChanged();
    emit client_connectedChanged();
    emit good_dataChanged();
}





void cPSmodel::updateClientProgress(qint64 numBytes)
{
    // callen when the TCP client has written some bytes
    bytesWritten += (int)numBytes;
    //qDebug()<<"Rig Update client progress >>>"+::QString().number(bytesWritten);
}

void cPSmodel::displayError(QAbstractSocket::SocketError socketError)
{
    if (socketError == QTcpSocket::RemoteHostClosedError)   //litovko надо уточнить зачем эта проверка
        return;
    qDebug()<<"Rig Network error >>>"+tcpClient.errorString();


    tcpClient.close();

}


//##################### функция отправки данных

void cPSmodel::sendData()
{
    char data[5]={0,32,33,34,35};
    data[0] = m_engine*1
            +   m_pump*2
            +   m_lamp*4
            + m_camera*8;
    QString Data; // Строка отправки данных.
// проверяем, есть ли подключение клиента. Если подключения нет, то ничего не отправляем.
    if (!m_client_connected) return;
//    Data="{ana1:"+::QString().number(int(m_joystick_y1*127/100),10)
//        +";ana2:"+::QString().number(int(m_joystick_y2*127/100),10)
//        +";dig1:"+::QString().number(data[0],10)+"}FEDCA987";
    Data="{ana1:"+::QString().number(scaling(m_joystick_y1),10);
    if (m_rigtype=="gkgbu"||m_rigtype=="grab6") Data=Data +";ana2:"+::QString().number(scaling(m_joystick_y2),10);
    if (m_rigtype=="gkgbu") Data=Data+";ana3:"+::QString().number(scaling(m_joystick_x1),10)+";gmod:"+m_gmod;

    Data=Data+";dig1:"+::QString().number(data[0],10)+"}CONSDATA";
    qDebug()<<"Rig - send data: "<<Data;

    bytesToWrite = (int)tcpClient.write(::QByteArray(Data.toLatin1()).data());
    if (bytesToWrite<0)qWarning()<<"Rig: Something wrong due to send data >>>"+tcpClient.errorString();
    if (bytesToWrite>=0)qDebug()<<"Rig: Data sent>>>"<<Data<<":"<<::QString().number(bytesToWrite);
}


void cPSmodel::readData()
{

    QByteArray Data="";
    QString CRC ="";
    QList<QByteArray> split;
    int m;
    Data = tcpClient.readAll();
    qDebug()<<"Rig read :"<<Data;
    // {toil=29;poil=70;drpm=15;pwrv=33;pwra=3}FAFBFCFD
    //m_good_data = false; emit good_dataChanged();
    if (Data.startsWith("{")&&(m=Data.indexOf("}"))>0) {
        m_good_data = true; emit good_dataChanged();
        CRC=Data.mid(m+1);
        //qDebug()<<"CRC:"<<CRC; //CRC пока не проверяем - это отдельная тема.
        Data=Data.mid(1,m-1);
        //qDebug()<<"truncated :"<<Data;
        split=Data.split(';');
        //qDebug()<<"split:"<<split;
        QListIterator<QByteArray> i(split);
        QByteArray s, val;
        bool ok=false;
        while (i.hasNext()){
             s=i.next();
             m=s.indexOf(":");
             val=s.mid(m+1); //данные после ":"
             s=s.left(m); // названия тэга
            qDebug()<<"Rig tag:"<<s<<"value:"<<val;
            if (s=="toil") {
                m_temperature=val.toInt(&ok,10); emit temperatureChanged();
                if(!ok) {m_good_data = false; emit good_dataChanged();
                qWarning()<<"Rig no good data for "<<"toil:"<<val;}
            }
            if (s=="poil"){
                m_pressure=val.toInt(&ok,10); emit pressureChanged();
                if(!ok) {m_good_data = false; emit good_dataChanged();
                qWarning()<<"Rig no good data for "<<"poil:"<<val;}
            }
            if (s=="drpm"){
                m_turns=val.toInt(&ok,10); emit turnsChanged();
                if(!ok) {m_good_data = false; emit good_dataChanged();
                qWarning()<<"Rig no good data for "<<"drpm:"<<val;}
            }
            if (s=="pwrv"){
                m_voltage=val.toInt(&ok,10); emit voltageChanged();
                if(!ok) {m_good_data = false; emit good_dataChanged();
                qWarning()<<"Rig no good data for "<<"pwrv:"<<val;}
            }
            if (s=="dc1v"){
                setVoltage24(val.toInt(&ok,10));
                if(!ok) {m_good_data = false; emit good_dataChanged();
                qWarning()<<"Rig no good data for "<<"dc1v:"<<val;}
            }
            if (s=="pwra"){
                m_ampere=val.toInt(&ok,10); emit ampereChanged();
                if(!ok) {m_good_data = false; emit good_dataChanged();
                qWarning()<<"Rig no good data for "<<"pwra:"<<val;}
            }
            if (s=="type"){
                if (check_type()) setRigtype(val);
                //m_rigtype=val; emit rigtypeChanged();
                if (m_rigtype=="grab2"||m_rigtype=="grab6"||m_rigtype=="gkgbu"||m_rigtype=="tk-15") ok=true;
                if(!ok) {m_good_data = false; emit good_dataChanged();
                qWarning()<<"Rig: no good data for "<<"type:"<<val;}
            }
         }
    }
    else {
        m_good_data=false; good_dataChanged();
        qWarning()<<"Rig: wrong data receved";
    }
}

int cPSmodel::scaling(const int &value)
{
   if (value==0) return 0;
   float df=127.0*m_freerun/100.0;
   qDebug()<<"Rig - scale df: "<<df<<"f:"<<-df + value*(100-m_freerun)/100.0 <<" v:"<<value;
   if  (value>0)
     return ceil(df + value*(100-m_freerun)/100.0);
   else
     return -ceil(df - value*(100-m_freerun)/100.0);
}

bool cPSmodel::check_type() const
{
    return m_check_type;
}

void cPSmodel::setCheck_type(bool check_type)
{
    m_check_type = check_type;
    emit check_typeChanged();
}

int cPSmodel::freerun() const
{
    return m_freerun;
}

void cPSmodel::setFreerun(int freerun)
{
    if (m_freerun==freerun)  return;
    if (freerun<0) m_freerun=0;
    if (freerun>100) m_freerun=100;
    if (freerun>=0||freerun<=100)  m_freerun = freerun;
    emit freerunChanged();
}

QString cPSmodel::gmod() const
{
    return m_gmod;
}

void cPSmodel::setGmod(const QString &gmod)
{
    m_gmod = gmod;
    emit gmodChanged();
}
