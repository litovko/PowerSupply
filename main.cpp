#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQuickView>

#include "psmodel.h"

#include <QSettings>
#include <QDateTime>
#include <QTime>

#define giko_name "HYCO"
#define giko_program "Power Supply Console"
#include <stdio.h>
#include <stdlib.h>
#include <QFile>
#include <QTextStream>

static QFile logfile;
static QTextStream out(&logfile);
static bool recordinglog=false;

//Включение и отключение записи логов
extern void toggle_log(bool recordlog) {
    if (!recordlog) {
        if(logfile.isOpen()) {
            logfile.write("Close\n");
            logfile.flush();
            out.flush();
            logfile.close();
        }
        recordinglog=false;
        return;
    }
    if (!logfile.isOpen()) {
        logfile.setFileName("log/mgbu_ps_log_"+QDateTime::currentDateTime().toString("dd-MM-yyyy_hh-mm-ss-zzz.log"));
        logfile.open(QIODevice::WriteOnly | QIODevice::Text);
        logfile.write("Open\n");
    }
    recordinglog=true;
}

void myMessageOutput(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    QByteArray localMsg = msg.toLocal8Bit();
    switch (type) {
    case QtDebugMsg:
        fprintf(stderr, "D:%s %s (%s:%u, %s)\n",QTime::currentTime().toString("hh:mm:ss:zzz ").toLocal8Bit().data(), localMsg.constData(), context.file, context.line, context.function);
        out<<"Debug:"<<QTime::currentTime().toString("hh:mm:ss:zzz ").toUtf8().data()<<" "<<localMsg.constData()<<"("<<context.file<<":"<<context.line<<", "<<context.function<<")\n";
        break;
    case QtWarningMsg:
        fprintf(stderr, "W:%s %s (%s:%u, %s)\n",QTime::currentTime().toString("hh:mm:ss:zzz ").toLocal8Bit().data(), localMsg.constData(), context.file, context.line, context.function);
        out<<"Warning:"<<QTime::currentTime().toString("hh:mm:ss:zzz ").toLocal8Bit().data()<<" "<<localMsg.constData()<<"("<<context.file<<":"<<context.line<<", "<<context.function<<")\n";
        break;
    case QtCriticalMsg:
        fprintf(stderr, "C:%s %s (%s:%u, %s)\n",QTime::currentTime().toString("hh:mm:ss:zzz ").toLocal8Bit().data(), localMsg.constData(), context.file, context.line, context.function);
        out<<"Critical:"<<QTime::currentTime().toString("hh:mm:ss:zzz ").toLocal8Bit().data()<<" "<<localMsg.constData()<<"("<<context.file<<":"<<context.line<<", "<<context.function<<")\n";
        break;
    case QtFatalMsg:
        fprintf(stderr, "F:%s %s (%s:%u, %s)\n",QTime::currentTime().toString("hh:mm:ss:zzz ").toLocal8Bit().data(), localMsg.constData(), context.file, context.line, context.function);
        out<<"FATAL:"<<QTime::currentTime().toString("hh:mm:ss:zzz ").toLocal8Bit().data()<<" "<<localMsg.constData()<<"("<<context.file<<":"<<context.line<<", "<<context.function<<")\n";
        abort();
    default:
        break;
    }
    if(logfile.isOpen()) out.flush();
}


int main(int argc, char *argv[])
{
    qInstallMessageHandler(myMessageOutput);
    toggle_log(true);
    //setlocale(LC_ALL, ""); // избавляемся от кракозябров в консоли
    qDebug()<<QTime::currentTime().toString("hh:mm:ss:zzz ")<<"Start"<<giko_name<<"  "<<giko_program;

    QSettings settings(giko_name, giko_program);



    qmlRegisterType<cPSmodel>("Gyco", 1, 0, "PSModel");

    QApplication app(argc, argv);
    app.setOrganizationName(giko_name);
    app.setOrganizationDomain("hyco.ru");
    app.setApplicationName(giko_program);

    QQmlApplicationEngine engine;

    engine.addImportPath(QStringLiteral("qml"));
    qDebug()<<"importPathList:"<<engine.importPathList();
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    qDebug()<<"Engine loaded"<<giko_name<<"  "<<giko_program;

    int ex= app.exec();

    qDebug()<<"Good bye"<<giko_name<<"  "<<giko_program<<"Exit code:"<<ex;
    out.flush();
    //toggle_log(false);
}
