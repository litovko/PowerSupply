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
          anchors.verticalCenter: parent
          anchors.margins: 10
          MyLamp {
            height: 60
            width:  60
            bottomText: "СВЯЗЬ"
            active: ps.client_connected
          }
          MyLamp {
              bottomText: "380 ВКЛ"
              height: 60
              width: 60
              active: ps.power

          }
          MyLamp {
              bottomText: "380 ВЫКЛ"
              height: 60
              width: 60
              active: !ps.power

          }
          MyLamp {
              bottomText: "ВХОД ROV"
              height: 60
              width: 60
              active: !ps.power

          }
          MyLamp {
              //bottomText: "<p><br><br>ВХОД<br>ГИКО<br></p>"
              bottomText: "ВХОД ГИКО"
              height: 60
              width: 60
              active: !ps.power

          }
          MyLamp {
              bottomText: "ВЫХОД ПСКОВ"
              height: 60
              width: 60
              active: !ps.power
              //fontSize: 12
          }
          MyLamp {
              bottomText: "ВЫХОД ТК-15"
              height: 60
              width: 60
              active: !ps.power

          }

        }
    }
}
