#include <javax/management/relation/Relation.h>

#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/management/ObjectName.h>
#include <javax/management/relation/Role.h>
#include <javax/management/relation/RoleList.h>
#include <javax/management/relation/RoleResult.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $ObjectName = ::javax::management::ObjectName;
using $Role = ::javax::management::relation::Role;
using $RoleList = ::javax::management::relation::RoleList;
using $RoleResult = ::javax::management::relation::RoleResult;

namespace javax {
	namespace management {
		namespace relation {

$MethodInfo _Relation_MethodInfo_[] = {
	{"getAllRoles", "()Ljavax/management/relation/RoleResult;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.relation.RelationServiceNotRegisteredException"},
	{"getReferencedMBeans", "()Ljava/util/Map;", "()Ljava/util/Map<Ljavax/management/ObjectName;Ljava/util/List<Ljava/lang/String;>;>;", $PUBLIC | $ABSTRACT},
	{"getRelationId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRelationServiceName", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRelationTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getRole", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljavax/management/ObjectName;>;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RoleNotFoundException,javax.management.relation.RelationServiceNotRegisteredException"},
	{"getRoleCardinality", "(Ljava/lang/String;)Ljava/lang/Integer;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RoleNotFoundException"},
	{"getRoles", "([Ljava/lang/String;)Ljavax/management/relation/RoleResult;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationServiceNotRegisteredException"},
	{"handleMBeanUnregistration", "(Ljavax/management/ObjectName;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RoleNotFoundException,javax.management.relation.InvalidRoleValueException,javax.management.relation.RelationServiceNotRegisteredException,javax.management.relation.RelationTypeNotFoundException,javax.management.relation.RelationNotFoundException"},
	{"retrieveAllRoles", "()Ljavax/management/relation/RoleList;", nullptr, $PUBLIC | $ABSTRACT},
	{"setRole", "(Ljavax/management/relation/Role;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RoleNotFoundException,javax.management.relation.RelationTypeNotFoundException,javax.management.relation.InvalidRoleValueException,javax.management.relation.RelationServiceNotRegisteredException,javax.management.relation.RelationNotFoundException"},
	{"setRoles", "(Ljavax/management/relation/RoleList;)Ljavax/management/relation/RoleResult;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationServiceNotRegisteredException,javax.management.relation.RelationTypeNotFoundException,javax.management.relation.RelationNotFoundException"},
	{}
};

$ClassInfo _Relation_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.relation.Relation",
	nullptr,
	nullptr,
	nullptr,
	_Relation_MethodInfo_
};

$Object* allocate$Relation($Class* clazz) {
	return $of($alloc(Relation));
}

$Class* Relation::load$($String* name, bool initialize) {
	$loadClass(Relation, name, initialize, &_Relation_ClassInfo_, allocate$Relation);
	return class$;
}

$Class* Relation::class$ = nullptr;

		} // relation
	} // management
} // javax