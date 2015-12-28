/****************************************************************************
** Meta object code from reading C++ file 'EditorView.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gazebo/gui/building/EditorView.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditorView.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gazebo__gui__EditorView[] = {

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
      25,   24,   24,   24, 0x08,
      38,   24,   24,   24, 0x08,
      54,   24,   24,   24, 0x08,
      69,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__EditorView[] = {
    "gazebo::gui::EditorView\0\0OnAddLevel()\0"
    "OnDeleteLevel()\0OnLevelApply()\0"
    "OnOpenLevelInspector()\0"
};

void gazebo::gui::EditorView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditorView *_t = static_cast<EditorView *>(_o);
        switch (_id) {
        case 0: _t->OnAddLevel(); break;
        case 1: _t->OnDeleteLevel(); break;
        case 2: _t->OnLevelApply(); break;
        case 3: _t->OnOpenLevelInspector(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData gazebo::gui::EditorView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::EditorView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_gazebo__gui__EditorView,
      qt_meta_data_gazebo__gui__EditorView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::EditorView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::EditorView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::EditorView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__EditorView))
        return static_cast<void*>(const_cast< EditorView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int gazebo::gui::EditorView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
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
