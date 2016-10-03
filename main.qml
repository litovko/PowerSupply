import QtQuick 2.5
import QtQuick.Window 2.0
import Qt.labs.settings 1.0
import Gyco 1.0


Window {
    id: win
    visible: true
    title: "HYCO ТК-15 Телеметрия"
    color: "black"
    height: 700
    width: 800
    //color: "transparent"
    MouseArea {
        anchors.fill: parent
        onClicked: {
            win.fcommand("FULLSCREEN")
        }
    }
    Settings {
        property alias x: win.x
        property alias y: win.y
        property alias width: win.width
        property alias height: win.height
    }
    PSModel {
        id: ps
    }


    function fcommand (cmd) {
        console.log ("COMMAND="+cmd)
        switch(cmd) {
          case "QUIT":
              Qt.quit();
              break;
          case "POWER ON":
              ps.power380_on=true
              break;
          case "POWER OFF":
              ps.power380_on=false
              break;
          case "HION":
              ps.power2500_on=true
              break;
          case "HIOFF":
              ps.power2500_on=false
              break;
          case "INP1":
              ps.input=false;
              break;
          case "INP2":
              ps.input=true;
              break;
          case "OUT1":
              ps.output=false;
              break;
          case "OUT2":
              ps.output=true;
              break;
          case "HELP":

              break;

          case "MENU":

              break;
          case "FULLSCREEN":
              win.visibility = win.visibility===Window.FullScreen?Window.Maximized:Window.FullScreen;
              break;
        }

    }

    Rectangle {
        id: rect
        //color: "black";
        color: "transparent"
        anchors.fill: parent
        border.color: "yellow"
        radius:20
        border.width: 3
        focus:true

        LampBoard{
            id: lb
            height: 70
            anchors.margins: 5
            anchors.left: parent.left; anchors.top: parent.top; anchors.right: parent.right
        }
        ButtonBoard{
            id: bb
            height: 70
            anchors.margins: 5
            anchors.left: parent.left; anchors.right: parent.right; anchors.top: lb.bottom
        }
        PriborBoard{
            id:pb
            height: 140
            anchors.margins: 5
            anchors.left: parent.left; anchors.right: parent.right; anchors.top: bb.bottom
        }
        Timer {
                interval: 500; running: true; repeat: true
                onTriggered: {
                    ch1.addpoint(ps.current1/10);
                    ch2.addpoint(ps.current2/10);
                    ch3.addpoint(ps.current3/10);
                }
            }
        Row {
            anchors.margins: 5
            anchors.top: pb.bottom
            anchors.horizontalCenter: parent.horizontalCenter
            spacing: 5
            MyCharts {
                id: ch1
                height: 300
                width: 400
                seriesName: "Сила тока"
                chartName: "Фаза 1"
            }
            MyCharts {
                id: ch2
                height: 300
                width: 400
                seriesName: "Сила тока"
                chartName: "Фаза 2"
            }
            MyCharts {
                id: ch3
                height: 300
                width: 400
                seriesName: "Сила тока"
                chartName: "Фаза 3"
            }
        }

    }

}

