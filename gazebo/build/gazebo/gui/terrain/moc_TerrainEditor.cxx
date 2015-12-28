/****************************************************************************
** Meta object code from reading C++ file 'TerrainEditor.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gazebo/gui/terrain/TerrainEditor.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TerrainEditor.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gazebo__gui__TerrainEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      37,   28,   27,   27, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__TerrainEditor[] = {
    "gazebo::gui::TerrainEditor\0\0_checked\0"
    "OnEdit(bool)\0"
};

void gazebo::gui::TerrainEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TerrainEditor *_t = static_cast<TerrainEditor *>(_o);
        switch (_id) {
        case 0: _t->OnEdit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData gazebo::gui::TerrainEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::TerrainEditor::staticMetaObject = {
    { &Editor::staticMetaObject, qt_meta_stringdata_gazebo__gui__TerrainEditor,
      qt_meta_data_gazebo__gui__TerrainEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::TerrainEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::TerrainEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::TerrainEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__TerrainEditor))
        return static_cast<void*>(const_cast< TerrainEditor*>(this));
    return Editor::qt_metacast(_clname);
}

int gazebo::gui::TerrainEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Editor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
