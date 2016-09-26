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
          Pribor {
              height: 100
              width: 100
              value: ps.current1
              maximumValue: 20
              minorTickmarks: 5
              stepSize: 5
              centerТext: "A"
              bottomText: "Ток1"
              warningThreshold: 10
          }
          Pribor {
              height: 100
              width: 100
              value: ps.current2
              maximumValue: 20
              minorTickmarks: 5
              stepSize: 5
              centerТext: "A"
              bottomText: "Ток2"
              warningThreshold: 10
          }
          Pribor {
              height: 100
              width: 100
              value: ps.current3
              maximumValue: 20
              minorTickmarks: 5
              stepSize: 5
              centerТext: "A"
              bottomText: "Ток3"
              warningThreshold: 10
          }

          Rectangle {
              anchors.verticalCenter: parent.verticalCenter
              width: 5
              height: 120
              color: "gray"
              border.color: "gray"
          }
          Pribor {
              height: 100
              width: 100
              value: ps.voltage1
              maximumValue: 4000
              minorTickmarks: 4
              stepSize: 1000
              centerТext: "V"
              bottomText: "Напряжение1"
              warningThreshold: 2500
          }
          Pribor {
              height: 100
              width: 100
              value: ps.voltage2
              maximumValue: 4000
              minorTickmarks: 4
              stepSize: 1000
              centerТext: "V"
              bottomText: "Напряжение2"
              warningThreshold: 2500
          }
          Pribor {
              height: 100
              width: 100
              value: ps.voltage3
              maximumValue: 4000
              minorTickmarks: 4
              stepSize: 1000
              centerТext: "V"
              bottomText: "Напряжение3"
              warningThreshold: 2500
          }
          Rectangle {
              anchors.verticalCenter: parent.verticalCenter
              width: 5
              height: 120
              color: "gray"
              border.color: "gray"
          }
          Pribor {
              height: 100
              width: 100
              value: ps.temperature
              maximumValue: 100
              minorTickmarks: 4
              stepSize: 20
              centerТext: "t\u00B0"
              bottomText: "Температура"
              warningThreshold: 40
          }
          Rectangle {
              anchors.verticalCenter: parent.verticalCenter
              width: 5
              height: 120
              color: "gray"
              border.color: "gray"
          }
          Pribor {
              height: 100
              width: 100
              value: ps.humid
              maximumValue: 100
              minorTickmarks: 4
              stepSize: 20
              centerТext: "%"
              bottomText: "Влажность"
              warningThreshold: 70
          }

        }
    }
}
