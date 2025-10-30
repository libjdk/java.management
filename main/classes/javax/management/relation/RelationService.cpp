#include <javax/management/relation/RelationService.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Date.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <javax/management/Attribute.h>
#include <javax/management/AttributeNotFoundException.h>
#include <javax/management/InstanceNotFoundException.h>
#include <javax/management/InvalidAttributeValueException.h>
#include <javax/management/MBeanException.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/MBeanServerDelegate.h>
#include <javax/management/MBeanServerNotification.h>
#include <javax/management/Notification.h>
#include <javax/management/NotificationBroadcasterSupport.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationFilterSupport.h>
#include <javax/management/NotificationListener.h>
#include <javax/management/ObjectName.h>
#include <javax/management/ReflectionException.h>
#include <javax/management/relation/InvalidRelationIdException.h>
#include <javax/management/relation/InvalidRelationServiceException.h>
#include <javax/management/relation/InvalidRelationTypeException.h>
#include <javax/management/relation/InvalidRoleValueException.h>
#include <javax/management/relation/MBeanServerNotificationFilter.h>
#include <javax/management/relation/RelationNotFoundException.h>
#include <javax/management/relation/RelationNotification.h>
#include <javax/management/relation/RelationServiceNotRegisteredException.h>
#include <javax/management/relation/RelationSupport.h>
#include <javax/management/relation/RelationType.h>
#include <javax/management/relation/RelationTypeNotFoundException.h>
#include <javax/management/relation/RelationTypeSupport.h>
#include <javax/management/relation/Role.h>
#include <javax/management/relation/RoleInfo.h>
#include <javax/management/relation/RoleInfoNotFoundException.h>
#include <javax/management/relation/RoleList.h>
#include <javax/management/relation/RoleNotFoundException.h>
#include <javax/management/relation/RoleResult.h>
#include <javax/management/relation/RoleStatus.h>
#include <jcpp.h>

#undef DELEGATE_NAME
#undef LESS_THAN_MIN_ROLE_DEGREE
#undef MORE_THAN_MAX_ROLE_DEGREE
#undef NO_ROLE_WITH_NAME
#undef REF_MBEAN_NOT_REGISTERED
#undef REF_MBEAN_OF_INCORRECT_CLASS
#undef RELATION_BASIC_CREATION
#undef RELATION_BASIC_REMOVAL
#undef RELATION_BASIC_UPDATE
#undef RELATION_LOGGER
#undef RELATION_MBEAN_CREATION
#undef RELATION_MBEAN_REMOVAL
#undef RELATION_MBEAN_UPDATE
#undef ROLE_NOT_READABLE
#undef ROLE_NOT_WRITABLE
#undef TRACE
#undef TRUE
#undef UNREGISTRATION_NOTIFICATION

using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $RoleInfoArray = $Array<::javax::management::relation::RoleInfo>;
using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Date = ::java::util::Date;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;
using $Attribute = ::javax::management::Attribute;
using $AttributeNotFoundException = ::javax::management::AttributeNotFoundException;
using $InstanceNotFoundException = ::javax::management::InstanceNotFoundException;
using $InvalidAttributeValueException = ::javax::management::InvalidAttributeValueException;
using $MBeanException = ::javax::management::MBeanException;
using $MBeanNotificationInfo = ::javax::management::MBeanNotificationInfo;
using $MBeanRegistration = ::javax::management::MBeanRegistration;
using $MBeanServer = ::javax::management::MBeanServer;
using $MBeanServerDelegate = ::javax::management::MBeanServerDelegate;
using $MBeanServerNotification = ::javax::management::MBeanServerNotification;
using $Notification = ::javax::management::Notification;
using $NotificationBroadcasterSupport = ::javax::management::NotificationBroadcasterSupport;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationFilterSupport = ::javax::management::NotificationFilterSupport;
using $NotificationListener = ::javax::management::NotificationListener;
using $ObjectName = ::javax::management::ObjectName;
using $ReflectionException = ::javax::management::ReflectionException;
using $InvalidRelationIdException = ::javax::management::relation::InvalidRelationIdException;
using $InvalidRelationServiceException = ::javax::management::relation::InvalidRelationServiceException;
using $InvalidRelationTypeException = ::javax::management::relation::InvalidRelationTypeException;
using $InvalidRoleValueException = ::javax::management::relation::InvalidRoleValueException;
using $MBeanServerNotificationFilter = ::javax::management::relation::MBeanServerNotificationFilter;
using $RelationNotFoundException = ::javax::management::relation::RelationNotFoundException;
using $RelationNotification = ::javax::management::relation::RelationNotification;
using $RelationServiceMBean = ::javax::management::relation::RelationServiceMBean;
using $RelationServiceNotRegisteredException = ::javax::management::relation::RelationServiceNotRegisteredException;
using $RelationSupport = ::javax::management::relation::RelationSupport;
using $RelationType = ::javax::management::relation::RelationType;
using $RelationTypeNotFoundException = ::javax::management::relation::RelationTypeNotFoundException;
using $RelationTypeSupport = ::javax::management::relation::RelationTypeSupport;
using $Role = ::javax::management::relation::Role;
using $RoleInfo = ::javax::management::relation::RoleInfo;
using $RoleInfoNotFoundException = ::javax::management::relation::RoleInfoNotFoundException;
using $RoleList = ::javax::management::relation::RoleList;
using $RoleNotFoundException = ::javax::management::relation::RoleNotFoundException;
using $RoleResult = ::javax::management::relation::RoleResult;
using $RoleStatus = ::javax::management::relation::RoleStatus;

namespace javax {
	namespace management {
		namespace relation {

$FieldInfo _RelationService_FieldInfo_[] = {
	{"myRelId2ObjMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $field(RelationService, myRelId2ObjMap)},
	{"myRelId2RelTypeMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(RelationService, myRelId2RelTypeMap)},
	{"myRelMBeanObjName2RelIdMap", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/management/ObjectName;Ljava/lang/String;>;", $PRIVATE, $field(RelationService, myRelMBeanObjName2RelIdMap)},
	{"myRelType2ObjMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljavax/management/relation/RelationType;>;", $PRIVATE, $field(RelationService, myRelType2ObjMap)},
	{"myRelType2RelIdsMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;", $PRIVATE, $field(RelationService, myRelType2RelIdsMap)},
	{"myRefedMBeanObjName2RelIdsMap", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/management/ObjectName;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;>;", $PRIVATE | $FINAL, $field(RelationService, myRefedMBeanObjName2RelIdsMap)},
	{"myPurgeFlag", "Z", nullptr, $PRIVATE, $field(RelationService, myPurgeFlag)},
	{"atomicSeqNo", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PRIVATE | $FINAL, $field(RelationService, atomicSeqNo)},
	{"myObjName", "Ljavax/management/ObjectName;", nullptr, $PRIVATE, $field(RelationService, myObjName)},
	{"myMBeanServer", "Ljavax/management/MBeanServer;", nullptr, $PRIVATE, $field(RelationService, myMBeanServer)},
	{"myUnregNtfFilter", "Ljavax/management/relation/MBeanServerNotificationFilter;", nullptr, $PRIVATE, $field(RelationService, myUnregNtfFilter)},
	{"myUnregNtfList", "Ljava/util/List;", "Ljava/util/List<Ljavax/management/MBeanServerNotification;>;", $PRIVATE, $field(RelationService, myUnregNtfList)},
	{}
};

$MethodInfo _RelationService_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(RelationService::*)(bool)>(&RelationService::init$))},
	{"addNewMBeanReference", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(RelationService::*)($ObjectName*,$String*,$String*)>(&RelationService::addNewMBeanReference)), "java.lang.IllegalArgumentException"},
	{"addRelation", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationServiceNotRegisteredException,java.lang.NoSuchMethodException,javax.management.relation.InvalidRelationIdException,javax.management.InstanceNotFoundException,javax.management.relation.InvalidRelationServiceException,javax.management.relation.RelationTypeNotFoundException,javax.management.relation.RoleNotFoundException,javax.management.relation.InvalidRoleValueException"},
	{"addRelationInt", "(ZLjavax/management/relation/RelationSupport;Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/String;Ljavax/management/relation/RoleList;)V", nullptr, $PRIVATE, $method(static_cast<void(RelationService::*)(bool,$RelationSupport*,$ObjectName*,$String*,$String*,$RoleList*)>(&RelationService::addRelationInt)), "java.lang.IllegalArgumentException,javax.management.relation.RelationServiceNotRegisteredException,javax.management.relation.RoleNotFoundException,javax.management.relation.InvalidRelationIdException,javax.management.relation.RelationTypeNotFoundException,javax.management.relation.InvalidRoleValueException"},
	{"addRelationType", "(Ljavax/management/relation/RelationType;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.InvalidRelationTypeException"},
	{"addRelationTypeInt", "(Ljavax/management/relation/RelationType;)V", nullptr, $PRIVATE, $method(static_cast<void(RelationService::*)($RelationType*)>(&RelationService::addRelationTypeInt)), "java.lang.IllegalArgumentException,javax.management.relation.InvalidRelationTypeException"},
	{"checkRoleInt", "(ILjava/lang/String;Ljava/util/List;Ljavax/management/relation/RoleInfo;Z)Ljava/lang/Integer;", "(ILjava/lang/String;Ljava/util/List<Ljavax/management/ObjectName;>;Ljavax/management/relation/RoleInfo;Z)Ljava/lang/Integer;", $PRIVATE, $method(static_cast<$Integer*(RelationService::*)(int32_t,$String*,$List*,$RoleInfo*,bool)>(&RelationService::checkRoleInt)), "java.lang.IllegalArgumentException"},
	{"checkRoleReading", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Integer;", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationTypeNotFoundException"},
	{"checkRoleWriting", "(Ljavax/management/relation/Role;Ljava/lang/String;Ljava/lang/Boolean;)Ljava/lang/Integer;", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationTypeNotFoundException"},
	{"createRelation", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/relation/RoleList;)V", nullptr, $PUBLIC, nullptr, "javax.management.relation.RelationServiceNotRegisteredException,java.lang.IllegalArgumentException,javax.management.relation.RoleNotFoundException,javax.management.relation.InvalidRelationIdException,javax.management.relation.RelationTypeNotFoundException,javax.management.relation.InvalidRoleValueException"},
	{"createRelationType", "(Ljava/lang/String;[Ljavax/management/relation/RoleInfo;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.InvalidRelationTypeException"},
	{"findAssociatedMBeans", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map;", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map<Ljavax/management/ObjectName;Ljava/util/List<Ljava/lang/String;>;>;", $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"findReferencingRelations", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map;", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;", $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"findRelationsOfType", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationTypeNotFoundException"},
	{"getAllRelationIds", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC},
	{"getAllRelationTypeNames", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC},
	{"getAllRoles", "(Ljava/lang/String;)Ljavax/management/relation/RoleResult;", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException,javax.management.relation.RelationServiceNotRegisteredException"},
	{"getNotificationInfo", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PUBLIC},
	{"getPurgeFlag", "()Z", nullptr, $PUBLIC},
	{"getReferencedMBeans", "(Ljava/lang/String;)Ljava/util/Map;", "(Ljava/lang/String;)Ljava/util/Map<Ljavax/management/ObjectName;Ljava/util/List<Ljava/lang/String;>;>;", $PUBLIC, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException"},
	{"getRelation", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException"},
	{"getRelationType", "(Ljava/lang/String;)Ljavax/management/relation/RelationType;", nullptr, 0, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationTypeNotFoundException"},
	{"getRelationTypeName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException"},
	{"getRole", "(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List<Ljavax/management/ObjectName;>;", $PUBLIC, nullptr, "javax.management.relation.RelationServiceNotRegisteredException,java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException,javax.management.relation.RoleNotFoundException"},
	{"getRoleCardinality", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Integer;", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException,javax.management.relation.RoleNotFoundException"},
	{"getRoleInfo", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/management/relation/RoleInfo;", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationTypeNotFoundException,javax.management.relation.RoleInfoNotFoundException"},
	{"getRoleInfos", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljavax/management/relation/RoleInfo;>;", $PUBLIC, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationTypeNotFoundException"},
	{"getRoles", "(Ljava/lang/String;[Ljava/lang/String;)Ljavax/management/relation/RoleResult;", nullptr, $PUBLIC, nullptr, "javax.management.relation.RelationServiceNotRegisteredException,java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException"},
	{"handleNotification", "(Ljavax/management/Notification;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"handleReferenceUnregistration", "(Ljava/lang/String;Ljavax/management/ObjectName;Ljava/util/List;)V", "(Ljava/lang/String;Ljavax/management/ObjectName;Ljava/util/List<Ljava/lang/String;>;)V", $PRIVATE, $method(static_cast<void(RelationService::*)($String*,$ObjectName*,$List*)>(&RelationService::handleReferenceUnregistration)), "java.lang.IllegalArgumentException,javax.management.relation.RelationServiceNotRegisteredException,javax.management.relation.RelationNotFoundException,javax.management.relation.RoleNotFoundException"},
	{"hasRelation", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"initializeMissingRoles", "(ZLjavax/management/relation/RelationSupport;Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;)V", "(ZLjavax/management/relation/RelationSupport;Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/String;Ljava/util/List<Ljavax/management/relation/RoleInfo;>;)V", $PRIVATE, $method(static_cast<void(RelationService::*)(bool,$RelationSupport*,$ObjectName*,$String*,$String*,$List*)>(&RelationService::initializeMissingRoles)), "java.lang.IllegalArgumentException,javax.management.relation.RelationServiceNotRegisteredException,javax.management.relation.InvalidRoleValueException"},
	{"isActive", "()V", nullptr, $PUBLIC, nullptr, "javax.management.relation.RelationServiceNotRegisteredException"},
	{"isRelation", "(Ljavax/management/ObjectName;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"isRelationMBean", "(Ljava/lang/String;)Ljavax/management/ObjectName;", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException"},
	{"postDeregister", "()V", nullptr, $PUBLIC},
	{"postRegister", "(Ljava/lang/Boolean;)V", nullptr, $PUBLIC},
	{"preDeregister", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"preRegister", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)Ljavax/management/ObjectName;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"purgeRelations", "()V", nullptr, $PUBLIC, nullptr, "javax.management.relation.RelationServiceNotRegisteredException"},
	{"removeMBeanReference", "(Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/String;Z)Z", nullptr, $PRIVATE, $method(static_cast<bool(RelationService::*)($ObjectName*,$String*,$String*,bool)>(&RelationService::removeMBeanReference)), "java.lang.IllegalArgumentException"},
	{"removeRelation", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.management.relation.RelationServiceNotRegisteredException,java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException"},
	{"removeRelationType", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.management.relation.RelationServiceNotRegisteredException,java.lang.IllegalArgumentException,javax.management.relation.RelationTypeNotFoundException"},
	{"sendNotificationInt", "(ILjava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/lang/String;Ljava/util/List;Ljava/util/List;)V", "(ILjava/lang/String;Ljava/lang/String;Ljava/util/List<Ljavax/management/ObjectName;>;Ljava/lang/String;Ljava/util/List<Ljavax/management/ObjectName;>;Ljava/util/List<Ljavax/management/ObjectName;>;)V", $PRIVATE, $method(static_cast<void(RelationService::*)(int32_t,$String*,$String*,$List*,$String*,$List*,$List*)>(&RelationService::sendNotificationInt)), "java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException"},
	{"sendRelationCreationNotification", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException"},
	{"sendRelationRemovalNotification", "(Ljava/lang/String;Ljava/util/List;)V", "(Ljava/lang/String;Ljava/util/List<Ljavax/management/ObjectName;>;)V", $PUBLIC, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException"},
	{"sendRoleUpdateNotification", "(Ljava/lang/String;Ljavax/management/relation/Role;Ljava/util/List;)V", "(Ljava/lang/String;Ljavax/management/relation/Role;Ljava/util/List<Ljavax/management/ObjectName;>;)V", $PUBLIC, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException"},
	{"setPurgeFlag", "(Z)V", nullptr, $PUBLIC},
	{"setRole", "(Ljava/lang/String;Ljavax/management/relation/Role;)V", nullptr, $PUBLIC, nullptr, "javax.management.relation.RelationServiceNotRegisteredException,java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException,javax.management.relation.RoleNotFoundException,javax.management.relation.InvalidRoleValueException"},
	{"setRoles", "(Ljava/lang/String;Ljavax/management/relation/RoleList;)Ljavax/management/relation/RoleResult;", nullptr, $PUBLIC, nullptr, "javax.management.relation.RelationServiceNotRegisteredException,java.lang.IllegalArgumentException,javax.management.relation.RelationNotFoundException"},
	{"throwRoleProblemException", "(ILjava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,$String*)>(&RelationService::throwRoleProblemException)), "java.lang.IllegalArgumentException,javax.management.relation.RoleNotFoundException,javax.management.relation.InvalidRoleValueException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateRoleMap", "(Ljava/lang/String;Ljavax/management/relation/Role;Ljava/util/List;)V", "(Ljava/lang/String;Ljavax/management/relation/Role;Ljava/util/List<Ljavax/management/ObjectName;>;)V", $PUBLIC, nullptr, "java.lang.IllegalArgumentException,javax.management.relation.RelationServiceNotRegisteredException,javax.management.relation.RelationNotFoundException"},
	{"updateUnregistrationListener", "(Ljava/util/List;Ljava/util/List;)V", "(Ljava/util/List<Ljavax/management/ObjectName;>;Ljava/util/List<Ljavax/management/ObjectName;>;)V", $PRIVATE, $method(static_cast<void(RelationService::*)($List*,$List*)>(&RelationService::updateUnregistrationListener)), "javax.management.relation.RelationServiceNotRegisteredException"},
	{}
};

$ClassInfo _RelationService_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.relation.RelationService",
	"javax.management.NotificationBroadcasterSupport",
	"javax.management.relation.RelationServiceMBean,javax.management.MBeanRegistration,javax.management.NotificationListener",
	_RelationService_FieldInfo_,
	_RelationService_MethodInfo_
};

$Object* allocate$RelationService($Class* clazz) {
	return $of($alloc(RelationService));
}

int32_t RelationService::hashCode() {
	 return this->$NotificationBroadcasterSupport::hashCode();
}

bool RelationService::equals(Object$* arg0) {
	 return this->$NotificationBroadcasterSupport::equals(arg0);
}

$Object* RelationService::clone() {
	 return this->$NotificationBroadcasterSupport::clone();
}

$String* RelationService::toString() {
	 return this->$NotificationBroadcasterSupport::toString();
}

void RelationService::finalize() {
	this->$NotificationBroadcasterSupport::finalize();
}

void RelationService::init$(bool immediatePurgeFlag) {
	$NotificationBroadcasterSupport::init$();
	$set(this, myRelId2ObjMap, $new($HashMap));
	$set(this, myRelId2RelTypeMap, $new($HashMap));
	$set(this, myRelMBeanObjName2RelIdMap, $new($HashMap));
	$set(this, myRelType2ObjMap, $new($HashMap));
	$set(this, myRelType2RelIdsMap, $new($HashMap));
	$set(this, myRefedMBeanObjName2RelIdsMap, $new($HashMap));
	this->myPurgeFlag = true;
	$set(this, atomicSeqNo, $new($AtomicLong));
	$set(this, myObjName, nullptr);
	$set(this, myMBeanServer, nullptr);
	$set(this, myUnregNtfFilter, nullptr);
	$set(this, myUnregNtfList, $new($ArrayList));
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY"_s);
	setPurgeFlag(immediatePurgeFlag);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

void RelationService::isActive() {
	if (this->myMBeanServer == nullptr) {
		$var($String, excMsg, "Relation Service not registered in the MBean Server."_s);
		$throwNew($RelationServiceNotRegisteredException, excMsg);
	}
	return;
}

$ObjectName* RelationService::preRegister($MBeanServer* server, $ObjectName* name) {
	$set(this, myMBeanServer, server);
	$set(this, myObjName, name);
	return name;
}

void RelationService::postRegister($Boolean* registrationDone) {
	return;
}

void RelationService::preDeregister() {
	return;
}

void RelationService::postDeregister() {
	return;
}

bool RelationService::getPurgeFlag() {
	return this->myPurgeFlag;
}

void RelationService::setPurgeFlag(bool purgeFlag) {
	this->myPurgeFlag = purgeFlag;
	return;
}

void RelationService::createRelationType($String* relationTypeName, $RoleInfoArray* roleInfoArray) {
	$useLocalCurrentObjectStackCache();
	if (relationTypeName == nullptr || roleInfoArray == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(relationTypeName)}));
	$var($RelationType, relType, $new($RelationTypeSupport, relationTypeName, roleInfoArray));
	addRelationTypeInt(relType);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

void RelationService::addRelationType($RelationType* relationTypeObj) {
	$useLocalCurrentObjectStackCache();
	if (relationTypeObj == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY"_s);
	$var($List, roleInfoList, $nc(relationTypeObj)->getRoleInfos());
	if (roleInfoList == nullptr) {
		$var($String, excMsg, "No role info provided."_s);
		$throwNew($InvalidRelationTypeException, excMsg);
	}
	$var($RoleInfoArray, roleInfoArray, $new($RoleInfoArray, $nc(roleInfoList)->size()));
	int32_t i = 0;
	{
		$var($Iterator, i$, roleInfoList->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($RoleInfo, currRoleInfo, $cast($RoleInfo, i$->next()));
			{
				roleInfoArray->set(i, currRoleInfo);
				++i;
			}
		}
	}
	$RelationTypeSupport::checkRoleInfos(roleInfoArray);
	addRelationTypeInt(relationTypeObj);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

$List* RelationService::getAllRelationTypeNames() {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, result, nullptr);
	$synchronized(this->myRelType2ObjMap) {
		$assign(result, $new($ArrayList, $(static_cast<$Collection*>($nc(this->myRelType2ObjMap)->keySet()))));
	}
	return result;
}

$List* RelationService::getRoleInfos($String* relationTypeName) {
	$useLocalCurrentObjectStackCache();
	if (relationTypeName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(relationTypeName)}));
	$var($RelationType, relType, getRelationType(relationTypeName));
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return $nc(relType)->getRoleInfos();
}

$RoleInfo* RelationService::getRoleInfo($String* relationTypeName, $String* roleInfoName) {
	$useLocalCurrentObjectStackCache();
	if (relationTypeName == nullptr || roleInfoName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1}"_s, $$new($ObjectArray, {
		$of(relationTypeName),
		$of(roleInfoName)
	}));
	$var($RelationType, relType, getRelationType(relationTypeName));
	$var($RoleInfo, roleInfo, $nc(relType)->getRoleInfo(roleInfoName));
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return roleInfo;
}

void RelationService::removeRelationType($String* relationTypeName) {
	$useLocalCurrentObjectStackCache();
	isActive();
	if (relationTypeName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(relationTypeName)}));
	$var($RelationType, relType, getRelationType(relationTypeName));
	$var($List, relIdList, nullptr);
	$synchronized(this->myRelType2RelIdsMap) {
		$var($List, relIdList1, $cast($List, $nc(this->myRelType2RelIdsMap)->get(relationTypeName)));
		if (relIdList1 != nullptr) {
			$assign(relIdList, $new($ArrayList, static_cast<$Collection*>(relIdList1)));
		}
	}
	$synchronized(this->myRelType2ObjMap) {
		$nc(this->myRelType2ObjMap)->remove(relationTypeName);
	}
	$synchronized(this->myRelType2RelIdsMap) {
		$nc(this->myRelType2RelIdsMap)->remove(relationTypeName);
	}
	if (relIdList != nullptr) {
		{
			$var($Iterator, i$, relIdList->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, currRelId, $cast($String, i$->next()));
				{
					try {
						removeRelation(currRelId);
					} catch ($RelationNotFoundException& exc1) {
						$throwNew($RuntimeException, $(exc1->getMessage()));
					}
				}
			}
		}
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

void RelationService::createRelation($String* relationId, $String* relationTypeName, $RoleList* roleList) {
	$useLocalCurrentObjectStackCache();
	isActive();
	if (relationId == nullptr || relationTypeName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1} {2}"_s, $$new($ObjectArray, {
		$of(relationId),
		$of(relationTypeName),
		$of(roleList)
	}));
	$var($RelationSupport, relObj, $new($RelationSupport, relationId, this->myObjName, relationTypeName, roleList));
	addRelationInt(true, relObj, nullptr, relationId, relationTypeName, roleList);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

void RelationService::addRelation($ObjectName* relationObjectName) {
	$useLocalCurrentObjectStackCache();
	if (relationObjectName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(relationObjectName)}));
	isActive();
	if (!($nc(this->myMBeanServer)->isInstanceOf(relationObjectName, "javax.management.relation.Relation"_s))) {
		$var($String, excMsg, "This MBean does not implement the Relation interface."_s);
		$throwNew($NoSuchMethodException, excMsg);
	}
	$var($String, relId, nullptr);
	try {
		$assign(relId, ($cast($String, $nc(this->myMBeanServer)->getAttribute(relationObjectName, "RelationId"_s))));
	} catch ($MBeanException& exc1) {
		$throwNew($RuntimeException, $($nc(($(exc1->getTargetException())))->getMessage()));
	} catch ($ReflectionException& exc2) {
		$throwNew($RuntimeException, $(exc2->getMessage()));
	} catch ($AttributeNotFoundException& exc3) {
		$throwNew($RuntimeException, $(exc3->getMessage()));
	}
	if (relId == nullptr) {
		$var($String, excMsg, "This MBean does not provide a relation id."_s);
		$throwNew($InvalidRelationIdException, excMsg);
	}
	$var($ObjectName, relServObjName, nullptr);
	try {
		$assign(relServObjName, ($cast($ObjectName, $nc(this->myMBeanServer)->getAttribute(relationObjectName, "RelationServiceName"_s))));
	} catch ($MBeanException& exc1) {
		$throwNew($RuntimeException, $($nc(($(exc1->getTargetException())))->getMessage()));
	} catch ($ReflectionException& exc2) {
		$throwNew($RuntimeException, $(exc2->getMessage()));
	} catch ($AttributeNotFoundException& exc3) {
		$throwNew($RuntimeException, $(exc3->getMessage()));
	}
	bool badRelServFlag = false;
	if (relServObjName == nullptr) {
		badRelServFlag = true;
	} else if (!($nc(relServObjName)->equals(this->myObjName))) {
		badRelServFlag = true;
	}
	if (badRelServFlag) {
		$var($String, excMsg, "The Relation Service referenced in the MBean is not the current one."_s);
		$throwNew($InvalidRelationServiceException, excMsg);
	}
	$var($String, relTypeName, nullptr);
	try {
		$assign(relTypeName, ($cast($String, $nc(this->myMBeanServer)->getAttribute(relationObjectName, "RelationTypeName"_s))));
	} catch ($MBeanException& exc1) {
		$throwNew($RuntimeException, $($nc(($(exc1->getTargetException())))->getMessage()));
	} catch ($ReflectionException& exc2) {
		$throwNew($RuntimeException, $(exc2->getMessage()));
	} catch ($AttributeNotFoundException& exc3) {
		$throwNew($RuntimeException, $(exc3->getMessage()));
	}
	if (relTypeName == nullptr) {
		$var($String, excMsg, "No relation type provided."_s);
		$throwNew($RelationTypeNotFoundException, excMsg);
	}
	$var($RoleList, roleList, nullptr);
	try {
		$assign(roleList, ($cast($RoleList, $nc(this->myMBeanServer)->invoke(relationObjectName, "retrieveAllRoles"_s, nullptr, nullptr))));
	} catch ($MBeanException& exc1) {
		$throwNew($RuntimeException, $($nc(($(exc1->getTargetException())))->getMessage()));
	} catch ($ReflectionException& exc2) {
		$throwNew($RuntimeException, $(exc2->getMessage()));
	}
	addRelationInt(false, nullptr, relationObjectName, relId, relTypeName, roleList);
	$synchronized(this->myRelMBeanObjName2RelIdMap) {
		$nc(this->myRelMBeanObjName2RelIdMap)->put(relationObjectName, relId);
	}
	try {
		$init($Boolean);
		$nc(this->myMBeanServer)->setAttribute(relationObjectName, $$new($Attribute, "RelationServiceManagementFlag"_s, $Boolean::TRUE));
	} catch ($Exception& exc) {
	}
	$var($List, newRefList, $new($ArrayList));
	newRefList->add(relationObjectName);
	updateUnregistrationListener(newRefList, nullptr);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

$ObjectName* RelationService::isRelationMBean($String* relationId) {
	$useLocalCurrentObjectStackCache();
	if (relationId == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(relationId)}));
	$var($Object, result, getRelation(relationId));
	if ($instanceOf($ObjectName, result)) {
		return ($cast($ObjectName, result));
	} else {
		return nullptr;
	}
}

$String* RelationService::isRelation($ObjectName* objectName) {
	$useLocalCurrentObjectStackCache();
	if (objectName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(objectName)}));
	$var($String, result, nullptr);
	$synchronized(this->myRelMBeanObjName2RelIdMap) {
		$var($String, relId, $cast($String, $nc(this->myRelMBeanObjName2RelIdMap)->get(objectName)));
		if (relId != nullptr) {
			$assign(result, relId);
		}
	}
	return result;
}

$Boolean* RelationService::hasRelation($String* relationId) {
	$useLocalCurrentObjectStackCache();
	if (relationId == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(relationId)}));
	try {
		$var($Object, result, getRelation(relationId));
		return $Boolean::valueOf(true);
	} catch ($RelationNotFoundException& exc) {
		return $Boolean::valueOf(false);
	}
	$shouldNotReachHere();
}

$List* RelationService::getAllRelationIds() {
	$useLocalCurrentObjectStackCache();
	$var($List, result, nullptr);
	$synchronized(this->myRelId2ObjMap) {
		$assign(result, $new($ArrayList, $(static_cast<$Collection*>($nc(this->myRelId2ObjMap)->keySet()))));
	}
	return result;
}

$Integer* RelationService::checkRoleReading($String* roleName, $String* relationTypeName) {
	$useLocalCurrentObjectStackCache();
	if (roleName == nullptr || relationTypeName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1}"_s, $$new($ObjectArray, {
		$of(roleName),
		$of(relationTypeName)
	}));
	$var($Integer, result, nullptr);
	$var($RelationType, relType, getRelationType(relationTypeName));
	try {
		$var($RoleInfo, roleInfo, $nc(relType)->getRoleInfo(roleName));
		$assign(result, checkRoleInt(1, roleName, nullptr, roleInfo, false));
	} catch ($RoleInfoNotFoundException& exc) {
		$assign(result, $Integer::valueOf($RoleStatus::NO_ROLE_WITH_NAME));
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return result;
}

$Integer* RelationService::checkRoleWriting($Role* role, $String* relationTypeName, $Boolean* initFlag) {
	$useLocalCurrentObjectStackCache();
	if (role == nullptr || relationTypeName == nullptr || initFlag == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1} {2}"_s, $$new($ObjectArray, {
		$of(role),
		$of(relationTypeName),
		$of(initFlag)
	}));
	$var($RelationType, relType, getRelationType(relationTypeName));
	$var($String, roleName, $nc(role)->getRoleName());
	$var($List, roleValue, role->getRoleValue());
	bool writeChkFlag = true;
	if ($nc(initFlag)->booleanValue()) {
		writeChkFlag = false;
	}
	$var($RoleInfo, roleInfo, nullptr);
	try {
		$assign(roleInfo, $nc(relType)->getRoleInfo(roleName));
	} catch ($RoleInfoNotFoundException& exc) {
		$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
		return $Integer::valueOf($RoleStatus::NO_ROLE_WITH_NAME);
	}
	$var($Integer, result, checkRoleInt(2, roleName, roleValue, roleInfo, writeChkFlag));
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return result;
}

void RelationService::sendRelationCreationNotification($String* relationId) {
	$useLocalCurrentObjectStackCache();
	if (relationId == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(relationId)}));
	$var($StringBuilder, ntfMsg, $new($StringBuilder, "Creation of relation "_s));
	ntfMsg->append(relationId);
	sendNotificationInt(1, $(ntfMsg->toString()), relationId, nullptr, nullptr, nullptr, nullptr);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

