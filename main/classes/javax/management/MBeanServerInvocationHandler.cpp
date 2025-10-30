#include <javax/management/MBeanServerInvocationHandler.h>

#include <com/sun/jmx/mbeanserver/MXBeanProxy.h>
#include <java/lang/Error.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/InvocationHandler.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Proxy.h>
#include <java/util/Arrays.h>
#include <java/util/WeakHashMap.h>
#include <javax/management/Attribute.h>
#include <javax/management/JMX.h>
#include <javax/management/MBeanException.h>
#include <javax/management/MBeanInfo.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/MBeanServerConnection.h>
#include <javax/management/NotificationBroadcaster.h>
#include <javax/management/NotificationEmitter.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationListener.h>
#include <javax/management/ObjectName.h>
#include <javax/management/RuntimeErrorException.h>
#include <javax/management/RuntimeMBeanException.h>
#include <jcpp.h>

#undef TYPE

using $StackTraceElementArray = $Array<::java::lang::StackTraceElement>;
using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $MXBeanProxy = ::com::sun::jmx::mbeanserver::MXBeanProxy;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $InvocationHandler = ::java::lang::reflect::InvocationHandler;
using $Method = ::java::lang::reflect::Method;
using $Proxy = ::java::lang::reflect::Proxy;
using $Arrays = ::java::util::Arrays;
using $WeakHashMap = ::java::util::WeakHashMap;
using $Attribute = ::javax::management::Attribute;
using $JMX = ::javax::management::JMX;
using $MBeanException = ::javax::management::MBeanException;
using $MBeanInfo = ::javax::management::MBeanInfo;
using $MBeanServerConnection = ::javax::management::MBeanServerConnection;
using $NotificationBroadcaster = ::javax::management::NotificationBroadcaster;
using $NotificationEmitter = ::javax::management::NotificationEmitter;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationListener = ::javax::management::NotificationListener;
using $ObjectName = ::javax::management::ObjectName;
using $RuntimeErrorException = ::javax::management::RuntimeErrorException;
using $RuntimeMBeanException = ::javax::management::RuntimeMBeanException;

namespace javax {
	namespace management {

$FieldInfo _MBeanServerInvocationHandler_FieldInfo_[] = {
	{"mxbeanProxies", "Ljava/util/WeakHashMap;", "Ljava/util/WeakHashMap<Ljava/lang/Class<*>;Ljava/lang/ref/WeakReference<Lcom/sun/jmx/mbeanserver/MXBeanProxy;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(MBeanServerInvocationHandler, mxbeanProxies)},
	{"connection", "Ljavax/management/MBeanServerConnection;", nullptr, $PRIVATE | $FINAL, $field(MBeanServerInvocationHandler, connection)},
	{"objectName", "Ljavax/management/ObjectName;", nullptr, $PRIVATE | $FINAL, $field(MBeanServerInvocationHandler, objectName)},
	{"isMXBean", "Z", nullptr, $PRIVATE | $FINAL, $field(MBeanServerInvocationHandler, isMXBean$)},
	{}
};

$MethodInfo _MBeanServerInvocationHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/MBeanServerConnection;Ljavax/management/ObjectName;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanServerInvocationHandler::*)($MBeanServerConnection*,$ObjectName*)>(&MBeanServerInvocationHandler::init$))},
	{"<init>", "(Ljavax/management/MBeanServerConnection;Ljavax/management/ObjectName;Z)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanServerInvocationHandler::*)($MBeanServerConnection*,$ObjectName*,bool)>(&MBeanServerInvocationHandler::init$))},
	{"doLocally", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(MBeanServerInvocationHandler::*)(Object$*,$Method*,$ObjectArray*)>(&MBeanServerInvocationHandler::doLocally))},
	{"findMXBeanProxy", "(Ljava/lang/Class;)Lcom/sun/jmx/mbeanserver/MXBeanProxy;", "(Ljava/lang/Class<*>;)Lcom/sun/jmx/mbeanserver/MXBeanProxy;", $PRIVATE | $STATIC, $method(static_cast<$MXBeanProxy*(*)($Class*)>(&MBeanServerInvocationHandler::findMXBeanProxy))},
	{"getMBeanServerConnection", "()Ljavax/management/MBeanServerConnection;", nullptr, $PUBLIC},
	{"getObjectName", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC},
	{"invoke", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.Throwable"},
	{"invokeBroadcasterMethod", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(MBeanServerInvocationHandler::*)(Object$*,$Method*,$ObjectArray*)>(&MBeanServerInvocationHandler::invokeBroadcasterMethod)), "java.lang.Exception"},
	{"isLocal", "(Ljava/lang/Object;Ljava/lang/reflect/Method;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(Object$*,$Method*)>(&MBeanServerInvocationHandler::isLocal))},
	{"isMXBean", "()Z", nullptr, $PUBLIC},
	{"newProxyInstance", "(Ljavax/management/MBeanServerConnection;Ljavax/management/ObjectName;Ljava/lang/Class;Z)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljavax/management/MBeanServerConnection;Ljavax/management/ObjectName;Ljava/lang/Class<TT;>;Z)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($MBeanServerConnection*,$ObjectName*,$Class*,bool)>(&MBeanServerInvocationHandler::newProxyInstance))},
	{"shouldDoLocally", "(Ljava/lang/Object;Ljava/lang/reflect/Method;)Z", nullptr, $PRIVATE, $method(static_cast<bool(MBeanServerInvocationHandler::*)(Object$*,$Method*)>(&MBeanServerInvocationHandler::shouldDoLocally))},
	{}
};

$ClassInfo _MBeanServerInvocationHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.MBeanServerInvocationHandler",
	"java.lang.Object",
	"java.lang.reflect.InvocationHandler",
	_MBeanServerInvocationHandler_FieldInfo_,
	_MBeanServerInvocationHandler_MethodInfo_
};

