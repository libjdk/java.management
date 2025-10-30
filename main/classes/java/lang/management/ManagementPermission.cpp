#include <java/lang/management/ManagementPermission.h>

#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace java {
	namespace lang {
		namespace management {

$FieldInfo _ManagementPermission_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ManagementPermission, serialVersionUID)},
	{}
};

$MethodInfo _ManagementPermission_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ManagementPermission::*)($String*)>(&ManagementPermission::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ManagementPermission::*)($String*,$String*)>(&ManagementPermission::init$)), "java.lang.IllegalArgumentException"},
	{}
};

$ClassInfo _ManagementPermission_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.management.ManagementPermission",
	"java.security.BasicPermission",
	nullptr,
	_ManagementPermission_FieldInfo_,
	_ManagementPermission_MethodInfo_
};

$Object* allocate$ManagementPermission($Class* clazz) {
	return $of($alloc(ManagementPermission));
}

void ManagementPermission::init$($String* name) {
	$BasicPermission::init$(name);
	bool var$0 = !$nc(name)->equals("control"_s);
	if (var$0 && !name->equals("monitor"_s)) {
		$throwNew($IllegalArgumentException, $$str({"name: "_s, name}));
	}
}

void ManagementPermission::init$($String* name, $String* actions) {
	$useLocalCurrentObjectStackCache();
	$BasicPermission::init$(name);
	bool var$0 = !$nc(name)->equals("control"_s);
	if (var$0 && !name->equals("monitor"_s)) {
		$throwNew($IllegalArgumentException, $$str({"name: "_s, name}));
	}
	if (actions != nullptr && actions->length() > 0) {
		$throwNew($IllegalArgumentException, $$str({"actions: "_s, actions}));
	}
}

ManagementPermission::ManagementPermission() {
}

$Class* ManagementPermission::load$($String* name, bool initialize) {
	$loadClass(ManagementPermission, name, initialize, &_ManagementPermission_ClassInfo_, allocate$ManagementPermission);
	return class$;
}

$Class* ManagementPermission::class$ = nullptr;

		} // management
	} // lang
} // java