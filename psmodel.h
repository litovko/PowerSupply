﻿#ifndef RIGMODEL_H
#define RIGMODEL_H

#include <QObject>

#include <QTcpSocket>
#include <QString>
#include <QTimer>
#include <QSettings>

class cPSmodel : public QObject
{

    Q_OBJECT
    Q_PROPERTY(int current1 READ current1 WRITE setCurrent1 NOTIFY current1Changed)
    Q_PROPERTY(int current2 READ current2 WRITE setCurrent2 NOTIFY current2Changed)
    Q_PROPERTY(int current3 READ current3 WRITE setCurrent3 NOTIFY current3Changed)

    Q_PROPERTY(int voltage1 READ voltage1 WRITE setVoltage1 NOTIFY voltage1Changed)
    Q_PROPERTY(int voltage2 READ voltage2 WRITE setVoltage2 NOTIFY voltage2Changed)
    Q_PROPERTY(int voltage3 READ voltage3 WRITE setVoltage3 NOTIFY voltage3Changed)

    Q_PROPERTY(int pwr1 READ pwr1 WRITE setPwr1 NOTIFY pwr1Changed)
    Q_PROPERTY(int pwr2 READ pwr2 WRITE setPwr2 NOTIFY pwr2Changed)
    Q_PROPERTY(int pwr3 READ pwr3 WRITE setPwr3 NOTIFY pwr3Changed)
    Q_PROPERTY(int pwrt READ pwrt WRITE setPwrt NOTIFY pwrtChanged)
    Q_PROPERTY(int delay READ delay WRITE setDelay NOTIFY delayChanged)
    Q_PROPERTY(int error READ error WRITE setError NOTIFY errorChanged)


    Q_PROPERTY(int temperature READ temperature WRITE setTemperature NOTIFY temperatureChanged)
    Q_PROPERTY(int humid READ humid WRITE setHumid NOTIFY humidChanged)

    //############ переменные - данные для отправки
    Q_PROPERTY(bool power380_on READ power380_on WRITE setPower380_on NOTIFY power380_onChanged)
    Q_PROPERTY(bool power2500_on READ power2500_on WRITE setPower2500_on NOTIFY power2500_onChanged)
    Q_PROPERTY(bool output READ output WRITE setOutput NOTIFY outputChanged)
    Q_PROPERTY(bool input READ input WRITE setInput NOTIFY inputChanged)

    //############ адрес и порт и другие параметры
    Q_PROPERTY(QString address READ address WRITE setAddress NOTIFY addressChanged)
    Q_PROPERTY(int port READ port WRITE setPort NOTIFY portChanged)
    Q_PROPERTY(int timer_send_interval READ timer_send_interval WRITE setTimer_send_interval NOTIFY timer_send_intervalChanged)
    Q_PROPERTY(int timer_connect_interval READ timer_connect_interval WRITE setTimer_connect_interval NOTIFY timer_connect_intervalChanged)

    //############ свойства - статусы tcp соединения

    Q_PROPERTY(bool client_connected READ client_connected NOTIFY client_connectedChanged)
    Q_PROPERTY(bool good_data READ good_data  NOTIFY good_dataChanged)

public:
    explicit cPSmodel(QObject *parent = 0);
    virtual ~cPSmodel() {saveSettings();}
    //############ занчения, получаемые по сети от контроллера
    void setCurrent1(const int &current1);
    int current1() const;



    void setTemperature(const int &temperature);
    int temperature() const;


    void setAddress(const QString  &address);
    QString address() const;

    void setPort(const int &port);
    int  port() const;

    void setTimer_send_interval(const int &timer_send_interval);
    int  timer_send_interval() const;

    void setTimer_connect_interval(const int &timer_connect_interval);
    int  timer_connect_interval() const;

    //############ Данные для отправки

    bool client_connected()const;
    bool good_data()const;


//    bool check_type() const;
//    void setCheck_type(bool check_type);

    int voltage1() const;
    void setVoltage1(int voltage1);

