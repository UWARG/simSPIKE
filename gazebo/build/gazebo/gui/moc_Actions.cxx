/****************************************************************************
** Meta object code from reading C++ file 'Actions.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gazebo/gui/Actions.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Actions.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gazebo__gui__DeleteAction[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      38,   27,   26,   26, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__DeleteAction[] = {
    "gazebo::gui::DeleteAction\0\0_modelName\0"
    "DeleteSignal(std::string)\0"
};

void gazebo::gui::DeleteAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DeleteAction *_t = static_cast<DeleteAction *>(_o);
        switch (_id) {
        case 0: _t->DeleteSignal((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData gazebo::gui::DeleteAction::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::DeleteAction::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_gazebo__gui__DeleteAction,
      qt_meta_data_gazebo__gui__DeleteAction, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::DeleteAction::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::DeleteAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::DeleteAction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__DeleteAction))
        return static_cast<void*>(const_cast< DeleteAction*>(this));
    return QAction::qt_metacast(_clname);
}

int gazebo::gui::DeleteAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void gazebo::gui::DeleteAction::DeleteSignal(const std::string & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
