#include <javax/management/modelmbean/RequiredModelMBean$1.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <javax/management/modelmbean/RequiredModelMBean.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $ClassNotFoundExceptionArray = $Array<::java::lang::ClassNotFoundException>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $RequiredModelMBean = ::javax::management::modelmbean::RequiredModelMBean;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace javax {
	namespace management {
		namespace modelmbean {

$FieldInfo _RequiredModelMBean$1_FieldInfo_[] = {
	{"this$0", "Ljavax/management/modelmbean/RequiredModelMBean;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$1, this$0)},
	{"val$caughtException", "[Ljava/lang/ClassNotFoundException;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$1, val$caughtException)},
	{"val$obj", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$1, val$obj)},
	{"val$className", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$1, val$className)},
	{}
};

$MethodInfo _RequiredModelMBean$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/modelmbean/RequiredModelMBean;Ljava/lang/String;Ljava/lang/Object;[Ljava/lang/ClassNotFoundException;)V", "()V", 0, $method(static_cast<void(RequiredModelMBean$1::*)($RequiredModelMBean*,$String*,Object$*,$ClassNotFoundExceptionArray*)>(&RequiredModelMBean$1::init$))},
	{"run", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _RequiredModelMBean$1_EnclosingMethodInfo_ = {
	"javax.management.modelmbean.RequiredModelMBean",
	"invoke",
	"(Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;"
};

$InnerClassInfo _RequiredModelMBean$1_InnerClassesInfo_[] = {
	{"javax.management.modelmbean.RequiredModelMBean$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RequiredModelMBean$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.modelmbean.RequiredModelMBean$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_RequiredModelMBean$1_FieldInfo_,
	_RequiredModelMBean$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Class<*>;>;",
	&_RequiredModelMBean$1_EnclosingMethodInfo_,
	_RequiredModelMBean$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.modelmbean.RequiredModelMBean"
};

$Object* allocate$RequiredModelMBean$1($Class* clazz) {
	return $of($alloc(RequiredModelMBean$1));
}

void RequiredModelMBean$1::init$($RequiredModelMBean* this$0, $String* val$className, Object$* val$obj, $ClassNotFoundExceptionArray* val$caughtException) {
	$set(this, this$0, this$0);
	$set(this, val$className, val$className);
	$set(this, val$obj, val$obj);
	$set(this, val$caughtException, val$caughtException);
}

$Object* RequiredModelMBean$1::run() {
	$beforeCallerSensitive();
	try {
		$ReflectUtil::checkPackageAccess(this->val$className);
		$var($ClassLoader, targetClassLoader, $nc($of(this->val$obj))->getClass()->getClassLoader());
		return $of($Class::forName(this->val$className, false, targetClassLoader));
	} catch ($ClassNotFoundException& e) {
		$nc(this->val$caughtException)->set(0, e);
	}
	return $of(nullptr);
}

RequiredModelMBean$1::RequiredModelMBean$1() {
}

$Class* RequiredModelMBean$1::load$($String* name, bool initialize) {
	$loadClass(RequiredModelMBean$1, name, initialize, &_RequiredModelMBean$1_ClassInfo_, allocate$RequiredModelMBean$1);
	return class$;
}

$Class* RequiredModelMBean$1::class$ = nullptr;

		} // modelmbean
	} // management
} // javax