#ifndef _javax_management_relation_RelationService_h_
#define _javax_management_relation_RelationService_h_
//$ class javax.management.relation.RelationService
//$ extends javax.management.NotificationBroadcasterSupport
//$ implements javax.management.relation.RelationServiceMBean,javax.management.MBeanRegistration,javax.management.NotificationListener

#include <java/lang/Array.h>
#include <javax/management/MBeanRegistration.h>
#include <javax/management/NotificationBroadcasterSupport.h>
#include <javax/management/NotificationListener.h>
#include <javax/management/relation/RelationServiceMBean.h>

namespace java {
	namespace lang {
		class Boolean;
		class Integer;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicLong;
			}
		}
	}
}
namespace javax {
	namespace management {
		class MBeanNotificationInfo;
		class MBeanServer;
		class Notification;
		class ObjectName;
	}
}
namespace javax {
	namespace management {
		namespace relation {
			class MBeanServerNotificationFilter;
			class RelationSupport;
			class RelationType;
			class Role;
			class RoleInfo;
			class RoleList;
			class RoleResult;
		}
	}
}

namespace javax {
	namespace management {
		namespace relation {

class $import RelationService : public ::javax::management::NotificationBroadcasterSupport, public ::javax::management::relation::RelationServiceMBean, public ::javax::management::MBeanRegistration, public ::javax::management::NotificationListener {
	$class(RelationService, $NO_CLASS_INIT, ::javax::management::NotificationBroadcasterSupport, ::javax::management::relation::RelationServiceMBean, ::javax::management::MBeanRegistration, ::javax::management::NotificationListener)
public:
	RelationService();
	using ::javax::management::NotificationBroadcasterSupport::handleNotification;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(bool immediatePurgeFlag);
	bool addNewMBeanReference(::javax::management::ObjectName* objectName, $String* relationId, $String* roleName);
	virtual void addRelation(::javax::management::ObjectName* relationObjectName) override;
	void addRelationInt(bool relationBaseFlag, ::javax::management::relation::RelationSupport* relationObj, ::javax::management::ObjectName* relationObjName, $String* relationId, $String* relationTypeName, ::javax::management::relation::RoleList* roleList);
	virtual void addRelationType(::javax::management::relation::RelationType* relationTypeObj) override;
	void addRelationTypeInt(::javax::management::relation::RelationType* relationTypeObj);
	::java::lang::Integer* checkRoleInt(int32_t chkType, $String* roleName, ::java::util::List* roleValue, ::javax::management::relation::RoleInfo* roleInfo, bool writeChkFlag);
	virtual ::java::lang::Integer* checkRoleReading($String* roleName, $String* relationTypeName) override;
	virtual ::java::lang::Integer* checkRoleWriting(::javax::management::relation::Role* role, $String* relationTypeName, ::java::lang::Boolean* initFlag) override;
	virtual void createRelation($String* relationId, $String* relationTypeName, ::javax::management::relation::RoleList* roleList) override;
	virtual void createRelationType($String* relationTypeName, $Array<::javax::management::relation::RoleInfo>* roleInfoArray) override;
	virtual ::java::util::Map* findAssociatedMBeans(::javax::management::ObjectName* mbeanName, $String* relationTypeName, $String* roleName) override;
	virtual ::java::util::Map* findReferencingRelations(::javax::management::ObjectName* mbeanName, $String* relationTypeName, $String* roleName) override;
	virtual ::java::util::List* findRelationsOfType($String* relationTypeName) override;
	virtual ::java::util::List* getAllRelationIds() override;
	virtual ::java::util::List* getAllRelationTypeNames() override;
	virtual ::javax::management::relation::RoleResult* getAllRoles($String* relationId) override;
	virtual $Array<::javax::management::MBeanNotificationInfo>* getNotificationInfo() override;
	virtual bool getPurgeFlag() override;
	virtual ::java::util::Map* getReferencedMBeans($String* relationId) override;
	virtual $Object* getRelation($String* relationId);
	virtual ::javax::management::relation::RelationType* getRelationType($String* relationTypeName);
	virtual $String* getRelationTypeName($String* relationId) override;
	virtual ::java::util::List* getRole($String* relationId, $String* roleName) override;
	virtual ::java::lang::Integer* getRoleCardinality($String* relationId, $String* roleName) override;
	virtual ::javax::management::relation::RoleInfo* getRoleInfo($String* relationTypeName, $String* roleInfoName) override;
	virtual ::java::util::List* getRoleInfos($String* relationTypeName) override;
	virtual ::javax::management::relation::RoleResult* getRoles($String* relationId, $StringArray* roleNameArray) override;
	virtual void handleNotification(::javax::management::Notification* notif, Object$* handback) override;
	void handleReferenceUnregistration($String* relationId, ::javax::management::ObjectName* objectName, ::java::util::List* roleNameList);
	virtual ::java::lang::Boolean* hasRelation($String* relationId) override;
	void initializeMissingRoles(bool relationBaseFlag, ::javax::management::relation::RelationSupport* relationObj, ::javax::management::ObjectName* relationObjName, $String* relationId, $String* relationTypeName, ::java::util::List* roleInfoList);
	virtual void isActive() override;
	virtual $String* isRelation(::javax::management::ObjectName* objectName) override;
	virtual ::javax::management::ObjectName* isRelationMBean($String* relationId) override;
	virtual void postDeregister() override;
	virtual void postRegister(::java::lang::Boolean* registrationDone) override;
	virtual void preDeregister() override;
	virtual ::javax::management::ObjectName* preRegister(::javax::management::MBeanServer* server, ::javax::management::ObjectName* name) override;
	virtual void purgeRelations() override;
	bool removeMBeanReference(::javax::management::ObjectName* objectName, $String* relationId, $String* roleName, bool allRolesFlag);
	virtual void removeRelation($String* relationId) override;
	virtual void removeRelationType($String* relationTypeName) override;
	void sendNotificationInt(int32_t intNtfType, $String* message, $String* relationId, ::java::util::List* unregMBeanList, $String* roleName, ::java::util::List* roleNewValue, ::java::util::List* oldValue);
	virtual void sendRelationCreationNotification($String* relationId) override;
	virtual void sendRelationRemovalNotification($String* relationId, ::java::util::List* unregMBeanList) override;
	virtual void sendRoleUpdateNotification($String* relationId, ::javax::management::relation::Role* newRole, ::java::util::List* oldValue) override;
	virtual void setPurgeFlag(bool purgeFlag) override;
	virtual void setRole($String* relationId, ::javax::management::relation::Role* role) override;
	virtual ::javax::management::relation::RoleResult* setRoles($String* relationId, ::javax::management::relation::RoleList* roleList) override;
	static void throwRoleProblemException(int32_t pbType, $String* roleName);
	virtual $String* toString() override;
	virtual void updateRoleMap($String* relationId, ::javax::management::relation::Role* newRole, ::java::util::List* oldValue) override;
	void updateUnregistrationListener(::java::util::List* newRefList, ::java::util::List* obsoleteRefList);
	::java::util::Map* myRelId2ObjMap = nullptr;
	::java::util::Map* myRelId2RelTypeMap = nullptr;
	::java::util::Map* myRelMBeanObjName2RelIdMap = nullptr;
	::java::util::Map* myRelType2ObjMap = nullptr;
	::java::util::Map* myRelType2RelIdsMap = nullptr;
	::java::util::Map* myRefedMBeanObjName2RelIdsMap = nullptr;
	bool myPurgeFlag = false;
	::java::util::concurrent::atomic::AtomicLong* atomicSeqNo = nullptr;
	::javax::management::ObjectName* myObjName = nullptr;
	::javax::management::MBeanServer* myMBeanServer = nullptr;
	::javax::management::relation::MBeanServerNotificationFilter* myUnregNtfFilter = nullptr;
	::java::util::List* myUnregNtfList = nullptr;
};

		} // relation
	} // management
} // javax

#endif // _javax_management_relation_RelationService_h_