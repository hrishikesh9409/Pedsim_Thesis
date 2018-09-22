/****************************************************************************
** Meta object code from reading C++ file 'loadscene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "loadscene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loadscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Loadscene_t {
    QByteArrayData data[8];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Loadscene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Loadscene_t qt_meta_stringdata_Loadscene = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Loadscene"
QT_MOC_LITERAL(1, 10, 11), // "processData"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "data"
QT_MOC_LITERAL(4, 28, 16), // "printCoordinates"
QT_MOC_LITERAL(5, 45, 25), // "std::vector<coordinates>&"
QT_MOC_LITERAL(6, 71, 6), // "points"
QT_MOC_LITERAL(7, 78, 12) // "divide_Cells"

    },
    "Loadscene\0processData\0\0data\0"
    "printCoordinates\0std::vector<coordinates>&\0"
    "points\0divide_Cells"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Loadscene[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    1,   32,    2, 0x08 /* Private */,
       7,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void Loadscene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Loadscene *_t = static_cast<Loadscene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->processData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->printCoordinates((*reinterpret_cast< std::vector<coordinates>(*)>(_a[1]))); break;
        case 2: _t->divide_Cells((*reinterpret_cast< std::vector<coordinates>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Loadscene::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Loadscene.data,
      qt_meta_data_Loadscene,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Loadscene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Loadscene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Loadscene.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Loadscene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
