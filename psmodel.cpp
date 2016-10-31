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

    //connect(&tcpClient, SIGNAL(connected()),this, SLOT(sendData())); //при установке исходящего соединения с аппаратом посылаем текущие данные.  !!! litovko
    //при изменении пользователем любого параметра сразу передаем данные
    connect(this, SIGNAL(power380_onChanged()),this, SLOT(changeState()));
    connect(this, SIGNAL(power2500_onChanged()),this, SLOT(changeState()));
    connect(this, SIGNAL(inputChanged()),this, SLOT(changeState()));
    connect(this, SIGNAL(outputChanged()),this, SLOT(changeState()));

    connect(&timer_connect, SIGNAL(timeout()), this, SLOT(start_client()));
    timer_connect.start(m_timer_connect_interval);
    connect(&timer_send, SIGNAL(timeout()), this, SLOT(sendData()));
    timer_send.start(m_timer_send_interval);
}
void cPSmodel::saveSettings()
{
    qDebug()<<"PS saveSettings addres:"<<m_address<<"port:"<<m_port;
    QSettings settings; //("HYCO", "PSConsole");
    settings.setValue("PSAddress",m_address);
    settings.setValue("PSPort",m_port);
    settings.setValue("PSSendInterval",m_timer_send_interval);
    settings.setValue("PSConnectInterval",m_timer_connect_interval);
    settings.setValue("PSConnectInterval",m_timer_connect_interval);
    settings.setValue("Kcurrent1",m_kcurrent1);
    settings.setValue("Kcurrent2",m_kcurrent2);
    settings.setValue("Kcurrent3",m_kcurrent3);
    settings.setValue("Kvoltage1",m_kvoltage1);
    settings.setValue("Kvoltage2",m_kvoltage2);
    settings.setValue("Kvoltage3",m_kvoltage3);

    settings.setValue("THRcurrent",m_thrcurrent);
    settings.setValue("THRvoltage",m_thrvoltage);
    settings.setValue("THRminvoltage",m_minvoltage);
    settings.setValue("THRtemperature",m_thrtemperature);
    settings.setValue("THRhumidity",m_thrhumid);
    settings.setValue("PStimeout",m_timeout);



}

void cPSmodel::readSettings()
{

    QSettings settings;//("HYCO", "PS Console");
    m_address=settings.value("PSAddress","localhost").toString();
    m_port=settings.value("PSPort","1212").toInt();
    m_timer_send_interval=settings.value("PSSendInterval","2000").toInt();
    m_timer_connect_interval=settings.value("PSConnectInterval","30000").toInt();
    m_kcurrent1=settings.value("Kcurrent1",1).toDouble();
    m_kcurrent2=settings.value("Kcurrent2",1).toDouble();
    m_kcurrent3=settings.value("Kcurrent3",1).toDouble();
    m_kvoltage1=settings.value("Kvoltage1",1).toDouble();
    m_kvoltage2=settings.value("Kvoltage2",1).toDouble();
    m_kvoltage3=settings.value("Kvoltage3",1).toDouble();

    m_thrcurrent=settings.value("THRcurrent","10").toInt();
    m_thrvoltage=settings.value("THRvoltage","2700").toInt();
    m_minvoltage=settings.value("THRminvoltage","2300").toInt();
    m_thrtemperature=settings.value("THRtemperature","60").toInt();
    m_thrhumid=settings.value("THRhumidity","80").toInt();
    m_timeout=settings.value("PStimeout","10").toInt();



}

void cPSmodel::changeState()
{
    m_packetid+=1; //меняем ID, чтобы пришедшие данные с текущим ИД программа уже не воспринимала.
    //sendData();
}

void cPSmodel::updateSendTimer()
{
    timer_send.stop();
    timer_send.start(m_timer_send_interval);
}

void cPSmodel::setCurrent1(const int &current1)
{
    if(current1==m_current1) return;
    m_current1 = current1;
    emit current1Changed();
}

int cPSmodel::current1() const
{
    return m_current1;
}

void cPSmodel::setTemperature(const int &temperature)
{
    if(m_temperature==temperature) return;
    m_temperature = temperature;
    emit temperatureChanged();
}

int cPSmodel::temperature() const
{
    return m_temperature;
}

void cPSmodel::setAddress(const QString  &address)
{
    if(m_address==address) return;
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
    if(port==m_port) return;
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
    qDebug()<<"PS Start client >>>"<<m_address<<"port"<<::QString().number(m_port);
    
    tcpClient.connectToHost(m_address, m_port);

}
void cPSmodel::clientConnected()
{
    qDebug()<<"PS Client connected to address >>>"+this->address()+" port:"+ ::QString().number(m_port);
    m_client_connected=true;
    emit client_connectedChanged();
}
void cPSmodel::clientDisconnected()
{
    qDebug()<<"PS Client disconnected form address >>>"+this->address()+" port:"+ this->port();
    setClient_connected(false);
    setGood_data(false);
    setCurrent1(0);
    setCurrent2(0);
    setCurrent3(0);
    setVoltage1(0);
    setVoltage2(0);
    setVoltage3(0);
    setHumid(0);
    setTemperature(0);
    setPwr1(0);
    setPwr2(0);
    setPwr3(0);
    setPwrt(0);
    setPower380_on(false);
    setPower2500_on(false);
    setPacketid(0);
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
    qDebug()<<"PS Network error >>>"+tcpClient.errorString();


    tcpClient.close();

}


