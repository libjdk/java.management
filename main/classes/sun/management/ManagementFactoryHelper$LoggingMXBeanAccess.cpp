#include <sun/management/ManagementFactoryHelper$LoggingMXBeanAccess.h>

#include <java/lang/Error.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InternalError.h>
#include <java/lang/NoClassDefFoundError.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/management/PlatformLoggingMXBean.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/UndeclaredThrowableException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/management/ManagementFactoryHelper$LoggingMXBeanAccess$1.h>
#include <sun/management/ManagementFactoryHelper.h>
#include <jcpp.h>

#undef LOGGING_MXBEAN_CLASS_NAME
#undef LOG_MANAGER_CLASS
#undef LOG_MANAGER_CLASS_NAME

using $MethodArray = $Array<::java::lang::reflect::Method>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoClassDefFoundError = ::java::lang::NoClassDefFoundError;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $PlatformLoggingMXBean = ::java::lang::management::PlatformLoggingMXBean;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $UndeclaredThrowableException = ::java::lang::reflect::UndeclaredThrowableException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $ManagementFactoryHelper = ::sun::management::ManagementFactoryHelper;
using $ManagementFactoryHelper$LoggingMXBeanAccess$1 = ::sun::management::ManagementFactoryHelper$LoggingMXBeanAccess$1;

namespace sun {
	namespace management {

$FieldInfo _ManagementFactoryHelper$LoggingMXBeanAccess_FieldInfo_[] = {
	{"LOG_MANAGER_CLASS_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ManagementFactoryHelper$LoggingMXBeanAccess, LOG_MANAGER_CLASS_NAME)},
	{"LOGGING_MXBEAN_CLASS_NAME", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(ManagementFactoryHelper$LoggingMXBeanAccess, LOGGING_MXBEAN_CLASS_NAME)},
	{"LOG_MANAGER_CLASS", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $STATIC | $FINAL, $staticField(ManagementFactoryHelper$LoggingMXBeanAccess, LOG_MANAGER_CLASS)},
	{"impl", "Ljava/lang/Object;", nullptr, $FINAL, $field(ManagementFactoryHelper$LoggingMXBeanAccess, impl)},
	{"methods", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;", $FINAL, $field(ManagementFactoryHelper$LoggingMXBeanAccess, methods)},
	{}
};

$MethodInfo _ManagementFactoryHelper$LoggingMXBeanAccess_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ManagementFactoryHelper$LoggingMXBeanAccess::*)()>(&ManagementFactoryHelper$LoggingMXBeanAccess::init$))},
	{"getMXBeanImplementation", "()Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)()>(&ManagementFactoryHelper$LoggingMXBeanAccess::getMXBeanImplementation))},
	{"initMethodMap", "(Ljava/lang/Object;)Ljava/util/Map;", "(Ljava/lang/Object;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/reflect/Method;>;", $PRIVATE, $method(static_cast<$Map*(ManagementFactoryHelper$LoggingMXBeanAccess::*)(Object$*)>(&ManagementFactoryHelper$LoggingMXBeanAccess::initMethodMap))},
	{"invoke", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/String;[Ljava/lang/Object;)TT;", $TRANSIENT, $method(static_cast<$Object*(ManagementFactoryHelper$LoggingMXBeanAccess::*)($String*,$ObjectArray*)>(&ManagementFactoryHelper$LoggingMXBeanAccess::invoke))},
	{"isAvailable", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&ManagementFactoryHelper$LoggingMXBeanAccess::isAvailable))},
	{"loadLoggingClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $method(static_cast<$Class*(*)($String*)>(&ManagementFactoryHelper$LoggingMXBeanAccess::loadLoggingClass))},
	{"unwrap", "(Ljava/lang/reflect/InvocationTargetException;)Ljava/lang/RuntimeException;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$RuntimeException*(*)($InvocationTargetException*)>(&ManagementFactoryHelper$LoggingMXBeanAccess::unwrap))},
	{}
};

$InnerClassInfo _ManagementFactoryHelper$LoggingMXBeanAccess_InnerClassesInfo_[] = {
	{"sun.management.ManagementFactoryHelper$LoggingMXBeanAccess", "sun.management.ManagementFactoryHelper", "LoggingMXBeanAccess", $STATIC | $FINAL},
	{"sun.management.ManagementFactoryHelper$LoggingMXBeanAccess$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ManagementFactoryHelper$LoggingMXBeanAccess_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.management.ManagementFactoryHelper$LoggingMXBeanAccess",
	"java.lang.Object",
	nullptr,
	_ManagementFactoryHelper$LoggingMXBeanAccess_FieldInfo_,
	_ManagementFactoryHelper$LoggingMXBeanAccess_MethodInfo_,
	nullptr,
	nullptr,
	_ManagementFactoryHelper$LoggingMXBeanAccess_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.ManagementFactoryHelper"
};

$Object* allocate$ManagementFactoryHelper$LoggingMXBeanAccess($Class* clazz) {
	return $of($alloc(ManagementFactoryHelper$LoggingMXBeanAccess));
}

$String* ManagementFactoryHelper$LoggingMXBeanAccess::LOG_MANAGER_CLASS_NAME = nullptr;
$String* ManagementFactoryHelper$LoggingMXBeanAccess::LOGGING_MXBEAN_CLASS_NAME = nullptr;
$Class* ManagementFactoryHelper$LoggingMXBeanAccess::LOG_MANAGER_CLASS = nullptr;

bool ManagementFactoryHelper$LoggingMXBeanAccess::isAvailable() {
	$init(ManagementFactoryHelper$LoggingMXBeanAccess);
	return ManagementFactoryHelper$LoggingMXBeanAccess::LOG_MANAGER_CLASS != nullptr;
}

$Class* ManagementFactoryHelper$LoggingMXBeanAccess::loadLoggingClass($String* className) {
	$init(ManagementFactoryHelper$LoggingMXBeanAccess);
	$beforeCallerSensitive();
	return $cast($Class, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ManagementFactoryHelper$LoggingMXBeanAccess$1, className))));
}

