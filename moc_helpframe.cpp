/****************************************************************************
** Meta object code from reading C++ file 'helpframe.h'
**
** Created: Thu Jul 22 17:03:19 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "helpframe.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'helpframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HelpFrame[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x09,
      32,   10,   10,   10, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_HelpFrame[] = {
    "HelpFrame\0\0setLink(QModelIndex)\0"
    "filter(QString)\0"
};

const QMetaObject HelpFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_HelpFrame,
      qt_meta_data_HelpFrame, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HelpFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HelpFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HelpFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HelpFrame))
        return static_cast<void*>(const_cast< HelpFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int HelpFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setLink((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 1: filter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
