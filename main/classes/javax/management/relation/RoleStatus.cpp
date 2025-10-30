#include <javax/management/relation/RoleStatus.h>

#include <jcpp.h>

#undef LESS_THAN_MIN_ROLE_DEGREE
#undef MORE_THAN_MAX_ROLE_DEGREE
#undef NO_ROLE_WITH_NAME
#undef REF_MBEAN_NOT_REGISTERED
#undef REF_MBEAN_OF_INCORRECT_CLASS
#undef ROLE_NOT_READABLE
#undef ROLE_NOT_WRITABLE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace javax {
	namespace management {
		namespace relation {

$NamedAttribute RoleStatus_Attribute_var$0[] = {
	{"since", 's', "16"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _RoleStatus_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", RoleStatus_Attribute_var$0},
	{}
};

$FieldInfo _RoleStatus_FieldInfo_[] = {
	{"NO_ROLE_WITH_NAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RoleStatus, NO_ROLE_WITH_NAME)},
	{"ROLE_NOT_READABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RoleStatus, ROLE_NOT_READABLE)},
	{"ROLE_NOT_WRITABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RoleStatus, ROLE_NOT_WRITABLE)},
	{"LESS_THAN_MIN_ROLE_DEGREE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RoleStatus, LESS_THAN_MIN_ROLE_DEGREE)},
	{"MORE_THAN_MAX_ROLE_DEGREE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RoleStatus, MORE_THAN_MAX_ROLE_DEGREE)},
	{"REF_MBEAN_OF_INCORRECT_CLASS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RoleStatus, REF_MBEAN_OF_INCORRECT_CLASS)},
	{"REF_MBEAN_NOT_REGISTERED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RoleStatus, REF_MBEAN_NOT_REGISTERED)},
	{}
};

$MethodInfo _RoleStatus_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(RoleStatus::*)()>(&RoleStatus::init$)), nullptr, nullptr, _RoleStatus_MethodAnnotations_init$0},
	{"isRoleStatus", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&RoleStatus::isRoleStatus))},
	{}
};

$ClassInfo _RoleStatus_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.relation.RoleStatus",
	"java.lang.Object",
	nullptr,
	_RoleStatus_FieldInfo_,
	_RoleStatus_MethodInfo_
};

$Object* allocate$RoleStatus($Class* clazz) {
	return $of($alloc(RoleStatus));
}

void RoleStatus::init$() {
}

bool RoleStatus::isRoleStatus(int32_t status) {
	if (status != RoleStatus::NO_ROLE_WITH_NAME && status != RoleStatus::ROLE_NOT_READABLE && status != RoleStatus::ROLE_NOT_WRITABLE && status != RoleStatus::LESS_THAN_MIN_ROLE_DEGREE && status != RoleStatus::MORE_THAN_MAX_ROLE_DEGREE && status != RoleStatus::REF_MBEAN_OF_INCORRECT_CLASS && status != RoleStatus::REF_MBEAN_NOT_REGISTERED) {
		return false;
	}
	return true;
}

RoleStatus::RoleStatus() {
}

$Class* RoleStatus::load$($String* name, bool initialize) {
	$loadClass(RoleStatus, name, initialize, &_RoleStatus_ClassInfo_, allocate$RoleStatus);
	return class$;
}

$Class* RoleStatus::class$ = nullptr;

		} // relation
	} // management
} // javax