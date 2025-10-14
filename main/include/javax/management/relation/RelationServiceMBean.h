#ifndef _javax_management_relation_RelationServiceMBean_h_
#define _javax_management_relation_RelationServiceMBean_h_
//$ interface javax.management.relation.RelationServiceMBean
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
namespace javax {
	namespace management {
		class ObjectName;
	}
}
namespace javax {
	namespace management {
		namespace relation {
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

class $import RelationServiceMBean : public ::java::lang::Object {
	$interface(RelationServiceMBean, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addRelation(::javax::management::ObjectName* relationObjectName) {}
	virtual void addRelationType(::javax::management::relation::RelationType* relationTypeObj) {}
	virtual ::java::lang::Integer* checkRoleReading($String* roleName, $String* relationTypeName) {return nullptr;}
	virtual ::java::lang::Integer* checkRoleWriting(::javax::management::relation::Role* role, $String* relationTypeName, ::java::lang::Boolean* initFlag) {return nullptr;}
	virtual void createRelation($String* relationId, $String* relationTypeName, ::javax::management::relation::RoleList* roleList) {}
	virtual void createRelationType($String* relationTypeName, $Array<::javax::management::relation::RoleInfo>* roleInfoArray) {}
	virtual ::java::util::Map* findAssociatedMBeans(::javax::management::ObjectName* mbeanName, $String* relationTypeName, $String* roleName) {return nullptr;}
	virtual ::java::util::Map* findReferencingRelations(::javax::management::ObjectName* mbeanName, $String* relationTypeName, $String* roleName) {return nullptr;}
	virtual ::java::util::List* findRelationsOfType($String* relationTypeName) {return nullptr;}
	virtual ::java::util::List* getAllRelationIds() {return nullptr;}
	virtual ::java::util::List* getAllRelationTypeNames() {return nullptr;}
	virtual ::javax::management::relation::RoleResult* getAllRoles($String* relationId) {return nullptr;}
	virtual bool getPurgeFlag() {return false;}
	virtual ::java::util::Map* getReferencedMBeans($String* relationId) {return nullptr;}
	virtual $String* getRelationTypeName($String* relationId) {return nullptr;}
	virtual ::java::util::List* getRole($String* relationId, $String* roleName) {return nullptr;}
	virtual ::java::lang::Integer* getRoleCardinality($String* relationId, $String* roleName) {return nullptr;}
	virtual ::javax::management::relation::RoleInfo* getRoleInfo($String* relationTypeName, $String* roleInfoName) {return nullptr;}
	virtual ::java::util::List* getRoleInfos($String* relationTypeName) {return nullptr;}
	virtual ::javax::management::relation::RoleResult* getRoles($String* relationId, $StringArray* roleNameArray) {return nullptr;}
	virtual ::java::lang::Boolean* hasRelation($String* relationId) {return nullptr;}
	virtual void isActive() {}
	virtual $String* isRelation(::javax::management::ObjectName* objectName) {return nullptr;}
	virtual ::javax::management::ObjectName* isRelationMBean($String* relationId) {return nullptr;}
	virtual void purgeRelations() {}
	virtual void removeRelation($String* relationId) {}
	virtual void removeRelationType($String* relationTypeName) {}
	virtual void sendRelationCreationNotification($String* relationId) {}
	virtual void sendRelationRemovalNotification($String* relationId, ::java::util::List* unregMBeanList) {}
	virtual void sendRoleUpdateNotification($String* relationId, ::javax::management::relation::Role* newRole, ::java::util::List* oldRoleValue) {}
	virtual void setPurgeFlag(bool purgeFlag) {}
	virtual void setRole($String* relationId, ::javax::management::relation::Role* role) {}
	virtual ::javax::management::relation::RoleResult* setRoles($String* relationId, ::javax::management::relation::RoleList* roleList) {return nullptr;}
	virtual void updateRoleMap($String* relationId, ::javax::management::relation::Role* newRole, ::java::util::List* oldRoleValue) {}
};

		} // relation
	} // management
} // javax

#endif // _javax_management_relation_RelationServiceMBean_h_