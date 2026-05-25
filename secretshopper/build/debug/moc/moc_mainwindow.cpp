/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CartItemWidget_t {
    QByteArrayData data[6];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CartItemWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CartItemWidget_t qt_meta_stringdata_CartItemWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CartItemWidget"
QT_MOC_LITERAL(1, 15, 15), // "removeRequested"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "productName"
QT_MOC_LITERAL(4, 44, 15), // "quantityChanged"
QT_MOC_LITERAL(5, 60, 6) // "newQty"

    },
    "CartItemWidget\0removeRequested\0\0"
    "productName\0quantityChanged\0newQty"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CartItemWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    2,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    3,    5,

       0        // eod
};

void CartItemWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CartItemWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->removeRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->quantityChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CartItemWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CartItemWidget::removeRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CartItemWidget::*)(const QString & , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CartItemWidget::quantityChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CartItemWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_CartItemWidget.data,
    qt_meta_data_CartItemWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CartItemWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CartItemWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CartItemWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CartItemWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CartItemWidget::removeRequested(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CartItemWidget::quantityChanged(const QString & _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[339];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "showWelcomePage"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 24), // "showProductSelectionPage"
QT_MOC_LITERAL(4, 53, 22), // "showStoreSelectionPage"
QT_MOC_LITERAL(5, 76, 25), // "showRouteOptimizationPage"
QT_MOC_LITERAL(6, 102, 16), // "onProductClicked"
QT_MOC_LITERAL(7, 119, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(8, 136, 4), // "item"
QT_MOC_LITERAL(9, 141, 16), // "onCartItemRemove"
QT_MOC_LITERAL(10, 158, 11), // "productName"
QT_MOC_LITERAL(11, 170, 24), // "onCartItemQuantityChange"
QT_MOC_LITERAL(12, 195, 6), // "newQty"
QT_MOC_LITERAL(13, 202, 10), // "restartApp"
QT_MOC_LITERAL(14, 213, 9), // "clearCart"
QT_MOC_LITERAL(15, 223, 17), // "onCategoryClicked"
QT_MOC_LITERAL(16, 241, 8), // "category"
QT_MOC_LITERAL(17, 250, 22), // "checkCartBeforeProceed"
QT_MOC_LITERAL(18, 273, 18), // "requestGeolocation"
QT_MOC_LITERAL(19, 292, 16), // "onAddressChanged"
QT_MOC_LITERAL(20, 309, 7), // "address"
QT_MOC_LITERAL(21, 317, 21) // "calculateOptimalRoute"

    },
    "MainWindow\0showWelcomePage\0\0"
    "showProductSelectionPage\0"
    "showStoreSelectionPage\0showRouteOptimizationPage\0"
    "onProductClicked\0QListWidgetItem*\0"
    "item\0onCartItemRemove\0productName\0"
    "onCartItemQuantityChange\0newQty\0"
    "restartApp\0clearCart\0onCategoryClicked\0"
    "category\0checkCartBeforeProceed\0"
    "requestGeolocation\0onAddressChanged\0"
    "address\0calculateOptimalRoute"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    1,   88,    2, 0x08 /* Private */,
       9,    1,   91,    2, 0x08 /* Private */,
      11,    2,   94,    2, 0x08 /* Private */,
      13,    0,   99,    2, 0x08 /* Private */,
      14,    0,  100,    2, 0x08 /* Private */,
      15,    1,  101,    2, 0x08 /* Private */,
      17,    0,  104,    2, 0x08 /* Private */,
      18,    0,  105,    2, 0x08 /* Private */,
      19,    1,  106,    2, 0x08 /* Private */,
      21,    0,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,   10,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showWelcomePage(); break;
        case 1: _t->showProductSelectionPage(); break;
        case 2: _t->showStoreSelectionPage(); break;
        case 3: _t->showRouteOptimizationPage(); break;
        case 4: _t->onProductClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->onCartItemRemove((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->onCartItemQuantityChange((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 7: _t->restartApp(); break;
        case 8: _t->clearCart(); break;
        case 9: _t->onCategoryClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->checkCartBeforeProceed(); break;
        case 11: _t->requestGeolocation(); break;
        case 12: _t->onAddressChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->calculateOptimalRoute(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
