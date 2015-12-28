/****************************************************************************
** Meta object code from reading C++ file 'ModelListWidget_TEST.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gazebo/gui/ModelListWidget_TEST.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModelListWidget_TEST.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ModelListWidget_TEST[] = {

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
      22,   21,   21,   21, 0x08,
      35,   21,   21,   21, 0x08,
      48,   21,   21,   21, 0x08,
      66,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ModelListWidget_TEST[] = {
    "ModelListWidget_TEST\0\0TreeWidget()\0"
    "ModelsTree()\0ModelProperties()\0"
    "LinkProperties()\0"
};

void ModelListWidget_TEST::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ModelListWidget_TEST *_t = static_cast<ModelListWidget_TEST *>(_o);
        switch (_id) {
        case 0: _t->TreeWidget(); break;
        case 1: _t->ModelsTree(); break;
        case 2: _t->ModelProperties(); break;
        case 3: _t->LinkProperties(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ModelListWidget_TEST::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ModelListWidget_TEST::staticMetaObject = {
    { &QTestFixture::staticMetaObject, qt_meta_stringdata_ModelListWidget_TEST,
      qt_meta_data_ModelListWidget_TEST, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ModelListWidget_TEST::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ModelListWidget_TEST::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ModelListWidget_TEST::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModelListWidget_TEST))
        return static_cast<void*>(const_cast< ModelListWidget_TEST*>(this));
    return QTestFixture::qt_metacast(_clname);
}

int ModelListWidget_TEST::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTestFixture::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
