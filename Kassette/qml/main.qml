import QtQuick 2.1
import QtQuick.Window 2.1

Window {
    id: window
    visible: true
    width: 1320
    height: 870

    MouseArea {
        anchors.fill: parent
        onClicked: {
            console.log("CLick...");
        }
    }

    Image {
        id: background
        anchors.fill: parent
        source : "resources/background.png"
    }

    Kassette {
        id: kassette
        width: 800
        height: 500
        anchors.centerIn: parent
    }

    Image {
        id: volume
        source: "resources/volum.png"
        width: 150
        height: 150
        anchors {
            bottom: background.bottom
            left: background.left
            margins: 40
        }
    }

    Column {
        anchors {
            bottom: background.bottom
            right: background.right
            margins: 40
        }
        spacing: 5
        Image {
            id: play
            source: "resources/button.png"
            width: 80
            height: 80
        }

        Image {
            id: pause
            source: "resources/button.png"
            width: 80
            height: 80
        }

        Image {
            id: stop
            source: "resources/button.png"
            width: 80
            height: 80
        }
    }

    // Speakers
    Image {
        id: leftSpeaker
        source: "resources/speaker.png"
        width: 150
        height: 150
        anchors {
            top: background.top
            left: background.left
            margins: 40
        }
    }

    Image {
        id: rightSpeaker
        source: "resources/speaker.png"
        width: 150
        height: 150
        anchors {
            top: background.top
            right: background.right
            margins: 40
        }
    }

    // label
    Image {
        id: label
        source: "resources/label.png"
        width: 500
        height: 100
        anchors {
            top: background.top
            horizontalCenter: background.horizontalCenter
            margins: 20
        }
    }
}
