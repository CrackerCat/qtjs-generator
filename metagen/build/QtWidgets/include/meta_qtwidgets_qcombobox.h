// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QCOMBOBOX_H
#define CPGF_META_QTWIDGETS_QCOMBOBOX_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QComboBox(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("maxVisibleItems", &D::ClassType::maxVisibleItems);
    _d.CPGF_MD_TEMPLATE _method("setMaxVisibleItems", &D::ClassType::setMaxVisibleItems);
    _d.CPGF_MD_TEMPLATE _method("count", &D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("setMaxCount", &D::ClassType::setMaxCount);
    _d.CPGF_MD_TEMPLATE _method("maxCount", &D::ClassType::maxCount);
    _d.CPGF_MD_TEMPLATE _method("autoCompletion", &D::ClassType::autoCompletion);
    _d.CPGF_MD_TEMPLATE _method("setAutoCompletion", &D::ClassType::setAutoCompletion);
    _d.CPGF_MD_TEMPLATE _method("autoCompletionCaseSensitivity", &D::ClassType::autoCompletionCaseSensitivity);
    _d.CPGF_MD_TEMPLATE _method("setAutoCompletionCaseSensitivity", &D::ClassType::setAutoCompletionCaseSensitivity);
    _d.CPGF_MD_TEMPLATE _method("duplicatesEnabled", &D::ClassType::duplicatesEnabled);
    _d.CPGF_MD_TEMPLATE _method("setDuplicatesEnabled", &D::ClassType::setDuplicatesEnabled);
    _d.CPGF_MD_TEMPLATE _method("setFrame", &D::ClassType::setFrame);
    _d.CPGF_MD_TEMPLATE _method("hasFrame", &D::ClassType::hasFrame);
    _d.CPGF_MD_TEMPLATE _method("findText", &D::ClassType::findText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(static_cast< Qt::MatchFlags >(Qt::MatchExactly|Qt::MatchCaseSensitive)))
    ;
    _d.CPGF_MD_TEMPLATE _method("findData", &D::ClassType::findData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(static_cast< Qt::MatchFlags >(Qt::MatchExactly|Qt::MatchCaseSensitive)))
        ._default(copyVariantFromCopyable(Qt::UserRole))
    ;
    _d.CPGF_MD_TEMPLATE _method("insertPolicy", &D::ClassType::insertPolicy);
    _d.CPGF_MD_TEMPLATE _method("setInsertPolicy", &D::ClassType::setInsertPolicy);
    _d.CPGF_MD_TEMPLATE _method("sizeAdjustPolicy", &D::ClassType::sizeAdjustPolicy);
    _d.CPGF_MD_TEMPLATE _method("setSizeAdjustPolicy", &D::ClassType::setSizeAdjustPolicy);
    _d.CPGF_MD_TEMPLATE _method("minimumContentsLength", &D::ClassType::minimumContentsLength);
    _d.CPGF_MD_TEMPLATE _method("setMinimumContentsLength", &D::ClassType::setMinimumContentsLength);
    _d.CPGF_MD_TEMPLATE _method("iconSize", &D::ClassType::iconSize);
    _d.CPGF_MD_TEMPLATE _method("setIconSize", &D::ClassType::setIconSize);
    _d.CPGF_MD_TEMPLATE _method("isEditable", &D::ClassType::isEditable);
    _d.CPGF_MD_TEMPLATE _method("setEditable", &D::ClassType::setEditable);
    _d.CPGF_MD_TEMPLATE _method("setLineEdit", &D::ClassType::setLineEdit);
    _d.CPGF_MD_TEMPLATE _method("lineEdit", &D::ClassType::lineEdit);
    _d.CPGF_MD_TEMPLATE _method("setValidator", &D::ClassType::setValidator);
    _d.CPGF_MD_TEMPLATE _method("validator", &D::ClassType::validator);
    _d.CPGF_MD_TEMPLATE _method("setCompleter", &D::ClassType::setCompleter);
    _d.CPGF_MD_TEMPLATE _method("completer", &D::ClassType::completer);
    _d.CPGF_MD_TEMPLATE _method("itemDelegate", &D::ClassType::itemDelegate);
    _d.CPGF_MD_TEMPLATE _method("setItemDelegate", &D::ClassType::setItemDelegate);
    _d.CPGF_MD_TEMPLATE _method("model", &D::ClassType::model);
    _d.CPGF_MD_TEMPLATE _method("setModel", &D::ClassType::setModel);
    _d.CPGF_MD_TEMPLATE _method("rootModelIndex", &D::ClassType::rootModelIndex);
    _d.CPGF_MD_TEMPLATE _method("setRootModelIndex", &D::ClassType::setRootModelIndex);
    _d.CPGF_MD_TEMPLATE _method("modelColumn", &D::ClassType::modelColumn);
    _d.CPGF_MD_TEMPLATE _method("setModelColumn", &D::ClassType::setModelColumn);
    _d.CPGF_MD_TEMPLATE _method("currentIndex", &D::ClassType::currentIndex);
    _d.CPGF_MD_TEMPLATE _method("currentText", &D::ClassType::currentText);
    _d.CPGF_MD_TEMPLATE _method("currentData", &D::ClassType::currentData)
        ._default(copyVariantFromCopyable(Qt::UserRole))
    ;
    _d.CPGF_MD_TEMPLATE _method("itemText", &D::ClassType::itemText);
    _d.CPGF_MD_TEMPLATE _method("itemIcon", &D::ClassType::itemIcon);
    _d.CPGF_MD_TEMPLATE _method("itemData", &D::ClassType::itemData)
        ._default(copyVariantFromCopyable(Qt::UserRole))
    ;
    _d.CPGF_MD_TEMPLATE _method("addItem", (void (D::ClassType::*) (const QString &, const QVariant &))&D::ClassType::addItem, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QVariant()))
    ;
    _d.CPGF_MD_TEMPLATE _method("addItem", (void (D::ClassType::*) (const QIcon &, const QString &, const QVariant &))&D::ClassType::addItem, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QVariant()))
    ;
    _d.CPGF_MD_TEMPLATE _method("addItems", &D::ClassType::addItems, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("insertItem", (void (D::ClassType::*) (int, const QString &, const QVariant &))&D::ClassType::insertItem, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QVariant()))
    ;
    _d.CPGF_MD_TEMPLATE _method("insertItem", (void (D::ClassType::*) (int, const QIcon &, const QString &, const QVariant &))&D::ClassType::insertItem, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3> >())
        ._default(copyVariantFromCopyable(QVariant()))
    ;
    _d.CPGF_MD_TEMPLATE _method("insertItems", &D::ClassType::insertItems, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("insertSeparator", &D::ClassType::insertSeparator);
    _d.CPGF_MD_TEMPLATE _method("removeItem", &D::ClassType::removeItem);
    _d.CPGF_MD_TEMPLATE _method("setItemText", &D::ClassType::setItemText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("setItemIcon", &D::ClassType::setItemIcon, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("setItemData", &D::ClassType::setItemData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(Qt::UserRole))
    ;
    _d.CPGF_MD_TEMPLATE _method("view", &D::ClassType::view);
    _d.CPGF_MD_TEMPLATE _method("setView", &D::ClassType::setView);
    _d.CPGF_MD_TEMPLATE _method("sizeHint", &D::ClassType::sizeHint);
    _d.CPGF_MD_TEMPLATE _method("minimumSizeHint", &D::ClassType::minimumSizeHint);
    _d.CPGF_MD_TEMPLATE _method("showPopup", &D::ClassType::showPopup);
    _d.CPGF_MD_TEMPLATE _method("hidePopup", &D::ClassType::hidePopup);
    _d.CPGF_MD_TEMPLATE _method("event", &D::ClassType::event);
    _d.CPGF_MD_TEMPLATE _method("inputMethodQuery", &D::ClassType::inputMethodQuery);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("clearEditText", &D::ClassType::clearEditText);
    _d.CPGF_MD_TEMPLATE _method("setEditText", &D::ClassType::setEditText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setCurrentIndex", &D::ClassType::setCurrentIndex);
    _d.CPGF_MD_TEMPLATE _method("setCurrentText", &D::ClassType::setCurrentText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("editTextChanged", &D::ClassType::editTextChanged, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("activated", (void (D::ClassType::*) (int))&D::ClassType::activated);
    _d.CPGF_MD_TEMPLATE _method("activated", (void (D::ClassType::*) (const QString &))&D::ClassType::activated, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("highlighted", (void (D::ClassType::*) (int))&D::ClassType::highlighted);
    _d.CPGF_MD_TEMPLATE _method("highlighted", (void (D::ClassType::*) (const QString &))&D::ClassType::highlighted, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("currentIndexChanged", (void (D::ClassType::*) (int))&D::ClassType::currentIndexChanged);
    _d.CPGF_MD_TEMPLATE _method("currentIndexChanged", (void (D::ClassType::*) (const QString &))&D::ClassType::currentIndexChanged, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("currentTextChanged", &D::ClassType::currentTextChanged, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::InsertPolicy>("InsertPolicy")
        ._element("NoInsert", D::ClassType::NoInsert)
        ._element("InsertAtTop", D::ClassType::InsertAtTop)
        ._element("InsertAtCurrent", D::ClassType::InsertAtCurrent)
        ._element("InsertAtBottom", D::ClassType::InsertAtBottom)
        ._element("InsertAfterCurrent", D::ClassType::InsertAfterCurrent)
        ._element("InsertBeforeCurrent", D::ClassType::InsertBeforeCurrent)
        ._element("InsertAlphabetically", D::ClassType::InsertAlphabetically)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SizeAdjustPolicy>("SizeAdjustPolicy")
        ._element("AdjustToContents", D::ClassType::AdjustToContents)
        ._element("AdjustToContentsOnFirstShow", D::ClassType::AdjustToContentsOnFirstShow)
        ._element("AdjustToMinimumContentsLength", D::ClassType::AdjustToMinimumContentsLength)
        ._element("AdjustToMinimumContentsLengthWithIcon", D::ClassType::AdjustToMinimumContentsLengthWithIcon)
    ;
}


class QComboBoxWrapper : public QComboBox, public cpgf::GScriptWrapper {
public:
    
    QComboBoxWrapper(QWidget * parent = 0)
        : QComboBox(parent) {}
    
    void wheelEvent(QWheelEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("wheelEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, e);
            return;
        }
        QComboBox::wheelEvent(e);
    }
    void super_wheelEvent(QWheelEvent * e)
    {
        QComboBox::wheelEvent(e);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QComboBox::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QComboBox::qt_metacast(__arg0);
    }
    
    void showEvent(QShowEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("showEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, e);
            return;
        }
        QComboBox::showEvent(e);
    }
    void super_showEvent(QShowEvent * e)
    {
        QComboBox::showEvent(e);
    }
    
    void tabletEvent(QTabletEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("tabletEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::tabletEvent(__arg0);
    }
    void super_tabletEvent(QTabletEvent * __arg0)
    {
        QWidget::tabletEvent(__arg0);
    }
    
    void resizeEvent(QResizeEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("resizeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, e);
            return;
        }
        QComboBox::resizeEvent(e);
    }
    void super_resizeEvent(QResizeEvent * e)
    {
        QComboBox::resizeEvent(e);
    }
    
    void hideEvent(QHideEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hideEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, e);
            return;
        }
        QComboBox::hideEvent(e);
    }
    void super_hideEvent(QHideEvent * e)
    {
        QComboBox::hideEvent(e);
    }
    
    int metric(QPaintDevice::PaintDeviceMetric __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metric"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QWidget::metric(__arg0);
    }
    int super_metric(QPaintDevice::PaintDeviceMetric __arg0) const
    {
        return QWidget::metric(__arg0);
    }
    
    void focusInEvent(QFocusEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusInEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, e);
            return;
        }
        QComboBox::focusInEvent(e);
    }
    void super_focusInEvent(QFocusEvent * e)
    {
        QComboBox::focusInEvent(e);
    }
    
    void contextMenuEvent(QContextMenuEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contextMenuEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, e);
            return;
        }
        QComboBox::contextMenuEvent(e);
    }
    void super_contextMenuEvent(QContextMenuEvent * e)
    {
        QComboBox::contextMenuEvent(e);
    }
    
    bool event(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, event).getValue());
        }
        return QComboBox::event(event);
    }
    bool super_event(QEvent * event)
    {
        return QComboBox::event(event);
    }
    
    void leaveEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("leaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::leaveEvent(__arg0);
    }
    void super_leaveEvent(QEvent * __arg0)
    {
        QWidget::leaveEvent(__arg0);
    }
    
    void dropEvent(QDropEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::dropEvent(__arg0);
    }
    void super_dropEvent(QDropEvent * __arg0)
    {
        QWidget::dropEvent(__arg0);
    }
    
    bool focusNextChild()
    {
        return QWidget::focusNextChild();
    }
    
    void timerEvent(QTimerEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("timerEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QObject::timerEvent(__arg0);
    }
    void super_timerEvent(QTimerEvent * __arg0)
    {
        QObject::timerEvent(__arg0);
    }
    
    void paintEvent(QPaintEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paintEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, e);
            return;
        }
        QComboBox::paintEvent(e);
    }
    void super_paintEvent(QPaintEvent * e)
    {
        QComboBox::paintEvent(e);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void destroy(bool destroyWindow = true, bool destroySubWindows = true)
    {
        QWidget::destroy(destroyWindow, destroySubWindows);
    }
    
    void mouseDoubleClickEvent(QMouseEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::mouseDoubleClickEvent(__arg0);
    }
    void super_mouseDoubleClickEvent(QMouseEvent * __arg0)
    {
        QWidget::mouseDoubleClickEvent(__arg0);
    }
    
    void focusOutEvent(QFocusEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, e);
            return;
        }
        QComboBox::focusOutEvent(e);
    }
    void super_focusOutEvent(QFocusEvent * e)
    {
        QComboBox::focusOutEvent(e);
    }
    
    void create(WId __arg0 = 0, bool initializeWindow = true, bool destroyOldWindow = true)
    {
        QWidget::create(__arg0, initializeWindow, destroyOldWindow);
    }
    
    void moveEvent(QMoveEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("moveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::moveEvent(__arg0);
    }
    void super_moveEvent(QMoveEvent * __arg0)
    {
        QWidget::moveEvent(__arg0);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    void updateMicroFocus()
    {
        QWidget::updateMicroFocus();
    }
    
    void changeEvent(QEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("changeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, e);
            return;
        }
        QComboBox::changeEvent(e);
    }
    void super_changeEvent(QEvent * e)
    {
        QComboBox::changeEvent(e);
    }
    
    bool hasHeightForWidth() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasHeightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidget::hasHeightForWidth();
    }
    bool super_hasHeightForWidth() const
    {
        return QWidget::hasHeightForWidth();
    }
    
    QPainter * sharedPainter() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sharedPainter"));
        if(func)
        {
            return cpgf::fromVariant<QPainter * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidget::sharedPainter();
    }
    QPainter * super_sharedPainter() const
    {
        return QWidget::sharedPainter();
    }
    
    bool eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1).getValue());
        }
        return QObject::eventFilter(__arg0, __arg1);
    }
    bool super_eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        return QObject::eventFilter(__arg0, __arg1);
    }
    
    QPaintDevice * redirected(QPoint * offset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("redirected"));
        if(func)
        {
            return cpgf::fromVariant<QPaintDevice * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset).getValue());
        }
        return QWidget::redirected(offset);
    }
    QPaintDevice * super_redirected(QPoint * offset) const
    {
        return QWidget::redirected(offset);
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QComboBox::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QComboBox::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    void disconnectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("disconnectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, signal);
            return;
        }
        QObject::disconnectNotify(signal);
    }
    void super_disconnectNotify(const QMetaMethod & signal)
    {
        QObject::disconnectNotify(signal);
    }
    
    int heightForWidth(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("heightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QWidget::heightForWidth(__arg0);
    }
    int super_heightForWidth(int __arg0) const
    {
        return QWidget::heightForWidth(__arg0);
    }
    
    void enterEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("enterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::enterEvent(__arg0);
    }
    void super_enterEvent(QEvent * __arg0)
    {
        QWidget::enterEvent(__arg0);
    }
    
    void dragMoveEvent(QDragMoveEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::dragMoveEvent(__arg0);
    }
    void super_dragMoveEvent(QDragMoveEvent * __arg0)
    {
        QWidget::dragMoveEvent(__arg0);
    }
    
    void connectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("connectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, signal);
            return;
        }
        QObject::connectNotify(signal);
    }
    void super_connectNotify(const QMetaMethod & signal)
    {
        QObject::connectNotify(signal);
    }
    
    bool focusNextPrevChild(bool next)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusNextPrevChild"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, next).getValue());
        }
        return QWidget::focusNextPrevChild(next);
    }
    bool super_focusNextPrevChild(bool next)
    {
        return QWidget::focusNextPrevChild(next);
    }
    
    QSize sizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QComboBox::sizeHint();
    }
    QSize super_sizeHint() const
    {
        return QComboBox::sizeHint();
    }
    
    void childEvent(QChildEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QObject::childEvent(__arg0);
    }
    void super_childEvent(QChildEvent * __arg0)
    {
        QObject::childEvent(__arg0);
    }
    
    void initPainter(QPainter * painter) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("initPainter"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter);
            return;
        }
        QWidget::initPainter(painter);
    }
    void super_initPainter(QPainter * painter) const
    {
        QWidget::initPainter(painter);
    }
    
    bool focusPreviousChild()
    {
        return QWidget::focusPreviousChild();
    }
    
    void mouseMoveEvent(QMouseEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::mouseMoveEvent(__arg0);
    }
    void super_mouseMoveEvent(QMouseEvent * __arg0)
    {
        QWidget::mouseMoveEvent(__arg0);
    }
    
    void keyPressEvent(QKeyEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyPressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, e);
            return;
        }
        QComboBox::keyPressEvent(e);
    }
    void super_keyPressEvent(QKeyEvent * e)
    {
        QComboBox::keyPressEvent(e);
    }
    
    void actionEvent(QActionEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("actionEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::actionEvent(__arg0);
    }
    void super_actionEvent(QActionEvent * __arg0)
    {
        QWidget::actionEvent(__arg0);
    }
    
    void setVisible(bool visible)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setVisible"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, visible);
            return;
        }
        QWidget::setVisible(visible);
    }
    void super_setVisible(bool visible)
    {
        QWidget::setVisible(visible);
    }
    
    void initStyleOption(QStyleOptionComboBox * option) const
    {
        QComboBox::initStyleOption(option);
    }
    
    void showPopup()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("showPopup"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QComboBox::showPopup();
    }
    void super_showPopup()
    {
        QComboBox::showPopup();
    }
    
    void inputMethodEvent(QInputMethodEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QComboBox::inputMethodEvent(__arg0);
    }
    void super_inputMethodEvent(QInputMethodEvent * __arg0)
    {
        QComboBox::inputMethodEvent(__arg0);
    }
    
    void dragEnterEvent(QDragEnterEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::dragEnterEvent(__arg0);
    }
    void super_dragEnterEvent(QDragEnterEvent * __arg0)
    {
        QWidget::dragEnterEvent(__arg0);
    }
    
    void mousePressEvent(QMouseEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mousePressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, e);
            return;
        }
        QComboBox::mousePressEvent(e);
    }
    void super_mousePressEvent(QMouseEvent * e)
    {
        QComboBox::mousePressEvent(e);
    }
    
    QVariant inputMethodQuery(Qt::InputMethodQuery __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodQuery"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QComboBox::inputMethodQuery(__arg0);
    }
    QVariant super_inputMethodQuery(Qt::InputMethodQuery __arg0) const
    {
        return QComboBox::inputMethodQuery(__arg0);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    void dragLeaveEvent(QDragLeaveEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::dragLeaveEvent(__arg0);
    }
    void super_dragLeaveEvent(QDragLeaveEvent * __arg0)
    {
        QWidget::dragLeaveEvent(__arg0);
    }
    
    bool nativeEvent(const QByteArray & eventType, void * message, long * result)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("nativeEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, eventType, message, result).getValue());
        }
        return QWidget::nativeEvent(eventType, message, result);
    }
    bool super_nativeEvent(const QByteArray & eventType, void * message, long * result)
    {
        return QWidget::nativeEvent(eventType, message, result);
    }
    
    QSize minimumSizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumSizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QComboBox::minimumSizeHint();
    }
    QSize super_minimumSizeHint() const
    {
        return QComboBox::minimumSizeHint();
    }
    
    int devType() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("devType"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidget::devType();
    }
    int super_devType() const
    {
        return QWidget::devType();
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    QPaintEngine * paintEngine() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paintEngine"));
        if(func)
        {
            return cpgf::fromVariant<QPaintEngine * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidget::paintEngine();
    }
    QPaintEngine * super_paintEngine() const
    {
        return QWidget::paintEngine();
    }
    
    void hidePopup()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hidePopup"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QComboBox::hidePopup();
    }
    void super_hidePopup()
    {
        QComboBox::hidePopup();
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QComboBox::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QComboBox::metaObject();
    }
    
    void keyReleaseEvent(QKeyEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, e);
            return;
        }
        QComboBox::keyReleaseEvent(e);
    }
    void super_keyReleaseEvent(QKeyEvent * e)
    {
        QComboBox::keyReleaseEvent(e);
    }
    
    void customEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("customEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QObject::customEvent(__arg0);
    }
    void super_customEvent(QEvent * __arg0)
    {
        QObject::customEvent(__arg0);
    }
    
    void mouseReleaseEvent(QMouseEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, e);
            return;
        }
        QComboBox::mouseReleaseEvent(e);
    }
    void super_mouseReleaseEvent(QMouseEvent * e)
    {
        QComboBox::mouseReleaseEvent(e);
    }
    
    void closeEvent(QCloseEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("closeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::closeEvent(__arg0);
    }
    void super_closeEvent(QCloseEvent * __arg0)
    {
        QWidget::closeEvent(__arg0);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("wheelEvent", (void (D::ClassType::*) (QWheelEvent *))&D::ClassType::wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("showEvent", (void (D::ClassType::*) (QShowEvent *))&D::ClassType::showEvent);
        _d.CPGF_MD_TEMPLATE _method("tabletEvent", (void (D::ClassType::*) (QTabletEvent *))&D::ClassType::tabletEvent);
        _d.CPGF_MD_TEMPLATE _method("resizeEvent", (void (D::ClassType::*) (QResizeEvent *))&D::ClassType::resizeEvent);
        _d.CPGF_MD_TEMPLATE _method("hideEvent", (void (D::ClassType::*) (QHideEvent *))&D::ClassType::hideEvent);
        _d.CPGF_MD_TEMPLATE _method("metric", (int (D::ClassType::*) (QPaintDevice::PaintDeviceMetric) const)&D::ClassType::metric);
        _d.CPGF_MD_TEMPLATE _method("focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("contextMenuEvent", (void (D::ClassType::*) (QContextMenuEvent *))&D::ClassType::contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("leaveEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::leaveEvent);
        _d.CPGF_MD_TEMPLATE _method("dropEvent", (void (D::ClassType::*) (QDropEvent *))&D::ClassType::dropEvent);
        _d.CPGF_MD_TEMPLATE _method("focusNextChild", (bool (D::ClassType::*) ())&D::ClassType::focusNextChild);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("paintEvent", (void (D::ClassType::*) (QPaintEvent *))&D::ClassType::paintEvent);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("destroy", (void (D::ClassType::*) (bool, bool))&D::ClassType::destroy)
            ._default(copyVariantFromCopyable(true))
            ._default(copyVariantFromCopyable(true))
        ;
        _d.CPGF_MD_TEMPLATE _method("mouseDoubleClickEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("create", (void (D::ClassType::*) (WId, bool, bool))&D::ClassType::create)
            ._default(copyVariantFromCopyable(true))
            ._default(copyVariantFromCopyable(true))
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("moveEvent", (void (D::ClassType::*) (QMoveEvent *))&D::ClassType::moveEvent);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("updateMicroFocus", (void (D::ClassType::*) ())&D::ClassType::updateMicroFocus);
        _d.CPGF_MD_TEMPLATE _method("changeEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::changeEvent);
        _d.CPGF_MD_TEMPLATE _method("sharedPainter", (QPainter * (D::ClassType::*) () const)&D::ClassType::sharedPainter);
        _d.CPGF_MD_TEMPLATE _method("redirected", (QPaintDevice * (D::ClassType::*) (QPoint *) const)&D::ClassType::redirected);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("enterEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::enterEvent);
        _d.CPGF_MD_TEMPLATE _method("dragMoveEvent", (void (D::ClassType::*) (QDragMoveEvent *))&D::ClassType::dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("focusNextPrevChild", (bool (D::ClassType::*) (bool))&D::ClassType::focusNextPrevChild);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("initPainter", (void (D::ClassType::*) (QPainter *) const)&D::ClassType::initPainter);
        _d.CPGF_MD_TEMPLATE _method("focusPreviousChild", (bool (D::ClassType::*) ())&D::ClassType::focusPreviousChild);
        _d.CPGF_MD_TEMPLATE _method("mouseMoveEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("actionEvent", (void (D::ClassType::*) (QActionEvent *))&D::ClassType::actionEvent);
        _d.CPGF_MD_TEMPLATE _method("initStyleOption", (void (D::ClassType::*) (QStyleOptionComboBox *) const)&D::ClassType::initStyleOption);
        _d.CPGF_MD_TEMPLATE _method("inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("dragEnterEvent", (void (D::ClassType::*) (QDragEnterEvent *))&D::ClassType::dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("mousePressEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("dragLeaveEvent", (void (D::ClassType::*) (QDragLeaveEvent *))&D::ClassType::dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("nativeEvent", (bool (D::ClassType::*) (const QByteArray &, void *, long *))&D::ClassType::nativeEvent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseReleaseEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("closeEvent", (void (D::ClassType::*) (QCloseEvent *))&D::ClassType::closeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_wheelEvent", (void (D::ClassType::*) (QWheelEvent *))&D::ClassType::super_wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_showEvent", (void (D::ClassType::*) (QShowEvent *))&D::ClassType::super_showEvent);
        _d.CPGF_MD_TEMPLATE _method("super_tabletEvent", (void (D::ClassType::*) (QTabletEvent *))&D::ClassType::super_tabletEvent);
        _d.CPGF_MD_TEMPLATE _method("super_resizeEvent", (void (D::ClassType::*) (QResizeEvent *))&D::ClassType::super_resizeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hideEvent", (void (D::ClassType::*) (QHideEvent *))&D::ClassType::super_hideEvent);
        _d.CPGF_MD_TEMPLATE _method("super_metric", (int (D::ClassType::*) (QPaintDevice::PaintDeviceMetric) const)&D::ClassType::super_metric);
        _d.CPGF_MD_TEMPLATE _method("super_focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("super_contextMenuEvent", (void (D::ClassType::*) (QContextMenuEvent *))&D::ClassType::super_contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_leaveEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_leaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dropEvent", (void (D::ClassType::*) (QDropEvent *))&D::ClassType::super_dropEvent);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_paintEvent", (void (D::ClassType::*) (QPaintEvent *))&D::ClassType::super_paintEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mouseDoubleClickEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("super_focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("super_moveEvent", (void (D::ClassType::*) (QMoveEvent *))&D::ClassType::super_moveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_changeEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_changeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hasHeightForWidth", (bool (D::ClassType::*) () const)&D::ClassType::super_hasHeightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_sharedPainter", (QPainter * (D::ClassType::*) () const)&D::ClassType::super_sharedPainter);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_redirected", (QPaintDevice * (D::ClassType::*) (QPoint *) const)&D::ClassType::super_redirected);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_heightForWidth", (int (D::ClassType::*) (int) const)&D::ClassType::super_heightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_enterEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_enterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragMoveEvent", (void (D::ClassType::*) (QDragMoveEvent *))&D::ClassType::super_dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_focusNextPrevChild", (bool (D::ClassType::*) (bool))&D::ClassType::super_focusNextPrevChild);
        _d.CPGF_MD_TEMPLATE _method("super_sizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_sizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_initPainter", (void (D::ClassType::*) (QPainter *) const)&D::ClassType::super_initPainter);
        _d.CPGF_MD_TEMPLATE _method("super_mouseMoveEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_actionEvent", (void (D::ClassType::*) (QActionEvent *))&D::ClassType::super_actionEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setVisible", (void (D::ClassType::*) (bool))&D::ClassType::super_setVisible);
        _d.CPGF_MD_TEMPLATE _method("super_showPopup", (void (D::ClassType::*) ())&D::ClassType::super_showPopup);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::super_inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QDragEnterEvent *))&D::ClassType::super_dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mousePressEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::super_inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("super_dragLeaveEvent", (void (D::ClassType::*) (QDragLeaveEvent *))&D::ClassType::super_dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_nativeEvent", (bool (D::ClassType::*) (const QByteArray &, void *, long *))&D::ClassType::super_nativeEvent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_minimumSizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_minimumSizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_devType", (int (D::ClassType::*) () const)&D::ClassType::super_devType);
        _d.CPGF_MD_TEMPLATE _method("super_paintEngine", (QPaintEngine * (D::ClassType::*) () const)&D::ClassType::super_paintEngine);
        _d.CPGF_MD_TEMPLATE _method("super_hidePopup", (void (D::ClassType::*) ())&D::ClassType::super_hidePopup);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mouseReleaseEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_closeEvent", (void (D::ClassType::*) (QCloseEvent *))&D::ClassType::super_closeEvent);
    }
};


template <typename D>
void buildMetaClass_QComboBoxWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QComboBoxWrapper::cpgf__register(_d);
    
    buildMetaClass_QComboBox<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
