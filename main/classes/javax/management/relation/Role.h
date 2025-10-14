#ifndef _javax_management_relation_Role_h_
#define _javax_management_relation_Role_h_
//$ class javax.management.relation.Role
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
namespace java {
	namespace util {
		class List;
	}
}

namespace javax {
	namespace management {
		namespace relation {

class $export Role : public ::java::io::Serializable {
	$class(Role, 0, ::java::io::Serializable)
public:
	Role();
	void init$($String* roleName, ::java::util::List* roleValue);
	virtual $Object* clone() override;
	virtual $String* getRoleName();
	virtual ::java::util::List* getRoleValue();
	void readObject(::java::io::ObjectInputStream* in);
	static $String* roleValueToString(::java::util::List* roleValue);
	virtual void setRoleName($String* roleName);
	virtual void setRoleValue(::java::util::List* roleValue);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t oldSerialVersionUID = (int64_t)0xE4CE8182BCFDB0BE;
	static const int64_t newSerialVersionUID = (int64_t)0xFC1D4AA787BC0568;
	static $Array<::java::io::ObjectStreamField>* oldSerialPersistentFields;
	static $Array<::java::io::ObjectStreamField>* newSerialPersistentFields;
	static int64_t serialVersionUID;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static bool compat;
	$String* name = nullptr;
	::java::util::List* objectNameList = nullptr;
};

		} // relation
	} // management
} // javax

#endif // _javax_management_relation_Role_h_