import QtQuick 2.12
//import QtQuick.Controls 1.4

Item {
    id: lamp
    property bool active: false
    property string bottomText: "ЛАМПА"
    property int fontSize: 10
    property bool error: false
    Rectangle {
        color: "transparent"
        anchors.margins: 20
        width: lamp.width
        height: lamp.height
        Column {
            id: column
            anchors.centerIn: parent
            anchors.margins: 10
            Rectangle {
                color: lamp.active ? "yellow" : "black"
                width: lamp.height / 3
                height: lamp.height / 3
                radius: 10
                border.color: "blue"
                border.width: lamp.active ? 1 : 3
                anchors.horizontalCenter: column.horizontalCenter
            }

            Rectangle {
                id: tr
                width: lamp.width
                height: lamp.height / 2
                anchors.horizontalCenter: column.horizontalCenter
                color: "transparent"
                Text {
                    text: lamp.bottomText
                    font.pointSize: lamp.fontSize
                    //fontSizeMode: Text.Fit
                    color: !error ? "yellow" : "lightgray"
                    horizontalAlignment: Text.AlignHCenter
                    verticalAlignment: Text.AlignVCenter
                    anchors.fill: parent
                }
            }
        }
    }
}