$Map* ManagementFactoryHelper$LoggingMXBeanAccess::initMethodMap(Object$* impl) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (impl == nullptr) {
		return $Collections::emptyMap();
	}
	$Class* intfClass = loadLoggingClass(ManagementFactoryHelper$LoggingMXBeanAccess::LOGGING_MXBEAN_CLASS_NAME);
	$var($Map, methodsMap, $new($HashMap));
	{
		$var($MethodArray, arr$, $nc(intfClass)->getMethods());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Method, m, arr$->get(i$));
			{
				try {
					$load($PlatformLoggingMXBean);
					$var($String, var$0, $nc(m)->getName());
					$var($Method, specMethod, $PlatformLoggingMXBean::class$->getMethod(var$0, $(m->getParameterTypes())));
					if ($nc($nc(specMethod)->getReturnType())->isAssignableFrom($nc(m)->getReturnType())) {
						if (methodsMap->putIfAbsent($($nc(m)->getName()), m) != nullptr) {
							$throwNew($RuntimeException, $$str({"unexpected polymorphic method: "_s, $($nc(m)->getName())}));
						}
					}
				} catch ($NoSuchMethodException& x) {
					$throwNew($InternalError, static_cast<$Throwable*>(x));
				}
			}
		}
	}
	return $Collections::unmodifiableMap(methodsMap);
}

$Object* ManagementFactoryHelper$LoggingMXBeanAccess::getMXBeanImplementation() {
	$init(ManagementFactoryHelper$LoggingMXBeanAccess);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (!isAvailable()) {
		$throwNew($NoClassDefFoundError, ManagementFactoryHelper$LoggingMXBeanAccess::LOG_MANAGER_CLASS_NAME);
	}
	try {
		$var($Method, m, $nc(ManagementFactoryHelper$LoggingMXBeanAccess::LOG_MANAGER_CLASS)->getMethod("getLoggingMXBean"_s, $$new($ClassArray, 0)));
		return $of($nc(m)->invoke(nullptr, $$new($ObjectArray, 0)));
	} catch ($NoSuchMethodException& x) {
		$throwNew($ExceptionInInitializerError, static_cast<$Throwable*>(x));
	} catch ($IllegalAccessException& x) {
		$throwNew($ExceptionInInitializerError, static_cast<$Throwable*>(x));
	} catch ($InvocationTargetException& x) {
		$throwNew($ExceptionInInitializerError, static_cast<$Throwable*>(x));
	}
	$shouldNotReachHere();
}

void ManagementFactoryHelper$LoggingMXBeanAccess::init$() {
	$set(this, impl, getMXBeanImplementation());
	$set(this, methods, initMethodMap(this->impl));
}

$Object* ManagementFactoryHelper$LoggingMXBeanAccess::invoke($String* methodName, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Method, m, $cast($Method, $nc(this->methods)->get(methodName)));
	if (m == nullptr) {
		$throwNew($UnsupportedOperationException, methodName);
	}
	try {
		$var($Object, result, $nc(m)->invoke(this->impl, args));
		return $of(result);
	} catch ($IllegalAccessException& ex) {
		$throwNew($UnsupportedOperationException, static_cast<$Throwable*>(ex));
	} catch ($InvocationTargetException& ex) {
		$throw($(unwrap(ex)));
	}
	$shouldNotReachHere();
}

$RuntimeException* ManagementFactoryHelper$LoggingMXBeanAccess::unwrap($InvocationTargetException* x) {
	$init(ManagementFactoryHelper$LoggingMXBeanAccess);
	$var($Throwable, t, $nc(x)->getCause());
	if ($instanceOf($RuntimeException, t)) {
		return $cast($RuntimeException, t);
	}
	if ($instanceOf($Error, t)) {
		$throw($cast($Error, t));
	}
	return $new($UndeclaredThrowableException, t == nullptr ? static_cast<$Throwable*>(x) : t);
}

void clinit$ManagementFactoryHelper$LoggingMXBeanAccess($Class* class$) {
	$assignStatic(ManagementFactoryHelper$LoggingMXBeanAccess::LOG_MANAGER_CLASS_NAME, "java.util.logging.LogManager"_s);
	$assignStatic(ManagementFactoryHelper$LoggingMXBeanAccess::LOGGING_MXBEAN_CLASS_NAME, "java.util.logging.LoggingMXBean"_s);
	$assignStatic(ManagementFactoryHelper$LoggingMXBeanAccess::LOG_MANAGER_CLASS, ManagementFactoryHelper$LoggingMXBeanAccess::loadLoggingClass(ManagementFactoryHelper$LoggingMXBeanAccess::LOG_MANAGER_CLASS_NAME));
}

ManagementFactoryHelper$LoggingMXBeanAccess::ManagementFactoryHelper$LoggingMXBeanAccess() {
}

$Class* ManagementFactoryHelper$LoggingMXBeanAccess::load$($String* name, bool initialize) {
	$loadClass(ManagementFactoryHelper$LoggingMXBeanAccess, name, initialize, &_ManagementFactoryHelper$LoggingMXBeanAccess_ClassInfo_, clinit$ManagementFactoryHelper$LoggingMXBeanAccess, allocate$ManagementFactoryHelper$LoggingMXBeanAccess);
	return class$;
}

$Class* ManagementFactoryHelper$LoggingMXBeanAccess::class$ = nullptr;

	} // management
} // sun