// Auto generated file, don't modify.

#ifndef __META_QTGUI_QVECTOR3D_H
#define __META_QTGUI_QVECTOR3D_H


#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtgui { 


template <typename D>
void buildMetaClass_Global_qvector3d(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qFuzzyCompare", (bool (*) (const QVector3D &, const QVector3D &))&qFuzzyCompare);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QVector3D &, const QVector3D &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QVector3D &, const QVector3D &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QVector3D (*)(const QVector3D &, const QVector3D &)>(mopHolder + mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QVector3D (*)(const QVector3D &, const QVector3D &)>(mopHolder - mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QVector3D (*)(float, const QVector3D &)>(mopHolder * mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QVector3D (*)(const QVector3D &, float)>(mopHolder * mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QVector3D (*)(const QVector3D &, const QVector3D &)>(mopHolder * mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QVector3D (*)(const QVector3D &)>(-mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QVector3D (*)(const QVector3D &, float)>(mopHolder / mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QVector3D &)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QVector3D &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QVector3D &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
}


inline float & opErAToRWrapper_QVector3D__opArrayGet(QVector3D * self, int i) {
    return (*self)[i];
}
inline void opErAToRWrapper_QVector3D__opArraySet(QVector3D * self, int i, const cpgf::RemoveReference<float & >::Result & OpsEt_vALue) {
    (*self)[i] = OpsEt_vALue;
}
inline float opErAToRWrapper_QVector3D__opArrayGet(const QVector3D * self, int i) {
    return (*self)[i];
}
inline QVector3D & opErAToRWrapper_QVector3D__opAddAssign(QVector3D * self, const QVector3D & vector) {
    return (*self) += vector;
}
inline QVector3D & opErAToRWrapper_QVector3D__opSubAssign(QVector3D * self, const QVector3D & vector) {
    return (*self) -= vector;
}
inline QVector3D & opErAToRWrapper_QVector3D__opMulAssign(QVector3D * self, float factor) {
    return (*self) *= factor;
}
inline QVector3D & opErAToRWrapper_QVector3D__opMulAssign(QVector3D * self, const QVector3D & vector) {
    return (*self) *= vector;
}
inline QVector3D & opErAToRWrapper_QVector3D__opDivAssign(QVector3D * self, float divisor) {
    return (*self) /= divisor;
}


template <typename D>
void buildMetaClass_QVector3D(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (float, float, float)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPoint &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPointF &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QVector2D &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QVector2D &, float)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QVector4D &)>();
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("x", &D::ClassType::x);
    _d.CPGF_MD_TEMPLATE _method("y", &D::ClassType::y);
    _d.CPGF_MD_TEMPLATE _method("z", &D::ClassType::z);
    _d.CPGF_MD_TEMPLATE _method("setX", &D::ClassType::setX);
    _d.CPGF_MD_TEMPLATE _method("setY", &D::ClassType::setY);
    _d.CPGF_MD_TEMPLATE _method("setZ", &D::ClassType::setZ);
    _d.CPGF_MD_TEMPLATE _method("length", &D::ClassType::length);
    _d.CPGF_MD_TEMPLATE _method("lengthSquared", &D::ClassType::lengthSquared);
    _d.CPGF_MD_TEMPLATE _method("normalized", &D::ClassType::normalized);
    _d.CPGF_MD_TEMPLATE _method("normalize", &D::ClassType::normalize);
    _d.CPGF_MD_TEMPLATE _method("distanceToPoint", &D::ClassType::distanceToPoint);
    _d.CPGF_MD_TEMPLATE _method("distanceToPlane", (float (D::ClassType::*) (const QVector3D &, const QVector3D &) const)&D::ClassType::distanceToPlane);
    _d.CPGF_MD_TEMPLATE _method("distanceToPlane", (float (D::ClassType::*) (const QVector3D &, const QVector3D &, const QVector3D &) const)&D::ClassType::distanceToPlane);
    _d.CPGF_MD_TEMPLATE _method("distanceToLine", &D::ClassType::distanceToLine);
    _d.CPGF_MD_TEMPLATE _method("toVector2D", &D::ClassType::toVector2D);
    _d.CPGF_MD_TEMPLATE _method("toVector4D", &D::ClassType::toVector4D);
    _d.CPGF_MD_TEMPLATE _method("toPoint", &D::ClassType::toPoint);
    _d.CPGF_MD_TEMPLATE _method("toPointF", &D::ClassType::toPointF);
    _d.CPGF_MD_TEMPLATE _method("dotProduct", &D::ClassType::dotProduct);
    _d.CPGF_MD_TEMPLATE _method("crossProduct", &D::ClassType::crossProduct);
    _d.CPGF_MD_TEMPLATE _method("normal", (QVector3D (*) (const QVector3D &, const QVector3D &))&D::ClassType::normal);
    _d.CPGF_MD_TEMPLATE _method("normal", (QVector3D (*) (const QVector3D &, const QVector3D &, const QVector3D &))&D::ClassType::normal);
    _d.CPGF_MD_TEMPLATE _operator<float & (*)(cpgf::GMetaSelf, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (float & (*) (QVector3D *, int))&opErAToRWrapper_QVector3D__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _method("_opArraySet", (void (*) (QVector3D *, int, const cpgf::RemoveReference<float & >::Result &))&opErAToRWrapper_QVector3D__opArraySet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<float (*)(const cpgf::GMetaSelf &, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (float (*) (const QVector3D *, int))&opErAToRWrapper_QVector3D__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QVector3D & (*)(cpgf::GMetaSelf, const QVector3D &)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QVector3D & (*) (QVector3D *, const QVector3D &))&opErAToRWrapper_QVector3D__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QVector3D & (*)(cpgf::GMetaSelf, const QVector3D &)>(mopHolder -= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opSubAssign", (QVector3D & (*) (QVector3D *, const QVector3D &))&opErAToRWrapper_QVector3D__opSubAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QVector3D & (*)(cpgf::GMetaSelf, float)>(mopHolder *= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opMulAssign", (QVector3D & (*) (QVector3D *, float))&opErAToRWrapper_QVector3D__opMulAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QVector3D & (*)(cpgf::GMetaSelf, const QVector3D &)>(mopHolder *= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opMulAssign", (QVector3D & (*) (QVector3D *, const QVector3D &))&opErAToRWrapper_QVector3D__opMulAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QVector3D & (*)(cpgf::GMetaSelf, float)>(mopHolder /= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDivAssign", (QVector3D & (*) (QVector3D *, float))&opErAToRWrapper_QVector3D__opDivAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator< QVariant (cpgf::GMetaSelf)>(mopHolder());
}


} // namespace meta_qtgui




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif