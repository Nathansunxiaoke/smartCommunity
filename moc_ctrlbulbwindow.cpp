/****************************************************************************
** Meta object code from reading C++ file 'ctrlbulbwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ctrlbulbwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctrlbulbwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CtrlBulbWindow_t {
    QByteArrayData data[14];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CtrlBulbWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CtrlBulbWindow_t qt_meta_stringdata_CtrlBulbWindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CtrlBulbWindow"
QT_MOC_LITERAL(1, 15, 14), // "changeledStaus"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "lampled"
QT_MOC_LITERAL(4, 39, 6), // "bedled"
QT_MOC_LITERAL(5, 46, 6), // "kitled"
QT_MOC_LITERAL(6, 53, 5), // "wcled"
QT_MOC_LITERAL(7, 59, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(8, 82, 21), // "on_lampButton_clicked"
QT_MOC_LITERAL(9, 104, 24), // "on_bedroonButton_clicked"
QT_MOC_LITERAL(10, 129, 24), // "on_kitchenButton_clicked"
QT_MOC_LITERAL(11, 154, 19), // "on_wcButton_clicked"
QT_MOC_LITERAL(12, 174, 21), // "on_ctrlButton_clicked"
QT_MOC_LITERAL(13, 196, 12) // "newledStatus"

    },
    "CtrlBulbWindow\0changeledStaus\0\0lampled\0"
    "bedled\0kitled\0wcled\0on_closeButton_clicked\0"
    "on_lampButton_clicked\0on_bedroonButton_clicked\0"
    "on_kitchenButton_clicked\0on_wcButton_clicked\0"
    "on_ctrlButton_clicked\0newledStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CtrlBulbWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   63,    2, 0x08 /* Private */,
       8,    0,   64,    2, 0x08 /* Private */,
       9,    0,   65,    2, 0x08 /* Private */,
      10,    0,   66,    2, 0x08 /* Private */,
      11,    0,   67,    2, 0x08 /* Private */,
      12,    0,   68,    2, 0x08 /* Private */,
      13,    4,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,    3,    4,    5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,    3,    4,    5,    6,

       0        // eod
};

void CtrlBulbWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CtrlBulbWindow *_t = static_cast<CtrlBulbWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeledStaus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 1: _t->on_closeButton_clicked(); break;
        case 2: _t->on_lampButton_clicked(); break;
        case 3: _t->on_bedroonButton_clicked(); break;
        case 4: _t->on_kitchenButton_clicked(); break;
        case 5: _t->on_wcButton_clicked(); break;
        case 6: _t->on_ctrlButton_clicked(); break;
        case 7: _t->newledStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CtrlBulbWindow::*_t)(bool , bool , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CtrlBulbWindow::changeledStaus)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CtrlBulbWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CtrlBulbWindow.data,
      qt_meta_data_CtrlBulbWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CtrlBulbWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CtrlBulbWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CtrlBulbWindow.stringdata0))
        return static_cast<void*>(const_cast< CtrlBulbWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int CtrlBulbWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void CtrlBulbWindow::changeledStaus(bool _t1, bool _t2, bool _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
