/****************************************************************************
** Meta object code from reading C++ file 'JointMaker.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gazebo/gui/model/JointMaker.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JointMaker.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gazebo__gui__JointMaker[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__JointMaker[] = {
    "gazebo::gui::JointMaker\0\0JointAdded()\0"
    "OnOpenInspector()\0"
};

void gazebo::gui::JointMaker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JointMaker *_t = static_cast<JointMaker *>(_o);
        switch (_id) {
        case 0: _t->JointAdded(); break;
        case 1: _t->OnOpenInspector(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData gazebo::gui::JointMaker::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::JointMaker::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_gazebo__gui__JointMaker,
      qt_meta_data_gazebo__gui__JointMaker, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::JointMaker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::JointMaker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::JointMaker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__JointMaker))
        return static_cast<void*>(const_cast< JointMaker*>(this));
    return QObject::qt_metacast(_clname);
}

int gazebo::gui::JointMaker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void gazebo::gui::JointMaker::JointAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_gazebo__gui__JointData[] = {

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
      24,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__JointData[] = {
    "gazebo::gui::JointData\0\0OnApply()\0"
};

void gazebo::gui::JointData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JointData *_t = static_cast<JointData *>(_o);
        switch (_id) {
        case 0: _t->OnApply(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData gazebo::gui::JointData::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::JointData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_gazebo__gui__JointData,
      qt_meta_data_gazebo__gui__JointData, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::JointData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::JointData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::JointData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__JointData))
        return static_cast<void*>(const_cast< JointData*>(this));
    return QObject::qt_metacast(_clname);
}

int gazebo::gui::JointData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