void RelationService::sendRoleUpdateNotification($String* relationId, $Role* newRole, $List* oldValue$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($List, oldValue, oldValue$renamed);
	if (relationId == nullptr || newRole == nullptr || oldValue == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	if (!($instanceOf($ArrayList, oldValue))) {
		$assign(oldValue, $new($ArrayList, static_cast<$Collection*>(oldValue)));
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1} {2}"_s, $$new($ObjectArray, {
		$of(relationId),
		$of(newRole),
		$of(oldValue)
	}));
	$var($String, roleName, $nc(newRole)->getRoleName());
	$var($List, newRoleVal, newRole->getRoleValue());
	$var($String, newRoleValString, $Role::roleValueToString(newRoleVal));
	$var($String, oldRoleValString, $Role::roleValueToString(oldValue));
	$var($StringBuilder, ntfMsg, $new($StringBuilder, "Value of role "_s));
	ntfMsg->append(roleName);
	ntfMsg->append(" has changed\nOld value:\n"_s);
	ntfMsg->append(oldRoleValString);
	ntfMsg->append("\nNew value:\n"_s);
	ntfMsg->append(newRoleValString);
	sendNotificationInt(2, $(ntfMsg->toString()), relationId, nullptr, roleName, newRoleVal, oldValue);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
}

void RelationService::sendRelationRemovalNotification($String* relationId, $List* unregMBeanList) {
	$useLocalCurrentObjectStackCache();
	if (relationId == nullptr) {
		$var($String, excMsg, "Invalid parameter"_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1}"_s, $$new($ObjectArray, {
		$of(relationId),
		$of(unregMBeanList)
	}));
	sendNotificationInt(3, $$str({"Removal of relation "_s, relationId}), relationId, unregMBeanList, nullptr, nullptr, nullptr);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

void RelationService::updateRoleMap($String* relationId, $Role* newRole, $List* oldValue) {
	$useLocalCurrentObjectStackCache();
	if (relationId == nullptr || newRole == nullptr || oldValue == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1} {2}"_s, $$new($ObjectArray, {
		$of(relationId),
		$of(newRole),
		$of(oldValue)
	}));
	isActive();
	$var($Object, result, getRelation(relationId));
	$var($String, roleName, $nc(newRole)->getRoleName());
	$var($List, newRoleValue, newRole->getRoleValue());
	$var($List, oldRoleValue, $new($ArrayList, static_cast<$Collection*>(oldValue)));
	$var($List, newRefList, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(newRoleValue)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ObjectName, currObjName, $cast($ObjectName, i$->next()));
			{
				int32_t currObjNamePos = oldRoleValue->indexOf(currObjName);
				if (currObjNamePos == -1) {
					bool isNewFlag = addNewMBeanReference(currObjName, relationId, roleName);
					if (isNewFlag) {
						newRefList->add(currObjName);
					}
				} else {
					oldRoleValue->remove(currObjNamePos);
				}
			}
		}
	}
	$var($List, obsRefList, $new($ArrayList));
	{
		$var($Iterator, i$, oldRoleValue->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ObjectName, currObjName, $cast($ObjectName, i$->next()));
			{
				bool noLongerRefFlag = removeMBeanReference(currObjName, relationId, roleName, false);
				if (noLongerRefFlag) {
					obsRefList->add(currObjName);
				}
			}
		}
	}
	updateUnregistrationListener(newRefList, obsRefList);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