$Object* allocate$MBeanServerInvocationHandler($Class* clazz) {
	return $of($alloc(MBeanServerInvocationHandler));
}

$WeakHashMap* MBeanServerInvocationHandler::mxbeanProxies = nullptr;

void MBeanServerInvocationHandler::init$($MBeanServerConnection* connection, $ObjectName* objectName) {
	MBeanServerInvocationHandler::init$(connection, objectName, false);
}

void MBeanServerInvocationHandler::init$($MBeanServerConnection* connection, $ObjectName* objectName, bool isMXBean) {
	$beforeCallerSensitive();
	if (connection == nullptr) {
		$throwNew($IllegalArgumentException, "Null connection"_s);
	}
	if ($Proxy::isProxyClass($nc($of(connection))->getClass())) {
		if (MBeanServerInvocationHandler::class$->isAssignableFrom($nc($of($($Proxy::getInvocationHandler(connection))))->getClass())) {
			$throwNew($IllegalArgumentException, "Wrapping MBeanServerInvocationHandler"_s);
		}
	}
	if (objectName == nullptr) {
		$throwNew($IllegalArgumentException, "Null object name"_s);
	}
	$set(this, connection, connection);
	$set(this, objectName, objectName);
	this->isMXBean$ = isMXBean;
}

$MBeanServerConnection* MBeanServerInvocationHandler::getMBeanServerConnection() {
	return this->connection;
}

$ObjectName* MBeanServerInvocationHandler::getObjectName() {
	return this->objectName;
}

bool MBeanServerInvocationHandler::isMXBean() {
	return this->isMXBean$;
}

$Object* MBeanServerInvocationHandler::newProxyInstance($MBeanServerConnection* connection, $ObjectName* objectName, $Class* interfaceClass, bool notificationBroadcaster) {
	$init(MBeanServerInvocationHandler);
	return $of($JMX::newMBeanProxy(connection, objectName, interfaceClass, notificationBroadcaster));
}

