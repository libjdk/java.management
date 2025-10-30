#include <com/sun/jmx/mbeanserver/StandardMBeanIntrospector.h>

#include <com/sun/jmx/mbeanserver/MBeanAnalyzer.h>
#include <com/sun/jmx/mbeanserver/MBeanIntrospector$MBeanInfoMap.h>
#include <com/sun/jmx/mbeanserver/MBeanIntrospector$PerInterfaceMap.h>
#include <com/sun/jmx/mbeanserver/MBeanIntrospector.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Type.h>
#include <java/util/WeakHashMap.h>
#include <javax/management/Descriptor.h>
#include <javax/management/ImmutableDescriptor.h>
#include <javax/management/IntrospectionException.h>
#include <javax/management/JMException.h>
#include <javax/management/MBeanAttributeInfo.h>
#include <javax/management/MBeanOperationInfo.h>
#include <javax/management/NotificationBroadcaster.h>
#include <javax/management/NotificationBroadcasterSupport.h>
#include <javax/management/OperationsException.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <jcpp.h>

#undef EMPTY_DESCRIPTOR

using $TypeArray = $Array<::java::lang::reflect::Type>;
using $MBeanAnalyzer = ::com::sun::jmx::mbeanserver::MBeanAnalyzer;
using $MBeanIntrospector = ::com::sun::jmx::mbeanserver::MBeanIntrospector;
using $MBeanIntrospector$MBeanInfoMap = ::com::sun::jmx::mbeanserver::MBeanIntrospector$MBeanInfoMap;
using $MBeanIntrospector$PerInterfaceMap = ::com::sun::jmx::mbeanserver::MBeanIntrospector$PerInterfaceMap;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;
using $Type = ::java::lang::reflect::Type;
using $WeakHashMap = ::java::util::WeakHashMap;
using $Descriptor = ::javax::management::Descriptor;
using $ImmutableDescriptor = ::javax::management::ImmutableDescriptor;
using $IntrospectionException = ::javax::management::IntrospectionException;
using $JMException = ::javax::management::JMException;
using $MBeanAttributeInfo = ::javax::management::MBeanAttributeInfo;
using $MBeanOperationInfo = ::javax::management::MBeanOperationInfo;
using $NotificationBroadcaster = ::javax::management::NotificationBroadcaster;
using $NotificationBroadcasterSupport = ::javax::management::NotificationBroadcasterSupport;
using $OperationsException = ::javax::management::OperationsException;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _StandardMBeanIntrospector_FieldInfo_[] = {
	{"instance", "Lcom/sun/jmx/mbeanserver/StandardMBeanIntrospector;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StandardMBeanIntrospector, instance)},
	{"definitelyImmutable", "Ljava/util/WeakHashMap;", "Ljava/util/WeakHashMap<Ljava/lang/Class<*>;Ljava/lang/Boolean;>;", $PRIVATE | $STATIC | $FINAL, $staticField(StandardMBeanIntrospector, definitelyImmutable)},
	{"perInterfaceMap", "Lcom/sun/jmx/mbeanserver/MBeanIntrospector$PerInterfaceMap;", "Lcom/sun/jmx/mbeanserver/MBeanIntrospector$PerInterfaceMap<Ljava/lang/reflect/Method;>;", $PRIVATE | $STATIC | $FINAL, $staticField(StandardMBeanIntrospector, perInterfaceMap)},
	{"mbeanInfoMap", "Lcom/sun/jmx/mbeanserver/MBeanIntrospector$MBeanInfoMap;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StandardMBeanIntrospector, mbeanInfoMap)},
	{}
};

$MethodInfo _StandardMBeanIntrospector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StandardMBeanIntrospector::*)()>(&StandardMBeanIntrospector::init$))},
	{"checkMethod", "(Ljava/lang/reflect/Method;)V", nullptr, 0},
	{"checkMethod", "(Ljava/lang/Object;)V", nullptr, $VOLATILE | $SYNTHETIC},
	{"getAnalyzer", "(Ljava/lang/Class;)Lcom/sun/jmx/mbeanserver/MBeanAnalyzer;", "(Ljava/lang/Class<*>;)Lcom/sun/jmx/mbeanserver/MBeanAnalyzer<Ljava/lang/reflect/Method;>;", 0, nullptr, "javax.management.NotCompliantMBeanException"},
	{"getBasicMBeanDescriptor", "()Ljavax/management/Descriptor;", nullptr, 0},
	{"getGenericParameterTypes", "(Ljava/lang/reflect/Method;)[Ljava/lang/reflect/Type;", nullptr, 0},
	{"getGenericParameterTypes", "(Ljava/lang/Object;)[Ljava/lang/reflect/Type;", nullptr, $VOLATILE | $SYNTHETIC},
	{"getGenericReturnType", "(Ljava/lang/reflect/Method;)Ljava/lang/reflect/Type;", nullptr, 0},
	{"getGenericReturnType", "(Ljava/lang/Object;)Ljava/lang/reflect/Type;", nullptr, $VOLATILE | $SYNTHETIC},
	{"getInstance", "()Lcom/sun/jmx/mbeanserver/StandardMBeanIntrospector;", nullptr, $STATIC, $method(static_cast<StandardMBeanIntrospector*(*)()>(&StandardMBeanIntrospector::getInstance))},
	{"getMBeanAttributeInfo", "(Ljava/lang/String;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)Ljavax/management/MBeanAttributeInfo;", nullptr, 0},
	{"getMBeanAttributeInfo", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)Ljavax/management/MBeanAttributeInfo;", nullptr, $VOLATILE | $SYNTHETIC},
	{"getMBeanDescriptor", "(Ljava/lang/Class;)Ljavax/management/Descriptor;", "(Ljava/lang/Class<*>;)Ljavax/management/Descriptor;", 0},
	{"getMBeanInfoMap", "()Lcom/sun/jmx/mbeanserver/MBeanIntrospector$MBeanInfoMap;", nullptr, 0},
	{"getMBeanOperationInfo", "(Ljava/lang/String;Ljava/lang/reflect/Method;)Ljavax/management/MBeanOperationInfo;", nullptr, 0},
	{"getMBeanOperationInfo", "(Ljava/lang/String;Ljava/lang/Object;)Ljavax/management/MBeanOperationInfo;", nullptr, $VOLATILE | $SYNTHETIC},
	{"getName", "(Ljava/lang/reflect/Method;)Ljava/lang/String;", nullptr, 0},
	{"getName", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $VOLATILE | $SYNTHETIC},
	{"getPerInterfaceMap", "()Lcom/sun/jmx/mbeanserver/MBeanIntrospector$PerInterfaceMap;", "()Lcom/sun/jmx/mbeanserver/MBeanIntrospector$PerInterfaceMap<Ljava/lang/reflect/Method;>;", 0},
	{"getSignature", "(Ljava/lang/reflect/Method;)[Ljava/lang/String;", nullptr, 0},
	{"getSignature", "(Ljava/lang/Object;)[Ljava/lang/String;", nullptr, $VOLATILE | $SYNTHETIC},
	{"invokeM2", "(Ljava/lang/reflect/Method;Ljava/lang/Object;[Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, nullptr, "java.lang.reflect.InvocationTargetException,java.lang.IllegalAccessException,javax.management.MBeanException"},
	{"invokeM2", "(Ljava/lang/Object;Ljava/lang/Object;[Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $VOLATILE | $SYNTHETIC, nullptr, "java.lang.reflect.InvocationTargetException,java.lang.IllegalAccessException,javax.management.MBeanException"},
	{"isDefinitelyImmutableInfo", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $STATIC, $method(static_cast<bool(*)($Class*)>(&StandardMBeanIntrospector::isDefinitelyImmutableInfo))},
	{"isMXBean", "()Z", nullptr, 0},
	{"mFrom", "(Ljava/lang/reflect/Method;)Ljava/lang/reflect/Method;", nullptr, 0},
	{"validParameter", "(Ljava/lang/reflect/Method;Ljava/lang/Object;ILjava/lang/Object;)Z", nullptr, 0},
	{"validParameter", "(Ljava/lang/Object;Ljava/lang/Object;ILjava/lang/Object;)Z", nullptr, $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _StandardMBeanIntrospector_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.mbeanserver.StandardMBeanIntrospector",
	"com.sun.jmx.mbeanserver.MBeanIntrospector",
	nullptr,
	_StandardMBeanIntrospector_FieldInfo_,
	_StandardMBeanIntrospector_MethodInfo_,
	"Lcom/sun/jmx/mbeanserver/MBeanIntrospector<Ljava/lang/reflect/Method;>;"
};

$Object* allocate$StandardMBeanIntrospector($Class* clazz) {
	return $of($alloc(StandardMBeanIntrospector));
}

StandardMBeanIntrospector* StandardMBeanIntrospector::instance = nullptr;
$WeakHashMap* StandardMBeanIntrospector::definitelyImmutable = nullptr;
$MBeanIntrospector$PerInterfaceMap* StandardMBeanIntrospector::perInterfaceMap = nullptr;
$MBeanIntrospector$MBeanInfoMap* StandardMBeanIntrospector::mbeanInfoMap = nullptr;

void StandardMBeanIntrospector::init$() {
	$MBeanIntrospector::init$();
}

StandardMBeanIntrospector* StandardMBeanIntrospector::getInstance() {
	$init(StandardMBeanIntrospector);
	return StandardMBeanIntrospector::instance;
}

$MBeanIntrospector$PerInterfaceMap* StandardMBeanIntrospector::getPerInterfaceMap() {
	return StandardMBeanIntrospector::perInterfaceMap;
}

$MBeanIntrospector$MBeanInfoMap* StandardMBeanIntrospector::getMBeanInfoMap() {
	return StandardMBeanIntrospector::mbeanInfoMap;
}

$MBeanAnalyzer* StandardMBeanIntrospector::getAnalyzer($Class* mbeanInterface) {
	return $MBeanAnalyzer::analyzer(mbeanInterface, this);
}

bool StandardMBeanIntrospector::isMXBean() {
	return false;
}

$Object* StandardMBeanIntrospector::mFrom($Method* m) {
	return $of(m);
}

$String* StandardMBeanIntrospector::getName($Method* m) {
	return $nc(m)->getName();
}

$Type* StandardMBeanIntrospector::getGenericReturnType($Method* m) {
	return $nc(m)->getGenericReturnType();
}

$TypeArray* StandardMBeanIntrospector::getGenericParameterTypes($Method* m) {
	return $nc(m)->getGenericParameterTypes();
}

$StringArray* StandardMBeanIntrospector::getSignature($Method* m) {
	$useLocalCurrentObjectStackCache();
	$var($ClassArray, params, $nc(m)->getParameterTypes());
	$var($StringArray, sig, $new($StringArray, $nc(params)->length));
	for (int32_t i = 0; i < params->length; ++i) {
		sig->set(i, $($nc(params->get(i))->getName()));
	}
	return sig;
}

void StandardMBeanIntrospector::checkMethod($Method* m) {
}

$Object* StandardMBeanIntrospector::invokeM2($Method* m, Object$* target, $ObjectArray* args, Object$* cookie) {
	return $of($MethodUtil::invoke(m, target, args));
}

bool StandardMBeanIntrospector::validParameter($Method* m, Object$* value, int32_t paramNo, Object$* cookie) {
	return isValidParameter(m, value, paramNo);
}

$MBeanAttributeInfo* StandardMBeanIntrospector::getMBeanAttributeInfo($String* attributeName, $Method* getter, $Method* setter) {
	$var($String, description, "Attribute exposed for management"_s);
	try {
		return $new($MBeanAttributeInfo, attributeName, description, getter, setter);
	} catch ($IntrospectionException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

$MBeanOperationInfo* StandardMBeanIntrospector::getMBeanOperationInfo($String* operationName, $Method* operation) {
	$var($String, description, "Operation exposed for management"_s);
	return $new($MBeanOperationInfo, description, operation);
}

$Descriptor* StandardMBeanIntrospector::getBasicMBeanDescriptor() {
	$init($ImmutableDescriptor);
	return $ImmutableDescriptor::EMPTY_DESCRIPTOR;
}

$Descriptor* StandardMBeanIntrospector::getMBeanDescriptor($Class* resourceClass) {
	$useLocalCurrentObjectStackCache();
	bool immutable = isDefinitelyImmutableInfo(resourceClass);
	return $new($ImmutableDescriptor, $$new($StringArray, {
		"mxbean=false"_s,
		$$str({"immutableInfo="_s, $$str(immutable)})
	}));
}

bool StandardMBeanIntrospector::isDefinitelyImmutableInfo($Class* implClass) {
	$init(StandardMBeanIntrospector);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($NotificationBroadcaster);
	if (!$NotificationBroadcaster::class$->isAssignableFrom(implClass)) {
		return true;
	}
	$synchronized(StandardMBeanIntrospector::definitelyImmutable) {
		$var($Boolean, immutable, $cast($Boolean, $nc(StandardMBeanIntrospector::definitelyImmutable)->get(implClass)));
		if (immutable == nullptr) {
			$load($NotificationBroadcasterSupport);
			$Class* nbs = $NotificationBroadcasterSupport::class$;
			if ($nc(nbs)->isAssignableFrom(implClass)) {
				try {
					$var($Method, m, $nc(implClass)->getMethod("getNotificationInfo"_s, $$new($ClassArray, 0)));
					$assign(immutable, $Boolean::valueOf(($nc(m)->getDeclaringClass() == nbs)));
				} catch ($Exception& e) {
					return false;
				}
			} else {
				$assign(immutable, $Boolean::valueOf(false));
			}
			$nc(StandardMBeanIntrospector::definitelyImmutable)->put(implClass, immutable);
		}
		return $nc(immutable)->booleanValue();
	}
}

$MBeanOperationInfo* StandardMBeanIntrospector::getMBeanOperationInfo($String* operationName, Object$* operation) {
	return this->getMBeanOperationInfo(operationName, $cast($Method, operation));
}

$MBeanAttributeInfo* StandardMBeanIntrospector::getMBeanAttributeInfo($String* attributeName, Object$* getter, Object$* setter) {
	return this->getMBeanAttributeInfo(attributeName, $cast($Method, getter), $cast($Method, setter));
}

bool StandardMBeanIntrospector::validParameter(Object$* m, Object$* value, int32_t paramNo, Object$* cookie) {
	return this->validParameter($cast($Method, m), value, paramNo, cookie);
}

$Object* StandardMBeanIntrospector::invokeM2(Object$* m, Object$* target, $ObjectArray* args, Object$* cookie) {
	return $of(this->invokeM2($cast($Method, m), target, args, cookie));
}

void StandardMBeanIntrospector::checkMethod(Object$* m) {
	this->checkMethod($cast($Method, m));
}

$StringArray* StandardMBeanIntrospector::getSignature(Object$* m) {
	return this->getSignature($cast($Method, m));
}

$TypeArray* StandardMBeanIntrospector::getGenericParameterTypes(Object$* m) {
	return this->getGenericParameterTypes($cast($Method, m));
}

$Type* StandardMBeanIntrospector::getGenericReturnType(Object$* m) {
	return this->getGenericReturnType($cast($Method, m));
}

$String* StandardMBeanIntrospector::getName(Object$* m) {
	return this->getName($cast($Method, m));
}

void clinit$StandardMBeanIntrospector($Class* class$) {
	$assignStatic(StandardMBeanIntrospector::instance, $new(StandardMBeanIntrospector));
	$assignStatic(StandardMBeanIntrospector::definitelyImmutable, $new($WeakHashMap));
	$assignStatic(StandardMBeanIntrospector::perInterfaceMap, $new($MBeanIntrospector$PerInterfaceMap));
	$assignStatic(StandardMBeanIntrospector::mbeanInfoMap, $new($MBeanIntrospector$MBeanInfoMap));
}

StandardMBeanIntrospector::StandardMBeanIntrospector() {
}

$Class* StandardMBeanIntrospector::load$($String* name, bool initialize) {
	$loadClass(StandardMBeanIntrospector, name, initialize, &_StandardMBeanIntrospector_ClassInfo_, clinit$StandardMBeanIntrospector, allocate$StandardMBeanIntrospector);
	return class$;
}

$Class* StandardMBeanIntrospector::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com