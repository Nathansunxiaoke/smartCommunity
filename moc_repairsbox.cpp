/****************************************************************************
** Meta object code from reading C++ file 'repairsbox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "repairsbox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'repairsbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RepairsBox_t {
    QByteArrayData data[6];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RepairsBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RepairsBox_t qt_meta_stringdata_RepairsBox = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RepairsBox"
QT_MOC_LITERAL(1, 11, 9), // "submitMsg"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 3), // "msg"
QT_MOC_LITERAL(4, 26, 23), // "on_ckose2Button_clicked"
QT_MOC_LITERAL(5, 50, 23) // "on_submitButton_clicked"

    },
    "RepairsBox\0submitMsg\0\0msg\0"
    "on_ckose2Button_clicked\0on_submitButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RepairsBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x08 /* Private */,
       5,    0,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RepairsBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RepairsBox *_t = static_cast<RepairsBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->submitMsg((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_ckose2Button_clicked(); break;
        case 2: _t->on_submitButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RepairsBox::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RepairsBox::submitMsg)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject RepairsBox::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_RepairsBox.data,
      qt_meta_data_RepairsBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RepairsBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RepairsBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RepairsBox.stringdata0))
        return static_cast<void*>(const_cast< RepairsBox*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int RepairsBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void RepairsBox::submitMsg(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