$Object* MBeanServerInvocationHandler::invoke(Object$* proxy, $Method* method, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$Class* methodClass = $nc(method)->getDeclaringClass();
	$load($NotificationBroadcaster);
	bool var$0 = $nc($of(methodClass))->equals($NotificationBroadcaster::class$);
	$load($NotificationEmitter);
	if (var$0 || $nc($of(methodClass))->equals($NotificationEmitter::class$)) {
		return $of(invokeBroadcasterMethod(proxy, method, args));
	}
	if (shouldDoLocally(proxy, method)) {
		return $of(doLocally(proxy, method, args));
	}
	try {
		if (isMXBean()) {
			$var($MXBeanProxy, p, findMXBeanProxy(methodClass));
			return $of($nc(p)->invoke(this->connection, this->objectName, method, args));
		} else {
			$var($String, methodName, method->getName());
			$var($ClassArray, paramTypes, method->getParameterTypes());
			$Class* returnType = method->getReturnType();
			int32_t nargs = (args == nullptr) ? 0 : $nc(args)->length;
			bool var$2 = $nc(methodName)->startsWith("get"_s);
			bool var$1 = var$2 && methodName->length() > 3 && nargs == 0;
			$init($Void);
			if (var$1 && !$nc($of(returnType))->equals($Void::TYPE)) {
				return $of($nc(this->connection)->getAttribute(this->objectName, $(methodName->substring(3))));
			}
			bool var$4 = $nc(methodName)->startsWith("is"_s);
			bool var$3 = var$4 && methodName->length() > 2 && nargs == 0;
			if (var$3) {
				$init($Boolean);
				bool var$5 = $nc($of(returnType))->equals($Boolean::TYPE);
				var$3 = (var$5 || $nc($of(returnType))->equals($Boolean::class$));
			}
			if (var$3) {
				return $of($nc(this->connection)->getAttribute(this->objectName, $($nc(methodName)->substring(2))));
			}
			bool var$7 = $nc(methodName)->startsWith("set"_s);
			bool var$6 = var$7 && methodName->length() > 3 && nargs == 1;
			if (var$6 && $nc($of(returnType))->equals($Void::TYPE)) {
				$var($Attribute, attr, $new($Attribute, $(methodName->substring(3)), args->get(0)));
				$nc(this->connection)->setAttribute(this->objectName, attr);
				return $of(nullptr);
			}
			$var($StringArray, signature, $new($StringArray, $nc(paramTypes)->length));
			for (int32_t i = 0; i < paramTypes->length; ++i) {
				signature->set(i, $($nc(paramTypes->get(i))->getName()));
			}
			return $of($nc(this->connection)->invoke(this->objectName, methodName, args, signature));
		}
	} catch ($MBeanException& e) {
		$throw($(e->getTargetException()));
	} catch ($RuntimeMBeanException& re) {
		$throw($(re->getTargetException()));
	} catch ($RuntimeErrorException& rre) {
		$throw($(rre->getTargetError()));
	}
	$shouldNotReachHere();
}

$MXBeanProxy* MBeanServerInvocationHandler::findMXBeanProxy($Class* mxbeanInterface) {
	$init(MBeanServerInvocationHandler);
	$useLocalCurrentObjectStackCache();
	$synchronized(MBeanServerInvocationHandler::mxbeanProxies) {
		$var($WeakReference, proxyRef, $cast($WeakReference, $nc(MBeanServerInvocationHandler::mxbeanProxies)->get(mxbeanInterface)));
		$var($MXBeanProxy, p, (proxyRef == nullptr) ? ($MXBeanProxy*)nullptr : $cast($MXBeanProxy, $nc(proxyRef)->get()));
		if (p == nullptr) {
			try {
				$assign(p, $new($MXBeanProxy, mxbeanInterface));
			} catch ($IllegalArgumentException& e) {
				$var($String, var$0, $$str({"Cannot make MXBean proxy for "_s, $($nc(mxbeanInterface)->getName()), ": "_s}));
				$var($String, msg, $concat(var$0, $(e->getMessage())));
				$var($IllegalArgumentException, iae, $new($IllegalArgumentException, msg, $(e->getCause())));
				iae->setStackTrace($(e->getStackTrace()));
				$throw(iae);
			}
			$nc(MBeanServerInvocationHandler::mxbeanProxies)->put(mxbeanInterface, $$new($WeakReference, p));
		}
		return p;
	}
}

$Object* MBeanServerInvocationHandler::invokeBroadcasterMethod(Object$* proxy, $Method* method, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($String, methodName, $nc(method)->getName());
	int32_t nargs = (args == nullptr) ? 0 : $nc(args)->length;
	if ($nc(methodName)->equals("addNotificationListener"_s)) {
		if (nargs != 3) {
			$var($String, msg, $str({"Bad arg count to addNotificationListener: "_s, $$str(nargs)}));
			$throwNew($IllegalArgumentException, msg);
		}
		$var($NotificationListener, listener, $cast($NotificationListener, args->get(0)));
		$var($NotificationFilter, filter, $cast($NotificationFilter, args->get(1)));
		$var($Object0, handback, args->get(2));
		$nc(this->connection)->addNotificationListener(this->objectName, listener, filter, handback);
		return $of(nullptr);
	} else if (methodName->equals("removeNotificationListener"_s)) {
		$var($NotificationListener, listener, $cast($NotificationListener, args->get(0)));
		{
			$var($NotificationFilter, filter, nullptr)
			$var($Object, handback, nullptr)
			$var($String, msg, nullptr)
			switch (nargs) {
			case 1:
				{
					$nc(this->connection)->removeNotificationListener(this->objectName, listener);
					return $of(nullptr);
				}
			case 3:
				{
					$assign(filter, $cast($NotificationFilter, args->get(1)));
					$assign(handback, args->get(2));
					$nc(this->connection)->removeNotificationListener(this->objectName, listener, filter, handback);
					return $of(nullptr);
				}
			default:
				{
					$assign(msg, $str({"Bad arg count to removeNotificationListener: "_s, $$str(nargs)}));
					$throwNew($IllegalArgumentException, msg);
				}
			}
		}
	} else if (methodName->equals("getNotificationInfo"_s)) {
		if (args != nullptr) {
			$throwNew($IllegalArgumentException, "getNotificationInfo has args"_s);
		}
		$var($MBeanInfo, info, $nc(this->connection)->getMBeanInfo(this->objectName));
		return $of($nc(info)->getNotifications());
	} else {
		$throwNew($IllegalArgumentException, $$str({"Bad method name: "_s, methodName}));
	}
}

