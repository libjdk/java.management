#include <javax/management/modelmbean/RequiredModelMBean$5.h>

#include <java/lang/ClassLoader.h>
#include <javax/management/modelmbean/RequiredModelMBean.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $ExceptionArray = $Array<::java::lang::Exception>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $RequiredModelMBean = ::javax::management::modelmbean::RequiredModelMBean;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace javax {
	namespace management {
		namespace modelmbean {

$FieldInfo _RequiredModelMBean$5_FieldInfo_[] = {
	{"this$0", "Ljavax/management/modelmbean/RequiredModelMBean;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$5, this$0)},
	{"val$caughException", "[Ljava/lang/Exception;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$5, val$caughException)},
	{"val$respClass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$5, val$respClass)},
	{"val$respType", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$5, val$respType)},
	{}
};

$MethodInfo _RequiredModelMBean$5_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/modelmbean/RequiredModelMBean;Ljava/lang/String;Ljava/lang/Class;[Ljava/lang/Exception;)V", "()V", 0, $method(static_cast<void(RequiredModelMBean$5::*)($RequiredModelMBean*,$String*,$Class*,$ExceptionArray*)>(&RequiredModelMBean$5::init$))},
	{"run", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _RequiredModelMBean$5_EnclosingMethodInfo_ = {
	"javax.management.modelmbean.RequiredModelMBean",
	"getAttribute",
	"(Ljava/lang/String;)Ljava/lang/Object;"
};

$InnerClassInfo _RequiredModelMBean$5_InnerClassesInfo_[] = {
	{"javax.management.modelmbean.RequiredModelMBean$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RequiredModelMBean$5_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.modelmbean.RequiredModelMBean$5",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_RequiredModelMBean$5_FieldInfo_,
	_RequiredModelMBean$5_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Class<*>;>;",
	&_RequiredModelMBean$5_EnclosingMethodInfo_,
	_RequiredModelMBean$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.modelmbean.RequiredModelMBean"
};

$Object* allocate$RequiredModelMBean$5($Class* clazz) {
	return $of($alloc(RequiredModelMBean$5));
}

void RequiredModelMBean$5::init$($RequiredModelMBean* this$0, $String* val$respType, $Class* val$respClass, $ExceptionArray* val$caughException) {
	$set(this, this$0, this$0);
	$set(this, val$respType, val$respType);
	$set(this, val$respClass, val$respClass);
	$set(this, val$caughException, val$caughException);
}

$Object* RequiredModelMBean$5::run() {
	$beforeCallerSensitive();
	try {
		$ReflectUtil::checkPackageAccess(this->val$respType);
		$var($ClassLoader, cl, $nc(this->val$respClass)->getClassLoader());
		return $of($Class::forName(this->val$respType, true, cl));
	} catch ($Exception& e) {
		$nc(this->val$caughException)->set(0, e);
	}
	return $of(nullptr);
}

RequiredModelMBean$5::RequiredModelMBean$5() {
}

$Class* RequiredModelMBean$5::load$($String* name, bool initialize) {
	$loadClass(RequiredModelMBean$5, name, initialize, &_RequiredModelMBean$5_ClassInfo_, allocate$RequiredModelMBean$5);
	return class$;
}

$Class* RequiredModelMBean$5::class$ = nullptr;

		} // modelmbean
	} // management
} // javax