void RelationService::removeRelation($String* relationId) {
	$useLocalCurrentObjectStackCache();
	isActive();
	if (relationId == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(relationId)}));
	$var($Object, result, getRelation(relationId));
	if ($instanceOf($ObjectName, result)) {
		$var($List, obsRefList, $new($ArrayList));
		obsRefList->add($cast($ObjectName, result));
		updateUnregistrationListener(nullptr, obsRefList);
	}
	sendRelationRemovalNotification(relationId, nullptr);
	$var($List, refMBeanList, $new($ArrayList));
	$var($List, nonRefObjNameList, $new($ArrayList));
	$synchronized(this->myRefedMBeanObjName2RelIdsMap) {
		{
			$var($Iterator, i$, $nc($($nc(this->myRefedMBeanObjName2RelIdsMap)->keySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($ObjectName, currRefObjName, $cast($ObjectName, i$->next()));
				{
					$var($Map, relIdMap, $cast($Map, $nc(this->myRefedMBeanObjName2RelIdsMap)->get(currRefObjName)));
					if ($nc(relIdMap)->containsKey(relationId)) {
						relIdMap->remove(relationId);
						refMBeanList->add(currRefObjName);
					}
					if ($nc(relIdMap)->isEmpty()) {
						nonRefObjNameList->add(currRefObjName);
					}
				}
			}
		}
		{
			$var($Iterator, i$, nonRefObjNameList->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($ObjectName, currRefObjName, $cast($ObjectName, i$->next()));
				{
					$nc(this->myRefedMBeanObjName2RelIdsMap)->remove(currRefObjName);
				}
			}
		}
	}
	$synchronized(this->myRelId2ObjMap) {
		$nc(this->myRelId2ObjMap)->remove(relationId);
	}
	if ($instanceOf($ObjectName, result)) {
		$synchronized(this->myRelMBeanObjName2RelIdMap) {
			$nc(this->myRelMBeanObjName2RelIdMap)->remove($cast($ObjectName, result));
		}
	}
	$var($String, relTypeName, nullptr);
	$synchronized(this->myRelId2RelTypeMap) {
		$assign(relTypeName, $cast($String, $nc(this->myRelId2RelTypeMap)->get(relationId)));
		$nc(this->myRelId2RelTypeMap)->remove(relationId);
	}
	$synchronized(this->myRelType2RelIdsMap) {
		$var($List, relIdList, $cast($List, $nc(this->myRelType2RelIdsMap)->get(relTypeName)));
		if (relIdList != nullptr) {
			relIdList->remove($of(relationId));
			if (relIdList->isEmpty()) {
				$nc(this->myRelType2RelIdsMap)->remove(relTypeName);
			}
		}
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

void RelationService::purgeRelations() {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY"_s);
	isActive();
	$var($List, localUnregNtfList, nullptr);
	$synchronized(this->myRefedMBeanObjName2RelIdsMap) {
		$assign(localUnregNtfList, $new($ArrayList, static_cast<$Collection*>(this->myUnregNtfList)));
		$set(this, myUnregNtfList, $new($ArrayList));
	}
	$var($List, obsRefList, $new($ArrayList));
	$var($Map, localMBean2RelIdMap, $new($HashMap));
	$synchronized(this->myRefedMBeanObjName2RelIdsMap) {
		{
			$var($Iterator, i$, $nc(localUnregNtfList)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($MBeanServerNotification, currNtf, $cast($MBeanServerNotification, i$->next()));
				{
					$var($ObjectName, unregMBeanName, $nc(currNtf)->getMBeanName());
					obsRefList->add(unregMBeanName);
					$var($Map, relIdMap, $cast($Map, $nc(this->myRefedMBeanObjName2RelIdsMap)->get(unregMBeanName)));
					localMBean2RelIdMap->put(unregMBeanName, relIdMap);
					$nc(this->myRefedMBeanObjName2RelIdsMap)->remove(unregMBeanName);
				}
			}
		}
	}
	updateUnregistrationListener(nullptr, obsRefList);
	{
		$var($Iterator, i$, $nc(localUnregNtfList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($MBeanServerNotification, currNtf, $cast($MBeanServerNotification, i$->next()));
			{
				$var($ObjectName, unregMBeanName, $nc(currNtf)->getMBeanName());
				$var($Map, localRelIdMap, $cast($Map, localMBean2RelIdMap->get(unregMBeanName)));
				{
					$var($Iterator, i$, $nc($($nc(localRelIdMap)->entrySet()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Map$Entry, currRel, $cast($Map$Entry, i$->next()));
						{
							$var($String, currRelId, $cast($String, $nc(currRel)->getKey()));
							$var($List, localRoleNameList, $cast($List, currRel->getValue()));
							try {
								handleReferenceUnregistration(currRelId, unregMBeanName, localRoleNameList);
							} catch ($RelationNotFoundException& exc1) {
								$throwNew($RuntimeException, $(exc1->getMessage()));
							} catch ($RoleNotFoundException& exc2) {
								$throwNew($RuntimeException, $(exc2->getMessage()));
							}
						}
					}
				}
			}
		}
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

$Map* RelationService::findReferencingRelations($ObjectName* mbeanName, $String* relationTypeName, $String* roleName) {
	$useLocalCurrentObjectStackCache();
	if (mbeanName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1} {2}"_s, $$new($ObjectArray, {
		$of(mbeanName),
		$of(relationTypeName),
		$of(roleName)
	}));
	$var($Map, result, $new($HashMap));
	$synchronized(this->myRefedMBeanObjName2RelIdsMap) {
		$var($Map, relId2RoleNamesMap, $cast($Map, $nc(this->myRefedMBeanObjName2RelIdsMap)->get(mbeanName)));
		if (relId2RoleNamesMap != nullptr) {
			$var($Set, allRelIdSet, relId2RoleNamesMap->keySet());
			$var($List, relIdList, nullptr);
			if (relationTypeName == nullptr) {
				$assign(relIdList, $new($ArrayList, static_cast<$Collection*>(allRelIdSet)));
			} else {
				$assign(relIdList, $new($ArrayList));
				{
					$var($Iterator, i$, $nc(allRelIdSet)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, currRelId, $cast($String, i$->next()));
						{
							$var($String, currRelTypeName, nullptr);
							$synchronized(this->myRelId2RelTypeMap) {
								$assign(currRelTypeName, $cast($String, $nc(this->myRelId2RelTypeMap)->get(currRelId)));
							}
							if ($nc(currRelTypeName)->equals(relationTypeName)) {
								relIdList->add(currRelId);
							}
						}
					}
				}
			}
			{
				$var($Iterator, i$, $nc(relIdList)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($String, currRelId, $cast($String, i$->next()));
					{
						$var($List, currRoleNameList, $cast($List, relId2RoleNamesMap->get(currRelId)));
						if (roleName == nullptr) {
							result->put(currRelId, $$new($ArrayList, static_cast<$Collection*>(currRoleNameList)));
						} else if ($nc(currRoleNameList)->contains(roleName)) {
							$var($List, dummyList, $new($ArrayList));
							dummyList->add(roleName);
							result->put(currRelId, dummyList);
						}
					}
				}
			}
		}
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return result;
}

$Map* RelationService::findAssociatedMBeans($ObjectName* mbeanName, $String* relationTypeName, $String* roleName) {
	$useLocalCurrentObjectStackCache();
	if (mbeanName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1} {2}"_s, $$new($ObjectArray, {
		$of(mbeanName),
		$of(relationTypeName),
		$of(roleName)
	}));
	$var($Map, relId2RoleNamesMap, findReferencingRelations(mbeanName, relationTypeName, roleName));
	$var($Map, result, $new($HashMap));
	{
		$var($Iterator, i$, $nc($($nc(relId2RoleNamesMap)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, currRelId, $cast($String, i$->next()));
			{
				$var($Map, objName2RoleNamesMap, nullptr);
				try {
					$assign(objName2RoleNamesMap, getReferencedMBeans(currRelId));
				} catch ($RelationNotFoundException& exc) {
					$throwNew($RuntimeException, $(exc->getMessage()));
				}
				{
					$var($Iterator, i$, $nc($($nc(objName2RoleNamesMap)->keySet()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($ObjectName, currObjName, $cast($ObjectName, i$->next()));
						{
							if (!($nc(currObjName)->equals(mbeanName))) {
								$var($List, currRelIdList, $cast($List, result->get(currObjName)));
								if (currRelIdList == nullptr) {
									$assign(currRelIdList, $new($ArrayList));
									currRelIdList->add(currRelId);
									result->put(currObjName, currRelIdList);
								} else {
									$nc(currRelIdList)->add(currRelId);
								}
							}
						}
					}
				}
			}
		}
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return result;
}

$List* RelationService::findRelationsOfType($String* relationTypeName) {
	$useLocalCurrentObjectStackCache();
	if (relationTypeName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY"_s);
	$var($RelationType, relType, getRelationType(relationTypeName));
	$var($List, result, nullptr);
	$synchronized(this->myRelType2RelIdsMap) {
		$var($List, result1, $cast($List, $nc(this->myRelType2RelIdsMap)->get(relationTypeName)));
		if (result1 == nullptr) {
			$assign(result, $new($ArrayList));
		} else {
			$assign(result, $new($ArrayList, static_cast<$Collection*>(result1)));
		}
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return result;
}

$List* RelationService::getRole($String* relationId, $String* roleName) {
	$useLocalCurrentObjectStackCache();
	if (relationId == nullptr || roleName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1}"_s, $$new($ObjectArray, {
		$of(relationId),
		$of(roleName)
	}));
	isActive();
	$var($Object, relObj, getRelation(relationId));
	$var($List, result, nullptr);
	if ($instanceOf($RelationSupport, relObj)) {
		$assign(result, $cast($List, $Util::cast($($nc(($cast($RelationSupport, relObj)))->getRoleInt(roleName, true, this, false)))));
	} else {
		$var($ObjectArray, params, $new($ObjectArray, 1));
		params->set(0, roleName);
		$var($StringArray, signature, $new($StringArray, 1));
		signature->set(0, "java.lang.String"_s);
		try {
			$var($List, invokeResult, $cast($List, $Util::cast($($nc(this->myMBeanServer)->invoke(($cast($ObjectName, relObj)), "getRole"_s, params, signature)))));
			if (invokeResult == nullptr || $instanceOf($ArrayList, invokeResult)) {
				$assign(result, invokeResult);
			} else {
				$assign(result, $new($ArrayList, static_cast<$Collection*>(invokeResult)));
			}
		} catch ($InstanceNotFoundException& exc1) {
			$throwNew($RuntimeException, $(exc1->getMessage()));
		} catch ($ReflectionException& exc2) {
			$throwNew($RuntimeException, $(exc2->getMessage()));
		} catch ($MBeanException& exc3) {
			$var($Exception, wrappedExc, exc3->getTargetException());
			if ($instanceOf($RoleNotFoundException, wrappedExc)) {
				$throw($cast($RoleNotFoundException, wrappedExc));
			} else {
				$throwNew($RuntimeException, $($nc(wrappedExc)->getMessage()));
			}
		}
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return result;
}

$RoleResult* RelationService::getRoles($String* relationId, $StringArray* roleNameArray) {
	$useLocalCurrentObjectStackCache();
	if (relationId == nullptr || roleNameArray == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(relationId)}));
	isActive();
	$var($Object, relObj, getRelation(relationId));
	$var($RoleResult, result, nullptr);
	if ($instanceOf($RelationSupport, relObj)) {
		$assign(result, $nc(($cast($RelationSupport, relObj)))->getRolesInt(roleNameArray, true, this));
	} else {
		$var($ObjectArray, params, $new($ObjectArray, 1));
		params->set(0, roleNameArray);
		$var($StringArray, signature, $new($StringArray, 1));
		try {
			signature->set(0, $(($nc($of(roleNameArray))->getClass())->getName()));
		} catch ($Exception& exc) {
		}
		try {
			$assign(result, ($cast($RoleResult, $nc(this->myMBeanServer)->invoke(($cast($ObjectName, relObj)), "getRoles"_s, params, signature))));
		} catch ($InstanceNotFoundException& exc1) {
			$throwNew($RuntimeException, $(exc1->getMessage()));
		} catch ($ReflectionException& exc2) {
			$throwNew($RuntimeException, $(exc2->getMessage()));
		} catch ($MBeanException& exc3) {
			$throwNew($RuntimeException, $($nc(($(exc3->getTargetException())))->getMessage()));
		}
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return result;
}

$RoleResult* RelationService::getAllRoles($String* relationId) {
	$useLocalCurrentObjectStackCache();
	if (relationId == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(relationId)}));
	$var($Object, relObj, getRelation(relationId));
	$var($RoleResult, result, nullptr);
	if ($instanceOf($RelationSupport, relObj)) {
		$assign(result, $nc(($cast($RelationSupport, relObj)))->getAllRolesInt(true, this));
	} else {
		try {
			$assign(result, ($cast($RoleResult, $nc(this->myMBeanServer)->getAttribute(($cast($ObjectName, relObj)), "AllRoles"_s))));
		} catch ($Exception& exc) {
			$throwNew($RuntimeException, $(exc->getMessage()));
		}
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return result;
}

$Integer* RelationService::getRoleCardinality($String* relationId, $String* roleName) {
	$useLocalCurrentObjectStackCache();
	if (relationId == nullptr || roleName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1}"_s, $$new($ObjectArray, {
		$of(relationId),
		$of(roleName)
	}));
	$var($Object, relObj, getRelation(relationId));
	$var($Integer, result, nullptr);
	if ($instanceOf($RelationSupport, relObj)) {
		$assign(result, $nc(($cast($RelationSupport, relObj)))->getRoleCardinality(roleName));
	} else {
		$var($ObjectArray, params, $new($ObjectArray, 1));
		params->set(0, roleName);
		$var($StringArray, signature, $new($StringArray, 1));
		signature->set(0, "java.lang.String"_s);
		try {
			$assign(result, ($cast($Integer, $nc(this->myMBeanServer)->invoke(($cast($ObjectName, relObj)), "getRoleCardinality"_s, params, signature))));
		} catch ($InstanceNotFoundException& exc1) {
			$throwNew($RuntimeException, $(exc1->getMessage()));
		} catch ($ReflectionException& exc2) {
			$throwNew($RuntimeException, $(exc2->getMessage()));
		} catch ($MBeanException& exc3) {
			$var($Exception, wrappedExc, exc3->getTargetException());
			if ($instanceOf($RoleNotFoundException, wrappedExc)) {
				$throw($cast($RoleNotFoundException, wrappedExc));
			} else {
				$throwNew($RuntimeException, $($nc(wrappedExc)->getMessage()));
			}
		}
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return result;
}

void RelationService::setRole($String* relationId, $Role* role) {
	$useLocalCurrentObjectStackCache();
	if (relationId == nullptr || role == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1}"_s, $$new($ObjectArray, {
		$of(relationId),
		$of(role)
	}));
	isActive();
	$var($Object, relObj, getRelation(relationId));
	if ($instanceOf($RelationSupport, relObj)) {
		try {
			$nc(($cast($RelationSupport, relObj)))->setRoleInt(role, true, this, false);
		} catch ($RelationTypeNotFoundException& exc) {
			$throwNew($RuntimeException, $(exc->getMessage()));
		}
	} else {
		$var($ObjectArray, params, $new($ObjectArray, 1));
		params->set(0, role);
		$var($StringArray, signature, $new($StringArray, 1));
		signature->set(0, "javax.management.relation.Role"_s);
		try {
			$nc(this->myMBeanServer)->setAttribute(($cast($ObjectName, relObj)), $$new($Attribute, "Role"_s, role));
		} catch ($InstanceNotFoundException& exc1) {
			$throwNew($RuntimeException, $(exc1->getMessage()));
		} catch ($ReflectionException& exc3) {
			$throwNew($RuntimeException, $(exc3->getMessage()));
		} catch ($MBeanException& exc2) {
			$var($Exception, wrappedExc, exc2->getTargetException());
			if ($instanceOf($RoleNotFoundException, wrappedExc)) {
				$throw($cast($RoleNotFoundException, wrappedExc));
			} else if ($instanceOf($InvalidRoleValueException, wrappedExc)) {
				$throw($cast($InvalidRoleValueException, wrappedExc));
			} else {
				$throwNew($RuntimeException, $($nc(wrappedExc)->getMessage()));
			}
		} catch ($AttributeNotFoundException& exc4) {
			$throwNew($RuntimeException, $(exc4->getMessage()));
		} catch ($InvalidAttributeValueException& exc5) {
			$throwNew($RuntimeException, $(exc5->getMessage()));
		}
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

$RoleResult* RelationService::setRoles($String* relationId, $RoleList* roleList) {
	$useLocalCurrentObjectStackCache();
	if (relationId == nullptr || roleList == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1}"_s, $$new($ObjectArray, {
		$of(relationId),
		$of(roleList)
	}));
	isActive();
	$var($Object, relObj, getRelation(relationId));
	$var($RoleResult, result, nullptr);
	if ($instanceOf($RelationSupport, relObj)) {
		try {
			$assign(result, $nc(($cast($RelationSupport, relObj)))->setRolesInt(roleList, true, this));
		} catch ($RelationTypeNotFoundException& exc) {
			$throwNew($RuntimeException, $(exc->getMessage()));
		}
	} else {
		$var($ObjectArray, params, $new($ObjectArray, 1));
		params->set(0, roleList);
		$var($StringArray, signature, $new($StringArray, 1));
		signature->set(0, "javax.management.relation.RoleList"_s);
		try {
			$assign(result, ($cast($RoleResult, $nc(this->myMBeanServer)->invoke(($cast($ObjectName, relObj)), "setRoles"_s, params, signature))));
		} catch ($InstanceNotFoundException& exc1) {
			$throwNew($RuntimeException, $(exc1->getMessage()));
		} catch ($ReflectionException& exc3) {
			$throwNew($RuntimeException, $(exc3->getMessage()));
		} catch ($MBeanException& exc2) {
			$throwNew($RuntimeException, $($nc(($(exc2->getTargetException())))->getMessage()));
		}
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return result;
}

