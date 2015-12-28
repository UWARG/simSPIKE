/****************************************************************************
** Meta object code from reading C++ file 'QTestFixture.hh'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../gazebo/gui/QTestFixture.hh"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QTestFixture.hh' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QTestFixture[] = {

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
      14,   13,   13,   13, 0x08,
      29,   13,   13,   13, 0x08,
      36,   13,   13,   13, 0x08,
      46,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QTestFixture[] = {
    "QTestFixture\0\0initTestCase()\0init()\0"
    "cleanup()\0cleanupTestCase()\0"
};

void QTestFixture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QTestFixture *_t = static_cast<QTestFixture *>(_o);
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->init(); break;
        case 2: _t->cleanup(); break;
        case 3: _t->cleanupTestCase(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QTestFixture::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QTestFixture::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QTestFixture,
      qt_meta_data_QTestFixture, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QTestFixture::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QTestFixture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QTestFixture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTestFixture))
        return static_cast<void*>(const_cast< QTestFixture*>(this));
    return QObject::qt_metacast(_clname);
}

int QTestFixture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
