/****************************************************************************
** Meta object code from reading C++ file 'sendbeansdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/sendbeansdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendbeansdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SendBeansDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      25,   16,   16,   16, 0x0a,
      34,   16,   16,   16, 0x0a,
      59,   16,   43,   16, 0x0a,
      70,   16,   16,   16, 0x0a,
     141,   92,   16,   16, 0x0a,
     181,   16,   16,   16, 0x08,
     211,  205,   16,   16, 0x08,
     240,   16,   16,   16, 0x08,
     260,   16,   16,   16, 0x08,
     292,   16,   16,   16, 0x08,
     319,   16,   16,   16, 0x08,
     349,   16,   16,   16, 0x08,
     382,   16,   16,   16, 0x08,
     408,   16,   16,   16, 0x08,
     439,   16,   16,   16, 0x08,
     468,   16,   16,   16, 0x08,
     494,   16,   16,   16, 0x08,
     525,   16,   16,   16, 0x08,
     553,   16,   16,   16, 0x08,
     584,   16,   16,   16, 0x08,
     616,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SendBeansDialog[] = {
    "SendBeansDialog\0\0clear()\0reject()\0"
    "accept()\0SendBeansEntry*\0addEntry()\0"
    "updateRemoveEnabled()\0"
    "balance,stake,unconfirmedBalance,immatureBalance\0"
    "setBalance(qint64,qint64,qint64,qint64)\0"
    "on_sendButton_clicked()\0entry\0"
    "removeEntry(SendBeansEntry*)\0"
    "updateDisplayUnit()\0beanControlFeatureChanged(bool)\0"
    "beanControlButtonClicked()\0"
    "beanControlChangeChecked(int)\0"
    "beanControlChangeEdited(QString)\0"
    "beanControlUpdateLabels()\0"
    "beanControlClipboardQuantity()\0"
    "beanControlClipboardAmount()\0"
    "beanControlClipboardFee()\0"
    "beanControlClipboardAfterFee()\0"
    "beanControlClipboardBytes()\0"
    "beanControlClipboardPriority()\0"
    "beanControlClipboardLowOutput()\0"
    "beanControlClipboardChange()\0"
};

void SendBeansDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SendBeansDialog *_t = static_cast<SendBeansDialog *>(_o);
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->reject(); break;
        case 2: _t->accept(); break;
        case 3: { SendBeansEntry* _r = _t->addEntry();
            if (_a[0]) *reinterpret_cast< SendBeansEntry**>(_a[0]) = _r; }  break;
        case 4: _t->updateRemoveEnabled(); break;
        case 5: _t->setBalance((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])),(*reinterpret_cast< qint64(*)>(_a[4]))); break;
        case 6: _t->on_sendButton_clicked(); break;
        case 7: _t->removeEntry((*reinterpret_cast< SendBeansEntry*(*)>(_a[1]))); break;
        case 8: _t->updateDisplayUnit(); break;
        case 9: _t->beanControlFeatureChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->beanControlButtonClicked(); break;
        case 11: _t->beanControlChangeChecked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->beanControlChangeEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->beanControlUpdateLabels(); break;
        case 14: _t->beanControlClipboardQuantity(); break;
        case 15: _t->beanControlClipboardAmount(); break;
        case 16: _t->beanControlClipboardFee(); break;
        case 17: _t->beanControlClipboardAfterFee(); break;
        case 18: _t->beanControlClipboardBytes(); break;
        case 19: _t->beanControlClipboardPriority(); break;
        case 20: _t->beanControlClipboardLowOutput(); break;
        case 21: _t->beanControlClipboardChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SendBeansDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SendBeansDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SendBeansDialog,
      qt_meta_data_SendBeansDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SendBeansDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SendBeansDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SendBeansDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SendBeansDialog))
        return static_cast<void*>(const_cast< SendBeansDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SendBeansDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
