#include <javax/management/modelmbean/RequiredModelMBean$2.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/util/Map.h>
#include <javax/management/ReflectionException.h>
#include <javax/management/modelmbean/RequiredModelMBean.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef MODELMBEAN_LOGGER
#undef TRACE

using $ReflectionExceptionArray = $Array<::javax::management::ReflectionException>;
using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Map = ::java::util::Map;
using $ReflectionException = ::javax::management::ReflectionException;
using $RequiredModelMBean = ::javax::management::modelmbean::RequiredModelMBean;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace javax {
	namespace management {
		namespace modelmbean {

$FieldInfo _RequiredModelMBean$2_FieldInfo_[] = {
	{"this$0", "Ljavax/management/modelmbean/RequiredModelMBean;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$2, this$0)},
	{"val$caughtException", "[Ljavax/management/ReflectionException;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$2, val$caughtException)},
	{"val$targetClassLoader", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$2, val$targetClassLoader)},
	{"val$argClasses", "[Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$2, val$argClasses)},
	{"val$tracing", "Z", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$2, val$tracing)},
	{"val$sig", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(RequiredModelMBean$2, val$sig)},
	{}
};

$MethodInfo _RequiredModelMBean$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/modelmbean/RequiredModelMBean;[Ljava/lang/String;Z[Ljava/lang/Class;Ljava/lang/ClassLoader;[Ljavax/management/ReflectionException;)V", "()V", 0, $method(static_cast<void(RequiredModelMBean$2::*)($RequiredModelMBean*,$StringArray*,bool,$ClassArray*,$ClassLoader*,$ReflectionExceptionArray*)>(&RequiredModelMBean$2::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RequiredModelMBean$2_EnclosingMethodInfo_ = {
	"javax.management.modelmbean.RequiredModelMBean",
	"resolveMethod",
	"(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/reflect/Method;"
};

$InnerClassInfo _RequiredModelMBean$2_InnerClassesInfo_[] = {
	{"javax.management.modelmbean.RequiredModelMBean$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RequiredModelMBean$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.modelmbean.RequiredModelMBean$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_RequiredModelMBean$2_FieldInfo_,
	_RequiredModelMBean$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_RequiredModelMBean$2_EnclosingMethodInfo_,
	_RequiredModelMBean$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.modelmbean.RequiredModelMBean"
};

$Object* allocate$RequiredModelMBean$2($Class* clazz) {
	return $of($alloc(RequiredModelMBean$2));
}

void RequiredModelMBean$2::init$($RequiredModelMBean* this$0, $StringArray* val$sig, bool val$tracing, $ClassArray* val$argClasses, $ClassLoader* val$targetClassLoader, $ReflectionExceptionArray* val$caughtException) {
	$set(this, this$0, this$0);
	$set(this, val$sig, val$sig);
	this->val$tracing = val$tracing;
	$set(this, val$argClasses, val$argClasses);
	$set(this, val$targetClassLoader, val$targetClassLoader);
	$set(this, val$caughtException, val$caughtException);
}

$Object* RequiredModelMBean$2::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	for (int32_t i = 0; i < $nc(this->val$sig)->length; ++i) {
		if (this->val$tracing) {
			$init($JmxProperties);
			$init($System$Logger$Level);
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"resolve type "_s, $nc(this->val$sig)->get(i)}));
		}
		$init($RequiredModelMBean);
		$nc(this->val$argClasses)->set(i, $cast($Class, $($nc($RequiredModelMBean::primitiveClassMap)->get($nc(this->val$sig)->get(i)))));
		if ($nc(this->val$argClasses)->get(i) == nullptr) {
			try {
				$ReflectUtil::checkPackageAccess($nc(this->val$sig)->get(i));
				$nc(this->val$argClasses)->set(i, $Class::forName($nc(this->val$sig)->get(i), false, this->val$targetClassLoader));
			} catch ($ClassNotFoundException& e) {
				if (this->val$tracing) {
					$init($JmxProperties);
					$init($System$Logger$Level);
					$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "class not found"_s);
				}
				$var($String, msg, "Parameter class not found"_s);
				$nc(this->val$caughtException)->set(0, $$new($ReflectionException, e, msg));
			}
		}
	}
	return $of(nullptr);
}

RequiredModelMBean$2::RequiredModelMBean$2() {
}

$Class* RequiredModelMBean$2::load$($String* name, bool initialize) {
	$loadClass(RequiredModelMBean$2, name, initialize, &_RequiredModelMBean$2_ClassInfo_, allocate$RequiredModelMBean$2);
	return class$;
}

$Class* RequiredModelMBean$2::class$ = nullptr;

		} // modelmbean
	} // management
} // javax