$Map* RelationService::getReferencedMBeans($String* relationId) {
	$useLocalCurrentObjectStackCache();
	if (relationId == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(relationId)}));
	$var($Object, relObj, getRelation(relationId));
	$var($Map, result, nullptr);
	if ($instanceOf($RelationSupport, relObj)) {
		$assign(result, $nc(($cast($RelationSupport, relObj)))->getReferencedMBeans());
	} else {
		try {
			$assign(result, $cast($Map, $Util::cast($($nc(this->myMBeanServer)->getAttribute(($cast($ObjectName, relObj)), "ReferencedMBeans"_s)))));
		} catch ($Exception& exc) {
			$throwNew($RuntimeException, $(exc->getMessage()));
		}
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return result;
}

$String* RelationService::getRelationTypeName($String* relationId) {
	$useLocalCurrentObjectStackCache();
	if (relationId == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(relationId)}));
	$var($Object, relObj, getRelation(relationId));
	$var($String, result, nullptr);
	if ($instanceOf($RelationSupport, relObj)) {
		$assign(result, $nc(($cast($RelationSupport, relObj)))->getRelationTypeName());
	} else {
		try {
			$assign(result, ($cast($String, $nc(this->myMBeanServer)->getAttribute(($cast($ObjectName, relObj)), "RelationTypeName"_s))));
		} catch ($Exception& exc) {
			$throwNew($RuntimeException, $(exc->getMessage()));
		}
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return result;
}

void RelationService::handleNotification($Notification* notif, Object$* handback) {
	$useLocalCurrentObjectStackCache();
	if (notif == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(notif)}));
	if ($instanceOf($MBeanServerNotification, notif)) {
		$var($MBeanServerNotification, mbsNtf, $cast($MBeanServerNotification, notif));
		$var($String, ntfType, $nc(notif)->getType());
		$init($MBeanServerNotification);
		if ($nc(ntfType)->equals($MBeanServerNotification::UNREGISTRATION_NOTIFICATION)) {
			$var($ObjectName, mbeanName, $nc(($cast($MBeanServerNotification, notif)))->getMBeanName());
			bool isRefedMBeanFlag = false;
			$synchronized(this->myRefedMBeanObjName2RelIdsMap) {
				if ($nc(this->myRefedMBeanObjName2RelIdsMap)->containsKey(mbeanName)) {
					$synchronized(this->myUnregNtfList) {
						$nc(this->myUnregNtfList)->add(mbsNtf);
					}
					isRefedMBeanFlag = true;
				}
				if (isRefedMBeanFlag && this->myPurgeFlag) {
					try {
						purgeRelations();
					} catch ($Exception& exc) {
						$throwNew($RuntimeException, $(exc->getMessage()));
					}
				}
			}
			$var($String, relId, nullptr);
			$synchronized(this->myRelMBeanObjName2RelIdMap) {
				$assign(relId, $cast($String, $nc(this->myRelMBeanObjName2RelIdMap)->get(mbeanName)));
			}
			if (relId != nullptr) {
				try {
					removeRelation(relId);
				} catch ($Exception& exc) {
					$throwNew($RuntimeException, $(exc->getMessage()));
				}
			}
		}
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

$MBeanNotificationInfoArray* RelationService::getNotificationInfo() {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY"_s);
	$var($String, ntfClass, "javax.management.relation.RelationNotification"_s);
	$init($RelationNotification);
	$var($StringArray, ntfTypes, $new($StringArray, {
		$RelationNotification::RELATION_BASIC_CREATION,
		$RelationNotification::RELATION_MBEAN_CREATION,
		$RelationNotification::RELATION_BASIC_UPDATE,
		$RelationNotification::RELATION_MBEAN_UPDATE,
		$RelationNotification::RELATION_BASIC_REMOVAL,
		$RelationNotification::RELATION_MBEAN_REMOVAL
	}));
	$var($String, ntfDesc, "Sent when a relation is created, updated or deleted."_s);
	$var($MBeanNotificationInfo, ntfInfo, $new($MBeanNotificationInfo, ntfTypes, ntfClass, ntfDesc));
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return $new($MBeanNotificationInfoArray, {ntfInfo});
}

void RelationService::addRelationTypeInt($RelationType* relationTypeObj) {
	$useLocalCurrentObjectStackCache();
	if (relationTypeObj == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY"_s);
	$var($String, relTypeName, $nc(relationTypeObj)->getRelationTypeName());
	try {
		$var($RelationType, relType, getRelationType(relTypeName));
		if (relType != nullptr) {
			$var($String, excMsg, "There is already a relation type in the Relation Service with name "_s);
			$var($StringBuilder, excMsgStrB, $new($StringBuilder, excMsg));
			excMsgStrB->append(relTypeName);
			$throwNew($InvalidRelationTypeException, $(excMsgStrB->toString()));
		}
	} catch ($RelationTypeNotFoundException& exc) {
	}
	$synchronized(this->myRelType2ObjMap) {
		$nc(this->myRelType2ObjMap)->put(relTypeName, relationTypeObj);
	}
	if ($instanceOf($RelationTypeSupport, relationTypeObj)) {
		$nc(($cast($RelationTypeSupport, relationTypeObj)))->setRelationServiceFlag(true);
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

$RelationType* RelationService::getRelationType($String* relationTypeName) {
	$useLocalCurrentObjectStackCache();
	if (relationTypeName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(relationTypeName)}));
	$var($RelationType, relType, nullptr);
	$synchronized(this->myRelType2ObjMap) {
		$assign(relType, $cast($RelationType, $nc(this->myRelType2ObjMap)->get(relationTypeName)));
	}
	if (relType == nullptr) {
		$var($String, excMsg, "No relation type created in the Relation Service with the name "_s);
		$var($StringBuilder, excMsgStrB, $new($StringBuilder, excMsg));
		excMsgStrB->append(relationTypeName);
		$throwNew($RelationTypeNotFoundException, $(excMsgStrB->toString()));
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return relType;
}

$Object* RelationService::getRelation($String* relationId) {
	$useLocalCurrentObjectStackCache();
	if (relationId == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0}"_s, $$new($ObjectArray, {$of(relationId)}));
	$var($Object, rel, nullptr);
	$synchronized(this->myRelId2ObjMap) {
		$assign(rel, $nc(this->myRelId2ObjMap)->get(relationId));
	}
	if (rel == nullptr) {
		$var($String, excMsg, $str({"No relation associated to relation id "_s, relationId}));
		$throwNew($RelationNotFoundException, excMsg);
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return $of(rel);
}

bool RelationService::addNewMBeanReference($ObjectName* objectName, $String* relationId, $String* roleName) {
	$useLocalCurrentObjectStackCache();
	if (objectName == nullptr || relationId == nullptr || roleName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1} {2}"_s, $$new($ObjectArray, {
		$of(objectName),
		$of(relationId),
		$of(roleName)
	}));
	bool isNewFlag = false;
	$synchronized(this->myRefedMBeanObjName2RelIdsMap) {
		$var($Map, mbeanRefMap, $cast($Map, $nc(this->myRefedMBeanObjName2RelIdsMap)->get(objectName)));
		if (mbeanRefMap == nullptr) {
			isNewFlag = true;
			$var($List, roleNames, $new($ArrayList));
			roleNames->add(roleName);
			$assign(mbeanRefMap, $new($HashMap));
			mbeanRefMap->put(relationId, roleNames);
			$nc(this->myRefedMBeanObjName2RelIdsMap)->put(objectName, mbeanRefMap);
		} else {
			$var($List, roleNames, $cast($List, $nc(mbeanRefMap)->get(relationId)));
			if (roleNames == nullptr) {
				$assign(roleNames, $new($ArrayList));
				roleNames->add(roleName);
				mbeanRefMap->put(relationId, roleNames);
			} else {
				$nc(roleNames)->add(roleName);
			}
		}
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return isNewFlag;
}

bool RelationService::removeMBeanReference($ObjectName* objectName, $String* relationId, $String* roleName, bool allRolesFlag) {
	$useLocalCurrentObjectStackCache();
	if (objectName == nullptr || relationId == nullptr || roleName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1} {2} {3}"_s, $$new($ObjectArray, {
		$of(objectName),
		$of(relationId),
		$of(roleName),
		$($of($Boolean::valueOf(allRolesFlag)))
	}));
	bool noLongerRefFlag = false;
	$synchronized(this->myRefedMBeanObjName2RelIdsMap) {
		$var($Map, mbeanRefMap, $cast($Map, $nc(this->myRefedMBeanObjName2RelIdsMap)->get(objectName)));
		if (mbeanRefMap == nullptr) {
			$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
			return true;
		}
		$var($List, roleNames, nullptr);
		if (!allRolesFlag) {
			$assign(roleNames, $cast($List, $nc(mbeanRefMap)->get(relationId)));
			int32_t obsRefIdx = $nc(roleNames)->indexOf(roleName);
			if (obsRefIdx != -1) {
				roleNames->remove(obsRefIdx);
			}
		}
		if ($nc(roleNames)->isEmpty() || allRolesFlag) {
			$nc(mbeanRefMap)->remove(relationId);
		}
		if ($nc(mbeanRefMap)->isEmpty()) {
			$nc(this->myRefedMBeanObjName2RelIdsMap)->remove(objectName);
			noLongerRefFlag = true;
		}
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return noLongerRefFlag;
}

