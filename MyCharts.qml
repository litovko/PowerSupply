import QtQuick 2.0
import QtCharts 2.0

Item {
    id: chart
    property int maxX: 120
    property int minХ: 0
    property int maxY: 20

    property int minY: 0

    property string seriesName: "Ток 1"
    property string chartName: "График тока"


    function addpoint(p) {
        var c=ls.count
        var i
        ls.append(c,p)
        if (c>chart.maxX) {
            ls.remove(0)
//            console.log(c)
            for(  i=0; i<c;i++){
//                console.log("i="+i+"x="+ls.at(i).x)
                ls.replace(i,ls.at(i).x-1,ls.at(i).y)
            }
        }
    }

    Rectangle {
        border.color: "gray"
        radius:  20
        color: "transparent"
        anchors.margins: 5
        anchors.fill: parent
        ChartView {
            title: chartName
            anchors.fill: parent
            antialiasing: true
            backgroundColor:  "black"
            //dropShadowEnabled: true
            plotAreaColor: "black"
            titleColor: "yellow"

            LineSeries {
                id: ls
                name: seriesName
                //style: Qt.DotLine
                capStyle: Qt.RoundCap
                color: "blue"
                width: 4
                ValueAxis {
                        id: axisX
                        min: chart.minХ
                        max: maxX
                        tickCount: 21
                        gridVisible: false
                        color: "white"
                        labelsVisible: false
                        minorGridVisible: false
                    }
                ValueAxis {
                      id: axisY
                      min: minY
                      max: maxY
                      tickCount: 11
                      gridVisible: false
                      labelsColor: "white"
                      color: "white"
                  }

                axisX: axisX
                axisY: axisY
            }
        }
    }
}
