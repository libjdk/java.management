#include <javax/management/relation/RelationSupportMBean.h>

#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Relation = ::javax::management::relation::Relation;

namespace javax {
	namespace management {
		namespace relation {

$MethodInfo _RelationSupportMBean_MethodInfo_[] = {
	{"isInRelationService", "()Ljava/lang/Boolean;", nullptr, $PUBLIC | $ABSTRACT},
	{"setRelationServiceManagementFlag", "(Ljava/lang/Boolean;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{}
};

$ClassInfo _RelationSupportMBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.relation.RelationSupportMBean",
	nullptr,
	"javax.management.relation.Relation",
	nullptr,
	_RelationSupportMBean_MethodInfo_
};

$Object* allocate$RelationSupportMBean($Class* clazz) {
	return $of($alloc(RelationSupportMBean));
}

$Class* RelationSupportMBean::load$($String* name, bool initialize) {
	$loadClass(RelationSupportMBean, name, initialize, &_RelationSupportMBean_ClassInfo_, allocate$RelationSupportMBean);
	return class$;
}

$Class* RelationSupportMBean::class$ = nullptr;

		} // relation
	} // management
} // javax