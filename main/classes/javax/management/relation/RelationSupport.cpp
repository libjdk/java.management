#include <javax/management/relation/RelationSupport.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <javax/management/InstanceNotFoundException.h>
#include <javax/management/MBeanException.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <javax/management/ReflectionException.h>
#include <javax/management/relation/InvalidRoleValueException.h>
#include <javax/management/relation/RelationNotFoundException.h>
#include <javax/management/relation/RelationService.h>
#include <javax/management/relation/RelationServiceNotRegisteredException.h>
#include <javax/management/relation/RelationSupportMBean.h>
#include <javax/management/relation/RelationTypeNotFoundException.h>
#include <javax/management/relation/Role.h>
#include <javax/management/relation/RoleList.h>
#include <javax/management/relation/RoleNotFoundException.h>
#include <javax/management/relation/RoleResult.h>
#include <javax/management/relation/RoleStatus.h>
#include <javax/management/relation/RoleUnresolved.h>
#include <javax/management/relation/RoleUnresolvedList.h>
#include <jcpp.h>

#undef NO_ROLE_WITH_NAME
#undef RELATION_LOGGER
#undef TRACE

using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $InstanceNotFoundException = ::javax::management::InstanceNotFoundException;
using $MBeanException = ::javax::management::MBeanException;
using $MBeanRegistration = ::javax::management::MBeanRegistration;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;
using $ReflectionException = ::javax::management::ReflectionException;
using $InvalidRoleValueException = ::javax::management::relation::InvalidRoleValueException;
using $RelationNotFoundException = ::javax::management::relation::RelationNotFoundException;
using $RelationService = ::javax::management::relation::RelationService;
using $RelationServiceNotRegisteredException = ::javax::management::relation::RelationServiceNotRegisteredException;
using $RelationSupportMBean = ::javax::management::relation::RelationSupportMBean;
using $RelationTypeNotFoundException = ::javax::management::relation::RelationTypeNotFoundException;
using $Role = ::javax::management::relation::Role;
using $RoleList = ::javax::management::relation::RoleList;
using $RoleNotFoundException = ::javax::management::relation::RoleNotFoundException;
using $RoleResult = ::javax::management::relation::RoleResult;
using $RoleStatus = ::javax::management::relation::RoleStatus;
using $RoleUnresolved = ::javax::management::relation::RoleUnresolved;
using $RoleUnresolvedList = ::javax::management::relation::RoleUnresolvedList;

