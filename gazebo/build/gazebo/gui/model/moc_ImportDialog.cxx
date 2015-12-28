/****************************************************************************
** Meta object code from reading C++ file 'ImportDialog.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../gazebo/gui/model/ImportDialog.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImportDialog.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gazebo__gui__ImportDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x08,
      38,   26,   26,   26, 0x08,
      49,   26,   26,   26, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_gazebo__gui__ImportDialog[] = {
    "gazebo::gui::ImportDialog\0\0OnBrowse()\0"
    "OnCancel()\0OnImport()\0"
};

void gazebo::gui::ImportDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ImportDialog *_t = static_cast<ImportDialog *>(_o);
        switch (_id) {
        case 0: _t->OnBrowse(); break;
        case 1: _t->OnCancel(); break;
        case 2: _t->OnImport(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData gazebo::gui::ImportDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gazebo::gui::ImportDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_gazebo__gui__ImportDialog,
      qt_meta_data_gazebo__gui__ImportDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gazebo::gui::ImportDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gazebo::gui::ImportDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gazebo::gui::ImportDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gazebo__gui__ImportDialog))
        return static_cast<void*>(const_cast< ImportDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int gazebo::gui::ImportDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
