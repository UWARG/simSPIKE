/****************************************************************************
** Meta object code from reading C++ file 'AlignWidget.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gazebo/gui/AlignWidget.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AlignWidget.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gazebo__gui__AlignWidget[] = {

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
      32,   26,   25,   25, 0x08,
      60,   53,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__AlignWidget[] = {
    "gazebo::gui::AlignWidget\0\0_mode\0"
    "OnAlignMode(QString)\0_index\0"
    "OnAlignTargetChanged(int)\0"
};

void gazebo::gui::AlignWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AlignWidget *_t = static_cast<AlignWidget *>(_o);
        switch (_id) {
        case 0: _t->OnAlignMode((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->OnAlignTargetChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData gazebo::gui::AlignWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::AlignWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gazebo__gui__AlignWidget,
      qt_meta_data_gazebo__gui__AlignWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::AlignWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::AlignWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::AlignWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__AlignWidget))
        return static_cast<void*>(const_cast< AlignWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::AlignWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
