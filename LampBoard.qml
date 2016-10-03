import QtQuick 2.5

Item {

    Rectangle {
        id: ind
        color: "transparent"
        border.color: "gray"
        radius:20
        border.width: 2
        height: parent.height
        width: parent.width
        Row{
          spacing: 40
          anchors.centerIn:  parent
          anchors.margins: 10
          MyLamp {
            height: 60
            width:  60
            bottomText: "СВЯЗЬ"
            active: ps.client_connected
          }
          MyLamp {
            height: 60
            width:  60
            bottomText: "ДАННЫЕ"
            active: ps.good_data
          }
          Rectangle {
              anchors.verticalCenter: parent.verticalCenter
              width: 5
              height: 50
              color: "gray"
              border.color: "gray"
          }
          MyLamp {
              bottomText: "380 ВКЛ"
              height: 60
              width: 60
              active: ps.power380_on

          }
          MyLamp {
              bottomText: "380 ВЫКЛ"
              height: 60
              width: 60
              active: !ps.power380_on

          }
          Rectangle {
              anchors.verticalCenter: parent.verticalCenter
              width: 5
              height: 50
              color: "gray"
              border.color: "gray"
          }
          MyLamp {
              bottomText: "ВХОД ROV"
              height: 60
              width: 60
              active: !ps.input

          }
          MyLamp {
              //bottomText: "<p><br><br>ВХОД<br>ГИКО<br></p>"
              bottomText: "ВХОД ГИКО"
              height: 60
              width: 60
              active: ps.input

          }
          Rectangle {
              anchors.verticalCenter: parent.verticalCenter
              width: 5
              height: 50
              color: "gray"
              border.color: "gray"
          }
          MyLamp {
              bottomText: "ВЫХОД ПСКОВ"
              height: 60
              width: 60
              active: !ps.output
              //fontSize: 12
          }
          MyLamp {
              bottomText: "ВЫХОД ТК-15"
              height: 60
              width: 60
              active: ps.output

          }
          Rectangle {
              anchors.verticalCenter: parent.verticalCenter
              width: 5
              height: 50
              color: "gray"
              border.color: "gray"
          }
          MyLamp {
              bottomText: "2500 ВКЛ"
              height: 60
              width: 60
              active: ps.power2500_on
              //fontSize: 12
          }
          MyLamp {
              bottomText: "2500 ВЫКЛ"
              height: 60
              width: 60
              active: !ps.power2500_on

          }

        }
    }
}
