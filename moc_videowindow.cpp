/****************************************************************************
** Meta object code from reading C++ file 'videowindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "videowindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videowindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VideoWindow_t {
    QByteArrayData data[8];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoWindow_t qt_meta_stringdata_VideoWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "VideoWindow"
QT_MOC_LITERAL(1, 12, 23), // "on_returnButton_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 25), // "on_addVideoButton_clicked"
QT_MOC_LITERAL(4, 63, 31), // "on_playerListWidget_itemClicked"
QT_MOC_LITERAL(5, 95, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(6, 112, 4), // "item"
QT_MOC_LITERAL(7, 117, 26) // "on_startPlayButton_clicked"

    },
    "VideoWindow\0on_returnButton_clicked\0"
    "\0on_addVideoButton_clicked\0"
    "on_playerListWidget_itemClicked\0"
    "QListWidgetItem*\0item\0on_startPlayButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       7,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void VideoWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VideoWindow *_t = static_cast<VideoWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_returnButton_clicked(); break;
        case 1: _t->on_addVideoButton_clicked(); break;
        case 2: _t->on_playerListWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->on_startPlayButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject VideoWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_VideoWindow.data,
      qt_meta_data_VideoWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VideoWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VideoWindow.stringdata0))
        return static_cast<void*>(const_cast< VideoWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int VideoWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