namespace javax {
	namespace management {
		namespace relation {

$FieldInfo _RelationSupport_FieldInfo_[] = {
	{"myRelId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(RelationSupport, myRelId)},
	{"myRelServiceName", "Ljavax/management/ObjectName;", nullptr, $PRIVATE, $field(RelationSupport, myRelServiceName)},
	{"myRelServiceMBeanServer", "Ljavax/management/MBeanServer;", nullptr, $PRIVATE, $field(RelationSupport, myRelServiceMBeanServer)},
	{"myRelTypeName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(RelationSupport, myRelTypeName)},
	{"myRoleName2ValueMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljavax/management/relation/Role;>;", $PRIVATE | $FINAL, $field(RelationSupport, myRoleName2ValueMap)},
	{"myInRelServFlg", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $FINAL, $field(RelationSupport, myInRelServFlg)},
	{}
};

$MethodInfo _RelationSupport_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Ljavax/management/ObjectName;Ljava/lang/String;Ljavax/management/relation/RoleList;)V", nullptr, $PUBLIC, $method(static_cast<void(RelationSupport::*)($String*,$ObjectName*,$String*,$RoleList*)>(&RelationSupport::init$)), "javax.management.relation.InvalidRoleValueException,java.lang.IllegalArgumentException"},
	{"<init>", "(Ljava/lang/String;Ljavax/management/ObjectName;Ljavax/management/MBeanServer;Ljava/lang/String;Ljavax/management/relation/RoleList;)V", nullptr, $PUBLIC, $method(static_cast<void(RelationSupport::*)($String*,$ObjectName*,$MBeanServer*,$String*,$RoleList*)>(&RelationSupport::init$)), "javax.management.relation.InvalidRoleValueException,java.lang.IllegalArgumentException"},
	{"getAllRoles", "()Ljavax/management/relation/RoleResult;", nullptr, $PUBLIC, nullptr, "javax.management.relation.RelationServiceNotRegisteredException"},
	{"getAllRolesInt", "(ZLjavax/management/relation/RelationService;)Ljavax/management/relation/RoleResult;", nullptr, 0, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationServiceNotRegisteredException"},
	{"getReferencedMBeans", "()Ljava/util/Map;", "()Ljava/util/Map<Ljavax/management/ObjectName;Ljava/util/List<Ljava/lang/String;>;>;", $PUBLIC},
	{"getRelationId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRelationServiceName", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC},
	{"getRelationTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRole", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljavax/management/ObjectName;>;", $PUBLIC, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RoleNotFoundException,javax.management.relation.RelationServiceNotRegisteredException"},
	{"getRoleCardinality", "(Ljava/lang/String;)Ljava/lang/Integer;", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RoleNotFoundException"},
	{"getRoleInt", "(Ljava/lang/String;ZLjavax/management/relation/RelationService;Z)Ljava/lang/Object;", nullptr, 0, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RoleNotFoundException,javax.management.relation.RelationServiceNotRegisteredException"},
	{"getRoles", "([Ljava/lang/String;)Ljavax/management/relation/RoleResult;", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationServiceNotRegisteredException"},
	{"getRolesInt", "([Ljava/lang/String;ZLjavax/management/relation/RelationService;)Ljavax/management/relation/RoleResult;", nullptr, 0, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationServiceNotRegisteredException"},
	{"handleMBeanUnregistration", "(Ljavax/management/ObjectName;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RoleNotFoundException,javax.management.relation.InvalidRoleValueException,javax.management.relation.RelationServiceNotRegisteredException,javax.management.relation.RelationTypeNotFoundException,javax.management.relation.RelationNotFoundException"},
	{"handleMBeanUnregistrationInt", "(Ljavax/management/ObjectName;Ljava/lang/String;ZLjavax/management/relation/RelationService;)V", nullptr, 0, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RoleNotFoundException,javax.management.relation.InvalidRoleValueException,javax.management.relation.RelationServiceNotRegisteredException,javax.management.relation.RelationTypeNotFoundException,javax.management.relation.RelationNotFoundException"},
	{"initMembers", "(Ljava/lang/String;Ljavax/management/ObjectName;Ljavax/management/MBeanServer;Ljava/lang/String;Ljavax/management/relation/RoleList;)V", nullptr, $PRIVATE, $method(static_cast<void(RelationSupport::*)($String*,$ObjectName*,$MBeanServer*,$String*,$RoleList*)>(&RelationSupport::initMembers)), "javax.management.relation.InvalidRoleValueException,java.lang.IllegalArgumentException"},
	{"initRoleMap", "(Ljavax/management/relation/RoleList;)V", nullptr, $PRIVATE, $method(static_cast<void(RelationSupport::*)($RoleList*)>(&RelationSupport::initRoleMap)), "javax.management.relation.InvalidRoleValueException"},
	{"isInRelationService", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{"postDeregister", "()V", nullptr, $PUBLIC},
	{"postRegister", "(Ljava/lang/Boolean;)V", nullptr, $PUBLIC},
	{"preDeregister", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"preRegister", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)Ljavax/management/ObjectName;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"retrieveAllRoles", "()Ljavax/management/relation/RoleList;", nullptr, $PUBLIC},
	{"sendRoleUpdateNotification", "(Ljavax/management/relation/Role;Ljava/util/List;ZLjavax/management/relation/RelationService;)V", "(Ljavax/management/relation/Role;Ljava/util/List<Ljavax/management/ObjectName;>;ZLjavax/management/relation/RelationService;)V", $PRIVATE, $method(static_cast<void(RelationSupport::*)($Role*,$List*,bool,$RelationService*)>(&RelationSupport::sendRoleUpdateNotification)), "java.lang.IllegalArgumentException,javax.management.relation.RelationServiceNotRegisteredException,javax.management.relation.RelationNotFoundException"},
	{"setRelationServiceManagementFlag", "(Ljava/lang/Boolean;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"setRole", "(Ljavax/management/relation/Role;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RoleNotFoundException,javax.management.relation.RelationTypeNotFoundException,javax.management.relation.InvalidRoleValueException,javax.management.relation.RelationServiceNotRegisteredException,javax.management.relation.RelationNotFoundException"},
	{"setRoleInt", "(Ljavax/management/relation/Role;ZLjavax/management/relation/RelationService;Z)Ljava/lang/Object;", nullptr, 0, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RoleNotFoundException,javax.management.relation.InvalidRoleValueException,javax.management.relation.RelationServiceNotRegisteredException,javax.management.relation.RelationTypeNotFoundException,javax.management.relation.RelationNotFoundException"},
	{"setRoles", "(Ljavax/management/relation/RoleList;)Ljavax/management/relation/RoleResult;", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationServiceNotRegisteredException,javax.management.relation.RelationTypeNotFoundException,javax.management.relation.RelationNotFoundException"},
	{"setRolesInt", "(Ljavax/management/relation/RoleList;ZLjavax/management/relation/RelationService;)Ljavax/management/relation/RoleResult;", nullptr, 0, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationServiceNotRegisteredException,javax.management.relation.RelationTypeNotFoundException,javax.management.relation.RelationNotFoundException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateRelationServiceMap", "(Ljavax/management/relation/Role;Ljava/util/List;ZLjavax/management/relation/RelationService;)V", "(Ljavax/management/relation/Role;Ljava/util/List<Ljavax/management/ObjectName;>;ZLjavax/management/relation/RelationService;)V", $PRIVATE, $method(static_cast<void(RelationSupport::*)($Role*,$List*,bool,$RelationService*)>(&RelationSupport::updateRelationServiceMap)), "java.lang.IllegalArgumentException,javax.management.relation.RelationServiceNotRegisteredException,javax.management.relation.RelationNotFoundException"},
	{}
};

$ClassInfo _RelationSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.relation.RelationSupport",
	"java.lang.Object",
	"javax.management.relation.RelationSupportMBean,javax.management.MBeanRegistration",
	_RelationSupport_FieldInfo_,
	_RelationSupport_MethodInfo_
};

$Object* allocate$RelationSupport($Class* clazz) {
	return $of($alloc(RelationSupport));
}

int32_t RelationSupport::hashCode() {
	 return this->$RelationSupportMBean::hashCode();
}

bool RelationSupport::equals(Object$* arg0) {
	 return this->$RelationSupportMBean::equals(arg0);
}

$Object* RelationSupport::clone() {
	 return this->$RelationSupportMBean::clone();
}

$String* RelationSupport::toString() {
	 return this->$RelationSupportMBean::toString();
}

void RelationSupport::finalize() {
	this->$RelationSupportMBean::finalize();
}

void RelationSupport::init$($String* relationId, $ObjectName* relationServiceName, $String* relationTypeName, $RoleList* list) {
	$set(this, myRelId, nullptr);
	$set(this, myRelServiceName, nullptr);
	$set(this, myRelServiceMBeanServer, nullptr);
	$set(this, myRelTypeName, nullptr);
	$set(this, myRoleName2ValueMap, $new($HashMap));
	$set(this, myInRelServFlg, $new($AtomicBoolean));
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY"_s);
	initMembers(relationId, relationServiceName, nullptr, relationTypeName, list);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
}

void RelationSupport::init$($String* relationId, $ObjectName* relationServiceName, $MBeanServer* relationServiceMBeanServer, $String* relationTypeName, $RoleList* list) {
	$set(this, myRelId, nullptr);
	$set(this, myRelServiceName, nullptr);
	$set(this, myRelServiceMBeanServer, nullptr);
	$set(this, myRelTypeName, nullptr);
	$set(this, myRoleName2ValueMap, $new($HashMap));
	$set(this, myInRelServFlg, $new($AtomicBoolean));
	if (relationServiceMBeanServer == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY"_s);
	initMembers(relationId, relationServiceName, relationServiceMBeanServer, relationTypeName, list);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
}

$List* RelationSupport::getRole($String* roleName) {
	$useLocalCurrentObjectStackCache();
	if (roleName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(roleName)}));
	$var($List, result, $cast($List, $Util::cast($(getRoleInt(roleName, false, nullptr, false)))));
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return result;
}

$RoleResult* RelationSupport::getRoles($StringArray* roleNameArray) {
	$useLocalCurrentObjectStackCache();
	if (roleNameArray == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY"_s);
	$var($RoleResult, result, getRolesInt(roleNameArray, false, nullptr));
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return result;
}

$RoleResult* RelationSupport::getAllRoles() {
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY"_s);
	$var($RoleResult, result, nullptr);
	try {
		$assign(result, getAllRolesInt(false, nullptr));
	} catch ($IllegalArgumentException& exc) {
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return result;
}

$RoleList* RelationSupport::retrieveAllRoles() {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY"_s);
	$var($RoleList, result, nullptr);
	$synchronized(this->myRoleName2ValueMap) {
		$assign(result, $new($RoleList, static_cast<$List*>($$new($ArrayList, $($nc(this->myRoleName2ValueMap)->values())))));
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return result;
}

$Integer* RelationSupport::getRoleCardinality($String* roleName) {
	$useLocalCurrentObjectStackCache();
	if (roleName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(roleName)}));
	$var($Role, role, nullptr);
	$synchronized(this->myRoleName2ValueMap) {
		$assign(role, $cast($Role, $nc(this->myRoleName2ValueMap)->get(roleName)));
	}
	if (role == nullptr) {
		int32_t pbType = $RoleStatus::NO_ROLE_WITH_NAME;
		try {
			$RelationService::throwRoleProblemException(pbType, roleName);
		} catch ($InvalidRoleValueException& exc) {
		}
	}
	$var($List, roleValue, $nc(role)->getRoleValue());
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return $Integer::valueOf($nc(roleValue)->size());
}

void RelationSupport::setRole($Role* role) {
	$useLocalCurrentObjectStackCache();
	if (role == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(role)}));
	$var($Object, result, setRoleInt(role, false, nullptr, false));
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

$RoleResult* RelationSupport::setRoles($RoleList* list) {
	$useLocalCurrentObjectStackCache();
	if (list == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(list)}));
	$var($RoleResult, result, setRolesInt(list, false, nullptr));
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return result;
}

void RelationSupport::handleMBeanUnregistration($ObjectName* objectName, $String* roleName) {
	$useLocalCurrentObjectStackCache();
	if (objectName == nullptr || roleName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1}"_s, $$new($ObjectArray, {
		$of(objectName),
		$of(roleName)
	}));
	handleMBeanUnregistrationInt(objectName, roleName, false, nullptr);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

$Map* RelationSupport::getReferencedMBeans() {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY"_s);
	$var($Map, refMBeanMap, $new($HashMap));
	$synchronized(this->myRoleName2ValueMap) {
		{
			$var($Iterator, i$, $nc($($nc(this->myRoleName2ValueMap)->values()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Role, currRole, $cast($Role, i$->next()));
				{
					$var($String, currRoleName, $nc(currRole)->getRoleName());
					$var($List, currRefMBeanList, currRole->getRoleValue());
					{
						$var($Iterator, i$, $nc(currRefMBeanList)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($ObjectName, currRoleObjName, $cast($ObjectName, i$->next()));
							{
								$var($List, mbeanRoleNameList, $cast($List, refMBeanMap->get(currRoleObjName)));
								bool newRefFlg = false;
								if (mbeanRoleNameList == nullptr) {
									newRefFlg = true;
									$assign(mbeanRoleNameList, $new($ArrayList));
								}
								$nc(mbeanRoleNameList)->add(currRoleName);
								if (newRefFlg) {
									refMBeanMap->put(currRoleObjName, mbeanRoleNameList);
								}
							}
						}
					}
				}
			}
		}
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return refMBeanMap;
}

$String* RelationSupport::getRelationTypeName() {
	return this->myRelTypeName;
}

$ObjectName* RelationSupport::getRelationServiceName() {
	return this->myRelServiceName;
}

$String* RelationSupport::getRelationId() {
	return this->myRelId;
}

$ObjectName* RelationSupport::preRegister($MBeanServer* server, $ObjectName* name) {
	$set(this, myRelServiceMBeanServer, server);
	return name;
}

void RelationSupport::postRegister($Boolean* registrationDone) {
	return;
}

void RelationSupport::preDeregister() {
	return;
}

void RelationSupport::postDeregister() {
	return;
}

$Boolean* RelationSupport::isInRelationService() {
	return $Boolean::valueOf($nc(this->myInRelServFlg)->get());
}

void RelationSupport::setRelationServiceManagementFlag($Boolean* flag) {
	if (flag == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$nc(this->myInRelServFlg)->set($nc(flag)->booleanValue());
}

$Object* RelationSupport::getRoleInt($String* roleName, bool relationServCallFlg, $RelationService* relationServ, bool multiRoleFlg) {
	$useLocalCurrentObjectStackCache();
	if (roleName == nullptr || (relationServCallFlg && relationServ == nullptr)) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(roleName)}));
	int32_t pbType = 0;
	$var($Role, role, nullptr);
	$synchronized(this->myRoleName2ValueMap) {
		$assign(role, $cast($Role, $nc(this->myRoleName2ValueMap)->get(roleName)));
	}
	if (role == nullptr) {
		pbType = $RoleStatus::NO_ROLE_WITH_NAME;
	} else {
		$var($Integer, status, nullptr);
		if (relationServCallFlg) {
			try {
				$assign(status, $nc(relationServ)->checkRoleReading(roleName, this->myRelTypeName));
			} catch ($RelationTypeNotFoundException& exc) {
				$throwNew($RuntimeException, $(exc->getMessage()));
			}
		} else {
			$var($ObjectArray, params, $new($ObjectArray, 2));
			params->set(0, roleName);
			params->set(1, this->myRelTypeName);
			$var($StringArray, signature, $new($StringArray, 2));
			signature->set(0, "java.lang.String"_s);
			signature->set(1, "java.lang.String"_s);
			try {
				$assign(status, ($cast($Integer, $nc(this->myRelServiceMBeanServer)->invoke(this->myRelServiceName, "checkRoleReading"_s, params, signature))));
			} catch ($MBeanException& exc1) {
				$throwNew($RuntimeException, "incorrect relation type"_s);
			} catch ($ReflectionException& exc2) {
				$throwNew($RuntimeException, $(exc2->getMessage()));
			} catch ($InstanceNotFoundException& exc3) {
				$throwNew($RelationServiceNotRegisteredException, $(exc3->getMessage()));
			}
		}
		pbType = $nc(status)->intValue();
	}
	$var($Object, result, nullptr);
	if (pbType == 0) {
		if (!(multiRoleFlg)) {
			$assign(result, $new($ArrayList, $(static_cast<$Collection*>($nc(role)->getRoleValue()))));
		} else {
			$assign(result, ($cast($Role, $nc(role)->clone())));
		}
	} else if (!(multiRoleFlg)) {
		try {
			$RelationService::throwRoleProblemException(pbType, roleName);
			return $of(nullptr);
		} catch ($InvalidRoleValueException& exc) {
			$throwNew($RuntimeException, $(exc->getMessage()));
		}
	} else {
		$assign(result, $new($RoleUnresolved, roleName, nullptr, pbType));
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return $of(result);
}

$RoleResult* RelationSupport::getRolesInt($StringArray* roleNameArray, bool relationServCallFlg, $RelationService* relationServ) {
	$useLocalCurrentObjectStackCache();
	if (roleNameArray == nullptr || (relationServCallFlg && relationServ == nullptr)) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY"_s);
	$var($RoleList, roleList, $new($RoleList));
	$var($RoleUnresolvedList, roleUnresList, $new($RoleUnresolvedList));
	for (int32_t i = 0; i < $nc(roleNameArray)->length; ++i) {
		$var($String, currRoleName, roleNameArray->get(i));
		$var($Object, currResult, nullptr);
		try {
			$assign(currResult, getRoleInt(currRoleName, relationServCallFlg, relationServ, true));
		} catch ($RoleNotFoundException& exc) {
			return nullptr;
		}
		if ($instanceOf($Role, currResult)) {
			try {
				roleList->add($cast($Role, currResult));
			} catch ($IllegalArgumentException& exc) {
				$throwNew($RuntimeException, $(exc->getMessage()));
			}
		} else if ($instanceOf($RoleUnresolved, currResult)) {
			try {
				roleUnresList->add($cast($RoleUnresolved, currResult));
			} catch ($IllegalArgumentException& exc) {
				$throwNew($RuntimeException, $(exc->getMessage()));
			}
		}
	}
	$var($RoleResult, result, $new($RoleResult, roleList, roleUnresList));
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return result;
}

$RoleResult* RelationSupport::getAllRolesInt(bool relationServCallFlg, $RelationService* relationServ) {
	$useLocalCurrentObjectStackCache();
	if (relationServCallFlg && relationServ == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY"_s);
	$var($List, roleNameList, nullptr);
	$synchronized(this->myRoleName2ValueMap) {
		$assign(roleNameList, $new($ArrayList, $(static_cast<$Collection*>($nc(this->myRoleName2ValueMap)->keySet()))));
	}
	$var($StringArray, roleNames, $new($StringArray, $nc(roleNameList)->size()));
	roleNameList->toArray(roleNames);
	$var($RoleResult, result, getRolesInt(roleNames, relationServCallFlg, relationServ));
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return result;
}

$Object* RelationSupport::setRoleInt($Role* aRole, bool relationServCallFlg, $RelationService* relationServ, bool multiRoleFlg) {
	$useLocalCurrentObjectStackCache();
	if (aRole == nullptr || (relationServCallFlg && relationServ == nullptr)) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1} {2} {3}"_s, $$new($ObjectArray, {
		$of(aRole),
		$($of($Boolean::valueOf(relationServCallFlg))),
		$of(relationServ),
		$($of($Boolean::valueOf(multiRoleFlg)))
	}));
	$var($String, roleName, $nc(aRole)->getRoleName());
	int32_t pbType = 0;
	$var($Role, role, nullptr);
	$synchronized(this->myRoleName2ValueMap) {
		$assign(role, $cast($Role, $nc(this->myRoleName2ValueMap)->get(roleName)));
	}
	$var($List, oldRoleValue, nullptr);
	$var($Boolean, initFlg, nullptr);
	if (role == nullptr) {
		$assign(initFlg, $Boolean::valueOf(true));
		$assign(oldRoleValue, $new($ArrayList));
	} else {
		$assign(initFlg, $Boolean::valueOf(false));
		$assign(oldRoleValue, $nc(role)->getRoleValue());
	}
	try {
		$var($Integer, status, nullptr);
		if (relationServCallFlg) {
			$assign(status, $nc(relationServ)->checkRoleWriting(aRole, this->myRelTypeName, initFlg));
		} else {
			$var($ObjectArray, params, $new($ObjectArray, 3));
			params->set(0, aRole);
			params->set(1, this->myRelTypeName);
			params->set(2, initFlg);
			$var($StringArray, signature, $new($StringArray, 3));
			signature->set(0, "javax.management.relation.Role"_s);
			signature->set(1, "java.lang.String"_s);
			signature->set(2, "java.lang.Boolean"_s);
			$assign(status, ($cast($Integer, $nc(this->myRelServiceMBeanServer)->invoke(this->myRelServiceName, "checkRoleWriting"_s, params, signature))));
		}
		pbType = $nc(status)->intValue();
	} catch ($MBeanException& exc2) {
		$var($Exception, wrappedExc, exc2->getTargetException());
		if ($instanceOf($RelationTypeNotFoundException, wrappedExc)) {
			$throw($cast($RelationTypeNotFoundException, wrappedExc));
		} else {
			$throwNew($RuntimeException, $($nc(wrappedExc)->getMessage()));
		}
	} catch ($ReflectionException& exc3) {
		$throwNew($RuntimeException, $(exc3->getMessage()));
	} catch ($RelationTypeNotFoundException& exc4) {
		$throwNew($RuntimeException, $(exc4->getMessage()));
	} catch ($InstanceNotFoundException& exc5) {
		$throwNew($RelationServiceNotRegisteredException, $(exc5->getMessage()));
	}
	$var($Object, result, nullptr);
	if (pbType == 0) {
		if (!($nc(initFlg)->booleanValue())) {
			sendRoleUpdateNotification(aRole, oldRoleValue, relationServCallFlg, relationServ);
			updateRelationServiceMap(aRole, oldRoleValue, relationServCallFlg, relationServ);
		}
		$synchronized(this->myRoleName2ValueMap) {
			$nc(this->myRoleName2ValueMap)->put(roleName, ($cast($Role, $(aRole->clone()))));
		}
		if (multiRoleFlg) {
			$assign(result, aRole);
		}
	} else if (!(multiRoleFlg)) {
		$RelationService::throwRoleProblemException(pbType, roleName);
		return $of(nullptr);
	} else {
		$assign(result, $new($RoleUnresolved, roleName, $(aRole->getRoleValue()), pbType));
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return $of(result);
}

void RelationSupport::sendRoleUpdateNotification($Role* newRole, $List* oldRoleValue, bool relationServCallFlg, $RelationService* relationServ) {
	$useLocalCurrentObjectStackCache();
	if (newRole == nullptr || oldRoleValue == nullptr || (relationServCallFlg && relationServ == nullptr)) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1} {2} {3}"_s, $$new($ObjectArray, {
		$of(newRole),
		$of(oldRoleValue),
		$($of($Boolean::valueOf(relationServCallFlg))),
		$of(relationServ)
	}));
	if (relationServCallFlg) {
		try {
			$nc(relationServ)->sendRoleUpdateNotification(this->myRelId, newRole, oldRoleValue);
		} catch ($RelationNotFoundException& exc) {
			$throwNew($RuntimeException, $(exc->getMessage()));
		}
	} else {
		$var($ObjectArray, params, $new($ObjectArray, 3));
		params->set(0, this->myRelId);
		params->set(1, newRole);
		params->set(2, oldRoleValue);
		$var($StringArray, signature, $new($StringArray, 3));
		signature->set(0, "java.lang.String"_s);
		signature->set(1, "javax.management.relation.Role"_s);
		signature->set(2, "java.util.List"_s);
		try {
			$nc(this->myRelServiceMBeanServer)->invoke(this->myRelServiceName, "sendRoleUpdateNotification"_s, params, signature);
		} catch ($ReflectionException& exc1) {
			$throwNew($RuntimeException, $(exc1->getMessage()));
		} catch ($InstanceNotFoundException& exc2) {
			$throwNew($RelationServiceNotRegisteredException, $(exc2->getMessage()));
		} catch ($MBeanException& exc3) {
			$var($Exception, wrappedExc, exc3->getTargetException());
			if ($instanceOf($RelationNotFoundException, wrappedExc)) {
				$throw($cast($RelationNotFoundException, wrappedExc));
			} else {
				$throwNew($RuntimeException, $($nc(wrappedExc)->getMessage()));
			}
		}
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

void RelationSupport::updateRelationServiceMap($Role* newRole, $List* oldRoleValue, bool relationServCallFlg, $RelationService* relationServ) {
	$useLocalCurrentObjectStackCache();
	if (newRole == nullptr || oldRoleValue == nullptr || (relationServCallFlg && relationServ == nullptr)) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1} {2} {3}"_s, $$new($ObjectArray, {
		$of(newRole),
		$of(oldRoleValue),
		$($of($Boolean::valueOf(relationServCallFlg))),
		$of(relationServ)
	}));
	if (relationServCallFlg) {
		try {
			$nc(relationServ)->updateRoleMap(this->myRelId, newRole, oldRoleValue);
		} catch ($RelationNotFoundException& exc) {
			$throwNew($RuntimeException, $(exc->getMessage()));
		}
	} else {
		$var($ObjectArray, params, $new($ObjectArray, 3));
		params->set(0, this->myRelId);
		params->set(1, newRole);
		params->set(2, oldRoleValue);
		$var($StringArray, signature, $new($StringArray, 3));
		signature->set(0, "java.lang.String"_s);
		signature->set(1, "javax.management.relation.Role"_s);
		signature->set(2, "java.util.List"_s);
		try {
			$nc(this->myRelServiceMBeanServer)->invoke(this->myRelServiceName, "updateRoleMap"_s, params, signature);
		} catch ($ReflectionException& exc1) {
			$throwNew($RuntimeException, $(exc1->getMessage()));
		} catch ($InstanceNotFoundException& exc2) {
			$throwNew($RelationServiceNotRegisteredException, $(exc2->getMessage()));
		} catch ($MBeanException& exc3) {
			$var($Exception, wrappedExc, exc3->getTargetException());
			if ($instanceOf($RelationNotFoundException, wrappedExc)) {
				$throw($cast($RelationNotFoundException, wrappedExc));
			} else {
				$throwNew($RuntimeException, $($nc(wrappedExc)->getMessage()));
			}
		}
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

$RoleResult* RelationSupport::setRolesInt($RoleList* list, bool relationServCallFlg, $RelationService* relationServ) {
	$useLocalCurrentObjectStackCache();
	if (list == nullptr || (relationServCallFlg && relationServ == nullptr)) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1} {2}"_s, $$new($ObjectArray, {
		$of(list),
		$($of($Boolean::valueOf(relationServCallFlg))),
		$of(relationServ)
	}));
	$var($RoleList, roleList, $new($RoleList));
	$var($RoleUnresolvedList, roleUnresList, $new($RoleUnresolvedList));
	{
		$var($Iterator, i$, $nc($($nc(list)->asList()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Role, currRole, $cast($Role, i$->next()));
			{
				$var($Object, currResult, nullptr);
				try {
					$assign(currResult, setRoleInt(currRole, relationServCallFlg, relationServ, true));
				} catch ($RoleNotFoundException& exc1) {
				} catch ($InvalidRoleValueException& exc2) {
				}
				if ($instanceOf($Role, currResult)) {
					try {
						roleList->add($cast($Role, currResult));
					} catch ($IllegalArgumentException& exc) {
						$throwNew($RuntimeException, $(exc->getMessage()));
					}
				} else if ($instanceOf($RoleUnresolved, currResult)) {
					try {
						roleUnresList->add($cast($RoleUnresolved, currResult));
					} catch ($IllegalArgumentException& exc) {
						$throwNew($RuntimeException, $(exc->getMessage()));
					}
				}
			}
		}
	}
	$var($RoleResult, result, $new($RoleResult, roleList, roleUnresList));
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return result;
}

