/****************************************************************************
** Meta object code from reading C++ file 'sgframe.h'
**
** Created: Mon Sep 27 18:02:04 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sgframe.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sgframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SGFrame[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,    9,    8,    8, 0x09,
      32,    8,    8,    8, 0x09,
      45,    8,    8,    8, 0x09,
      63,    8,    8,    8, 0x09,
      79,    8,    8,    8, 0x09,
     113,  100,    8,    8, 0x09,
     127,    8,    8,    8, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SGFrame[] = {
    "SGFrame\0\0e\0changeEvent(QEvent*)\0"
    "setWidgets()\0fillTabs(QString)\0"
    "setDir(QString)\0focusOn(QModelIndex)\0"
    "currentIndex\0saveText(int)\0"
    "setOutput(QString)\0"
};

const QMetaObject SGFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_SGFrame,
      qt_meta_data_SGFrame, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SGFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SGFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SGFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SGFrame))
        return static_cast<void*>(const_cast< SGFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int SGFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changeEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 1: setWidgets(); break;
        case 2: fillTabs((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: setDir((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: focusOn((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 5: saveText((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: setOutput((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