    int voltage2() const;
    void setVoltage2(int voltage2);

    int voltage3() const;
    void setVoltage3(int voltage3);

    int current2() const;
    void setCurrent2(int current2);

    int current3() const;
    void setCurrent3(int current3);

    int humid() const;
    void setHumid(int humid);

    bool power380_on() const;
    void setPower380_on(bool value);

    bool power2500_on() const;
    void setPower2500_on(bool value);

    bool input() const;
    void setInput(bool input);

    bool output() const;
    void setOutput(bool output);

    //bool client_connected() const;
    void setClient_connected(bool client_connected);


    void setGood_data(bool good_data);

    int pwr1() const;
    void setPwr1(int pwr1);

    int pwr2() const;
    void setPwr2(int pwr2);

    int pwr3() const;
    void setPwr3(int pwr3);

    int pwrt() const;
    void setPwrt(int pwrt);

    int timeout() const;
    void setTimeout(int timeout);

    int delay() const;
    void setDelay(int delay);

    unsigned int packetid() const;
    void setPacketid(unsigned int packetid);

    int error() const;
    void setError(int error);

signals:
    void current1Changed();
    void current2Changed();
    void current3Changed();
    void voltage1Changed();
    void voltage2Changed();
    void voltage3Changed();
    void pwr1Changed();
    void pwr2Changed();
    void pwr3Changed();
    void pwrtChanged();
    void delayChanged();

    void errorChanged();

    void temperatureChanged();
    void humidChanged();


    void power380_onChanged();
    void power2500_onChanged();
    void outputChanged();
    void inputChanged();
    void addressChanged();
    void portChanged();
    void timer_send_intervalChanged();
    void timer_connect_intervalChanged();
    void freerunChanged();
    void client_connectedChanged();
    void good_dataChanged();
    void check_typeChanged();


public slots:

    void start_client();

    void clientConnected();  // слот для обработки события присоединения клиента к серверу.
    void clientDisconnected();
    void updateSendTimer();
    void saveSettings();
    void readSettings();
    void changeState();
    void updateClientProgress(qint64 numBytes);
    void displayError(QAbstractSocket::SocketError socketError);
    void sendData(); //слот должен вызываться любым событием, которое меняет данные, предназначенные для отправки.
    void readData(); //расклаываем полученные от сервера данные по параметрам
private:

    int m_current1=0;
    int m_current2=0;
    int m_current3=0;
    int m_voltage1=0;
    int m_voltage2=0;
    int m_voltage3=0;
    int m_pwr1=0;
    int m_pwr2=0;
    int m_pwr3=0;
    int m_pwrt=0;
    int m_delay=0;

    int m_error=0;



    int m_temperature=25;
    int m_humid=60;

    int m_thrcurrent=10;
    int m_thrvoltage=2000; //максимальное напряжение на фазе
    int m_minvoltage=0; //минимальное напряжение на фазе
    int m_thrtemperature=50;
    int m_thrhumid=80;
    int m_timeout=10;
    unsigned int m_packetid=0;

    QString m_address="localhost";
    int m_port=1212;

    bool m_client_connected = false;


    //############ Данные для отправки
    bool m_power380_on=false;
    bool m_power2500_on=false;
    bool m_input=false; //false=ROV true=GIKO
    bool m_output=false; //false= PSKOV true=TK-15

    bool m_good_data=false;
    double m_kcurrent1=1;
    double m_kcurrent2=1;
    double m_kcurrent3=1;
    double m_kvoltage1=1;
    double m_kvoltage2=1;
    double m_kvoltage3=1;





    QTcpSocket tcpClient;
    QTimer timer_connect;
    QTimer timer_send;
    int m_timer_send_interval;
    int m_timer_connect_interval;
    //QSettings m_rigsettings:m_rigsettings("HYCO", "Rig Console");



    int bytesToWrite=0;
    int bytesWritten=0;
    int bytesReceived=0;
};

#endif // RIGMODEL_H