//##################### функция отправки данных

void cPSmodel::sendData()
{
    char data[5]={0,0,0,0,0};
    data[0] = m_power2500_on*1
            +   m_power380_on*2
            +   m_input*4
            + m_output*8;
    QString Data; // Строка отправки данных.
// проверяем, есть ли подключение клиента. Если подключения нет, то ничего не отправляем.
    if (!m_client_connected) return;
//    Data="{ana1:"+::QString().number(int(m_joystick_y1*127/100),10)
//        +";ana2:"+::QString().number(int(m_joystick_y2*127/100),10)
//        +";dig1:"+::QString().number(data[0],10)+"}FEDCA987";
    m_packetid+=1;
    Data="{cmd1:"+QString().number(data[0],10)
            +";kip1:"+QString().number(m_kcurrent1,'f',0)
            +";kip2:"+QString().number(m_kcurrent2,'f',0)
            +";kip3:"+QString().number(m_kcurrent3,'f',0)
            +";ku12:"+QString().number(m_kvoltage1,'f',0)
            +";ku13:"+QString().number(m_kvoltage2,'f',0)
            +";ku23:"+QString().number(m_kvoltage3,'f',0)
            +";thra:"+QString().number(m_thrcurrent,'f',0)
            +";thru:"+QString().number(m_thrvoltage,'f',0)
            +";thrs:"+QString().number(m_minvoltage,'f',0)
            +";thrt:"+QString().number(m_thrtemperature,'f',0)
            +";thrh:"+QString().number(m_thrhumid,'f',0)
            +";swto:"+QString().number(m_timeout,'f',0)
            +";pids:"+QString().number(m_packetid)
            +"}FEDCA987";

    qDebug()<<"PS - send data: "<<Data;

    bytesToWrite = (int)tcpClient.write(::QByteArray(Data.toLatin1()).data());
    if (bytesToWrite<0)qWarning()<<"Rig: Something wrong due to send data >>>"+tcpClient.errorString();
    if (bytesToWrite>=0)qDebug()<<"Rig: Data sent>>>"<<Data<<":"<<::QString().number(bytesToWrite);
}


void cPSmodel::readData()
{

    QByteArray Data="";
    QString CRC ="";
    QList<QByteArray> split;
    int m, relays;
    Data = tcpClient.readAll();
    qDebug()<<"PS read :"<<Data;

    if (Data.startsWith("{")&&(m=Data.indexOf("}"))>0) {
        setGood_data(true);

        CRC=Data.mid(m+1);
        //qDebug()<<"CRC:"<<CRC; //CRC пока не проверяем - это отдельная тема.
        Data=Data.mid(1,m-1);
        //qDebug()<<"truncated :"<<Data;
        split=Data.split(';');
        //qDebug()<<"split:"<<split;
        QListIterator<QByteArray> i(split);
        QByteArray s, val;
        bool ok=false;        
        unsigned int pids=0;
        while (i.hasNext()){
             s=i.next();
             m=s.indexOf(":");
             val=s.mid(m+1); //данные после ":"
             s=s.left(m); // названия тэга
            qDebug()<<"PS-tag:"<<s<<"value:"<<val;

            if (s=="pids") {
                pids=val.toInt(&ok,10);
                if (pids==packetid()) {
                       //m_packetid+=1;
                       ok=true;
                       qDebug()<<"ids are the same new ID="<<m_packetid;}
                else {
                       setGood_data(false);
                       qDebug()<<"ids are not the same => recieved.id:"<< pids<<"sent.id"<< packetid();
                       return;
                     }
            }
            if (s=="type") ok=(val=="pctrl");
            if (s=="temp") setTemperature(val.toInt(&ok,10));
            if (s=="humi") setHumid(val.toInt(&ok,10));
            if (s=="tmrp") setDelay(val.toInt(&ok,10));
            if (s=="uu12") setVoltage1(val.toInt(&ok,10));
            if (s=="uu13") setVoltage2(val.toInt(&ok,10));
            if (s=="uu23") setVoltage3(val.toInt(&ok,10));
            if (s=="cur1") setCurrent1(val.toInt(&ok,10));
            if (s=="cur2") setCurrent2(val.toInt(&ok,10));
            if (s=="cur3") setCurrent3(val.toInt(&ok,10));
            if (s=="pwr1") setPwr1(val.toInt(&ok,10));
            if (s=="pwr2") setPwr2(val.toInt(&ok,10));
            if (s=="pwr3") setPwr3(val.toInt(&ok,10));
            if (s=="pwrt") setPwrt(val.toInt(&ok,10));
            if (s=="errc") setError(val.toInt(&ok,10));
            if (s=="out1") {
                relays=val.toInt(&ok,10);  // состояние релюх
                if(ok) {
                    setPower2500_on(relays & 0x01);
                    setOutput(relays & 0x02);
                    setInput(relays & 0x04);
                    setPower380_on(relays & 0x08);
                }
            }
            if(!ok) {setGood_data(false); qWarning()<<"PS no good data for "<<s<<":"<<val;}
         }
    }
    else {
        setGood_data(false);
        qWarning()<<"PS: wrong data receved";
    }
}

