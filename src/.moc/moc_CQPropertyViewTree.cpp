/****************************************************************************
** Meta object code from reading C++ file 'CQPropertyViewTree.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/CQPropertyViewTree.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CQPropertyViewTree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CQPropertyViewTree_t {
    QByteArrayData data[23];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CQPropertyViewTree_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CQPropertyViewTree_t qt_meta_stringdata_CQPropertyViewTree = {
    {
QT_MOC_LITERAL(0, 0, 18), // "CQPropertyViewTree"
QT_MOC_LITERAL(1, 19, 12), // "valueChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "itemClicked"
QT_MOC_LITERAL(4, 45, 3), // "obj"
QT_MOC_LITERAL(5, 49, 4), // "path"
QT_MOC_LITERAL(6, 54, 12), // "itemSelected"
QT_MOC_LITERAL(7, 67, 8), // "menuExec"
QT_MOC_LITERAL(8, 76, 4), // "gpos"
QT_MOC_LITERAL(9, 81, 6), // "redraw"
QT_MOC_LITERAL(10, 88, 9), // "expandAll"
QT_MOC_LITERAL(11, 98, 11), // "collapseAll"
QT_MOC_LITERAL(12, 110, 14), // "expandSelected"
QT_MOC_LITERAL(13, 125, 6), // "search"
QT_MOC_LITERAL(14, 132, 4), // "text"
QT_MOC_LITERAL(15, 137, 14), // "modelResetSlot"
QT_MOC_LITERAL(16, 152, 15), // "itemClickedSlot"
QT_MOC_LITERAL(17, 168, 5), // "index"
QT_MOC_LITERAL(18, 174, 17), // "itemSelectionSlot"
QT_MOC_LITERAL(19, 192, 21), // "customContextMenuSlot"
QT_MOC_LITERAL(20, 214, 3), // "pos"
QT_MOC_LITERAL(21, 218, 8), // "itemMenu"
QT_MOC_LITERAL(22, 227, 14) // "mouseHighlight"

    },
    "CQPropertyViewTree\0valueChanged\0\0"
    "itemClicked\0obj\0path\0itemSelected\0"
    "menuExec\0gpos\0redraw\0expandAll\0"
    "collapseAll\0expandSelected\0search\0"
    "text\0modelResetSlot\0itemClickedSlot\0"
    "index\0itemSelectionSlot\0customContextMenuSlot\0"
    "pos\0itemMenu\0mouseHighlight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CQPropertyViewTree[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       2,  114, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       3,    2,   84,    2, 0x06 /* Public */,
       6,    2,   89,    2, 0x06 /* Public */,
       7,    2,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   99,    2, 0x0a /* Public */,
      10,    0,  100,    2, 0x0a /* Public */,
      11,    0,  101,    2, 0x0a /* Public */,
      12,    0,  102,    2, 0x0a /* Public */,
      13,    1,  103,    2, 0x0a /* Public */,
      15,    0,  106,    2, 0x08 /* Private */,
      16,    1,  107,    2, 0x08 /* Private */,
      18,    0,  110,    2, 0x08 /* Private */,
      19,    1,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QPoint,    4,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   20,

 // properties: name, type, flags
      21, QMetaType::Bool, 0x00095103,
      22, QMetaType::Bool, 0x00095103,

       0        // eod
};

void CQPropertyViewTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CQPropertyViewTree *_t = static_cast<CQPropertyViewTree *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->itemClicked((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->itemSelected((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->menuExec((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 4: _t->redraw(); break;
        case 5: _t->expandAll(); break;
        case 6: _t->collapseAll(); break;
        case 7: _t->expandSelected(); break;
        case 8: _t->search((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->modelResetSlot(); break;
        case 10: _t->itemClickedSlot((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 11: _t->itemSelectionSlot(); break;
        case 12: _t->customContextMenuSlot((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CQPropertyViewTree::*_t)(QObject * , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CQPropertyViewTree::valueChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (CQPropertyViewTree::*_t)(QObject * , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CQPropertyViewTree::itemClicked)) {
                *result = 1;
            }
        }
        {
            typedef void (CQPropertyViewTree::*_t)(QObject * , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CQPropertyViewTree::itemSelected)) {
                *result = 2;
            }
        }
        {
            typedef void (CQPropertyViewTree::*_t)(QObject * , const QPoint & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CQPropertyViewTree::menuExec)) {
                *result = 3;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CQPropertyViewTree *_t = static_cast<CQPropertyViewTree *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isItemMenu(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isMouseHighlight(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CQPropertyViewTree *_t = static_cast<CQPropertyViewTree *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setItemMenu(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setMouseHighlight(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject CQPropertyViewTree::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_CQPropertyViewTree.data,
      qt_meta_data_CQPropertyViewTree,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CQPropertyViewTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CQPropertyViewTree::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CQPropertyViewTree.stringdata0))
        return static_cast<void*>(const_cast< CQPropertyViewTree*>(this));
    return QTreeView::qt_metacast(_clname);
}

int CQPropertyViewTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CQPropertyViewTree::valueChanged(QObject * _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CQPropertyViewTree::itemClicked(QObject * _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CQPropertyViewTree::itemSelected(QObject * _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CQPropertyViewTree::menuExec(QObject * _t1, const QPoint & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
