/****************************************************************************
** Meta object code from reading C++ file 'FloorItem.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gazebo/gui/building/FloorItem.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FloorItem.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gazebo__gui__FloorItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x08,
      39,   23,   23,   23, 0x08,
      64,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__FloorItem[] = {
    "gazebo::gui::FloorItem\0\0NotifyChange()\0"
    "RecalculateBoundingBox()\0WallDeleted()\0"
};

void gazebo::gui::FloorItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FloorItem *_t = static_cast<FloorItem *>(_o);
        switch (_id) {
        case 0: _t->NotifyChange(); break;
        case 1: _t->RecalculateBoundingBox(); break;
        case 2: _t->WallDeleted(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData gazebo::gui::FloorItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::FloorItem::staticMetaObject = {
    { &RectItem::staticMetaObject, qt_meta_stringdata_gazebo__gui__FloorItem,
      qt_meta_data_gazebo__gui__FloorItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::FloorItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::FloorItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::FloorItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__FloorItem))
        return static_cast<void*>(const_cast< FloorItem*>(this));
    if (!strcmp(_clname, "BuildingItem"))
        return static_cast< BuildingItem*>(const_cast< FloorItem*>(this));
    return RectItem::qt_metacast(_clname);
}

int gazebo::gui::FloorItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RectItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
