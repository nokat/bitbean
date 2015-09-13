/****************************************************************************
** Meta object code from reading C++ file 'sendbeansentry.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/sendbeansentry.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendbeansentry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SendBeansEntry[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   16,   15,   15, 0x05,
      51,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      78,   70,   15,   15, 0x0a,
     101,   15,   15,   15, 0x0a,
     109,   15,   15,   15, 0x08,
     143,  135,   15,   15, 0x08,
     173,   15,   15,   15, 0x08,
     204,   15,   15,   15, 0x08,
     229,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SendBeansEntry[] = {
    "SendBeansEntry\0\0entry\0"
    "removeEntry(SendBeansEntry*)\0"
    "payAmountChanged()\0enabled\0"
    "setRemoveEnabled(bool)\0clear()\0"
    "on_deleteButton_clicked()\0address\0"
    "on_payTo_textChanged(QString)\0"
    "on_addressBookButton_clicked()\0"
    "on_pasteButton_clicked()\0updateDisplayUnit()\0"
};

void SendBeansEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SendBeansEntry *_t = static_cast<SendBeansEntry *>(_o);
        switch (_id) {
        case 0: _t->removeEntry((*reinterpret_cast< SendBeansEntry*(*)>(_a[1]))); break;
        case 1: _t->payAmountChanged(); break;
        case 2: _t->setRemoveEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->clear(); break;
        case 4: _t->on_deleteButton_clicked(); break;
        case 5: _t->on_payTo_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_addressBookButton_clicked(); break;
        case 7: _t->on_pasteButton_clicked(); break;
        case 8: _t->updateDisplayUnit(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SendBeansEntry::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SendBeansEntry::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_SendBeansEntry,
      qt_meta_data_SendBeansEntry, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SendBeansEntry::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SendBeansEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SendBeansEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SendBeansEntry))
        return static_cast<void*>(const_cast< SendBeansEntry*>(this));
    return QFrame::qt_metacast(_clname);
}

int SendBeansEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void SendBeansEntry::removeEntry(SendBeansEntry * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SendBeansEntry::payAmountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
