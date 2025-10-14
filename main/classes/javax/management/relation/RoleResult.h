#ifndef _javax_management_relation_RoleResult_h_
#define _javax_management_relation_RoleResult_h_
//$ class javax.management.relation.RoleResult
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace javax {
	namespace management {
		namespace relation {
			class RoleList;
			class RoleUnresolvedList;
		}
	}
}

namespace javax {
	namespace management {
		namespace relation {

class $export RoleResult : public ::java::io::Serializable {
	$class(RoleResult, 0, ::java::io::Serializable)
public:
	RoleResult();
	void init$(::javax::management::relation::RoleList* list, ::javax::management::relation::RoleUnresolvedList* unresolvedList);
	virtual ::javax::management::relation::RoleList* getRoles();
	virtual ::javax::management::relation::RoleUnresolvedList* getRolesUnresolved();
	void readObject(::java::io::ObjectInputStream* in);
	virtual void setRoles(::javax::management::relation::RoleList* list);
	virtual void setRolesUnresolved(::javax::management::relation::RoleUnresolvedList* unresolvedList);
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t oldSerialVersionUID = (int64_t)0x348CC333C118585B;
	static const int64_t newSerialVersionUID = (int64_t)0xA88377FE97869058;
	static $Array<::java::io::ObjectStreamField>* oldSerialPersistentFields;
	static $Array<::java::io::ObjectStreamField>* newSerialPersistentFields;
	static int64_t serialVersionUID;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static bool compat;
	::javax::management::relation::RoleList* roleList = nullptr;
	::javax::management::relation::RoleUnresolvedList* unresolvedRoleList = nullptr;
};

		} // relation
	} // management
} // javax

#endif // _javax_management_relation_RoleResult_h_