#include <javax/management/remote/SubjectDelegationPermission.h>

#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace javax {
	namespace management {
		namespace remote {

$FieldInfo _SubjectDelegationPermission_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SubjectDelegationPermission, serialVersionUID)},
	{}
};

$MethodInfo _SubjectDelegationPermission_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SubjectDelegationPermission::*)($String*)>(&SubjectDelegationPermission::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SubjectDelegationPermission::*)($String*,$String*)>(&SubjectDelegationPermission::init$))},
	{}
};

$ClassInfo _SubjectDelegationPermission_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.management.remote.SubjectDelegationPermission",
	"java.security.BasicPermission",
	nullptr,
	_SubjectDelegationPermission_FieldInfo_,
	_SubjectDelegationPermission_MethodInfo_
};

$Object* allocate$SubjectDelegationPermission($Class* clazz) {
	return $of($alloc(SubjectDelegationPermission));
}

void SubjectDelegationPermission::init$($String* name) {
	$BasicPermission::init$(name);
}

void SubjectDelegationPermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name, actions);
	if (actions != nullptr) {
		$throwNew($IllegalArgumentException, "Non-null actions"_s);
	}
}

SubjectDelegationPermission::SubjectDelegationPermission() {
}

$Class* SubjectDelegationPermission::load$($String* name, bool initialize) {
	$loadClass(SubjectDelegationPermission, name, initialize, &_SubjectDelegationPermission_ClassInfo_, allocate$SubjectDelegationPermission);
	return class$;
}

$Class* SubjectDelegationPermission::class$ = nullptr;

		} // remote
	} // management
} // javax