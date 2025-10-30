#include <javax/management/openmbean/OpenType$1.h>

#include <java/lang/reflect/Method.h>
#include <javax/management/openmbean/OpenType.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $OpenType = ::javax::management::openmbean::OpenType;

namespace javax {
	namespace management {
		namespace openmbean {

$FieldInfo _OpenType$1_FieldInfo_[] = {
	{"val$c", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(OpenType$1, val$c)},
	{}
};

$MethodInfo _OpenType$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", "()V", 0, $method(static_cast<void(OpenType$1::*)($Class*)>(&OpenType$1::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _OpenType$1_EnclosingMethodInfo_ = {
	"javax.management.openmbean.OpenType",
	"overridesGetClassName",
	"(Ljava/lang/Class;)Z"
};

$InnerClassInfo _OpenType$1_InnerClassesInfo_[] = {
	{"javax.management.openmbean.OpenType$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _OpenType$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.openmbean.OpenType$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_OpenType$1_FieldInfo_,
	_OpenType$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_OpenType$1_EnclosingMethodInfo_,
	_OpenType$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.openmbean.OpenType"
};

$Object* allocate$OpenType$1($Class* clazz) {
	return $of($alloc(OpenType$1));
}

void OpenType$1::init$($Class* val$c) {
	$set(this, val$c, val$c);
}

$Object* OpenType$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$load($OpenType);
		return $of($Boolean::valueOf(($nc($($nc(this->val$c)->getMethod("getClassName"_s, $$new($ClassArray, 0))))->getDeclaringClass() != $OpenType::class$)));
	} catch ($Exception& e) {
		return $of($Boolean::valueOf(true));
	}
	$shouldNotReachHere();
}

OpenType$1::OpenType$1() {
}

$Class* OpenType$1::load$($String* name, bool initialize) {
	$loadClass(OpenType$1, name, initialize, &_OpenType$1_ClassInfo_, allocate$OpenType$1);
	return class$;
}

$Class* OpenType$1::class$ = nullptr;

		} // openmbean
	} // management
} // javax