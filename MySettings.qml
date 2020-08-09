import QtQuick 2.5

MySettingsForm {
    id:mf
    button1.onClicked: {
        visible = false
    }
    function fill_controls(){
        textInput.text = ps.address
        textInput1.text = ps.port
        textInput2.text = ps.timer_send_interval
        textInput22.text = ps.disconnect_timeout

        textInput3.text = ps.kcurrent1//.toLocaleString()
        textInput4.text = ps.kcurrent2//.toLocaleString()
        textInput5.text = ps.kcurrent3//.toLocaleString()

        textInput6.text = ps.kvoltage1//.toLocaleString()
        textInput7.text = ps.kvoltage2//.toLocaleString()
        textInput8.text = ps.kvoltage3//.toLocaleString()

        textInput9.text = ps.thrcurrent
        textInput10.text = ps.thrvoltage
        textInput11.text = ps.thrtemperature
        textInput12.text = ps.thrhumid
        textInput13.text = ps.minvoltage
        print("fill:"+ps.kvoltage1)
    }

    Component.onCompleted: fill_controls()
    onVisibleChanged: fill_controls()

    button.onClicked: {
        ps.address = textInput.text
        ps.port = textInput1.text

        ps.timer_send_interval = parseInt(textInput2.text)

        ps.disconnect_timeout = parseInt(textInput22.text)

        ps.kcurrent1 = parseFloat(textInput3.text.replace(",","."))
        ps.kcurrent2 = parseFloat(textInput4.text.replace(",","."))
        ps.kcurrent3 = parseFloat(textInput5.text.replace(",","."))
        ps.kvoltage1 = parseFloat(textInput6.text.replace(",","."))
        ps.kvoltage2 = parseFloat(textInput7.text.replace(",","."))
        ps.kvoltage3 = parseFloat(textInput8.text.replace(",","."))

        ps.thrcurrent = parseInt(textInput9.text)
        ps.thrvoltage = parseInt(textInput10.text)
        ps.thrtemperature = parseInt(textInput11.text)
        ps.thrhumid = parseInt(textInput12.text)
        ps.minvoltage = parseInt(textInput13.text)

        //mf.visible = false
    }
}
