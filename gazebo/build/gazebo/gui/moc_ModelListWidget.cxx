/****************************************************************************
** Meta object code from reading C++ file 'ModelListWidget.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gazebo/gui/ModelListWidget.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModelListWidget.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gazebo__gui__ModelListWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      42,   30,   29,   29, 0x08,
      81,   29,   29,   29, 0x08,
      96,   90,   29,   29, 0x08,
     131,  127,   29,   29, 0x08,
     159,   90,   29,   29, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__ModelListWidget[] = {
    "gazebo::gui::ModelListWidget\0\0item,column\0"
    "OnModelSelection(QTreeWidgetItem*,int)\0"
    "Update()\0_item\0OnPropertyChanged(QtProperty*)\0"
    "_pt\0OnCustomContextMenu(QPoint)\0"
    "OnCurrentPropertyChanged(QtBrowserItem*)\0"
};

void gazebo::gui::ModelListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ModelListWidget *_t = static_cast<ModelListWidget *>(_o);
        switch (_id) {
        case 0: _t->OnModelSelection((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->Update(); break;
        case 2: _t->OnPropertyChanged((*reinterpret_cast< QtProperty*(*)>(_a[1]))); break;
        case 3: _t->OnCustomContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: _t->OnCurrentPropertyChanged((*reinterpret_cast< QtBrowserItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData gazebo::gui::ModelListWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::ModelListWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gazebo__gui__ModelListWidget,
      qt_meta_data_gazebo__gui__ModelListWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::ModelListWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::ModelListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::ModelListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__ModelListWidget))
        return static_cast<void*>(const_cast< ModelListWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::ModelListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_gazebo__gui__ModelListSheetDelegate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__ModelListSheetDelegate[] = {
    "gazebo::gui::ModelListSheetDelegate\0"
};

void gazebo::gui::ModelListSheetDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData gazebo::gui::ModelListSheetDelegate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::ModelListSheetDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_gazebo__gui__ModelListSheetDelegate,
      qt_meta_data_gazebo__gui__ModelListSheetDelegate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::ModelListSheetDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::ModelListSheetDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::ModelListSheetDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__ModelListSheetDelegate))
        return static_cast<void*>(const_cast< ModelListSheetDelegate*>(this));
    return QItemDelegate::qt_metacast(_clname);
}

int gazebo::gui::ModelListSheetDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
