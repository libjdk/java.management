#ifndef _javax_management_MBeanServerPermission_h_
#define _javax_management_MBeanServerPermission_h_
//$ class javax.management.MBeanServerPermission
//$ extends java.security.BasicPermission

#include <java/lang/Array.h>
#include <java/security/BasicPermission.h>

#pragma push_macro("ALL_MASK")
#undef ALL_MASK
#pragma push_macro("CREATE")
#undef CREATE
#pragma push_macro("CREATE_MASK")
#undef CREATE_MASK
#pragma push_macro("FIND")
#undef FIND
#pragma push_macro("FIND_MASK")
#undef FIND_MASK
#pragma push_macro("NEW")
#undef NEW
#pragma push_macro("NEW_MASK")
#undef NEW_MASK
#pragma push_macro("N_NAMES")
#undef N_NAMES
#pragma push_macro("RELEASE")
#undef RELEASE
#pragma push_macro("RELEASE_MASK")
#undef RELEASE_MASK

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace security {
		class Permission;
		class PermissionCollection;
	}
}

namespace javax {
	namespace management {

class $export MBeanServerPermission : public ::java::security::BasicPermission {
	$class(MBeanServerPermission, 0, ::java::security::BasicPermission)
public:
	MBeanServerPermission();
	using ::java::security::BasicPermission::getCanonicalName;
	void init$($String* name);
	void init$($String* name, $String* actions);
	void init$(int32_t mask);
	virtual bool equals(Object$* obj) override;
	static $String* getCanonicalName(int32_t mask);
	virtual int32_t hashCode() override;
	static int32_t impliedMask(int32_t mask);
	virtual bool implies(::java::security::Permission* p) override;
	static $String* makeCanonicalName(int32_t mask);
	static int32_t nameIndex($String* name);
	virtual ::java::security::PermissionCollection* newPermissionCollection() override;
	static int32_t parseMask($String* name);
	void readObject(::java::io::ObjectInputStream* in);
	static int32_t simplifyMask(int32_t mask);
	static const int64_t serialVersionUID = (int64_t)0xB16C9A6BD5FAE3D2;
	static const int32_t CREATE = 0;
	static const int32_t FIND = 1;
	static const int32_t NEW = 2;
	static const int32_t RELEASE = 3;
	static const int32_t N_NAMES = 4;
	static $StringArray* names;
	static const int32_t CREATE_MASK = 1; // 1 << CREATE
	static const int32_t FIND_MASK = 2; // 1 << FIND
	static const int32_t NEW_MASK = 4; // 1 << NEW
	static const int32_t RELEASE_MASK = 8; // 1 << RELEASE
	static const int32_t ALL_MASK = 15; // CREATE_MASK | FIND_MASK | NEW_MASK | RELEASE_MASK
	static $StringArray* canonicalNames;
	int32_t mask = 0;
};

	} // management
} // javax

#pragma pop_macro("ALL_MASK")
#pragma pop_macro("CREATE")
#pragma pop_macro("CREATE_MASK")
#pragma pop_macro("FIND")
#pragma pop_macro("FIND_MASK")
#pragma pop_macro("NEW")
#pragma pop_macro("NEW_MASK")
#pragma pop_macro("N_NAMES")
#pragma pop_macro("RELEASE")
#pragma pop_macro("RELEASE_MASK")

#endif // _javax_management_MBeanServerPermission_h_