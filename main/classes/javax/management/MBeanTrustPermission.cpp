#include <javax/management/MBeanTrustPermission.h>

#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;

namespace javax {
	namespace management {

$FieldInfo _MBeanTrustPermission_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanTrustPermission, serialVersionUID)},
	{}
};

$MethodInfo _MBeanTrustPermission_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanTrustPermission::*)($String*)>(&MBeanTrustPermission::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanTrustPermission::*)($String*,$String*)>(&MBeanTrustPermission::init$))},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(MBeanTrustPermission::*)($ObjectInputStream*)>(&MBeanTrustPermission::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"validate", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*)>(&MBeanTrustPermission::validate))},
	{}
};

$ClassInfo _MBeanTrustPermission_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.MBeanTrustPermission",
	"java.security.BasicPermission",
	nullptr,
	_MBeanTrustPermission_FieldInfo_,
	_MBeanTrustPermission_MethodInfo_
};

$Object* allocate$MBeanTrustPermission($Class* clazz) {
	return $of($alloc(MBeanTrustPermission));
}

void MBeanTrustPermission::init$($String* name) {
	MBeanTrustPermission::init$(name, nullptr);
}

void MBeanTrustPermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name, actions);
	validate(name, actions);
}

void MBeanTrustPermission::validate($String* name, $String* actions) {
	$init(MBeanTrustPermission);
	$useLocalCurrentObjectStackCache();
	if (actions != nullptr && actions->length() > 0) {
		$throwNew($IllegalArgumentException, $$str({"MBeanTrustPermission actions must be null: "_s, actions}));
	}
	bool var$0 = !$nc(name)->equals("register"_s);
	if (var$0 && !name->equals("*"_s)) {
		$throwNew($IllegalArgumentException, $$str({"MBeanTrustPermission: Unknown target name ["_s, name, "]"_s}));
	}
}

void MBeanTrustPermission::readObject($ObjectInputStream* in) {
	$useLocalCurrentObjectStackCache();
	$nc(in)->defaultReadObject();
	try {
		$var($String, var$0, $BasicPermission::getName());
		validate(var$0, $($BasicPermission::getActions()));
	} catch ($IllegalArgumentException& e) {
		$throwNew($InvalidObjectException, $(e->getMessage()));
	}
}

MBeanTrustPermission::MBeanTrustPermission() {
}

$Class* MBeanTrustPermission::load$($String* name, bool initialize) {
	$loadClass(MBeanTrustPermission, name, initialize, &_MBeanTrustPermission_ClassInfo_, allocate$MBeanTrustPermission);
	return class$;
}

$Class* MBeanTrustPermission::class$ = nullptr;

	} // management
} // javax