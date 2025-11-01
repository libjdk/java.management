#ifndef _javax_management_relation_RelationSupport_h_
#define _javax_management_relation_RelationSupport_h_
//$ class javax.management.relation.RelationSupport
//$ extends javax.management.relation.RelationSupportMBean
//$ implements javax.management.MBeanRegistration

#include <java/lang/Array.h>
#include <javax/management/MBeanRegistration.h>
#include <javax/management/relation/RelationSupportMBean.h>

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
				class AtomicBoolean;
			}
		}
	}
}
namespace javax {
	namespace management {
		class MBeanServer;
		class ObjectName;
	}
}
namespace javax {
	namespace management {
		namespace relation {
			class RelationService;
			class Role;
			class RoleList;
			class RoleResult;
		}
	}
}

namespace javax {
	namespace management {
		namespace relation {

class $import RelationSupport : public ::javax::management::relation::RelationSupportMBean, public ::javax::management::MBeanRegistration {
	$class(RelationSupport, $NO_CLASS_INIT, ::javax::management::relation::RelationSupportMBean, ::javax::management::MBeanRegistration)
public:
	RelationSupport();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* relationId, ::javax::management::ObjectName* relationServiceName, $String* relationTypeName, ::javax::management::relation::RoleList* list);
	void init$($String* relationId, ::javax::management::ObjectName* relationServiceName, ::javax::management::MBeanServer* relationServiceMBeanServer, $String* relationTypeName, ::javax::management::relation::RoleList* list);
	virtual ::javax::management::relation::RoleResult* getAllRoles() override;
	virtual ::javax::management::relation::RoleResult* getAllRolesInt(bool relationServCallFlg, ::javax::management::relation::RelationService* relationServ);
	virtual ::java::util::Map* getReferencedMBeans() override;
	virtual $String* getRelationId() override;
	virtual ::javax::management::ObjectName* getRelationServiceName() override;
	virtual $String* getRelationTypeName() override;
	virtual ::java::util::List* getRole($String* roleName) override;
	virtual ::java::lang::Integer* getRoleCardinality($String* roleName) override;
	virtual $Object* getRoleInt($String* roleName, bool relationServCallFlg, ::javax::management::relation::RelationService* relationServ, bool multiRoleFlg);
	virtual ::javax::management::relation::RoleResult* getRoles($StringArray* roleNameArray) override;
	virtual ::javax::management::relation::RoleResult* getRolesInt($StringArray* roleNameArray, bool relationServCallFlg, ::javax::management::relation::RelationService* relationServ);
	virtual void handleMBeanUnregistration(::javax::management::ObjectName* objectName, $String* roleName) override;
	virtual void handleMBeanUnregistrationInt(::javax::management::ObjectName* objectName, $String* roleName, bool relationServCallFlg, ::javax::management::relation::RelationService* relationServ);
	void initMembers($String* relationId, ::javax::management::ObjectName* relationServiceName, ::javax::management::MBeanServer* relationServiceMBeanServer, $String* relationTypeName, ::javax::management::relation::RoleList* list);
	void initRoleMap(::javax::management::relation::RoleList* list);
	virtual ::java::lang::Boolean* isInRelationService() override;
	virtual void postDeregister() override;
	virtual void postRegister(::java::lang::Boolean* registrationDone) override;
	virtual void preDeregister() override;
	virtual ::javax::management::ObjectName* preRegister(::javax::management::MBeanServer* server, ::javax::management::ObjectName* name) override;
	virtual ::javax::management::relation::RoleList* retrieveAllRoles() override;
	void sendRoleUpdateNotification(::javax::management::relation::Role* newRole, ::java::util::List* oldRoleValue, bool relationServCallFlg, ::javax::management::relation::RelationService* relationServ);
	virtual void setRelationServiceManagementFlag(::java::lang::Boolean* flag) override;
	virtual void setRole(::javax::management::relation::Role* role) override;
	virtual $Object* setRoleInt(::javax::management::relation::Role* aRole, bool relationServCallFlg, ::javax::management::relation::RelationService* relationServ, bool multiRoleFlg);
	virtual ::javax::management::relation::RoleResult* setRoles(::javax::management::relation::RoleList* list) override;
	virtual ::javax::management::relation::RoleResult* setRolesInt(::javax::management::relation::RoleList* list, bool relationServCallFlg, ::javax::management::relation::RelationService* relationServ);
	virtual $String* toString() override;
	void updateRelationServiceMap(::javax::management::relation::Role* newRole, ::java::util::List* oldRoleValue, bool relationServCallFlg, ::javax::management::relation::RelationService* relationServ);
	$String* myRelId = nullptr;
	::javax::management::ObjectName* myRelServiceName = nullptr;
	::javax::management::MBeanServer* myRelServiceMBeanServer = nullptr;
	$String* myRelTypeName = nullptr;
	::java::util::Map* myRoleName2ValueMap = nullptr;
	::java::util::concurrent::atomic::AtomicBoolean* myInRelServFlg = nullptr;
};

		} // relation
	} // management
} // javax

#endif // _javax_management_relation_RelationSupport_h_