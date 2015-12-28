/****************************************************************************
** Meta object code from reading C++ file 'BuildingModelManip.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gazebo/gui/building/BuildingModelManip.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BuildingModelManip.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gazebo__gui__BuildingModelManip[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      60,   33,   32,   32, 0x08,
     117,   33,   32,   32, 0x08,
     193,  184,   32,   32, 0x08,
     251,  233,   32,   32, 0x08,
     313,  291,   32,   32, 0x08,
     356,  349,   32,   32, 0x08,
     387,  379,   32,   32, 0x08,
     418,  411,   32,   32, 0x08,
     447,  441,   32,   32, 0x08,
     475,  469,   32,   32, 0x08,
     503,  497,   32,   32, 0x08,
     530,  525,   32,   32, 0x08,
     551,   32,   32,   32, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__BuildingModelManip[] = {
    "gazebo::gui::BuildingModelManip\0\0"
    "_x,_y,_z,_roll,_pitch,_yaw\0"
    "OnPoseChanged(double,double,double,double,double,double)\0"
    "OnPoseOriginTransformed(double,double,double,double,double,double)\0"
    "_x,_y,_z\0OnPositionChanged(double,double,double)\0"
    "_roll,_pitch,_yaw\0"
    "OnRotationChanged(double,double,double)\0"
    "_width,_depth,_height\0"
    "OnSizeChanged(double,double,double)\0"
    "_width\0OnWidthChanged(double)\0_height\0"
    "OnHeightChanged(double)\0_depth\0"
    "OnDepthChanged(double)\0_posX\0"
    "OnPosXChanged(double)\0_posY\0"
    "OnPosYChanged(double)\0_posZ\0"
    "OnPosZChanged(double)\0_yaw\0"
    "OnYawChanged(double)\0OnDeleted()\0"
};

void gazebo::gui::BuildingModelManip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BuildingModelManip *_t = static_cast<BuildingModelManip *>(_o);
        switch (_id) {
        case 0: _t->OnPoseChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 1: _t->OnPoseOriginTransformed((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 2: _t->OnPositionChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 3: _t->OnRotationChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 4: _t->OnSizeChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 5: _t->OnWidthChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->OnHeightChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->OnDepthChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->OnPosXChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->OnPosYChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->OnPosZChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->OnYawChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->OnDeleted(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData gazebo::gui::BuildingModelManip::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::BuildingModelManip::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_gazebo__gui__BuildingModelManip,
      qt_meta_data_gazebo__gui__BuildingModelManip, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::BuildingModelManip::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::BuildingModelManip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::BuildingModelManip::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__BuildingModelManip))
        return static_cast<void*>(const_cast< BuildingModelManip*>(this));
    return QObject::qt_metacast(_clname);
}

int gazebo::gui::BuildingModelManip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
