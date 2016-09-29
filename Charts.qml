import QtQuick 2.0
import QtCharts 2.1

Item {
    id: chart
    property int maxX: 20
    property int minХ: 0
    property int maxY: 100

    property int minY: 0

    property string seriesName: "Ток1"
    property string chartName: "График тока"


    function addpoint(p) {
        var c=ls.count
        var i
        ls.append(c,p)
        if (c>chart.maxX) {
            ls.remove(0)
            console.log(c)
            for(  i=0; i<c;i++){
                console.log("i="+i+"x="+ls.at(i).x)
                ls.replace(i,ls.at(i).x-1,ls.at(i).y)
            }
        }
    }

    Rectangle {
        anchors.fill: parent
        ChartView {
            title: seriesName
            anchors.fill: parent
            antialiasing: true
            LineSeries {
                id: ls
                name: seriesName
                ValueAxis {
                        id: axisX
                        min: chart.minХ
                        max: maxX
                        tickCount: 21
                    }
                ValueAxis {
                      id: axisY
                      min: minY
                      max: maxY
                      tickCount: 21
                  }

                axisX: axisX
                axisY: axisY
//                XYPoint { x: 0; y: 10 }

            }
        }
    }
}
