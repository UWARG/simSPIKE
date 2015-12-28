/****************************************************************************
** Meta object code from reading C++ file 'TerrainEditorPalette.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gazebo/gui/terrain/TerrainEditorPalette.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TerrainEditorPalette.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gazebo__gui__TerrainEditorPalette[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      43,   35,   34,   34, 0x08,
      57,   35,   34,   34, 0x08,
      71,   35,   34,   34, 0x08,
      87,   35,   34,   34, 0x08,
     106,   34,   34,   34, 0x08,
     122,  115,   34,   34, 0x08,
     150,  115,   34,   34, 0x08,
     177,  115,   34,   34, 0x08,
     204,  115,   34,   34, 0x08,
     230,  115,   34,   34, 0x08,
     251,  115,   34,   34, 0x08,
     271,  115,   34,   34, 0x08,
     292,  115,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__TerrainEditorPalette[] = {
    "gazebo::gui::TerrainEditorPalette\0\0"
    "_toggle\0OnRaise(bool)\0OnLower(bool)\0"
    "OnFlatten(bool)\0OnPickHeight(bool)\0"
    "OnSave()\0_value\0OnOutsideRadiusSpin(double)\0"
    "OnOutsideRadiusSlider(int)\0"
    "OnInsideRadiusSpin(double)\0"
    "OnInsideRadiusSlider(int)\0"
    "OnWeightSpin(double)\0OnWeightSlider(int)\0"
    "OnHeightSpin(double)\0OnHeightSlider(int)\0"
};

void gazebo::gui::TerrainEditorPalette::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TerrainEditorPalette *_t = static_cast<TerrainEditorPalette *>(_o);
        switch (_id) {
        case 0: _t->OnRaise((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->OnLower((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->OnFlatten((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->OnPickHeight((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->OnSave(); break;
        case 5: _t->OnOutsideRadiusSpin((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->OnOutsideRadiusSlider((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->OnInsideRadiusSpin((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->OnInsideRadiusSlider((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->OnWeightSpin((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->OnWeightSlider((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->OnHeightSpin((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->OnHeightSlider((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData gazebo::gui::TerrainEditorPalette::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::TerrainEditorPalette::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gazebo__gui__TerrainEditorPalette,
      qt_meta_data_gazebo__gui__TerrainEditorPalette, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::TerrainEditorPalette::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::TerrainEditorPalette::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::TerrainEditorPalette::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__TerrainEditorPalette))
        return static_cast<void*>(const_cast< TerrainEditorPalette*>(this));
    return QWidget::qt_metacast(_clname);
}

int gazebo::gui::TerrainEditorPalette::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
