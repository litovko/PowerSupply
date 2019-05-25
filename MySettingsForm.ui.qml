import QtQuick 2.12
import QtQuick.Controls 1.6
Item {
    id: form
    width: 600
    height: 500
    property alias textInput13: textInput13
    property alias textInput12: textInput12
    property alias textInput11: textInput11
    property alias textInput10: textInput10
    property alias textInput9: textInput9
    property alias textInput8: textInput8
    property alias textInput7: textInput7
    property alias textInput6: textInput6
    property alias textInput5: textInput5
    property alias textInput4: textInput4
    property alias textInput3: textInput3
    property alias textInput2: textInput2
    property alias element: form
    property alias label: label
    property alias label1: label1
    property alias textInput1: textInput1
    property alias textInput: textInput
    property alias button1: button1
    property alias button: button
    property alias rectangle: rectangle

    Rectangle {
        id: rectangle
        radius: 5
        border.width: 3
        anchors.fill: parent
        gradient: Gradient {
            GradientStop {
                position: 0
                color: "#000000"
            }

            GradientStop {
                position: 1
                color: "#909090"
            }
        }
        border.color: "#fae117"

        Button {
            id: button
            x: 373
            y: 50
            text: qsTr("Применить")
            checkable: true
        }

        Button {
            id: button1
            x: 493
            y: 50
            text: qsTr("Отмена")

        }

        Text {
            id: label
            y: 39
            width: 448
            height: 25
            color: "#ffffff"
            text: qsTr("Адрес:")
            font.pointSize: 10
            textFormat: Text.PlainText
            anchors.left: parent.left
            anchors.leftMargin: 20
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignLeft

            TextInput {
                id: textInput

                width: 248
                height: parent.height
                color: "#ffffff"
                text: qsTr("Адрес БСЭП")
                opacity: 1
                validator: RegExpValidator {
                    id: adr_validator
                    regExp: /^(([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])\.){3}([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])$/
                }
                horizontalAlignment: TextInput.AlignHCenter
                verticalAlignment: TextInput.AlignVCenter
                font.family: "Times New Roman"
                anchors.fill: parent
                font.pixelSize: 12

            }
        }

        Text {
            id: label1
            x: 5
            y: 70
            width: 448
            height: 25
            color: "#ffffff"
            text: qsTr("Порт:")
            font.pointSize: 10
            horizontalAlignment: Text.AlignLeft
            TextInput {
                id: textInput1
                width: 248
                height: parent.height
                color: "#ffffff"
                text: qsTr("Порт БСЭП")
                font.family: "Times New Roman"
                horizontalAlignment: TextInput.AlignHCenter
                font.pixelSize: 12
                anchors.fill: parent
                verticalAlignment: TextInput.AlignVCenter
            }
            anchors.leftMargin: 20
            textFormat: Text.PlainText
            verticalAlignment: Text.AlignVCenter
            anchors.left: parent.left
        }

        Text {
            id: label2
            x: 1
            y: 101
            width: 448
            height: 25
            color: "#ffffff"
            text: qsTr("Интервал")
            font.pointSize: 10
            horizontalAlignment: Text.AlignLeft
            TextInput {
                id: textInput2
                width: 248
                height: parent.height
                color: "#ffffff"
                text: qsTr("Интервал")
                font.family: "Times New Roman"
                horizontalAlignment: TextInput.AlignHCenter
                font.pixelSize: 12
                anchors.fill: parent
                validator: IntValidator{bottom: 100; top:10000}
                verticalAlignment: TextInput.AlignVCenter
            }
            anchors.leftMargin: 20
            textFormat: Text.PlainText
            verticalAlignment: Text.AlignVCenter
            anchors.left: parent.left
        }

        Text {
            id: label3
            x: 11
            y: 132
            width: 448
            height: 25
            color: "#ffffff"
            text: qsTr("К ток 1:")
            font.pointSize: 10
            horizontalAlignment: Text.AlignLeft
            TextInput {
                id: textInput3
                width: 248
                height: parent.height
                color: "#ffffff"
                text: qsTr("Порт БСЭП")
                validator: DoubleValidator{bottom: 0; top:10000}
                font.family: "Times New Roman"
                horizontalAlignment: TextInput.AlignHCenter
                font.pixelSize: 12
                anchors.fill: parent
                verticalAlignment: TextInput.AlignVCenter
            }
            anchors.leftMargin: 20
            textFormat: Text.PlainText
            verticalAlignment: Text.AlignVCenter
            anchors.left: parent.left
        }

        Text {
            id: label4
            x: 11
            y: 163
            width: 448
            height: 25
            color: "#ffffff"
            text: qsTr("К ток 2:")
            font.pointSize: 10
            horizontalAlignment: Text.AlignLeft
            TextInput {
                id: textInput4
                width: 248
                height: parent.height
                color: "#ffffff"
                text: qsTr("Порт БСЭП")
                validator: DoubleValidator{bottom: 0; top:10000}
                font.family: "Times New Roman"
                horizontalAlignment: TextInput.AlignHCenter
                font.pixelSize: 12
                anchors.fill: parent
                verticalAlignment: TextInput.AlignVCenter
            }
            anchors.leftMargin: 20
            textFormat: Text.PlainText
            verticalAlignment: Text.AlignVCenter
            anchors.left: parent.left
        }

        Text {
            id: label5
            x: 0
            y: 194
            width: 448
            height: 25
            color: "#ffffff"
            text: qsTr("К ток 3:")
            font.pointSize: 10
            horizontalAlignment: Text.AlignLeft
            TextInput {
                id: textInput5
                width: 248
                height: parent.height
                color: "#ffffff"
                text: qsTr("Порт БСЭП")
                validator: DoubleValidator{bottom: 0; top:10000}
                font.family: "Times New Roman"
                horizontalAlignment: TextInput.AlignHCenter
                font.pixelSize: 12
                anchors.fill: parent
                verticalAlignment: TextInput.AlignVCenter
            }
            anchors.leftMargin: 20
            textFormat: Text.PlainText
            verticalAlignment: Text.AlignVCenter
            anchors.left: parent.left
        }

        Text {
            id: label6
            x: 6
            y: 225
            width: 448
            height: 25
            color: "#ffffff"
            text: qsTr("К напр 1:")
            font.pointSize: 10
            horizontalAlignment: Text.AlignLeft
            TextInput {
                id: textInput6
                width: 248
                height: parent.height
                color: "#ffffff"
                text: qsTr("Порт БСЭП")
                validator: DoubleValidator{bottom: 0; top:10000}
                font.family: "Times New Roman"
                horizontalAlignment: TextInput.AlignHCenter
                font.pixelSize: 12
                anchors.fill: parent
                verticalAlignment: TextInput.AlignVCenter
            }
            anchors.leftMargin: 20
            textFormat: Text.PlainText
            verticalAlignment: Text.AlignVCenter
            anchors.left: parent.left
        }

        Text {
            id: label7
            x: 6
            y: 256
            width: 448
            height: 25
            color: "#ffffff"
            text: qsTr("К напр 2:")
            font.pointSize: 10
            horizontalAlignment: Text.AlignLeft
            TextInput {
                id: textInput7
                width: 248
                height: parent.height
                color: "#ffffff"
                text: qsTr("Порт БСЭП")
                validator: DoubleValidator{bottom: 0; top:10000}
                font.family: "Times New Roman"
                horizontalAlignment: TextInput.AlignHCenter
                font.pixelSize: 12
                anchors.fill: parent
                verticalAlignment: TextInput.AlignVCenter
            }
            anchors.leftMargin: 20
            textFormat: Text.PlainText
            verticalAlignment: Text.AlignVCenter
            anchors.left: parent.left
        }

        Text {
            id: label8
            x: -2
            y: 287
            width: 448
            height: 25
            color: "#ffffff"
            text: qsTr("К напр 3:")
            font.pointSize: 10
            horizontalAlignment: Text.AlignLeft
            TextInput {
                id: textInput8
                width: 248
                height: parent.height
                color: "#ffffff"
                text: qsTr("Порт БСЭП")
                validator: DoubleValidator{bottom: 0; top:10000}
                font.family: "Times New Roman"
                horizontalAlignment: TextInput.AlignHCenter
                font.pixelSize: 12
                anchors.fill: parent
                verticalAlignment: TextInput.AlignVCenter
            }
            anchors.leftMargin: 20
            textFormat: Text.PlainText
            verticalAlignment: Text.AlignVCenter
            anchors.left: parent.left
        }

        Text {
            id: label9
            x: -3
            y: 318
            width: 448
            height: 25
            color: "#ffffff"
            text: qsTr("Порог.ток:")
            font.pointSize: 10
            horizontalAlignment: Text.AlignLeft
            TextInput {
                id: textInput9
                width: 248
                height: parent.height
                color: "#ffffff"
                text: qsTr("Порт БСЭП")
                validator: DoubleValidator{bottom: 0; top:10000}
                font.family: "Times New Roman"
                horizontalAlignment: TextInput.AlignHCenter
                font.pixelSize: 12
                anchors.fill: parent
                verticalAlignment: TextInput.AlignVCenter
            }
            anchors.leftMargin: 20
            textFormat: Text.PlainText
            verticalAlignment: Text.AlignVCenter
            anchors.left: parent.left
        }

        Text {
            id: label10
            x: -12
            y: 349
            width: 448
            height: 25
            color: "#ffffff"
            text: qsTr("Порог.напр:")
            font.pointSize: 10
            horizontalAlignment: Text.AlignLeft
            TextInput {
                id: textInput10
                width: 248
                height: parent.height
                color: "#ffffff"
                text: qsTr("Порт БСЭП")
                validator: DoubleValidator{bottom: 0; top:10000}
                font.family: "Times New Roman"
                horizontalAlignment: TextInput.AlignHCenter
                font.pixelSize: 12
                anchors.fill: parent
                verticalAlignment: TextInput.AlignVCenter
            }
            anchors.leftMargin: 20
            textFormat: Text.PlainText
            verticalAlignment: Text.AlignVCenter
            anchors.left: parent.left
        }

        Text {
            id: label11
            x: -6
            y: 380
            width: 448
            height: 25
            color: "#ffffff"
            text: qsTr("Порог.темп:")
            font.pointSize: 10
            horizontalAlignment: Text.AlignLeft
            TextInput {
                id: textInput11
                width: 248
                height: parent.height
                color: "#ffffff"
                text: qsTr("Порт БСЭП")
                font.family: "Times New Roman"
                horizontalAlignment: TextInput.AlignHCenter
                font.pixelSize: 12
                anchors.fill: parent
                verticalAlignment: TextInput.AlignVCenter
            }
            anchors.leftMargin: 20
            textFormat: Text.PlainText
            verticalAlignment: Text.AlignVCenter
            anchors.left: parent.left
        }

        Text {
            id: label12
            x: -6
            y: 411
            width: 448
            height: 25
            color: "#ffffff"
            text: qsTr("Порог.влажн:")
            font.pointSize: 10
            horizontalAlignment: Text.AlignLeft
            TextInput {
                id: textInput12
                width: 248
                height: parent.height
                color: "#ffffff"
                text: qsTr("Порт БСЭП")
                IntValidator{bottom: 100; top:10000}
                font.family: "Times New Roman"
                horizontalAlignment: TextInput.AlignHCenter
                font.pixelSize: 12
                anchors.fill: parent
                verticalAlignment: TextInput.AlignVCenter
            }
            anchors.leftMargin: 20
            textFormat: Text.PlainText
            verticalAlignment: Text.AlignVCenter
            anchors.left: parent.left
        }

        Text {
            id: label13
            x: 2
            y: 442
            width: 448
            height: 25
            color: "#ffffff"
            text: qsTr("Порог.напр.мин:")
            font.pointSize: 10
            horizontalAlignment: Text.AlignLeft
            TextInput {
                id: textInput13
                width: 248
                height: parent.height
                color: "#ffffff"
                text: qsTr("Порт БСЭП")
                IntValidator{bottom: 100; top:10000}
                font.family: "Times New Roman"
                horizontalAlignment: TextInput.AlignHCenter
                font.pixelSize: 12
                anchors.fill: parent
                verticalAlignment: TextInput.AlignVCenter
            }
            anchors.leftMargin: 20
            textFormat: Text.PlainText
            verticalAlignment: Text.AlignVCenter
            anchors.left: parent.left
        }
    }
}