bool MBeanServerInvocationHandler::shouldDoLocally(Object$* proxy, $Method* method) {
	$useLocalCurrentObjectStackCache();
	$var($String, methodName, $nc(method)->getName());
	bool var$2 = $nc(methodName)->equals("hashCode"_s);
	bool var$1 = (var$2 || $nc(methodName)->equals("toString"_s));
	bool var$0 = var$1 && $nc($(method->getParameterTypes()))->length == 0;
	if (var$0 && isLocal(proxy, method)) {
		return true;
	}
	bool var$4 = $nc(methodName)->equals("equals"_s);
	bool var$3 = var$4 && $Arrays::equals($(method->getParameterTypes()), $$new($ClassArray, {$Object::class$}));
	if (var$3 && isLocal(proxy, method)) {
		return true;
	}
	bool var$5 = $nc(methodName)->equals("finalize"_s);
	if (var$5 && $nc($(method->getParameterTypes()))->length == 0) {
		return true;
	}
	return false;
}

$Object* MBeanServerInvocationHandler::doLocally(Object$* proxy, $Method* method, $ObjectArray* args) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, methodName, $nc(method)->getName());
	if ($nc(methodName)->equals("equals"_s)) {
		if ($equals(this, $nc(args)->get(0))) {
			return $of($Boolean::valueOf(true));
		}
		if (!($instanceOf($Proxy, $nc(args)->get(0)))) {
			return $of($Boolean::valueOf(false));
		}
		$var($InvocationHandler, ihandler, $Proxy::getInvocationHandler($nc(args)->get(0)));
		if (ihandler == nullptr || !($instanceOf(MBeanServerInvocationHandler, ihandler))) {
			return $of($Boolean::valueOf(false));
		}
		$var(MBeanServerInvocationHandler, handler, $cast(MBeanServerInvocationHandler, ihandler));
		bool var$1 = $nc($of(this->connection))->equals($nc(handler)->connection);
		bool var$0 = var$1 && $nc(this->objectName)->equals($nc(handler)->objectName);
		return $of($Boolean::valueOf(var$0 && $of($nc($of(proxy))->getClass())->equals($nc($of($nc(args)->get(0)))->getClass())));
	} else if (methodName->equals("toString"_s)) {
		return $of($str({(isMXBean() ? "MX"_s : "M"_s), "BeanProxy("_s, this->connection, "["_s, this->objectName, "])"_s}));
	} else if (methodName->equals("hashCode"_s)) {
		int32_t var$2 = $nc(this->objectName)->hashCode();
		return $of($Integer::valueOf(var$2 + $nc($of(this->connection))->hashCode()));
	} else if (methodName->equals("finalize"_s)) {
		return $of(nullptr);
	}
	$throwNew($RuntimeException, $$str({"Unexpected method name: "_s, methodName}));
}

bool MBeanServerInvocationHandler::isLocal(Object$* proxy, $Method* method) {
	$init(MBeanServerInvocationHandler);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassArray, interfaces, $nc($of(proxy))->getClass()->getInterfaces());
	if (interfaces == nullptr) {
		return true;
	}
	$var($String, methodName, $nc(method)->getName());
	$var($ClassArray, params, method->getParameterTypes());
	{
		$var($ClassArray, arr$, interfaces);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Class* intf = arr$->get(i$);
			{
				try {
					$nc(intf)->getMethod(methodName, params);
					return false;
				} catch ($NoSuchMethodException& nsme) {
				}
			}
		}
	}
	return true;
}

void clinit$MBeanServerInvocationHandler($Class* class$) {
	$assignStatic(MBeanServerInvocationHandler::mxbeanProxies, $new($WeakHashMap));
}

MBeanServerInvocationHandler::MBeanServerInvocationHandler() {
}

$Class* MBeanServerInvocationHandler::load$($String* name, bool initialize) {
	$loadClass(MBeanServerInvocationHandler, name, initialize, &_MBeanServerInvocationHandler_ClassInfo_, clinit$MBeanServerInvocationHandler, allocate$MBeanServerInvocationHandler);
	return class$;
}

$Class* MBeanServerInvocationHandler::class$ = nullptr;

	} // management
} // javax