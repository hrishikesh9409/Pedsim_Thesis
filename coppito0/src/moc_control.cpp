/****************************************************************************
** Meta object code from reading C++ file 'control.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "control.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'control.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Control_t {
    QByteArrayData data[20];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Control_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Control_t qt_meta_stringdata_Control = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Control"
QT_MOC_LITERAL(1, 8, 6), // "zoomin"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 7), // "zoomout"
QT_MOC_LITERAL(4, 24, 13), // "showWaypoints"
QT_MOC_LITERAL(5, 38, 4), // "show"
QT_MOC_LITERAL(6, 43, 8), // "showTree"
QT_MOC_LITERAL(7, 52, 12), // "simWallForce"
QT_MOC_LITERAL(8, 65, 5), // "value"
QT_MOC_LITERAL(9, 71, 11), // "simPedForce"
QT_MOC_LITERAL(10, 83, 8), // "simSpeed"
QT_MOC_LITERAL(11, 92, 4), // "simh"
QT_MOC_LITERAL(12, 97, 11), // "mlLookAhead"
QT_MOC_LITERAL(13, 109, 10), // "mlTendency"
QT_MOC_LITERAL(14, 120, 10), // "showForces"
QT_MOC_LITERAL(15, 131, 13), // "showDirection"
QT_MOC_LITERAL(16, 145, 6), // "setfps"
QT_MOC_LITERAL(17, 152, 3), // "fps"
QT_MOC_LITERAL(18, 156, 11), // "followAgent"
QT_MOC_LITERAL(19, 168, 6) // "follow"

    },
    "Control\0zoomin\0\0zoomout\0showWaypoints\0"
    "show\0showTree\0simWallForce\0value\0"
    "simPedForce\0simSpeed\0simh\0mlLookAhead\0"
    "mlTendency\0showForces\0showDirection\0"
    "setfps\0fps\0followAgent\0follow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Control[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   86,    2, 0x0a /* Public */,
       6,    1,   89,    2, 0x0a /* Public */,
       7,    1,   92,    2, 0x0a /* Public */,
       9,    1,   95,    2, 0x0a /* Public */,
      10,    1,   98,    2, 0x0a /* Public */,
      11,    1,  101,    2, 0x0a /* Public */,
      12,    1,  104,    2, 0x0a /* Public */,
      13,    1,  107,    2, 0x0a /* Public */,
      14,    1,  110,    2, 0x0a /* Public */,
      15,    1,  113,    2, 0x0a /* Public */,
      16,    1,  116,    2, 0x0a /* Public */,
      18,    1,  119,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Bool,   19,

       0        // eod
};

void Control::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Control *_t = static_cast<Control *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->zoomin(); break;
        case 1: _t->zoomout(); break;
        case 2: _t->showWaypoints((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->showTree((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->simWallForce((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->simPedForce((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->simSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->simh((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->mlLookAhead((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->mlTendency((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->showForces((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->showDirection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setfps((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->followAgent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Control::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Control::zoomin)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Control::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Control::zoomout)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Control::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_Control.data,
      qt_meta_data_Control,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Control::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Control::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Control.stringdata0))
        return static_cast<void*>(this);
    return QDockWidget::qt_metacast(_clname);
}

int Control::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Control::zoomin()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Control::zoomout()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
