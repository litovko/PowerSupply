/****************************************************************************
** Meta object code from reading C++ file 'psmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../psmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'psmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cPSmodel_t {
    QByteArrayData data[99];
    char stringdata0[1321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cPSmodel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cPSmodel_t qt_meta_stringdata_cPSmodel = {
    {
QT_MOC_LITERAL(0, 0, 8), // "cPSmodel"
QT_MOC_LITERAL(1, 9, 15), // "current1Changed"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 15), // "current2Changed"
QT_MOC_LITERAL(4, 42, 15), // "current3Changed"
QT_MOC_LITERAL(5, 58, 15), // "current4Changed"
QT_MOC_LITERAL(6, 74, 15), // "voltage1Changed"
QT_MOC_LITERAL(7, 90, 15), // "voltage2Changed"
QT_MOC_LITERAL(8, 106, 15), // "voltage3Changed"
QT_MOC_LITERAL(9, 122, 15), // "voltage4Changed"
QT_MOC_LITERAL(10, 138, 11), // "pwr1Changed"
QT_MOC_LITERAL(11, 150, 11), // "pwr2Changed"
QT_MOC_LITERAL(12, 162, 11), // "pwr3Changed"
QT_MOC_LITERAL(13, 174, 11), // "pwrtChanged"
QT_MOC_LITERAL(14, 186, 12), // "delayChanged"
QT_MOC_LITERAL(15, 199, 12), // "errorChanged"
QT_MOC_LITERAL(16, 212, 18), // "temperatureChanged"
QT_MOC_LITERAL(17, 231, 12), // "humidChanged"
QT_MOC_LITERAL(18, 244, 18), // "power380_onChanged"
QT_MOC_LITERAL(19, 263, 19), // "power2500_onChanged"
QT_MOC_LITERAL(20, 283, 13), // "outputChanged"
QT_MOC_LITERAL(21, 297, 12), // "inputChanged"
QT_MOC_LITERAL(22, 310, 14), // "addressChanged"
QT_MOC_LITERAL(23, 325, 11), // "portChanged"
QT_MOC_LITERAL(24, 337, 26), // "timer_send_intervalChanged"
QT_MOC_LITERAL(25, 364, 29), // "timer_connect_intervalChanged"
QT_MOC_LITERAL(26, 394, 14), // "freerunChanged"
QT_MOC_LITERAL(27, 409, 23), // "client_connectedChanged"
QT_MOC_LITERAL(28, 433, 16), // "good_dataChanged"
QT_MOC_LITERAL(29, 450, 17), // "check_typeChanged"
QT_MOC_LITERAL(30, 468, 17), // "thrcurrentChanged"
QT_MOC_LITERAL(31, 486, 17), // "thrvoltageChanged"
QT_MOC_LITERAL(32, 504, 21), // "thrtemperatureChanged"
QT_MOC_LITERAL(33, 526, 15), // "thrhumidChanged"
QT_MOC_LITERAL(34, 542, 17), // "minvoltageChanged"
QT_MOC_LITERAL(35, 560, 14), // "thrcurzChanged"
QT_MOC_LITERAL(36, 575, 13), // "thruuzChanged"
QT_MOC_LITERAL(37, 589, 16), // "kcurrent1Changed"
QT_MOC_LITERAL(38, 606, 16), // "kcurrent2Changed"
QT_MOC_LITERAL(39, 623, 16), // "kcurrent3Changed"
QT_MOC_LITERAL(40, 640, 16), // "kvoltage1Changed"
QT_MOC_LITERAL(41, 657, 16), // "kvoltage2Changed"
QT_MOC_LITERAL(42, 674, 16), // "kvoltage3Changed"
QT_MOC_LITERAL(43, 691, 25), // "disconnect_timeoutChanged"
QT_MOC_LITERAL(44, 717, 12), // "start_client"
QT_MOC_LITERAL(45, 730, 15), // "clientConnected"
QT_MOC_LITERAL(46, 746, 18), // "clientDisconnected"
QT_MOC_LITERAL(47, 765, 15), // "updateSendTimer"
QT_MOC_LITERAL(48, 781, 12), // "saveSettings"
QT_MOC_LITERAL(49, 794, 12), // "readSettings"
QT_MOC_LITERAL(50, 807, 11), // "changeState"
QT_MOC_LITERAL(51, 819, 20), // "updateClientProgress"
QT_MOC_LITERAL(52, 840, 8), // "numBytes"
QT_MOC_LITERAL(53, 849, 12), // "displayError"
QT_MOC_LITERAL(54, 862, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(55, 891, 11), // "socketError"
QT_MOC_LITERAL(56, 903, 8), // "sendData"
QT_MOC_LITERAL(57, 912, 8), // "readData"
QT_MOC_LITERAL(58, 921, 5), // "reset"
QT_MOC_LITERAL(59, 927, 8), // "current1"
QT_MOC_LITERAL(60, 936, 8), // "current2"
QT_MOC_LITERAL(61, 945, 8), // "current3"
QT_MOC_LITERAL(62, 954, 8), // "current4"
QT_MOC_LITERAL(63, 963, 8), // "voltage1"
QT_MOC_LITERAL(64, 972, 8), // "voltage2"
QT_MOC_LITERAL(65, 981, 8), // "voltage3"
QT_MOC_LITERAL(66, 990, 8), // "voltage4"
QT_MOC_LITERAL(67, 999, 4), // "pwr1"
QT_MOC_LITERAL(68, 1004, 4), // "pwr2"
QT_MOC_LITERAL(69, 1009, 4), // "pwr3"
QT_MOC_LITERAL(70, 1014, 4), // "pwrt"
QT_MOC_LITERAL(71, 1019, 5), // "delay"
QT_MOC_LITERAL(72, 1025, 5), // "error"
QT_MOC_LITERAL(73, 1031, 11), // "temperature"
QT_MOC_LITERAL(74, 1043, 5), // "humid"
QT_MOC_LITERAL(75, 1049, 11), // "power380_on"
QT_MOC_LITERAL(76, 1061, 12), // "power2500_on"
QT_MOC_LITERAL(77, 1074, 6), // "output"
QT_MOC_LITERAL(78, 1081, 5), // "input"
QT_MOC_LITERAL(79, 1087, 7), // "address"
QT_MOC_LITERAL(80, 1095, 4), // "port"
QT_MOC_LITERAL(81, 1100, 19), // "timer_send_interval"
QT_MOC_LITERAL(82, 1120, 22), // "timer_connect_interval"
QT_MOC_LITERAL(83, 1143, 18), // "disconnect_timeout"
QT_MOC_LITERAL(84, 1162, 10), // "thrcurrent"
QT_MOC_LITERAL(85, 1173, 10), // "thrvoltage"
QT_MOC_LITERAL(86, 1184, 14), // "thrtemperature"
QT_MOC_LITERAL(87, 1199, 8), // "thrhumid"
QT_MOC_LITERAL(88, 1208, 10), // "minvoltage"
QT_MOC_LITERAL(89, 1219, 7), // "thrcurz"
QT_MOC_LITERAL(90, 1227, 6), // "thruuz"
QT_MOC_LITERAL(91, 1234, 9), // "kcurrent1"
QT_MOC_LITERAL(92, 1244, 9), // "kcurrent2"
QT_MOC_LITERAL(93, 1254, 9), // "kcurrent3"
QT_MOC_LITERAL(94, 1264, 9), // "kvoltage1"
QT_MOC_LITERAL(95, 1274, 9), // "kvoltage2"
QT_MOC_LITERAL(96, 1284, 9), // "kvoltage3"
QT_MOC_LITERAL(97, 1294, 16), // "client_connected"
QT_MOC_LITERAL(98, 1311, 9) // "good_data"

    },
    "cPSmodel\0current1Changed\0\0current2Changed\0"
    "current3Changed\0current4Changed\0"
    "voltage1Changed\0voltage2Changed\0"
    "voltage3Changed\0voltage4Changed\0"
    "pwr1Changed\0pwr2Changed\0pwr3Changed\0"
    "pwrtChanged\0delayChanged\0errorChanged\0"
    "temperatureChanged\0humidChanged\0"
    "power380_onChanged\0power2500_onChanged\0"
    "outputChanged\0inputChanged\0addressChanged\0"
    "portChanged\0timer_send_intervalChanged\0"
    "timer_connect_intervalChanged\0"
    "freerunChanged\0client_connectedChanged\0"
    "good_dataChanged\0check_typeChanged\0"
    "thrcurrentChanged\0thrvoltageChanged\0"
    "thrtemperatureChanged\0thrhumidChanged\0"
    "minvoltageChanged\0thrcurzChanged\0"
    "thruuzChanged\0kcurrent1Changed\0"
    "kcurrent2Changed\0kcurrent3Changed\0"
    "kvoltage1Changed\0kvoltage2Changed\0"
    "kvoltage3Changed\0disconnect_timeoutChanged\0"
    "start_client\0clientConnected\0"
    "clientDisconnected\0updateSendTimer\0"
    "saveSettings\0readSettings\0changeState\0"
    "updateClientProgress\0numBytes\0"
    "displayError\0QAbstractSocket::SocketError\0"
    "socketError\0sendData\0readData\0reset\0"
    "current1\0current2\0current3\0current4\0"
    "voltage1\0voltage2\0voltage3\0voltage4\0"
    "pwr1\0pwr2\0pwr3\0pwrt\0delay\0error\0"
    "temperature\0humid\0power380_on\0"
    "power2500_on\0output\0input\0address\0"
    "port\0timer_send_interval\0"
    "timer_connect_interval\0disconnect_timeout\0"
    "thrcurrent\0thrvoltage\0thrtemperature\0"
    "thrhumid\0minvoltage\0thrcurz\0thruuz\0"
    "kcurrent1\0kcurrent2\0kcurrent3\0kvoltage1\0"
    "kvoltage2\0kvoltage3\0client_connected\0"
    "good_data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cPSmodel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
      40,  342, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      42,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  284,    2, 0x06 /* Public */,
       3,    0,  285,    2, 0x06 /* Public */,
       4,    0,  286,    2, 0x06 /* Public */,
       5,    0,  287,    2, 0x06 /* Public */,
       6,    0,  288,    2, 0x06 /* Public */,
       7,    0,  289,    2, 0x06 /* Public */,
       8,    0,  290,    2, 0x06 /* Public */,
       9,    0,  291,    2, 0x06 /* Public */,
      10,    0,  292,    2, 0x06 /* Public */,
      11,    0,  293,    2, 0x06 /* Public */,
      12,    0,  294,    2, 0x06 /* Public */,
      13,    0,  295,    2, 0x06 /* Public */,
      14,    0,  296,    2, 0x06 /* Public */,
      15,    0,  297,    2, 0x06 /* Public */,
      16,    0,  298,    2, 0x06 /* Public */,
      17,    0,  299,    2, 0x06 /* Public */,
      18,    0,  300,    2, 0x06 /* Public */,
      19,    0,  301,    2, 0x06 /* Public */,
      20,    0,  302,    2, 0x06 /* Public */,
      21,    0,  303,    2, 0x06 /* Public */,
      22,    0,  304,    2, 0x06 /* Public */,
      23,    0,  305,    2, 0x06 /* Public */,
      24,    0,  306,    2, 0x06 /* Public */,
      25,    0,  307,    2, 0x06 /* Public */,
      26,    0,  308,    2, 0x06 /* Public */,
      27,    0,  309,    2, 0x06 /* Public */,
      28,    0,  310,    2, 0x06 /* Public */,
      29,    0,  311,    2, 0x06 /* Public */,
      30,    0,  312,    2, 0x06 /* Public */,
      31,    0,  313,    2, 0x06 /* Public */,
      32,    0,  314,    2, 0x06 /* Public */,
      33,    0,  315,    2, 0x06 /* Public */,
      34,    0,  316,    2, 0x06 /* Public */,
      35,    0,  317,    2, 0x06 /* Public */,
      36,    0,  318,    2, 0x06 /* Public */,
      37,    0,  319,    2, 0x06 /* Public */,
      38,    0,  320,    2, 0x06 /* Public */,
      39,    0,  321,    2, 0x06 /* Public */,
      40,    0,  322,    2, 0x06 /* Public */,
      41,    0,  323,    2, 0x06 /* Public */,
      42,    0,  324,    2, 0x06 /* Public */,
      43,    0,  325,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      44,    0,  326,    2, 0x0a /* Public */,
      45,    0,  327,    2, 0x0a /* Public */,
      46,    0,  328,    2, 0x0a /* Public */,
      47,    0,  329,    2, 0x0a /* Public */,
      48,    0,  330,    2, 0x0a /* Public */,
      49,    0,  331,    2, 0x0a /* Public */,
      50,    0,  332,    2, 0x0a /* Public */,
      51,    1,  333,    2, 0x0a /* Public */,
      53,    1,  336,    2, 0x0a /* Public */,
      56,    0,  339,    2, 0x0a /* Public */,
      57,    0,  340,    2, 0x0a /* Public */,
      58,    0,  341,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   52,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      59, QMetaType::Int, 0x00495103,
      60, QMetaType::Int, 0x00495103,
      61, QMetaType::Int, 0x00495103,
      62, QMetaType::Int, 0x00495103,
      63, QMetaType::Int, 0x00495103,
      64, QMetaType::Int, 0x00495103,
      65, QMetaType::Int, 0x00495103,
      66, QMetaType::Int, 0x00495103,
      67, QMetaType::Int, 0x00495103,
      68, QMetaType::Int, 0x00495103,
      69, QMetaType::Int, 0x00495103,
      70, QMetaType::Int, 0x00495103,
      71, QMetaType::Int, 0x00495103,
      72, QMetaType::Int, 0x00495103,
      73, QMetaType::Int, 0x00495103,
      74, QMetaType::Int, 0x00495103,
      75, QMetaType::Bool, 0x00495103,
      76, QMetaType::Bool, 0x00495103,
      77, QMetaType::Bool, 0x00495103,
      78, QMetaType::Bool, 0x00495103,
      79, QMetaType::QString, 0x00495103,
      80, QMetaType::Int, 0x00495103,
      81, QMetaType::Int, 0x00495103,
      82, QMetaType::Int, 0x00495103,
      83, QMetaType::Int, 0x00495003,
      84, QMetaType::Int, 0x00495103,
      85, QMetaType::Int, 0x00495103,
      86, QMetaType::Int, 0x00495103,
      87, QMetaType::Int, 0x00495103,
      88, QMetaType::Int, 0x00495103,
      89, QMetaType::Int, 0x00495103,
      90, QMetaType::Int, 0x00495103,
      91, QMetaType::Double, 0x00495103,
      92, QMetaType::Double, 0x00495103,
      93, QMetaType::Double, 0x00495103,
      94, QMetaType::Double, 0x00495103,
      95, QMetaType::Double, 0x00495103,
      96, QMetaType::Double, 0x00495103,
      97, QMetaType::Bool, 0x00495001,
      98, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      14,
      15,
      16,
      17,
      18,
      19,
      20,
      21,
      22,
      23,
      41,
      28,
      29,
      30,
      31,
      32,
      33,
      34,
      35,
      36,
      37,
      38,
      39,
      40,
      25,
      26,

       0        // eod
};

