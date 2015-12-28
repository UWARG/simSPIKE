/****************************************************************************
** Meta object code from reading C++ file 'JointControlWidget.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gazebo/gui/JointControlWidget.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JointControlWidget.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gazebo__gui__JointControlWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x08,
      56,   43,   32,   32, 0x08,
      91,   43,   32,   32, 0x08,
     127,   43,   32,   32, 0x08,
     165,   43,   32,   32, 0x08,
     203,   43,   32,   32, 0x08,
     241,   43,   32,   32, 0x08,
     277,   43,   32,   32, 0x08,
     315,   43,   32,   32, 0x08,
     353,   43,   32,   32, 0x08,
     398,  391,   32,   32, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__JointControlWidget[] = {
    "gazebo::gui::JointControlWidget\0\0"
    "OnReset()\0_value,_name\0"
    "OnForceChanged(double,std::string)\0"
    "OnPIDPosChanged(double,std::string)\0"
    "OnPPosGainChanged(double,std::string)\0"
    "OnDPosGainChanged(double,std::string)\0"
    "OnIPosGainChanged(double,std::string)\0"
    "OnPIDVelChanged(double,std::string)\0"
    "OnPVelGainChanged(double,std::string)\0"
    "OnDVelGainChanged(double,std::string)\0"
    "OnIVelGainChanged(double,std::string)\0"
    "_index\0OnPIDPosUnitsChanged(int)\0"
};

void gazebo::gui::JointControlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JointControlWidget *_t = static_cast<JointControlWidget *>(_o);
        switch (_id) {
        case 0: _t->OnReset(); break;
        case 1: _t->OnForceChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 2: _t->OnPIDPosChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 3: _t->OnPPosGainChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 4: _t->OnDPosGainChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 5: _t->OnIPosGainChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 6: _t->OnPIDVelChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 7: _t->OnPVelGainChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 8: _t->OnDVelGainChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 9: _t->OnIVelGainChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 10: _t->OnPIDPosUnitsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData gazebo::gui::JointControlWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::JointControlWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gazebo__gui__JointControlWidget,
      qt_meta_data_gazebo__gui__JointControlWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::JointControlWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::JointControlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::JointControlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__JointControlWidget))
        return static_cast<void*>(const_cast< JointControlWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::JointControlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
static const uint qt_meta_data_gazebo__gui__JointForceControl[] = {

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
      45,   32,   31,   31, 0x05,

 // slots: signature, parameters, type, tag, flags
      80,   73,   31,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__JointForceControl[] = {
    "gazebo::gui::JointForceControl\0\0"
    "_value,_name\0changed(double,std::string)\0"
    "_value\0OnChanged(double)\0"
};

void gazebo::gui::JointForceControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JointForceControl *_t = static_cast<JointForceControl *>(_o);
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 1: _t->OnChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData gazebo::gui::JointForceControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::JointForceControl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gazebo__gui__JointForceControl,
      qt_meta_data_gazebo__gui__JointForceControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::JointForceControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::JointForceControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::JointForceControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__JointForceControl))
        return static_cast<void*>(const_cast< JointForceControl*>(this));
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::JointForceControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void gazebo::gui::JointForceControl::changed(double _t1, const std::string & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_gazebo__gui__JointPIDPosControl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      46,   33,   32,   32, 0x05,
      74,   33,   32,   32, 0x05,
     103,   33,   32,   32, 0x05,
     132,   33,   32,   32, 0x05,

 // slots: signature, parameters, type, tag, flags
     168,  161,   32,   32, 0x0a,
     186,  161,   32,   32, 0x0a,
     205,  161,   32,   32, 0x0a,
     224,  161,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__JointPIDPosControl[] = {
    "gazebo::gui::JointPIDPosControl\0\0"
    "_value,_name\0changed(double,std::string)\0"
    "pChanged(double,std::string)\0"
    "dChanged(double,std::string)\0"
    "iChanged(double,std::string)\0_value\0"
    "OnChanged(double)\0OnPChanged(double)\0"
    "OnIChanged(double)\0OnDChanged(double)\0"
};

void gazebo::gui::JointPIDPosControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JointPIDPosControl *_t = static_cast<JointPIDPosControl *>(_o);
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 1: _t->pChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 2: _t->dChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 3: _t->iChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 4: _t->OnChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->OnPChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->OnIChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->OnDChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData gazebo::gui::JointPIDPosControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::JointPIDPosControl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gazebo__gui__JointPIDPosControl,
      qt_meta_data_gazebo__gui__JointPIDPosControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::JointPIDPosControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::JointPIDPosControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::JointPIDPosControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__JointPIDPosControl))
        return static_cast<void*>(const_cast< JointPIDPosControl*>(this));
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::JointPIDPosControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void gazebo::gui::JointPIDPosControl::changed(double _t1, const std::string & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gazebo::gui::JointPIDPosControl::pChanged(double _t1, const std::string & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gazebo::gui::JointPIDPosControl::dChanged(double _t1, const std::string & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void gazebo::gui::JointPIDPosControl::iChanged(double _t1, const std::string & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
static const uint qt_meta_data_gazebo__gui__JointPIDVelControl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      46,   33,   32,   32, 0x05,
      74,   33,   32,   32, 0x05,
     103,   33,   32,   32, 0x05,
     132,   33,   32,   32, 0x05,

 // slots: signature, parameters, type, tag, flags
     168,  161,   32,   32, 0x0a,
     186,  161,   32,   32, 0x0a,
     205,  161,   32,   32, 0x0a,
     224,  161,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__JointPIDVelControl[] = {
    "gazebo::gui::JointPIDVelControl\0\0"
    "_value,_name\0changed(double,std::string)\0"
    "pChanged(double,std::string)\0"
    "dChanged(double,std::string)\0"
    "iChanged(double,std::string)\0_value\0"
    "OnChanged(double)\0OnPChanged(double)\0"
    "OnIChanged(double)\0OnDChanged(double)\0"
};

void gazebo::gui::JointPIDVelControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        JointPIDVelControl *_t = static_cast<JointPIDVelControl *>(_o);
        switch (_id) {
        case 0: _t->changed((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 1: _t->pChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 2: _t->dChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 3: _t->iChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 4: _t->OnChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->OnPChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->OnIChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->OnDChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData gazebo::gui::JointPIDVelControl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::JointPIDVelControl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gazebo__gui__JointPIDVelControl,
      qt_meta_data_gazebo__gui__JointPIDVelControl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::JointPIDVelControl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::JointPIDVelControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::JointPIDVelControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__JointPIDVelControl))
        return static_cast<void*>(const_cast< JointPIDVelControl*>(this));
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::JointPIDVelControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void gazebo::gui::JointPIDVelControl::changed(double _t1, const std::string & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gazebo::gui::JointPIDVelControl::pChanged(double _t1, const std::string & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gazebo::gui::JointPIDVelControl::dChanged(double _t1, const std::string & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void gazebo::gui::JointPIDVelControl::iChanged(double _t1, const std::string & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
