#ifndef _javax_management_relation_RoleStatus_h_
#define _javax_management_relation_RoleStatus_h_
//$ class javax.management.relation.RoleStatus
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("LESS_THAN_MIN_ROLE_DEGREE")
#undef LESS_THAN_MIN_ROLE_DEGREE
#pragma push_macro("MORE_THAN_MAX_ROLE_DEGREE")
#undef MORE_THAN_MAX_ROLE_DEGREE
#pragma push_macro("NO_ROLE_WITH_NAME")
#undef NO_ROLE_WITH_NAME
#pragma push_macro("REF_MBEAN_NOT_REGISTERED")
#undef REF_MBEAN_NOT_REGISTERED
#pragma push_macro("REF_MBEAN_OF_INCORRECT_CLASS")
#undef REF_MBEAN_OF_INCORRECT_CLASS
#pragma push_macro("ROLE_NOT_READABLE")
#undef ROLE_NOT_READABLE
#pragma push_macro("ROLE_NOT_WRITABLE")
#undef ROLE_NOT_WRITABLE

namespace javax {
	namespace management {
		namespace relation {

class $export RoleStatus : public ::java::lang::Object {
	$class(RoleStatus, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RoleStatus();
	void init$();
	static bool isRoleStatus(int32_t status);
	static const int32_t NO_ROLE_WITH_NAME = 1;
	static const int32_t ROLE_NOT_READABLE = 2;
	static const int32_t ROLE_NOT_WRITABLE = 3;
	static const int32_t LESS_THAN_MIN_ROLE_DEGREE = 4;
	static const int32_t MORE_THAN_MAX_ROLE_DEGREE = 5;
	static const int32_t REF_MBEAN_OF_INCORRECT_CLASS = 6;
	static const int32_t REF_MBEAN_NOT_REGISTERED = 7;
};

		} // relation
	} // management
} // javax

#pragma pop_macro("LESS_THAN_MIN_ROLE_DEGREE")
#pragma pop_macro("MORE_THAN_MAX_ROLE_DEGREE")
#pragma pop_macro("NO_ROLE_WITH_NAME")
#pragma pop_macro("REF_MBEAN_NOT_REGISTERED")
#pragma pop_macro("REF_MBEAN_OF_INCORRECT_CLASS")
#pragma pop_macro("ROLE_NOT_READABLE")
#pragma pop_macro("ROLE_NOT_WRITABLE")

#endif // _javax_management_relation_RoleStatus_h_