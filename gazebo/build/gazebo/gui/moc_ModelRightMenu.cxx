/****************************************************************************
** Meta object code from reading C++ file 'ModelRightMenu.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gazebo/gui/ModelRightMenu.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModelRightMenu.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gazebo__gui__ModelRightMenu[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x08,
      40,   28,   28,   28, 0x08,
      57,   51,   28,   28, 0x08,
      79,   28,   28,   28, 0x28,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__ModelRightMenu[] = {
    "gazebo::gui::ModelRightMenu\0\0OnMoveTo()\0"
    "OnFollow()\0_name\0OnDelete(std::string)\0"
    "OnDelete()\0"
};

void gazebo::gui::ModelRightMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ModelRightMenu *_t = static_cast<ModelRightMenu *>(_o);
        switch (_id) {
        case 0: _t->OnMoveTo(); break;
        case 1: _t->OnFollow(); break;
        case 2: _t->OnDelete((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 3: _t->OnDelete(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData gazebo::gui::ModelRightMenu::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::ModelRightMenu::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_gazebo__gui__ModelRightMenu,
      qt_meta_data_gazebo__gui__ModelRightMenu, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::ModelRightMenu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::ModelRightMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::ModelRightMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__ModelRightMenu))
        return static_cast<void*>(const_cast< ModelRightMenu*>(this));
    return QObject::qt_metacast(_clname);
}

int gazebo::gui::ModelRightMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_gazebo__gui__ViewState[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__ViewState[] = {
    "gazebo::gui::ViewState\0\0Callback()\0"
};

void gazebo::gui::ViewState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ViewState *_t = static_cast<ViewState *>(_o);
        switch (_id) {
        case 0: _t->Callback(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData gazebo::gui::ViewState::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::ViewState::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_gazebo__gui__ViewState,
      qt_meta_data_gazebo__gui__ViewState, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::ViewState::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::ViewState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::ViewState::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__ViewState))
        return static_cast<void*>(const_cast< ViewState*>(this));
    return QObject::qt_metacast(_clname);
}

int gazebo::gui::ViewState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
