/****************************************************************************
** Meta object code from reading C++ file 'RenderWidget.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gazebo/gui/RenderWidget.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RenderWidget.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gazebo__gui__RenderWidget[] = {

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
      27,   26,   26,   26, 0x08,
      36,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__RenderWidget[] = {
    "gazebo::gui::RenderWidget\0\0update()\0"
    "OnClearOverlayMsg()\0"
};

void gazebo::gui::RenderWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RenderWidget *_t = static_cast<RenderWidget *>(_o);
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->OnClearOverlayMsg(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData gazebo::gui::RenderWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::RenderWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gazebo__gui__RenderWidget,
      qt_meta_data_gazebo__gui__RenderWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::RenderWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::RenderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::RenderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__RenderWidget))
        return static_cast<void*>(const_cast< RenderWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::RenderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
