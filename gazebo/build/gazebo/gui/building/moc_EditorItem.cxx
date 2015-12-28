/****************************************************************************
** Meta object code from reading C++ file 'EditorItem.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gazebo/gui/building/EditorItem.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditorItem.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gazebo__gui__EditorItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: signature, parameters, type, tag, flags
      47,   25,   24,   24, 0x05,
     108,   81,   24,   24, 0x05,
     163,   81,   24,   24, 0x05,
     237,  228,   24,   24, 0x05,
     293,  275,   24,   24, 0x05,
     338,  331,   24,   24, 0x05,
     366,  359,   24,   24, 0x05,
     395,  387,   24,   24, 0x05,
     423,  417,   24,   24, 0x05,
     449,  443,   24,   24, 0x05,
     475,  469,   24,   24, 0x05,
     500,  495,   24,   24, 0x05,
     519,   24,   24,   24, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__EditorItem[] = {
    "gazebo::gui::EditorItem\0\0_width,_depth,_height\0"
    "SizeChanged(double,double,double)\0"
    "_x,_y,_z,_roll,_pitch,_yaw\0"
    "PoseChanged(double,double,double,double,double,double)\0"
    "PoseOriginTransformed(double,double,double,double,double,double)\0"
    "_x,_y,_z\0PositionChanged(double,double,double)\0"
    "_roll,_pitch,_yaw\0"
    "RotationChanged(double,double,double)\0"
    "_width\0WidthChanged(double)\0_depth\0"
    "DepthChanged(double)\0_height\0"
    "HeightChanged(double)\0_posX\0"
    "PosXChanged(double)\0_posY\0PosYChanged(double)\0"
    "_posZ\0PosZChanged(double)\0_yaw\0"
    "YawChanged(double)\0ItemDeleted()\0"
};

void gazebo::gui::EditorItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditorItem *_t = static_cast<EditorItem *>(_o);
        switch (_id) {
        case 0: _t->SizeChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->PoseChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 2: _t->PoseOriginTransformed((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 3: _t->PositionChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 4: _t->RotationChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 5: _t->WidthChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->DepthChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->HeightChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->PosXChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->PosYChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->PosZChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->YawChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->ItemDeleted(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData gazebo::gui::EditorItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::EditorItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_gazebo__gui__EditorItem,
      qt_meta_data_gazebo__gui__EditorItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::EditorItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::EditorItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::EditorItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__EditorItem))
        return static_cast<void*>(const_cast< EditorItem*>(this));
    return QObject::qt_metacast(_clname);
}

int gazebo::gui::EditorItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void gazebo::gui::EditorItem::SizeChanged(double _t1, double _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gazebo::gui::EditorItem::PoseChanged(double _t1, double _t2, double _t3, double _t4, double _t5, double _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gazebo::gui::EditorItem::PoseOriginTransformed(double _t1, double _t2, double _t3, double _t4, double _t5, double _t6)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void gazebo::gui::EditorItem::PositionChanged(double _t1, double _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void gazebo::gui::EditorItem::RotationChanged(double _t1, double _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void gazebo::gui::EditorItem::WidthChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void gazebo::gui::EditorItem::DepthChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void gazebo::gui::EditorItem::HeightChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void gazebo::gui::EditorItem::PosXChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void gazebo::gui::EditorItem::PosYChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void gazebo::gui::EditorItem::PosZChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void gazebo::gui::EditorItem::YawChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void gazebo::gui::EditorItem::ItemDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 12, 0);
}
QT_END_MOC_NAMESPACE
