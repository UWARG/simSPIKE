/****************************************************************************
** Meta object code from reading C++ file 'TopicSelector.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gazebo/gui/TopicSelector.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TopicSelector.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gazebo__gui__TopicSelector[] = {

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
      28,   27,   27,   27, 0x08,
      37,   27,   27,   27, 0x08,
      62,   48,   27,   27, 0x08,
      96,   48,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__TopicSelector[] = {
    "gazebo::gui::TopicSelector\0\0OnOkay()\0"
    "OnCancel()\0_item,_column\0"
    "OnSelection(QTreeWidgetItem*,int)\0"
    "OnDoubleClickSelection(QTreeWidgetItem*,int)\0"
};

void gazebo::gui::TopicSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TopicSelector *_t = static_cast<TopicSelector *>(_o);
        switch (_id) {
        case 0: _t->OnOkay(); break;
        case 1: _t->OnCancel(); break;
        case 2: _t->OnSelection((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->OnDoubleClickSelection((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData gazebo::gui::TopicSelector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::TopicSelector::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_gazebo__gui__TopicSelector,
      qt_meta_data_gazebo__gui__TopicSelector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::TopicSelector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::TopicSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::TopicSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__TopicSelector))
        return static_cast<void*>(const_cast< TopicSelector*>(this));
    return QDialog::qt_metacast(_clname);
}

int gazebo::gui::TopicSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
