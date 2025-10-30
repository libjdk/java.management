#include <javax/management/modelmbean/RequiredModelMBean$4.h>

#include <java/lang/IllegalAccessException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <javax/management/modelmbean/RequiredModelMBean.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $ThrowableArray = $Array<::java::lang::Throwable>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $RequiredModelMBean = ::javax::management::modelmbean::RequiredModelMBean;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace javax {
	namespace management {
		namespace modelmbean {

$FieldInfo _RequiredModelMBean$4_FieldInfo_[] = {
	{"this$0", "Ljavax/management/modelmbean/RequiredModelMBean;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$4, this$0)},
	{"val$caughtException", "[Ljava/lang/Throwable;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$4, val$caughtException)},
	{"val$opArgs", "[Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$4, val$opArgs)},
	{"val$targetObject", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$4, val$targetObject)},
	{"val$method", "Ljava/lang/reflect/Method;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$4, val$method)},
	{}
};

$MethodInfo _RequiredModelMBean$4_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/modelmbean/RequiredModelMBean;Ljava/lang/reflect/Method;Ljava/lang/Object;[Ljava/lang/Object;[Ljava/lang/Throwable;)V", "()V", 0, $method(static_cast<void(RequiredModelMBean$4::*)($RequiredModelMBean*,$Method*,Object$*,$ObjectArray*,$ThrowableArray*)>(&RequiredModelMBean$4::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RequiredModelMBean$4_EnclosingMethodInfo_ = {
	"javax.management.modelmbean.RequiredModelMBean",
	"invokeMethod",
	"(Ljava/lang/String;Ljava/lang/reflect/Method;Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;"
};

$InnerClassInfo _RequiredModelMBean$4_InnerClassesInfo_[] = {
	{"javax.management.modelmbean.RequiredModelMBean$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RequiredModelMBean$4_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.modelmbean.RequiredModelMBean$4",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_RequiredModelMBean$4_FieldInfo_,
	_RequiredModelMBean$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_RequiredModelMBean$4_EnclosingMethodInfo_,
	_RequiredModelMBean$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.modelmbean.RequiredModelMBean"
};

$Object* allocate$RequiredModelMBean$4($Class* clazz) {
	return $of($alloc(RequiredModelMBean$4));
}

void RequiredModelMBean$4::init$($RequiredModelMBean* this$0, $Method* val$method, Object$* val$targetObject, $ObjectArray* val$opArgs, $ThrowableArray* val$caughtException) {
	$set(this, this$0, this$0);
	$set(this, val$method, val$method);
	$set(this, val$targetObject, val$targetObject);
	$set(this, val$opArgs, val$opArgs);
	$set(this, val$caughtException, val$caughtException);
}

$Object* RequiredModelMBean$4::run() {
	try {
		$ReflectUtil::checkPackageAccess($nc(this->val$method)->getDeclaringClass());
		return $of($MethodUtil::invoke(this->val$method, this->val$targetObject, this->val$opArgs));
	} catch ($InvocationTargetException& e) {
		$nc(this->val$caughtException)->set(0, e);
	} catch ($IllegalAccessException& e) {
		$nc(this->val$caughtException)->set(0, e);
	}
	return $of(nullptr);
}

RequiredModelMBean$4::RequiredModelMBean$4() {
}

$Class* RequiredModelMBean$4::load$($String* name, bool initialize) {
	$loadClass(RequiredModelMBean$4, name, initialize, &_RequiredModelMBean$4_ClassInfo_, allocate$RequiredModelMBean$4);
	return class$;
}

$Class* RequiredModelMBean$4::class$ = nullptr;

		} // modelmbean
	} // management
} // javax