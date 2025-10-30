#include <javax/management/MBeanInfo$ArrayGettersSafeAction.h>

#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/Method.h>
#include <javax/management/MBeanInfo.h>
#include <jcpp.h>

using $MethodArray = $Array<::java::lang::reflect::Method>;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Method = ::java::lang::reflect::Method;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $MBeanInfo = ::javax::management::MBeanInfo;

namespace javax {
	namespace management {

$FieldInfo _MBeanInfo$ArrayGettersSafeAction_FieldInfo_[] = {
	{"subclass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(MBeanInfo$ArrayGettersSafeAction, subclass)},
	{"immutableClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(MBeanInfo$ArrayGettersSafeAction, immutableClass)},
	{}
};

$MethodInfo _MBeanInfo$ArrayGettersSafeAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", 0, $method(static_cast<void(MBeanInfo$ArrayGettersSafeAction::*)($Class*,$Class*)>(&MBeanInfo$ArrayGettersSafeAction::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MBeanInfo$ArrayGettersSafeAction_InnerClassesInfo_[] = {
	{"javax.management.MBeanInfo$ArrayGettersSafeAction", "javax.management.MBeanInfo", "ArrayGettersSafeAction", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MBeanInfo$ArrayGettersSafeAction_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.MBeanInfo$ArrayGettersSafeAction",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_MBeanInfo$ArrayGettersSafeAction_FieldInfo_,
	_MBeanInfo$ArrayGettersSafeAction_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	nullptr,
	_MBeanInfo$ArrayGettersSafeAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.MBeanInfo"
};

$Object* allocate$MBeanInfo$ArrayGettersSafeAction($Class* clazz) {
	return $of($alloc(MBeanInfo$ArrayGettersSafeAction));
}

void MBeanInfo$ArrayGettersSafeAction::init$($Class* subclass, $Class* immutableClass) {
	$set(this, subclass, subclass);
	$set(this, immutableClass, immutableClass);
}

$Object* MBeanInfo$ArrayGettersSafeAction::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($MethodArray, methods, $nc(this->immutableClass)->getMethods());
	for (int32_t i = 0; i < $nc(methods)->length; ++i) {
		$var($Method, method, methods->get(i));
		$var($String, methodName, $nc(method)->getName());
		bool var$1 = $nc(methodName)->startsWith("get"_s);
		bool var$0 = var$1 && $nc($(method->getParameterTypes()))->length == 0;
		if (var$0 && $nc(method->getReturnType())->isArray()) {
			try {
				$var($Method, submethod, $nc(this->subclass)->getMethod(methodName, $$new($ClassArray, 0)));
				if (!$nc(submethod)->equals(method)) {
					return $of($Boolean::valueOf(false));
				}
			} catch ($NoSuchMethodException& e) {
				return $of($Boolean::valueOf(false));
			}
		}
	}
	return $of($Boolean::valueOf(true));
}

MBeanInfo$ArrayGettersSafeAction::MBeanInfo$ArrayGettersSafeAction() {
}

$Class* MBeanInfo$ArrayGettersSafeAction::load$($String* name, bool initialize) {
	$loadClass(MBeanInfo$ArrayGettersSafeAction, name, initialize, &_MBeanInfo$ArrayGettersSafeAction_ClassInfo_, allocate$MBeanInfo$ArrayGettersSafeAction);
	return class$;
}

$Class* MBeanInfo$ArrayGettersSafeAction::class$ = nullptr;

	} // management
} // javax