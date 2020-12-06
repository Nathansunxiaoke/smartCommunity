/****************************************************************************
** Meta object code from reading C++ file 'loginwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "loginwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_loginWindow_t {
    QByteArrayData data[13];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_loginWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_loginWindow_t qt_meta_stringdata_loginWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "loginWindow"
QT_MOC_LITERAL(1, 12, 11), // "reginstatus"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 6), // "status"
QT_MOC_LITERAL(4, 32, 21), // "on_skipButton_clicked"
QT_MOC_LITERAL(5, 54, 9), // "countDown"
QT_MOC_LITERAL(6, 64, 22), // "on_reginButton_clicked"
QT_MOC_LITERAL(7, 87, 21), // "on_linkButton_clicked"
QT_MOC_LITERAL(8, 109, 13), // "readServerMsg"
QT_MOC_LITERAL(9, 123, 22), // "on_loginButton_clicked"
QT_MOC_LITERAL(10, 146, 13), // "rcvLinkNework"
QT_MOC_LITERAL(11, 160, 32), // "on_lNamelineEdit_editingFinished"
QT_MOC_LITERAL(12, 193, 34) // "on_lpasswdlineEdit_editingFin..."

    },
    "loginWindow\0reginstatus\0\0status\0"
    "on_skipButton_clicked\0countDown\0"
    "on_reginButton_clicked\0on_linkButton_clicked\0"
    "readServerMsg\0on_loginButton_clicked\0"
    "rcvLinkNework\0on_lNamelineEdit_editingFinished\0"
    "on_lpasswdlineEdit_editingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_loginWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   67,    2, 0x08 /* Private */,
       5,    0,   68,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void loginWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        loginWindow *_t = static_cast<loginWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reginstatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_skipButton_clicked(); break;
        case 2: _t->countDown(); break;
        case 3: _t->on_reginButton_clicked(); break;
        case 4: _t->on_linkButton_clicked(); break;
        case 5: _t->readServerMsg(); break;
        case 6: _t->on_loginButton_clicked(); break;
        case 7: _t->rcvLinkNework(); break;
        case 8: _t->on_lNamelineEdit_editingFinished(); break;
        case 9: _t->on_lpasswdlineEdit_editingFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (loginWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&loginWindow::reginstatus)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject loginWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_loginWindow.data,
      qt_meta_data_loginWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *loginWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *loginWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_loginWindow.stringdata0))
        return static_cast<void*>(const_cast< loginWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int loginWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void loginWindow::reginstatus(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
