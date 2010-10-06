/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Wed Sep 29 17:58:19 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x09,
      25,   11,   11,   11, 0x09,
      39,   11,   11,   11, 0x09,
      53,   11,   11,   11, 0x09,
      66,   11,   11,   11, 0x09,
      83,   11,   11,   11, 0x09,
      93,   11,   11,   11, 0x09,
     108,   11,   11,   11, 0x09,
     121,   11,   11,   11, 0x09,
     139,   11,   11,   11, 0x09,
     158,   11,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0newProject()\0openProject()\0"
    "quitProject()\0runProject()\0optionsProject()\0"
    "aboutSG()\0setHelpFrame()\0setSGFrame()\0"
    "fillTree(QString)\0enableRun(QString)\0"
    "printOutput()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: newProject(); break;
        case 1: openProject(); break;
        case 2: quitProject(); break;
        case 3: runProject(); break;
        case 4: optionsProject(); break;
        case 5: aboutSG(); break;
        case 6: setHelpFrame(); break;
        case 7: setSGFrame(); break;
        case 8: fillTree((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: enableRun((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: printOutput(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