void RelationSupport::initMembers($String* relationId, $ObjectName* relationServiceName, $MBeanServer* relationServiceMBeanServer, $String* relationTypeName, $RoleList* list) {
	$useLocalCurrentObjectStackCache();
	if (relationId == nullptr || relationServiceName == nullptr || relationTypeName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1} {2} {3} {4}"_s, $$new($ObjectArray, {
		$of(relationId),
		$of(relationServiceName),
		$of(relationServiceMBeanServer),
		$of(relationTypeName),
		$of(list)
	}));
	$set(this, myRelId, relationId);
	$set(this, myRelServiceName, relationServiceName);
	$set(this, myRelServiceMBeanServer, relationServiceMBeanServer);
	$set(this, myRelTypeName, relationTypeName);
	initRoleMap(list);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

void RelationSupport::initRoleMap($RoleList* list) {
	$useLocalCurrentObjectStackCache();
	if (list == nullptr) {
		return;
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(list)}));
	$synchronized(this->myRoleName2ValueMap) {
		{
			$var($Iterator, i$, $nc($($nc(list)->asList()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Role, currRole, $cast($Role, i$->next()));
				{
					$var($String, currRoleName, $nc(currRole)->getRoleName());
					if ($nc(this->myRoleName2ValueMap)->containsKey(currRoleName)) {
						$var($StringBuilder, excMsgStrB, $new($StringBuilder, "Role name "_s));
						excMsgStrB->append(currRoleName);
						excMsgStrB->append(" used for two roles."_s);
						$throwNew($InvalidRoleValueException, $(excMsgStrB->toString()));
					}
					$nc(this->myRoleName2ValueMap)->put(currRoleName, ($cast($Role, $(currRole->clone()))));
				}
			}
		}
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

void RelationSupport::handleMBeanUnregistrationInt($ObjectName* objectName, $String* roleName, bool relationServCallFlg, $RelationService* relationServ) {
	$useLocalCurrentObjectStackCache();
	if (objectName == nullptr || roleName == nullptr || (relationServCallFlg && relationServ == nullptr)) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1} {2} {3}"_s, $$new($ObjectArray, {
		$of(objectName),
		$of(roleName),
		$($of($Boolean::valueOf(relationServCallFlg))),
		$of(relationServ)
	}));
	$var($Role, role, nullptr);
	$synchronized(this->myRoleName2ValueMap) {
		$assign(role, $cast($Role, $nc(this->myRoleName2ValueMap)->get(roleName)));
	}
	if (role == nullptr) {
		$var($StringBuilder, excMsgStrB, $new($StringBuilder));
		$var($String, excMsg, "No role with name "_s);
		excMsgStrB->append(excMsg);
		excMsgStrB->append(roleName);
		$throwNew($RoleNotFoundException, $(excMsgStrB->toString()));
	}
	$var($List, currRoleValue, $nc(role)->getRoleValue());
	$var($List, newRoleValue, $new($ArrayList, static_cast<$Collection*>(currRoleValue)));
	newRoleValue->remove($of(objectName));
	$var($Role, newRole, $new($Role, roleName, newRoleValue));
	$var($Object, result, setRoleInt(newRole, relationServCallFlg, relationServ, false));
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

RelationSupport::RelationSupport() {
}

$Class* RelationSupport::load$($String* name, bool initialize) {
	$loadClass(RelationSupport, name, initialize, &_RelationSupport_ClassInfo_, allocate$RelationSupport);
	return class$;
}

$Class* RelationSupport::class$ = nullptr;

		} // relation
	} // management
} // javax