void cPSmodel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cPSmodel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->current1Changed(); break;
        case 1: _t->current2Changed(); break;
        case 2: _t->current3Changed(); break;
        case 3: _t->current4Changed(); break;
        case 4: _t->voltage1Changed(); break;
        case 5: _t->voltage2Changed(); break;
        case 6: _t->voltage3Changed(); break;
        case 7: _t->voltage4Changed(); break;
        case 8: _t->pwr1Changed(); break;
        case 9: _t->pwr2Changed(); break;
        case 10: _t->pwr3Changed(); break;
        case 11: _t->pwrtChanged(); break;
        case 12: _t->delayChanged(); break;
        case 13: _t->errorChanged(); break;
        case 14: _t->temperatureChanged(); break;
        case 15: _t->humidChanged(); break;
        case 16: _t->power380_onChanged(); break;
        case 17: _t->power2500_onChanged(); break;
        case 18: _t->outputChanged(); break;
        case 19: _t->inputChanged(); break;
        case 20: _t->addressChanged(); break;
        case 21: _t->portChanged(); break;
        case 22: _t->timer_send_intervalChanged(); break;
        case 23: _t->timer_connect_intervalChanged(); break;
        case 24: _t->freerunChanged(); break;
        case 25: _t->client_connectedChanged(); break;
        case 26: _t->good_dataChanged(); break;
        case 27: _t->check_typeChanged(); break;
        case 28: _t->thrcurrentChanged(); break;
        case 29: _t->thrvoltageChanged(); break;
        case 30: _t->thrtemperatureChanged(); break;
        case 31: _t->thrhumidChanged(); break;
        case 32: _t->minvoltageChanged(); break;
        case 33: _t->thrcurzChanged(); break;
        case 34: _t->thruuzChanged(); break;
        case 35: _t->kcurrent1Changed(); break;
        case 36: _t->kcurrent2Changed(); break;
        case 37: _t->kcurrent3Changed(); break;
        case 38: _t->kvoltage1Changed(); break;
        case 39: _t->kvoltage2Changed(); break;
        case 40: _t->kvoltage3Changed(); break;
        case 41: _t->disconnect_timeoutChanged(); break;
        case 42: _t->start_client(); break;
        case 43: _t->clientConnected(); break;
        case 44: _t->clientDisconnected(); break;
        case 45: _t->updateSendTimer(); break;
        case 46: _t->saveSettings(); break;
        case 47: _t->readSettings(); break;
        case 48: _t->changeState(); break;
        case 49: _t->updateClientProgress((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 50: _t->displayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 51: _t->sendData(); break;
        case 52: _t->readData(); break;
        case 53: _t->reset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::current1Changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::current2Changed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::current3Changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::current4Changed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::voltage1Changed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::voltage2Changed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::voltage3Changed)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::voltage4Changed)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::pwr1Changed)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::pwr2Changed)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::pwr3Changed)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::pwrtChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::delayChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::errorChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::temperatureChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::humidChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::power380_onChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::power2500_onChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::outputChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::inputChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::addressChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::portChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::timer_send_intervalChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::timer_connect_intervalChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::freerunChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::client_connectedChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::good_dataChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::check_typeChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::thrcurrentChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::thrvoltageChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::thrtemperatureChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::thrhumidChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::minvoltageChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::thrcurzChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::thruuzChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::kcurrent1Changed)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::kcurrent2Changed)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::kcurrent3Changed)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::kvoltage1Changed)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::kvoltage2Changed)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::kvoltage3Changed)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (cPSmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&cPSmodel::disconnect_timeoutChanged)) {
                *result = 41;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<cPSmodel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->current1(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->current2(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->current3(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->current4(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->voltage1(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->voltage2(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->voltage3(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->voltage4(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->pwr1(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->pwr2(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->pwr3(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->pwrt(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->delay(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->error(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->temperature(); break;
        case 15: *reinterpret_cast< int*>(_v) = _t->humid(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->power380_on(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->power2500_on(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->output(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->input(); break;
        case 20: *reinterpret_cast< QString*>(_v) = _t->address(); break;
        case 21: *reinterpret_cast< int*>(_v) = _t->port(); break;
        case 22: *reinterpret_cast< int*>(_v) = _t->timer_send_interval(); break;
        case 23: *reinterpret_cast< int*>(_v) = _t->timer_connect_interval(); break;
        case 24: *reinterpret_cast< int*>(_v) = _t->m_disconnect_timeout; break;
        case 25: *reinterpret_cast< int*>(_v) = _t->thrcurrent(); break;
        case 26: *reinterpret_cast< int*>(_v) = _t->thrvoltage(); break;
        case 27: *reinterpret_cast< int*>(_v) = _t->thrtemperature(); break;
        case 28: *reinterpret_cast< int*>(_v) = _t->thrhumid(); break;
        case 29: *reinterpret_cast< int*>(_v) = _t->minvoltage(); break;
        case 30: *reinterpret_cast< int*>(_v) = _t->thrcurz(); break;
        case 31: *reinterpret_cast< int*>(_v) = _t->thruuz(); break;
        case 32: *reinterpret_cast< double*>(_v) = _t->kcurrent1(); break;
        case 33: *reinterpret_cast< double*>(_v) = _t->kcurrent2(); break;
        case 34: *reinterpret_cast< double*>(_v) = _t->kcurrent3(); break;
        case 35: *reinterpret_cast< double*>(_v) = _t->kvoltage1(); break;
        case 36: *reinterpret_cast< double*>(_v) = _t->kvoltage2(); break;
        case 37: *reinterpret_cast< double*>(_v) = _t->kvoltage3(); break;
        case 38: *reinterpret_cast< bool*>(_v) = _t->client_connected(); break;
        case 39: *reinterpret_cast< bool*>(_v) = _t->good_data(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<cPSmodel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrent1(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setCurrent2(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setCurrent3(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setCurrent4(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setVoltage1(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setVoltage2(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setVoltage3(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setVoltage4(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setPwr1(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setPwr2(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setPwr3(*reinterpret_cast< int*>(_v)); break;
        case 11: _t->setPwrt(*reinterpret_cast< int*>(_v)); break;
        case 12: _t->setDelay(*reinterpret_cast< int*>(_v)); break;
        case 13: _t->setError(*reinterpret_cast< int*>(_v)); break;
        case 14: _t->setTemperature(*reinterpret_cast< int*>(_v)); break;
        case 15: _t->setHumid(*reinterpret_cast< int*>(_v)); break;
        case 16: _t->setPower380_on(*reinterpret_cast< bool*>(_v)); break;
        case 17: _t->setPower2500_on(*reinterpret_cast< bool*>(_v)); break;
        case 18: _t->setOutput(*reinterpret_cast< bool*>(_v)); break;
        case 19: _t->setInput(*reinterpret_cast< bool*>(_v)); break;
        case 20: _t->setAddress(*reinterpret_cast< QString*>(_v)); break;
        case 21: _t->setPort(*reinterpret_cast< int*>(_v)); break;
        case 22: _t->setTimer_send_interval(*reinterpret_cast< int*>(_v)); break;
        case 23: _t->setTimer_connect_interval(*reinterpret_cast< int*>(_v)); break;
        case 24:
            if (_t->m_disconnect_timeout != *reinterpret_cast< int*>(_v)) {
                _t->m_disconnect_timeout = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->disconnect_timeoutChanged();
            }
            break;
        case 25: _t->setThrcurrent(*reinterpret_cast< int*>(_v)); break;
        case 26: _t->setThrvoltage(*reinterpret_cast< int*>(_v)); break;
        case 27: _t->setThrtemperature(*reinterpret_cast< int*>(_v)); break;
        case 28: _t->setThrhumid(*reinterpret_cast< int*>(_v)); break;
        case 29: _t->setMinvoltage(*reinterpret_cast< int*>(_v)); break;
        case 30: _t->setThrcurz(*reinterpret_cast< int*>(_v)); break;
        case 31: _t->setThruuz(*reinterpret_cast< int*>(_v)); break;
        case 32: _t->setKcurrent1(*reinterpret_cast< double*>(_v)); break;
        case 33: _t->setKcurrent2(*reinterpret_cast< double*>(_v)); break;
        case 34: _t->setKcurrent3(*reinterpret_cast< double*>(_v)); break;
        case 35: _t->setKvoltage1(*reinterpret_cast< double*>(_v)); break;
        case 36: _t->setKvoltage2(*reinterpret_cast< double*>(_v)); break;
        case 37: _t->setKvoltage3(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject cPSmodel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_cPSmodel.data,
    qt_meta_data_cPSmodel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *cPSmodel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cPSmodel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cPSmodel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int cPSmodel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 40;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 40;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 40;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 40;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 40;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void cPSmodel::current1Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void cPSmodel::current2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void cPSmodel::current3Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void cPSmodel::current4Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void cPSmodel::voltage1Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void cPSmodel::voltage2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void cPSmodel::voltage3Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void cPSmodel::voltage4Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void cPSmodel::pwr1Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void cPSmodel::pwr2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void cPSmodel::pwr3Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void cPSmodel::pwrtChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void cPSmodel::delayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void cPSmodel::errorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void cPSmodel::temperatureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void cPSmodel::humidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void cPSmodel::power380_onChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void cPSmodel::power2500_onChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void cPSmodel::outputChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void cPSmodel::inputChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void cPSmodel::addressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void cPSmodel::portChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void cPSmodel::timer_send_intervalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void cPSmodel::timer_connect_intervalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void cPSmodel::freerunChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void cPSmodel::client_connectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void cPSmodel::good_dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void cPSmodel::check_typeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void cPSmodel::thrcurrentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void cPSmodel::thrvoltageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void cPSmodel::thrtemperatureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void cPSmodel::thrhumidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void cPSmodel::minvoltageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void cPSmodel::thrcurzChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}

// SIGNAL 34
void cPSmodel::thruuzChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}

// SIGNAL 35
void cPSmodel::kcurrent1Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void cPSmodel::kcurrent2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void cPSmodel::kcurrent3Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}

// SIGNAL 38
void cPSmodel::kvoltage1Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 38, nullptr);
}

// SIGNAL 39
void cPSmodel::kvoltage2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 39, nullptr);
}

// SIGNAL 40
void cPSmodel::kvoltage3Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 40, nullptr);
}

// SIGNAL 41
void cPSmodel::disconnect_timeoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 41, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
