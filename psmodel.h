#ifndef RIGMODEL_H
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
    Q_PROPERTY(int current4 READ current4 WRITE setCurrent4 NOTIFY current4Changed)

    Q_PROPERTY(int voltage1 READ voltage1 WRITE setVoltage1 NOTIFY voltage1Changed)
    Q_PROPERTY(int voltage2 READ voltage2 WRITE setVoltage2 NOTIFY voltage2Changed)
    Q_PROPERTY(int voltage3 READ voltage3 WRITE setVoltage3 NOTIFY voltage3Changed)
    Q_PROPERTY(int voltage4 READ voltage4 WRITE setVoltage4 NOTIFY voltage4Changed)

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

    Q_PROPERTY(int thrcurrent READ thrcurrent WRITE setThrcurrent NOTIFY thrcurrentChanged)
    Q_PROPERTY(int thrvoltage READ thrvoltage WRITE setThrvoltage NOTIFY thrvoltageChanged)
    Q_PROPERTY(int thrtemperature READ thrtemperature WRITE setThrtemperature NOTIFY temperatureChanged)
    Q_PROPERTY(int thrhumid READ thrhumid WRITE setThrhumid NOTIFY humidChanged)

    Q_PROPERTY(int minvoltage READ minvoltage WRITE setMinvoltage NOTIFY minvoltageChanged)

    Q_PROPERTY(double kcurrent1 READ kcurrent1 WRITE setKcurrent1 NOTIFY kcurrent1Changed)
    Q_PROPERTY(double kcurrent2 READ kcurrent2 WRITE setKcurrent2 NOTIFY kcurrent2Changed)
    Q_PROPERTY(double kcurrent3 READ kcurrent3 WRITE setKcurrent3 NOTIFY kcurrent3Changed)

    Q_PROPERTY(double kvoltage1 READ kvoltage1 WRITE setKvoltage1 NOTIFY kvoltage1Changed)
    Q_PROPERTY(double kvoltage2 READ kvoltage2 WRITE setKvoltage2 NOTIFY kvoltage2Changed)
    Q_PROPERTY(double kvoltage3 READ kvoltage3 WRITE setKvoltage3 NOTIFY kvoltage3Changed)

    //############ свойства - статусы tcp соединения

    Q_PROPERTY(bool client_connected READ client_connected NOTIFY client_connectedChanged)
    Q_PROPERTY(bool good_data READ good_data  NOTIFY good_dataChanged)

public:
    explicit cPSmodel(QObject *parent = nullptr);
    virtual ~cPSmodel() {saveSettings();}
    //############ занчения, получаемые по сети от контроллера
    void setCurrent1(const int &current1);
    int current1() const;



    void setTemperature(const int &temperature);
    int temperature() const;


    void setAddress(const QString  &address);
    QString address() const;

    void setPort(const uint16_t &port);
    uint16_t  port() const;

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

    int current4() const;
    void setCurrent4(int current4);

    int voltage4() const;
    void setVoltage4(int voltage4);

    int thrcurrent() const;

    int thrvoltage() const;

    void setThrcurrent(int thrcurrent);

    void setThrvoltage(int thrvoltage);

    int minvoltage() const;
    void setMinvoltage(int minvoltage);

    int thrtemperature() const;
    void setThrtemperature(int thrtemperature);

    int thrhumid() const;
    void setThrhumid(int thrhumid);

    double kcurrent1() const;
    void setKcurrent1(double kcurrent1);

    double kcurrent2() const;
    void setKcurrent2(double kcurrent2);

    double kcurrent3() const;
    void setKcurrent3(double kcurrent3);

    double kvoltage1() const;
    void setKvoltage1(double kvoltage1);

    double kvoltage2() const;
    void setKvoltage2(double kvoltage2);

    double kvoltage3() const;
    void setKvoltage3(double kvoltage3);

signals:
    void current1Changed();
    void current2Changed();
    void current3Changed();
    void current4Changed();
    void voltage1Changed();
    void voltage2Changed();
    void voltage3Changed();
    void voltage4Changed();
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
    void thrcurrentChanged();
    void thrvoltageChanged();
    void thrtemperatureChanged();
    void thrhumidChanged();
    void minvoltageChanged();
    void kcurrent1Changed();
    void kcurrent2Changed();
    void kcurrent3Changed();
    void kvoltage1Changed();
    void kvoltage2Changed();
    void kvoltage3Changed();



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
    int m_current4=0;
    int m_voltage1=0;
    int m_voltage2=0;
    int m_voltage3=0;
    int m_voltage4=0;
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
    uint16_t m_port=1212;

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
    double m_kvoltage1=2506;
    double m_kvoltage2=2506;
    double m_kvoltage3=2506;





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
