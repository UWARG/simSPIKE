/****************************************************************************
** Meta object code from reading C++ file 'DataLogger.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gazebo/gui/DataLogger.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DataLogger.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gazebo__gui__DataLogger[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   25,   24,   24, 0x05,
      50,   25,   24,   24, 0x05,
      67,   25,   24,   24, 0x05,
      88,   25,   24,   24, 0x05,
     116,   25,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     151,  143,   24,   24, 0x08,
     166,   25,   24,   24, 0x08,
     196,   25,   24,   24, 0x08,
     225,   24,   24,   24, 0x08,
     245,  236,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__DataLogger[] = {
    "gazebo::gui::DataLogger\0\0_string\0"
    "SetTime(QString)\0SetSize(QString)\0"
    "SetFilename(QString)\0SetDestinationPath(QString)\0"
    "SetDestinationURI(QString)\0_toggle\0"
    "OnRecord(bool)\0OnSetDestinationPath(QString)\0"
    "OnSetDestinationURI(QString)\0OnBrowse()\0"
    "_checked\0OnToggleSettings(bool)\0"
};

void gazebo::gui::DataLogger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DataLogger *_t = static_cast<DataLogger *>(_o);
        switch (_id) {
        case 0: _t->SetTime((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->SetSize((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->SetFilename((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->SetDestinationPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->SetDestinationURI((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->OnRecord((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->OnSetDestinationPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->OnSetDestinationURI((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->OnBrowse(); break;
        case 9: _t->OnToggleSettings((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData gazebo::gui::DataLogger::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::DataLogger::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_gazebo__gui__DataLogger,
      qt_meta_data_gazebo__gui__DataLogger, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::DataLogger::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::DataLogger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::DataLogger::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__DataLogger))
        return static_cast<void*>(const_cast< DataLogger*>(this));
    return QDialog::qt_metacast(_clname);
}

int gazebo::gui::DataLogger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void gazebo::gui::DataLogger::SetTime(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gazebo::gui::DataLogger::SetSize(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gazebo::gui::DataLogger::SetFilename(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void gazebo::gui::DataLogger::SetDestinationPath(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void gazebo::gui::DataLogger::SetDestinationURI(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
