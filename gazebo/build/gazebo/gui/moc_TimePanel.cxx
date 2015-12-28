/****************************************************************************
** Meta object code from reading C++ file 'TimePanel.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gazebo/gui/TimePanel.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TimePanel.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gazebo__gui__TimePanel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   24,   23,   23, 0x05,
      52,   24,   23,   23, 0x05,
      73,   24,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      96,   23,   23,   23, 0x08,
     112,  105,   23,   23, 0x08,
     136,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__TimePanel[] = {
    "gazebo::gui::TimePanel\0\0_string\0"
    "SetSimTime(QString)\0SetRealTime(QString)\0"
    "SetIterations(QString)\0Update()\0_value\0"
    "OnStepValueChanged(int)\0OnTimeReset()\0"
};

void gazebo::gui::TimePanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TimePanel *_t = static_cast<TimePanel *>(_o);
        switch (_id) {
        case 0: _t->SetSimTime((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->SetRealTime((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->SetIterations((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->Update(); break;
        case 4: _t->OnStepValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->OnTimeReset(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData gazebo::gui::TimePanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::TimePanel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gazebo__gui__TimePanel,
      qt_meta_data_gazebo__gui__TimePanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::TimePanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::TimePanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::TimePanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__TimePanel))
        return static_cast<void*>(const_cast< TimePanel*>(this));
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::TimePanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void gazebo::gui::TimePanel::SetSimTime(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gazebo::gui::TimePanel::SetRealTime(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gazebo::gui::TimePanel::SetIterations(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
