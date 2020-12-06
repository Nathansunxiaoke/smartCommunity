/****************************************************************************
** Meta object code from reading C++ file 'usermainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "usermainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usermainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UserMainWindow_t {
    QByteArrayData data[22];
    char stringdata0[270];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserMainWindow_t qt_meta_stringdata_UserMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "UserMainWindow"
QT_MOC_LITERAL(1, 15, 10), // "sndNetwork"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "oldledStatus"
QT_MOC_LITERAL(4, 40, 7), // "lampled"
QT_MOC_LITERAL(5, 48, 6), // "bedled"
QT_MOC_LITERAL(6, 55, 6), // "kitled"
QT_MOC_LITERAL(7, 62, 5), // "wcled"
QT_MOC_LITERAL(8, 68, 11), // "upDateTimer"
QT_MOC_LITERAL(9, 80, 9), // "upWeather"
QT_MOC_LITERAL(10, 90, 4), // "upAd"
QT_MOC_LITERAL(11, 95, 10), // "upTextNews"
QT_MOC_LITERAL(12, 106, 11), // "parsingJson"
QT_MOC_LITERAL(13, 118, 14), // "QNetworkReply*"
QT_MOC_LITERAL(14, 133, 5), // "reply"
QT_MOC_LITERAL(15, 139, 23), // "on_serverButton_clicked"
QT_MOC_LITERAL(16, 163, 23), // "on_retuenButton_clicked"
QT_MOC_LITERAL(17, 187, 15), // "sndSubmitServer"
QT_MOC_LITERAL(18, 203, 3), // "msg"
QT_MOC_LITERAL(19, 207, 20), // "on_ledButton_clicked"
QT_MOC_LITERAL(20, 228, 18), // "rcvChangeledStatus"
QT_MOC_LITERAL(21, 247, 22) // "on_videoButton_clicked"

    },
    "UserMainWindow\0sndNetwork\0\0oldledStatus\0"
    "lampled\0bedled\0kitled\0wcled\0upDateTimer\0"
    "upWeather\0upAd\0upTextNews\0parsingJson\0"
    "QNetworkReply*\0reply\0on_serverButton_clicked\0"
    "on_retuenButton_clicked\0sndSubmitServer\0"
    "msg\0on_ledButton_clicked\0rcvChangeledStatus\0"
    "on_videoButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    4,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   89,    2, 0x08 /* Private */,
       9,    0,   90,    2, 0x08 /* Private */,
      10,    0,   91,    2, 0x08 /* Private */,
      11,    0,   92,    2, 0x08 /* Private */,
      12,    1,   93,    2, 0x08 /* Private */,
      15,    0,   96,    2, 0x08 /* Private */,
      16,    0,   97,    2, 0x08 /* Private */,
      17,    1,   98,    2, 0x08 /* Private */,
      19,    0,  101,    2, 0x08 /* Private */,
      20,    4,  102,    2, 0x08 /* Private */,
      21,    0,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,    4,    5,    6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,    4,    5,    6,    7,
    QMetaType::Void,

       0        // eod
};

void UserMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UserMainWindow *_t = static_cast<UserMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sndNetwork(); break;
        case 1: _t->oldledStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 2: _t->upDateTimer(); break;
        case 3: _t->upWeather(); break;
        case 4: _t->upAd(); break;
        case 5: _t->upTextNews(); break;
        case 6: _t->parsingJson((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->on_serverButton_clicked(); break;
        case 8: _t->on_retuenButton_clicked(); break;
        case 9: _t->sndSubmitServer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_ledButton_clicked(); break;
        case 11: _t->rcvChangeledStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 12: _t->on_videoButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UserMainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserMainWindow::sndNetwork)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (UserMainWindow::*_t)(bool , bool , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserMainWindow::oldledStatus)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject UserMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_UserMainWindow.data,
      qt_meta_data_UserMainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UserMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UserMainWindow.stringdata0))
        return static_cast<void*>(const_cast< UserMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int UserMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void UserMainWindow::sndNetwork()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void UserMainWindow::oldledStatus(bool _t1, bool _t2, bool _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
