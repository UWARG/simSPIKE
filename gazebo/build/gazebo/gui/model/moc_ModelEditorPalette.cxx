/****************************************************************************
** Meta object code from reading C++ file 'ModelEditorPalette.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gazebo/gui/model/ModelEditorPalette.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModelEditorPalette.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gazebo__gui__ModelEditorPalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      47,   33,   32,   32, 0x08,
      85,   32,   32,   32, 0x08,
      98,   32,   32,   32, 0x08,
     109,   32,   32,   32, 0x08,
     117,   32,   32,   32, 0x08,
     128,   32,   32,   32, 0x08,
     143,   32,   32,   32, 0x08,
     158,   32,   32,   32, 0x08,
     174,   32,   32,   32, 0x08,
     190,   32,   32,   32, 0x08,
     205,   32,   32,   32, 0x08,
     224,   32,   32,   32, 0x08,
     238,   32,   32,   32, 0x08,
     253,   32,   32,   32, 0x08,
     267,   32,   32,   32, 0x08,
     278,   32,   32,   32, 0x08,
     294,   32,   32,   32, 0x08,
     303,   32,   32,   32, 0x08,
     315,   32,   32,   32, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__ModelEditorPalette[] = {
    "gazebo::gui::ModelEditorPalette\0\0"
    "_item,_column\0OnItemSelection(QTreeWidgetItem*,int)\0"
    "OnCylinder()\0OnSphere()\0OnBox()\0"
    "OnCustom()\0OnFixedJoint()\0OnHingeJoint()\0"
    "OnHinge2Joint()\0OnSliderJoint()\0"
    "OnScrewJoint()\0OnUniversalJoint()\0"
    "OnBallJoint()\0OnJointAdded()\0OnPartAdded()\0"
    "OnStatic()\0OnAutoDisable()\0OnSave()\0"
    "OnDiscard()\0OnDone()\0"
};

void gazebo::gui::ModelEditorPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ModelEditorPalette *_t = static_cast<ModelEditorPalette *>(_o);
        switch (_id) {
        case 0: _t->OnItemSelection((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->OnCylinder(); break;
        case 2: _t->OnSphere(); break;
        case 3: _t->OnBox(); break;
        case 4: _t->OnCustom(); break;
        case 5: _t->OnFixedJoint(); break;
        case 6: _t->OnHingeJoint(); break;
        case 7: _t->OnHinge2Joint(); break;
        case 8: _t->OnSliderJoint(); break;
        case 9: _t->OnScrewJoint(); break;
        case 10: _t->OnUniversalJoint(); break;
        case 11: _t->OnBallJoint(); break;
        case 12: _t->OnJointAdded(); break;
        case 13: _t->OnPartAdded(); break;
        case 14: _t->OnStatic(); break;
        case 15: _t->OnAutoDisable(); break;
        case 16: _t->OnSave(); break;
        case 17: _t->OnDiscard(); break;
        case 18: _t->OnDone(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData gazebo::gui::ModelEditorPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::ModelEditorPalette::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gazebo__gui__ModelEditorPalette,
      qt_meta_data_gazebo__gui__ModelEditorPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::ModelEditorPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::ModelEditorPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::ModelEditorPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__ModelEditorPalette))
        return static_cast<void*>(const_cast< ModelEditorPalette*>(this));
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::ModelEditorPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