void RelationService::updateUnregistrationListener($List* newRefList, $List* obsoleteRefList) {
	$useLocalCurrentObjectStackCache();
	if (newRefList != nullptr && obsoleteRefList != nullptr) {
		bool var$0 = newRefList->isEmpty();
		if (var$0 && obsoleteRefList->isEmpty()) {
			return;
		}
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1}"_s, $$new($ObjectArray, {
		$of(newRefList),
		$of(obsoleteRefList)
	}));
	isActive();
	if (newRefList != nullptr || obsoleteRefList != nullptr) {
		bool newListenerFlag = false;
		if (this->myUnregNtfFilter == nullptr) {
			$set(this, myUnregNtfFilter, $new($MBeanServerNotificationFilter));
			newListenerFlag = true;
		}
		$synchronized(this->myUnregNtfFilter) {
			if (newRefList != nullptr) {
				{
					$var($Iterator, i$, newRefList->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($ObjectName, newObjName, $cast($ObjectName, i$->next()));
						$nc(this->myUnregNtfFilter)->enableObjectName(newObjName);
					}
				}
			}
			if (obsoleteRefList != nullptr) {
				{
					$var($Iterator, i$, obsoleteRefList->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($ObjectName, obsObjName, $cast($ObjectName, i$->next()));
						$nc(this->myUnregNtfFilter)->disableObjectName(obsObjName);
					}
				}
			}
			if (newListenerFlag) {
				try {
					$init($MBeanServerDelegate);
					$nc(this->myMBeanServer)->addNotificationListener($MBeanServerDelegate::DELEGATE_NAME, static_cast<$NotificationListener*>(this), static_cast<$NotificationFilter*>(this->myUnregNtfFilter), ($Object*)nullptr);
				} catch ($InstanceNotFoundException& exc) {
					$throwNew($RelationServiceNotRegisteredException, $(exc->getMessage()));
				}
			}
		}
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

void RelationService::addRelationInt(bool relationBaseFlag, $RelationSupport* relationObj, $ObjectName* relationObjName, $String* relationId, $String* relationTypeName, $RoleList* roleList) {
	$useLocalCurrentObjectStackCache();
	if (relationId == nullptr || relationTypeName == nullptr || (relationBaseFlag && (relationObj == nullptr || relationObjName != nullptr)) || (!relationBaseFlag && (relationObjName == nullptr || relationObj != nullptr))) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1} {2} {3} {4} {5}"_s, $$new($ObjectArray, {
		$($of($Boolean::valueOf(relationBaseFlag))),
		$of(relationObj),
		$of(relationObjName),
		$of(relationId),
		$of(relationTypeName),
		$of(roleList)
	}));
	isActive();
	try {
		$var($Object, rel, getRelation(relationId));
		if (rel != nullptr) {
			$var($String, excMsg, "There is already a relation with id "_s);
			$var($StringBuilder, excMsgStrB, $new($StringBuilder, excMsg));
			excMsgStrB->append(relationId);
			$throwNew($InvalidRelationIdException, $(excMsgStrB->toString()));
		}
	} catch ($RelationNotFoundException& exc) {
	}
	$var($RelationType, relType, getRelationType(relationTypeName));
	$var($List, roleInfoList, $new($ArrayList, $(static_cast<$Collection*>($nc(relType)->getRoleInfos()))));
	if (roleList != nullptr) {
		{
			$var($Iterator, i$, $nc($(roleList->asList()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Role, currRole, $cast($Role, i$->next()));
				{
					$var($String, currRoleName, $nc(currRole)->getRoleName());
					$var($List, currRoleValue, currRole->getRoleValue());
					$var($RoleInfo, roleInfo, nullptr);
					try {
						$assign(roleInfo, $nc(relType)->getRoleInfo(currRoleName));
					} catch ($RoleInfoNotFoundException& exc) {
						$throwNew($RoleNotFoundException, $(exc->getMessage()));
					}
					$var($Integer, status, checkRoleInt(2, currRoleName, currRoleValue, roleInfo, false));
					int32_t pbType = $nc(status)->intValue();
					if (pbType != 0) {
						throwRoleProblemException(pbType, currRoleName);
					}
					int32_t roleInfoIdx = roleInfoList->indexOf(roleInfo);
					roleInfoList->remove(roleInfoIdx);
				}
			}
		}
	}
	initializeMissingRoles(relationBaseFlag, relationObj, relationObjName, relationId, relationTypeName, roleInfoList);
	$synchronized(this->myRelId2ObjMap) {
		if (relationBaseFlag) {
			$nc(this->myRelId2ObjMap)->put(relationId, relationObj);
		} else {
			$nc(this->myRelId2ObjMap)->put(relationId, relationObjName);
		}
	}
	$synchronized(this->myRelId2RelTypeMap) {
		$nc(this->myRelId2RelTypeMap)->put(relationId, relationTypeName);
	}
	$synchronized(this->myRelType2RelIdsMap) {
		$var($List, relIdList, $cast($List, $nc(this->myRelType2RelIdsMap)->get(relationTypeName)));
		bool firstRelFlag = false;
		if (relIdList == nullptr) {
			firstRelFlag = true;
			$assign(relIdList, $new($ArrayList));
		}
		$nc(relIdList)->add(relationId);
		if (firstRelFlag) {
			$nc(this->myRelType2RelIdsMap)->put(relationTypeName, relIdList);
		}
	}
	{
		$var($Iterator, i$, $nc($($nc(roleList)->asList()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Role, currRole, $cast($Role, i$->next()));
			{
				$var($List, dummyList, $new($ArrayList));
				try {
					updateRoleMap(relationId, currRole, dummyList);
				} catch ($RelationNotFoundException& exc) {
				}
			}
		}
	}
	try {
		sendRelationCreationNotification(relationId);
	} catch ($RelationNotFoundException& exc) {
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

$Integer* RelationService::checkRoleInt(int32_t chkType, $String* roleName, $List* roleValue, $RoleInfo* roleInfo, bool writeChkFlag) {
	$useLocalCurrentObjectStackCache();
	if (roleName == nullptr || roleInfo == nullptr || (chkType == 2 && roleValue == nullptr)) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1} {2} {3} {4}"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(chkType))),
		$of(roleName),
		$of(roleValue),
		$of(roleInfo),
		$($of($Boolean::valueOf(writeChkFlag)))
	}));
	$var($String, expName, $nc(roleInfo)->getName());
	if (!($nc(roleName)->equals(expName))) {
		$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
		return $Integer::valueOf($RoleStatus::NO_ROLE_WITH_NAME);
	}
	if (chkType == 1) {
		bool isReadable = roleInfo->isReadable();
		if (!isReadable) {
			$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
			return $Integer::valueOf($RoleStatus::ROLE_NOT_READABLE);
		} else {
			$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
			return $Integer::valueOf(0);
		}
	}
	if (writeChkFlag) {
		bool isWritable = roleInfo->isWritable();
		if (!isWritable) {
			$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
			return $Integer::valueOf($RoleStatus::ROLE_NOT_WRITABLE);
		}
	}
	int32_t refNbr = $nc(roleValue)->size();
	bool chkMinFlag = roleInfo->checkMinDegree(refNbr);
	if (!chkMinFlag) {
		$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
		return $Integer::valueOf($RoleStatus::LESS_THAN_MIN_ROLE_DEGREE);
	}
	bool chkMaxFlag = roleInfo->checkMaxDegree(refNbr);
	if (!chkMaxFlag) {
		$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
		return $Integer::valueOf($RoleStatus::MORE_THAN_MAX_ROLE_DEGREE);
	}
	$var($String, expClassName, roleInfo->getRefMBeanClassName());
	{
		$var($Iterator, i$, roleValue->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ObjectName, currObjName, $cast($ObjectName, i$->next()));
			{
				if (currObjName == nullptr) {
					$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
					return $Integer::valueOf($RoleStatus::REF_MBEAN_NOT_REGISTERED);
				}
				try {
					bool classSts = $nc(this->myMBeanServer)->isInstanceOf(currObjName, expClassName);
					if (!classSts) {
						$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
						return $Integer::valueOf($RoleStatus::REF_MBEAN_OF_INCORRECT_CLASS);
					}
				} catch ($InstanceNotFoundException& exc) {
					$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
					return $Integer::valueOf($RoleStatus::REF_MBEAN_NOT_REGISTERED);
				}
			}
		}
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return $Integer::valueOf(0);
}

