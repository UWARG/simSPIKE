/****************************************************************************
** Meta object code from reading C++ file 'BuildingEditorPalette.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gazebo/gui/building/BuildingEditorPalette.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BuildingEditorPalette.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gazebo__gui__BuildingEditorPalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      36,   35,   35,   35, 0x08,
      49,   35,   35,   35, 0x08,
      63,   35,   35,   35, 0x08,
      75,   35,   35,   35, 0x08,
      88,   35,   35,   35, 0x08,
     100,   35,   35,   35, 0x08,
     109,   35,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__BuildingEditorPalette[] = {
    "gazebo::gui::BuildingEditorPalette\0\0"
    "OnDrawWall()\0OnAddWindow()\0OnAddDoor()\0"
    "OnAddStair()\0OnDiscard()\0OnSave()\0"
    "OnDone()\0"
};

void gazebo::gui::BuildingEditorPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BuildingEditorPalette *_t = static_cast<BuildingEditorPalette *>(_o);
        switch (_id) {
        case 0: _t->OnDrawWall(); break;
        case 1: _t->OnAddWindow(); break;
        case 2: _t->OnAddDoor(); break;
        case 3: _t->OnAddStair(); break;
        case 4: _t->OnDiscard(); break;
        case 5: _t->OnSave(); break;
        case 6: _t->OnDone(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData gazebo::gui::BuildingEditorPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::BuildingEditorPalette::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gazebo__gui__BuildingEditorPalette,
      qt_meta_data_gazebo__gui__BuildingEditorPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::BuildingEditorPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::BuildingEditorPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::BuildingEditorPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__BuildingEditorPalette))
        return static_cast<void*>(const_cast< BuildingEditorPalette*>(this));
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::BuildingEditorPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