int cPSmodel::error() const
{
    return m_error;
}

void cPSmodel::setError(int error)
{
    m_error = error;
    emit errorChanged();
}

unsigned int cPSmodel::packetid() const
{
    return m_packetid;
}

void cPSmodel::setPacketid(unsigned int packetid)
{
    m_packetid = packetid;
}


int cPSmodel::delay() const
{
    return m_delay;
}

void cPSmodel::setDelay(int delay)
{
    m_delay = delay;
    emit delayChanged();
}



int cPSmodel::timeout() const
{
    return m_timeout;
}

void cPSmodel::setTimeout(int timeout)
{
    m_timeout = timeout;
}

int cPSmodel::pwrt() const
{
    return m_pwrt;
}

void cPSmodel::setPwrt(int pwrt)
{
    m_pwrt = pwrt;
    emit pwrtChanged();
}

int cPSmodel::pwr3() const
{
    return m_pwr3;
}

void cPSmodel::setPwr3(int pwr3)
{
    m_pwr3 = pwr3;
    emit pwr3Changed();
}

int cPSmodel::pwr2() const
{
    return m_pwr2;
}

void cPSmodel::setPwr2(int pwr2)
{
    m_pwr2 = pwr2;
    emit pwr2Changed();
}

int cPSmodel::pwr1() const
{
    return m_pwr1;
}

void cPSmodel::setPwr1(int pwr1)
{
    m_pwr1 = pwr1;
    emit pwr1Changed();
}


void cPSmodel::setGood_data(bool good_data)
{
    if(m_good_data==good_data) return;
    m_good_data = good_data;
    emit good_dataChanged();
}



void cPSmodel::setClient_connected(bool client_connected)
{
    if(m_client_connected==client_connected) return;
    m_client_connected = client_connected;
    emit client_connectedChanged();
}


bool cPSmodel::output() const
{
    return m_output;
}

void cPSmodel::setOutput(bool output)
{
    if(output==m_output) return;
    m_output = output;
    emit outputChanged();
}

bool cPSmodel::input() const
{
    return m_input;
}

void cPSmodel::setInput(bool input)
{
    if (input==m_input) return;
    m_input = input;
    emit inputChanged();
}

bool cPSmodel::power2500_on() const
{
    return m_power2500_on;
}

void cPSmodel::setPower2500_on(bool value)
{
    if(value==m_power2500_on) return;
    m_power2500_on = value;
    emit power2500_onChanged();
}

bool cPSmodel::power380_on() const
{
    return m_power380_on;
}

void cPSmodel::setPower380_on(bool value)
{
    if(value==m_power380_on) return;
    m_power380_on = value;
    emit power380_onChanged();
}

int cPSmodel::humid() const
{
    return m_humid;
}

void cPSmodel::setHumid(int humid)
{
    if(humid==m_humid) return;
    m_humid = humid;
    emit humidChanged();
}

int cPSmodel::current3() const
{
    return m_current3;
}

void cPSmodel::setCurrent3(int current3)
{
    if(current3==m_current3) return;
    m_current3 = current3;
    emit current3Changed();
}

int cPSmodel::current2() const
{
    return m_current2;
}

void cPSmodel::setCurrent2(int current2)
{
    if(current2==m_current2) return;
    m_current2 = current2;
    emit current2Changed();
}

int cPSmodel::voltage3() const
{
    return m_voltage3;
}

void cPSmodel::setVoltage3(int voltage3)
{
    if(m_voltage3==voltage3) return;
    m_voltage3 = voltage3;
    emit voltage3Changed();
}

int cPSmodel::voltage2() const
{
    return m_voltage2;
}

void cPSmodel::setVoltage2(int voltage2)
{
    if(m_voltage2==voltage2) return;
    m_voltage2 = voltage2;
    emit voltage2Changed();
}

int cPSmodel::voltage1() const
{
    return m_voltage1;
}

void cPSmodel::setVoltage1(int voltage1)
{
    if(m_voltage1==voltage1) return;
    m_voltage1 = voltage1;
    emit voltage1Changed();
}


