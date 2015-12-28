/****************************************************************************
** Meta object code from reading C++ file 'JointInspector.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gazebo/gui/model/JointInspector.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JointInspector.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gazebo__gui__JointInspector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   28,   28,   28, 0x08,
      50,   28,   28,   28, 0x08,
      60,   28,   28,   28, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__JointInspector[] = {
    "gazebo::gui::JointInspector\0\0Applied()\0"
    "OnCancel()\0OnApply()\0OnOK()\0"
};

void gazebo::gui::JointInspector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JointInspector *_t = static_cast<JointInspector *>(_o);
        switch (_id) {
        case 0: _t->Applied(); break;
        case 1: _t->OnCancel(); break;
        case 2: _t->OnApply(); break;
        case 3: _t->OnOK(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData gazebo::gui::JointInspector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::JointInspector::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_gazebo__gui__JointInspector,
      qt_meta_data_gazebo__gui__JointInspector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::JointInspector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::JointInspector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::JointInspector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__JointInspector))
        return static_cast<void*>(const_cast< JointInspector*>(this));
    return QDialog::qt_metacast(_clname);
}

int gazebo::gui::JointInspector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void gazebo::gui::JointInspector::Applied()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
