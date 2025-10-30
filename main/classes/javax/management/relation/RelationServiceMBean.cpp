#include <javax/management/relation/RelationServiceMBean.h>

#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/management/ObjectName.h>
#include <javax/management/relation/RelationType.h>
#include <javax/management/relation/Role.h>
#include <javax/management/relation/RoleInfo.h>
#include <javax/management/relation/RoleList.h>
#include <javax/management/relation/RoleResult.h>
#include <jcpp.h>

using $RoleInfoArray = $Array<::javax::management::relation::RoleInfo>;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $ObjectName = ::javax::management::ObjectName;
using $RelationType = ::javax::management::relation::RelationType;
using $Role = ::javax::management::relation::Role;
using $RoleInfo = ::javax::management::relation::RoleInfo;
using $RoleList = ::javax::management::relation::RoleList;
using $RoleResult = ::javax::management::relation::RoleResult;

namespace javax {
	namespace management {
		namespace relation {

$MethodInfo _RelationServiceMBean_MethodInfo_[] = {
	{"addRelation", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationServiceNotRegisteredException,java.lang.NoSuchMethodException,javax.management.relation.InvalidRelationIdException,javax.management.InstanceNotFoundException,javax.management.relation.InvalidRelationServiceException,javax.management.relation.RelationTypeNotFoundException,javax.management.relation.RoleNotFoundException,javax.management.relation.InvalidRoleValueException"},
	{"addRelationType", "(Ljavax/management/relation/RelationType;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.InvalidRelationTypeException"},
	{"checkRoleReading", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Integer;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationTypeNotFoundException"},
	{"checkRoleWriting", "(Ljavax/management/relation/Role;Ljava/lang/String;Ljava/lang/Boolean;)Ljava/lang/Integer;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationTypeNotFoundException"},
	{"createRelation", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/relation/RoleList;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.relation.RelationServiceNotRegisteredException,java.lang.IllegalArgumentException,javax.management.relation.RoleNotFoundException,javax.management.relation.InvalidRelationIdException,javax.management.relation.RelationTypeNotFoundException,javax.management.relation.InvalidRoleValueException"},
	{"createRelationType", "(Ljava/lang/String;[Ljavax/management/relation/RoleInfo;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.InvalidRelationTypeException"},
	{"findAssociatedMBeans", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map;", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map<Ljavax/management/ObjectName;Ljava/util/List<Ljava/lang/String;>;>;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"findReferencingRelations", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map;", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"findRelationsOfType", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationTypeNotFoundException"},
	{"getAllRelationIds", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{"getAllRelationTypeNames", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{"getAllRoles", "(Ljava/lang/String;)Ljavax/management/relation/RoleResult;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException,javax.management.relation.RelationServiceNotRegisteredException"},
	{"getPurgeFlag", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getReferencedMBeans", "(Ljava/lang/String;)Ljava/util/Map;", "(Ljava/lang/String;)Ljava/util/Map<Ljavax/management/ObjectName;Ljava/util/List<Ljava/lang/String;>;>;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException"},
	{"getRelationTypeName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException"},
	{"getRole", "(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List<Ljavax/management/ObjectName;>;", $PUBLIC | $ABSTRACT, nullptr, "javax.management.relation.RelationServiceNotRegisteredException,java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException,javax.management.relation.RoleNotFoundException"},
	{"getRoleCardinality", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Integer;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException,javax.management.relation.RoleNotFoundException"},
	{"getRoleInfo", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/management/relation/RoleInfo;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationTypeNotFoundException,javax.management.relation.RoleInfoNotFoundException"},
	{"getRoleInfos", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljavax/management/relation/RoleInfo;>;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationTypeNotFoundException"},
	{"getRoles", "(Ljava/lang/String;[Ljava/lang/String;)Ljavax/management/relation/RoleResult;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.relation.RelationServiceNotRegisteredException,java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException"},
	{"hasRelation", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"isActive", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.relation.RelationServiceNotRegisteredException"},
	{"isRelation", "(Ljavax/management/ObjectName;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException"},
	{"isRelationMBean", "(Ljava/lang/String;)Ljavax/management/ObjectName;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException"},
	{"purgeRelations", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.relation.RelationServiceNotRegisteredException"},
	{"removeRelation", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.relation.RelationServiceNotRegisteredException,java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException"},
	{"removeRelationType", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.relation.RelationServiceNotRegisteredException,java.lang.IllegalArgumentException,javax.management.relation.RelationTypeNotFoundException"},
	{"sendRelationCreationNotification", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException"},
	{"sendRelationRemovalNotification", "(Ljava/lang/String;Ljava/util/List;)V", "(Ljava/lang/String;Ljava/util/List<Ljavax/management/ObjectName;>;)V", $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException"},
	{"sendRoleUpdateNotification", "(Ljava/lang/String;Ljavax/management/relation/Role;Ljava/util/List;)V", "(Ljava/lang/String;Ljavax/management/relation/Role;Ljava/util/List<Ljavax/management/ObjectName;>;)V", $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException"},
	{"setPurgeFlag", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setRole", "(Ljava/lang/String;Ljavax/management/relation/Role;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.relation.RelationServiceNotRegisteredException,java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException,javax.management.relation.RoleNotFoundException,javax.management.relation.InvalidRoleValueException,javax.management.relation.RelationTypeNotFoundException"},
	{"setRoles", "(Ljava/lang/String;Ljavax/management/relation/RoleList;)Ljavax/management/relation/RoleResult;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.relation.RelationServiceNotRegisteredException,java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException"},
	{"updateRoleMap", "(Ljava/lang/String;Ljavax/management/relation/Role;Ljava/util/List;)V", "(Ljava/lang/String;Ljavax/management/relation/Role;Ljava/util/List<Ljavax/management/ObjectName;>;)V", $PUBLIC | $ABSTRACT, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationServiceNotRegisteredException,javax.management.relation.RelationNotFoundException"},
	{}
};

$ClassInfo _RelationServiceMBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.relation.RelationServiceMBean",
	nullptr,
	nullptr,
	nullptr,
	_RelationServiceMBean_MethodInfo_
};

$Object* allocate$RelationServiceMBean($Class* clazz) {
	return $of($alloc(RelationServiceMBean));
}

$Class* RelationServiceMBean::load$($String* name, bool initialize) {
	$loadClass(RelationServiceMBean, name, initialize, &_RelationServiceMBean_ClassInfo_, allocate$RelationServiceMBean);
	return class$;
}

$Class* RelationServiceMBean::class$ = nullptr;

		} // relation
	} // management
} // javax