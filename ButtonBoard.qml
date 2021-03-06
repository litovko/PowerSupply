import QtQuick 2.5

Item {
    Rectangle {
        anchors.fill: parent
        color: "transparent"
        border.color: "gray"
        radius:20
        border.width: 2
        height: parent.height
        width: parent.width
        Row{
          //anchors.fill: parent
          anchors.centerIn:  parent
          anchors.margins:  10
          spacing: 20

          Text {
              width: 50
              height: 50
              color: "#c1d177"
              text: "d="+ps.delay
              verticalAlignment: Text.AlignVCenter
              font.pointSize: 12
          }
          MyButton {
            anchors.verticalCenter: parent.verticalCenter
            onMybuttonPressed: fcommand("POWER ON")
            width: 100
            height: 50
            text: "ВКЛ 380"
          }
          MyButton {
            anchors.verticalCenter: parent.verticalCenter
            width: 100
            height: 50
            onMybuttonPressed: fcommand("POWER OFF")
            text: "ВЫКЛ 380"
          }
          Rectangle {
              anchors.verticalCenter: parent.verticalCenter
              width: 5
              height: 50
              color: "gray"
              border.color: "gray"
          }
          MyButton {
            anchors.verticalCenter: parent.verticalCenter
            width: 100
            height: 50
            onMybuttonPressed: fcommand("INP1")
            text: "ВХОД ROV"
          }
          MyButton {
            anchors.verticalCenter: parent.verticalCenter
            width: 100
            height: 50
            onMybuttonPressed: fcommand("INP2")
            text: "ВХОД ГИКО"
          }
          Rectangle {
              anchors.verticalCenter: parent.verticalCenter
              width: 5
              height: 50
              color: "gray"
              border.color: "gray"
          }
          MyButton {
            anchors.verticalCenter: parent.verticalCenter
            width: 100
            height: 50
            onMybuttonPressed: fcommand("OUT1")
            text: "ВЫХ. ПСКОВ"
          }
          MyButton {
            anchors.verticalCenter: parent.verticalCenter
            width: 100
            height: 50
            onMybuttonPressed: fcommand("OUT2")
            text: "ВЫХ. ТК-15"
          }
          Rectangle {
              anchors.verticalCenter: parent.verticalCenter
              width: 5
              height: 50
              color: "gray"
              border.color: "gray"
          }
          MyButton {
            anchors.verticalCenter: parent.verticalCenter
            width: 100
            height: 50
            onMybuttonPressed: fcommand("HION")
            text: "2500 ВКЛ"
          }
          MyButton {
            anchors.verticalCenter: parent.verticalCenter
            width: 100
            height: 50
            onMybuttonPressed: fcommand("HIOFF")
            text: "2500 ВЫКЛ"
          }


        }
    }
}
