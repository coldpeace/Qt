import QtQuick 2.0

Rectangle {
    id: root
    color: "transparent"

//    Image {
//        id: leftRad
//        source: "resources/kassette_rad.png"
//        x: kassette.x + 45
//        y: kassette.y + 52
//        scale: 0.4
//        NumberAnimation {
//            running: true
//            target: leftRad;
//            property: "rotation";
//            duration: 5000
//            from: 0
//            to: 350
//            loops: Animation.Infinite
//        }
//    }

//    Image {
//        id: rightRad
//        source: "resources/kassette_rad.png"
//        x: kassette.x + 282
//        y: kassette.y + 52
//        scale: 0.4
//        NumberAnimation {
//            running: true
//            target: rightRad;
//            property: "rotation";
//            from: 0
//            to: 350
//            duration: 5000
//            loops: Animation.Infinite
//        }
//    }

    Image {
        id: kassette
        source: "resources/kassette_orig.png"
        height: parent.height
        width: parent.width
    }
}
