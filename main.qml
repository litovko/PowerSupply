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
          case "PLAY":

              break;

          case "POWER ON":
              console.log("TO POWER ON")
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
        MyButton {
        anchors.centerIn: parent
        onMybuttonPressed: fcommand("POWER ON")
        }
        LampBoard{
            id: lb
            height: 70
            anchors.margins: 5
            anchors.left: parent.left; anchors.top: parent.top; anchors.right: parent.right
        }
        ButtonBoard{
            height: 70
            anchors.margins: 5
            anchors.left: parent.left; anchors.right: parent.right; anchors.top: lb.bottom
        }
//        Rectangle {
//            anchors.top: lb.bottom
//            anchors.topMargin: 0
//            height: 20

//            anchors.right: parent.right

//            anchors.left: parent.left
//            anchors.leftMargin: 0
//            border.color: "white"

//        }



    }

}

