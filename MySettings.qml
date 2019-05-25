import QtQuick 2.5

MySettingsForm {
    id:mf
    button1.onClicked: {
        visible = false
    }
    Component.onCompleted: {
        textInput.text = ps.address
        textInput1.text = ps.port
        textInput2.text = ps.timer_send_interval

        textInput3.text = ps.kcurrent1
        textInput4.text = ps.kcurrent2
        textInput5.text = ps.kcurrent3

        textInput6.text = ps.kvoltage1
        textInput7.text = ps.kvoltage2
        textInput8.text = ps.kvoltage3

        textInput9.text = ps.thrcurrent
        textInput10.text = ps.thrvoltage
        textInput11.text = ps.thrtemperature
        textInput12.text = ps.thrhumid
        textInput13.text = ps.minvoltage

    }

    button.onClicked: {
        ps.address = textInput.text
        ps.port = textInput1.text

        ps.timer_send_interval = parseInt(textInput2.text)

        ps.kcurrent1 = parseFloat(textInput3.text)
        ps.kcurrent2 = parseFloat(textInput4.text)
        ps.kcurrent3 = parseFloat(textInput5.text)

        ps.kvoltage1 = parseFloat(textInput6.text)
        ps.kvoltage2 = parseFloat(textInput7.text)
        ps.kvoltage3 = parseFloat(textInput8.text)

        ps.thrcurrent = parseInt(textInput9.text)
        ps.thrvoltage = parseInt(textInput10.text)
        ps.thrtemperature = parseInt(textInput11.text)
        ps.thrhumid = parseInt(textInput12.text)
        ps.minvoltage = parseInt(textInput13.text)

        mf.visible = false
    }
}
