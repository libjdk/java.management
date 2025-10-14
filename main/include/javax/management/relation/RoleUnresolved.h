#ifndef _javax_management_relation_RoleUnresolved_h_
#define _javax_management_relation_RoleUnresolved_h_
//$ class javax.management.relation.RoleUnresolved
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

class $import RoleUnresolved : public ::java::io::Serializable {
	$class(RoleUnresolved, 0, ::java::io::Serializable)
public:
	RoleUnresolved();
	void init$($String* name, ::java::util::List* value, int32_t pbType);
	virtual $Object* clone() override;
	virtual int32_t getProblemType();
	virtual $String* getRoleName();
	virtual ::java::util::List* getRoleValue();
	void readObject(::java::io::ObjectInputStream* in);
	virtual void setProblemType(int32_t pbType);
	virtual void setRoleName($String* name);
	virtual void setRoleValue(::java::util::List* value);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t oldSerialVersionUID = (int64_t)0x82BB948EE96AF290;
	static const int64_t newSerialVersionUID = (int64_t)0xFF5439B140AE59C6;
	static $Array<::java::io::ObjectStreamField>* oldSerialPersistentFields;
	static $Array<::java::io::ObjectStreamField>* newSerialPersistentFields;
	static int64_t serialVersionUID;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static bool compat;
	$String* roleName = nullptr;
	::java::util::List* roleValue = nullptr;
	int32_t problemType = 0;
};

		} // relation
	} // management
} // javax

#endif // _javax_management_relation_RoleUnresolved_h_