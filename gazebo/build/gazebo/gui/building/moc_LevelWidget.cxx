/****************************************************************************
** Meta object code from reading C++ file 'LevelWidget.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gazebo/gui/building/LevelWidget.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LevelWidget.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gazebo__gui__LevelWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   26,   25,   25, 0x0a,
      60,   25,   25,   25, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__LevelWidget[] = {
    "gazebo::gui::LevelWidget\0\0_level\0"
    "OnCurrentLevelChanged(int)\0OnAddLevel()\0"
};

void gazebo::gui::LevelWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LevelWidget *_t = static_cast<LevelWidget *>(_o);
        switch (_id) {
        case 0: _t->OnCurrentLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->OnAddLevel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData gazebo::gui::LevelWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::LevelWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gazebo__gui__LevelWidget,
      qt_meta_data_gazebo__gui__LevelWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::LevelWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::LevelWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::LevelWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__LevelWidget))
        return static_cast<void*>(const_cast< LevelWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::LevelWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
