// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QFileSelector>
#include <QtCore/QState>

#include <QtQuick/qsgtexturematerial.h>

#include "meta_qtqml_qsgtexturematerial.h"

using namespace cpgf;

namespace meta_qtqml { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QSGOpaqueTextureMaterial()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QSGOpaqueTextureMaterial, QSGMaterial> _nd = GDefineMetaClass<QSGOpaqueTextureMaterial, QSGMaterial>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QSGOpaqueTextureMaterial");
        buildMetaClass_QSGOpaqueTextureMaterial(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QSGOpaqueTextureMaterialWrapper, QSGOpaqueTextureMaterial> _nd = GDefineMetaClass<QSGOpaqueTextureMaterialWrapper, QSGOpaqueTextureMaterial>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QSGOpaqueTextureMaterialWrapper");
        buildMetaClass_QSGOpaqueTextureMaterialWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QSGTextureMaterial()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QSGTextureMaterial, QSGOpaqueTextureMaterial> _nd = GDefineMetaClass<QSGTextureMaterial, QSGOpaqueTextureMaterial>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent> >::declare("QSGTextureMaterial");
        buildMetaClass_QSGTextureMaterial(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QSGTextureMaterialWrapper, QSGTextureMaterial> _nd = GDefineMetaClass<QSGTextureMaterialWrapper, QSGTextureMaterial>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent> >::declare("QSGTextureMaterialWrapper");
        buildMetaClass_QSGTextureMaterialWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtqml

