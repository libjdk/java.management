#include <javax/management/relation/RelationType.h>

#include <java/util/List.h>
#include <javax/management/relation/RoleInfo.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $RoleInfo = ::javax::management::relation::RoleInfo;

namespace javax {
	namespace management {
		namespace relation {

$MethodInfo _RelationType_MethodInfo_[] = {
	{"getRelationTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRoleInfo", "(Ljava/lang/String;)Ljavax/management/relation/RoleInfo;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RoleInfoNotFoundException"},
	{"getRoleInfos", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/management/relation/RoleInfo;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _RelationType_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.relation.RelationType",
	nullptr,
	"java.io.Serializable",
	nullptr,
	_RelationType_MethodInfo_
};

$Object* allocate$RelationType($Class* clazz) {
	return $of($alloc(RelationType));
}

$Class* RelationType::load$($String* name, bool initialize) {
	$loadClass(RelationType, name, initialize, &_RelationType_ClassInfo_, allocate$RelationType);
	return class$;
}

$Class* RelationType::class$ = nullptr;

		} // relation
	} // management
} // javax