void RelationService::initializeMissingRoles(bool relationBaseFlag, $RelationSupport* relationObj, $ObjectName* relationObjName, $String* relationId, $String* relationTypeName, $List* roleInfoList) {
	$useLocalCurrentObjectStackCache();
	if ((relationBaseFlag && (relationObj == nullptr || relationObjName != nullptr)) || (!relationBaseFlag && (relationObjName == nullptr || relationObj != nullptr)) || relationId == nullptr || relationTypeName == nullptr || roleInfoList == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1} {2} {3} {4} {5}"_s, $$new($ObjectArray, {
		$($of($Boolean::valueOf(relationBaseFlag))),
		$of(relationObj),
		$of(relationObjName),
		$of(relationId),
		$of(relationTypeName),
		$of(roleInfoList)
	}));
	isActive();
	{
		$var($Iterator, i$, $nc(roleInfoList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($RoleInfo, currRoleInfo, $cast($RoleInfo, i$->next()));
			{
				$var($String, roleName, $nc(currRoleInfo)->getName());
				$var($List, emptyValue, $new($ArrayList));
				$var($Role, role, $new($Role, roleName, emptyValue));
				if (relationBaseFlag) {
					try {
						$nc(relationObj)->setRoleInt(role, true, this, false);
					} catch ($RoleNotFoundException& exc1) {
						$throwNew($RuntimeException, $(exc1->getMessage()));
					} catch ($RelationNotFoundException& exc2) {
						$throwNew($RuntimeException, $(exc2->getMessage()));
					} catch ($RelationTypeNotFoundException& exc3) {
						$throwNew($RuntimeException, $(exc3->getMessage()));
					}
				} else {
					$var($ObjectArray, params, $new($ObjectArray, 1));
					params->set(0, role);
					$var($StringArray, signature, $new($StringArray, 1));
					signature->set(0, "javax.management.relation.Role"_s);
					try {
						$nc(this->myMBeanServer)->setAttribute(relationObjName, $$new($Attribute, "Role"_s, role));
					} catch ($InstanceNotFoundException& exc1) {
						$throwNew($RuntimeException, $(exc1->getMessage()));
					} catch ($ReflectionException& exc3) {
						$throwNew($RuntimeException, $(exc3->getMessage()));
					} catch ($MBeanException& exc2) {
						$var($Exception, wrappedExc, exc2->getTargetException());
						if ($instanceOf($InvalidRoleValueException, wrappedExc)) {
							$throw($cast($InvalidRoleValueException, wrappedExc));
						} else {
							$throwNew($RuntimeException, $($nc(wrappedExc)->getMessage()));
						}
					} catch ($AttributeNotFoundException& exc4) {
						$throwNew($RuntimeException, $(exc4->getMessage()));
					} catch ($InvalidAttributeValueException& exc5) {
						$throwNew($RuntimeException, $(exc5->getMessage()));
					}
				}
			}
		}
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

void RelationService::throwRoleProblemException(int32_t pbType, $String* roleName) {
	$init(RelationService);
	$useLocalCurrentObjectStackCache();
	if (roleName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	int32_t excType = 0;
	$var($String, excMsgPart, nullptr);
	switch (pbType) {
	case $RoleStatus::NO_ROLE_WITH_NAME:
		{
			$assign(excMsgPart, " does not exist in relation."_s);
			excType = 1;
			break;
		}
	case $RoleStatus::ROLE_NOT_READABLE:
		{
			$assign(excMsgPart, " is not readable."_s);
			excType = 1;
			break;
		}
	case $RoleStatus::ROLE_NOT_WRITABLE:
		{
			$assign(excMsgPart, " is not writable."_s);
			excType = 1;
			break;
		}
	case $RoleStatus::LESS_THAN_MIN_ROLE_DEGREE:
		{
			$assign(excMsgPart, " has a number of MBean references less than the expected minimum degree."_s);
			excType = 2;
			break;
		}
	case $RoleStatus::MORE_THAN_MAX_ROLE_DEGREE:
		{
			$assign(excMsgPart, " has a number of MBean references greater than the expected maximum degree."_s);
			excType = 2;
			break;
		}
	case $RoleStatus::REF_MBEAN_OF_INCORRECT_CLASS:
		{
			$assign(excMsgPart, " has an MBean reference to an MBean not of the expected class of references for that role."_s);
			excType = 2;
			break;
		}
	case $RoleStatus::REF_MBEAN_NOT_REGISTERED:
		{
			$assign(excMsgPart, " has a reference to null or to an MBean not registered."_s);
			excType = 2;
			break;
		}
	}
	$var($StringBuilder, excMsgStrB, $new($StringBuilder, roleName));
	excMsgStrB->append(excMsgPart);
	$var($String, excMsg, excMsgStrB->toString());
	if (excType == 1) {
		$throwNew($RoleNotFoundException, excMsg);
	} else if (excType == 2) {
		$throwNew($InvalidRoleValueException, excMsg);
	}
}

void RelationService::sendNotificationInt(int32_t intNtfType, $String* message, $String* relationId, $List* unregMBeanList, $String* roleName, $List* roleNewValue, $List* oldValue) {
	$useLocalCurrentObjectStackCache();
	if (message == nullptr || relationId == nullptr || (intNtfType != 3 && unregMBeanList != nullptr) || (intNtfType == 2 && (roleName == nullptr || roleNewValue == nullptr || oldValue == nullptr))) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1} {2} {3} {4} {5} {6}"_s, $$new($ObjectArray, {
		$($of($Integer::valueOf(intNtfType))),
		$of(message),
		$of(relationId),
		$of(unregMBeanList),
		$of(roleName),
		$of(roleNewValue),
		$of(oldValue)
	}));
	$var($String, relTypeName, nullptr);
	$synchronized(this->myRelId2RelTypeMap) {
		$assign(relTypeName, $cast($String, $nc(this->myRelId2RelTypeMap)->get(relationId)));
	}
	$var($ObjectName, relObjName, isRelationMBean(relationId));
	$var($String, ntfType, nullptr);
	if (relObjName != nullptr) {
		switch (intNtfType) {
		case 1:
			{
				$init($RelationNotification);
				$assign(ntfType, $RelationNotification::RELATION_MBEAN_CREATION);
				break;
			}
		case 2:
			{
				$init($RelationNotification);
				$assign(ntfType, $RelationNotification::RELATION_MBEAN_UPDATE);
				break;
			}
		case 3:
			{
				$init($RelationNotification);
				$assign(ntfType, $RelationNotification::RELATION_MBEAN_REMOVAL);
				break;
			}
		}
	} else {
		switch (intNtfType) {
		case 1:
			{
				$init($RelationNotification);
				$assign(ntfType, $RelationNotification::RELATION_BASIC_CREATION);
				break;
			}
		case 2:
			{
				$init($RelationNotification);
				$assign(ntfType, $RelationNotification::RELATION_BASIC_UPDATE);
				break;
			}
		case 3:
			{
				$init($RelationNotification);
				$assign(ntfType, $RelationNotification::RELATION_BASIC_REMOVAL);
				break;
			}
		}
	}
	$var($Long, seqNo, $Long::valueOf($nc(this->atomicSeqNo)->incrementAndGet()));
	$var($Date, currDate, $new($Date));
	int64_t timeStamp = currDate->getTime();
	$var($RelationNotification, ntf, nullptr);
	$init($RelationNotification);
	bool var$2 = $nc(ntfType)->equals($RelationNotification::RELATION_BASIC_CREATION);
	bool var$1 = var$2 || $nc(ntfType)->equals($RelationNotification::RELATION_MBEAN_CREATION);
	bool var$0 = var$1 || $nc(ntfType)->equals($RelationNotification::RELATION_BASIC_REMOVAL);
	if (var$0 || $nc(ntfType)->equals($RelationNotification::RELATION_MBEAN_REMOVAL)) {
		$assign(ntf, $new($RelationNotification, ntfType, this, $nc(seqNo)->longValue(), timeStamp, message, relationId, relTypeName, relObjName, unregMBeanList));
	} else {
		bool var$4 = ntfType->equals($RelationNotification::RELATION_BASIC_UPDATE);
		if (var$4 || ntfType->equals($RelationNotification::RELATION_MBEAN_UPDATE)) {
			$assign(ntf, $new($RelationNotification, ntfType, this, $nc(seqNo)->longValue(), timeStamp, message, relationId, relTypeName, relObjName, roleName, roleNewValue, oldValue));
		}
	}
	sendNotification(ntf);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

void RelationService::handleReferenceUnregistration($String* relationId, $ObjectName* objectName, $List* roleNameList) {
	$useLocalCurrentObjectStackCache();
	if (relationId == nullptr || roleNameList == nullptr || objectName == nullptr) {
		$var($String, excMsg, "Invalid parameter."_s);
		$throwNew($IllegalArgumentException, excMsg);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "ENTRY {0} {1} {2}"_s, $$new($ObjectArray, {
		$of(relationId),
		$of(objectName),
		$of(roleNameList)
	}));
	isActive();
	$var($String, currRelTypeName, getRelationTypeName(relationId));
	$var($Object, relObj, getRelation(relationId));
	bool deleteRelFlag = false;
	{
		$var($Iterator, i$, $nc(roleNameList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, currRoleName, $cast($String, i$->next()));
			{
				if (deleteRelFlag) {
					break;
				}
				int32_t currRoleRefNbr = $nc(($(getRoleCardinality(relationId, currRoleName))))->intValue();
				int32_t currRoleNewRefNbr = currRoleRefNbr - 1;
				$var($RoleInfo, currRoleInfo, nullptr);
				try {
					$assign(currRoleInfo, getRoleInfo(currRelTypeName, currRoleName));
				} catch ($RelationTypeNotFoundException& exc1) {
					$throwNew($RuntimeException, $(exc1->getMessage()));
				} catch ($RoleInfoNotFoundException& exc2) {
					$throwNew($RuntimeException, $(exc2->getMessage()));
				}
				bool chkMinFlag = $nc(currRoleInfo)->checkMinDegree(currRoleNewRefNbr);
				if (!chkMinFlag) {
					deleteRelFlag = true;
				}
			}
		}
	}
	if (deleteRelFlag) {
		removeRelation(relationId);
	} else {
		{
			$var($Iterator, i$, roleNameList->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, currRoleName, $cast($String, i$->next()));
				{
					if ($instanceOf($RelationSupport, relObj)) {
						try {
							$nc(($cast($RelationSupport, relObj)))->handleMBeanUnregistrationInt(objectName, currRoleName, true, this);
						} catch ($RelationTypeNotFoundException& exc3) {
							$throwNew($RuntimeException, $(exc3->getMessage()));
						} catch ($InvalidRoleValueException& exc4) {
							$throwNew($RuntimeException, $(exc4->getMessage()));
						}
					} else {
						$var($ObjectArray, params, $new($ObjectArray, 2));
						params->set(0, objectName);
						params->set(1, currRoleName);
						$var($StringArray, signature, $new($StringArray, 2));
						signature->set(0, "javax.management.ObjectName"_s);
						signature->set(1, "java.lang.String"_s);
						try {
							$nc(this->myMBeanServer)->invoke(($cast($ObjectName, relObj)), "handleMBeanUnregistration"_s, params, signature);
						} catch ($InstanceNotFoundException& exc1) {
							$throwNew($RuntimeException, $(exc1->getMessage()));
						} catch ($ReflectionException& exc3) {
							$throwNew($RuntimeException, $(exc3->getMessage()));
						} catch ($MBeanException& exc2) {
							$var($Exception, wrappedExc, exc2->getTargetException());
							$throwNew($RuntimeException, $($nc(wrappedExc)->getMessage()));
						}
					}
				}
			}
		}
	}
	$nc($JmxProperties::RELATION_LOGGER)->log($System$Logger$Level::TRACE, "RETURN"_s);
	return;
}

RelationService::RelationService() {
}

$Class* RelationService::load$($String* name, bool initialize) {
	$loadClass(RelationService, name, initialize, &_RelationService_ClassInfo_, allocate$RelationService);
	return class$;
}

$Class* RelationService::class$ = nullptr;

		} // relation
	} // management
} // javax