#include <javax/management/modelmbean/RequiredModelMBean$3.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <javax/management/modelmbean/RequiredModelMBean.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

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

$FieldInfo _RequiredModelMBean$3_FieldInfo_[] = {
	{"this$0", "Ljavax/management/modelmbean/RequiredModelMBean;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$3, this$0)},
	{"val$rmmbClass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$3, val$rmmbClass)},
	{"val$className", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$3, val$className)},
	{}
};

$MethodInfo _RequiredModelMBean$3_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/modelmbean/RequiredModelMBean;Ljava/lang/String;Ljava/lang/Class;)V", "()V", 0, $method(static_cast<void(RequiredModelMBean$3::*)($RequiredModelMBean*,$String*,$Class*)>(&RequiredModelMBean$3::init$))},
	{"run", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _RequiredModelMBean$3_EnclosingMethodInfo_ = {
	"javax.management.modelmbean.RequiredModelMBean",
	"findRMMBMethod",
	"(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/reflect/Method;"
};

$InnerClassInfo _RequiredModelMBean$3_InnerClassesInfo_[] = {
	{"javax.management.modelmbean.RequiredModelMBean$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RequiredModelMBean$3_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.modelmbean.RequiredModelMBean$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_RequiredModelMBean$3_FieldInfo_,
	_RequiredModelMBean$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Class<*>;>;",
	&_RequiredModelMBean$3_EnclosingMethodInfo_,
	_RequiredModelMBean$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.modelmbean.RequiredModelMBean"
};

$Object* allocate$RequiredModelMBean$3($Class* clazz) {
	return $of($alloc(RequiredModelMBean$3));
}

void RequiredModelMBean$3::init$($RequiredModelMBean* this$0, $String* val$className, $Class* val$rmmbClass) {
	$set(this, this$0, this$0);
	$set(this, val$className, val$className);
	$set(this, val$rmmbClass, val$rmmbClass);
}

$Object* RequiredModelMBean$3::run() {
	$beforeCallerSensitive();
	try {
		$ReflectUtil::checkPackageAccess(this->val$className);
		$var($ClassLoader, targetClassLoader, $nc(this->val$rmmbClass)->getClassLoader());
		$Class* clz = $Class::forName(this->val$className, false, targetClassLoader);
		if (!$nc(this->val$rmmbClass)->isAssignableFrom(clz)) {
			return $of(nullptr);
		}
		return $of(clz);
	} catch ($ClassNotFoundException& e) {
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

RequiredModelMBean$3::RequiredModelMBean$3() {
}

$Class* RequiredModelMBean$3::load$($String* name, bool initialize) {
	$loadClass(RequiredModelMBean$3, name, initialize, &_RequiredModelMBean$3_ClassInfo_, allocate$RequiredModelMBean$3);
	return class$;
}

$Class* RequiredModelMBean$3::class$ = nullptr;

		} // modelmbean
	} // management
} // javax