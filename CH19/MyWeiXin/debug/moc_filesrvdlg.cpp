/****************************************************************************
** Meta object code from reading C++ file 'filesrvdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../filesrvdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filesrvdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileSrvDlg_t {
    QByteArrayData data[10];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileSrvDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileSrvDlg_t qt_meta_stringdata_FileSrvDlg = {
    {
QT_MOC_LITERAL(0, 0, 10), // "FileSrvDlg"
QT_MOC_LITERAL(1, 11, 12), // "sendFileName"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 4), // "name"
QT_MOC_LITERAL(4, 30, 10), // "sndChatMsg"
QT_MOC_LITERAL(5, 41, 15), // "refreshProgress"
QT_MOC_LITERAL(6, 57, 5), // "bynum"
QT_MOC_LITERAL(7, 63, 29), // "on_openFilePushButton_clicked"
QT_MOC_LITERAL(8, 93, 29), // "on_sendFilePushButton_clicked"
QT_MOC_LITERAL(9, 123, 29) // "on_srvClosePushButton_clicked"

    },
    "FileSrvDlg\0sendFileName\0\0name\0sndChatMsg\0"
    "refreshProgress\0bynum\0"
    "on_openFilePushButton_clicked\0"
    "on_sendFilePushButton_clicked\0"
    "on_srvClosePushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileSrvDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x08 /* Private */,
       5,    1,   48,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FileSrvDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileSrvDlg *_t = static_cast<FileSrvDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendFileName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sndChatMsg(); break;
        case 2: _t->refreshProgress((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->on_openFilePushButton_clicked(); break;
        case 4: _t->on_sendFilePushButton_clicked(); break;
        case 5: _t->on_srvClosePushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileSrvDlg::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileSrvDlg::sendFileName)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileSrvDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FileSrvDlg.data,
      qt_meta_data_FileSrvDlg,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FileSrvDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileSrvDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileSrvDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FileSrvDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void FileSrvDlg::sendFileName(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
