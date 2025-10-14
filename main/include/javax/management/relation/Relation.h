#ifndef _javax_management_relation_Relation_h_
#define _javax_management_relation_Relation_h_
//$ interface javax.management.relation.Relation
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
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
			class Role;
			class RoleList;
			class RoleResult;
		}
	}
}

namespace javax {
	namespace management {
		namespace relation {

class $import Relation : public ::java::lang::Object {
	$interface(Relation, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::management::relation::RoleResult* getAllRoles() {return nullptr;}
	virtual ::java::util::Map* getReferencedMBeans() {return nullptr;}
	virtual $String* getRelationId() {return nullptr;}
	virtual ::javax::management::ObjectName* getRelationServiceName() {return nullptr;}
	virtual $String* getRelationTypeName() {return nullptr;}
	virtual ::java::util::List* getRole($String* roleName) {return nullptr;}
	virtual ::java::lang::Integer* getRoleCardinality($String* roleName) {return nullptr;}
	virtual ::javax::management::relation::RoleResult* getRoles($StringArray* roleNameArray) {return nullptr;}
	virtual void handleMBeanUnregistration(::javax::management::ObjectName* objectName, $String* roleName) {}
	virtual ::javax::management::relation::RoleList* retrieveAllRoles() {return nullptr;}
	virtual void setRole(::javax::management::relation::Role* role) {}
	virtual ::javax::management::relation::RoleResult* setRoles(::javax::management::relation::RoleList* roleList) {return nullptr;}
};

		} // relation
	} // management
} // javax

#endif // _javax_management_relation_Relation_h_