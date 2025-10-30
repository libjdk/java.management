#include <com/sun/jmx/mbeanserver/MBeanIntrospector.h>

#include <com/sun/jmx/mbeanserver/Introspector.h>
#include <com/sun/jmx/mbeanserver/MBeanAnalyzer$MBeanVisitor.h>
#include <com/sun/jmx/mbeanserver/MBeanAnalyzer.h>
#include <com/sun/jmx/mbeanserver/MBeanIntrospector$MBeanInfoMaker.h>
#include <com/sun/jmx/mbeanserver/MBeanIntrospector$MBeanInfoMap.h>
#include <com/sun/jmx/mbeanserver/MBeanIntrospector$PerInterfaceMap.h>
#include <com/sun/jmx/mbeanserver/PerInterface.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Type.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/WeakHashMap.h>
#include <javax/management/Descriptor.h>
#include <javax/management/ImmutableDescriptor.h>
#include <javax/management/InvalidAttributeValueException.h>
#include <javax/management/MBeanAttributeInfo.h>
#include <javax/management/MBeanConstructorInfo.h>
#include <javax/management/MBeanException.h>
#include <javax/management/MBeanInfo.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/MBeanOperationInfo.h>
#include <javax/management/NotCompliantMBeanException.h>
#include <javax/management/NotificationBroadcaster.h>
#include <javax/management/ReflectionException.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $ConstructorArray = $Array<::java::lang::reflect::Constructor>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $TypeArray = $Array<::java::lang::reflect::Type>;
using $DescriptorArray = $Array<::javax::management::Descriptor>;
using $MBeanAttributeInfoArray = $Array<::javax::management::MBeanAttributeInfo>;
using $MBeanConstructorInfoArray = $Array<::javax::management::MBeanConstructorInfo>;
using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $MBeanOperationInfoArray = $Array<::javax::management::MBeanOperationInfo>;
using $Introspector = ::com::sun::jmx::mbeanserver::Introspector;
using $MBeanAnalyzer = ::com::sun::jmx::mbeanserver::MBeanAnalyzer;
using $MBeanAnalyzer$MBeanVisitor = ::com::sun::jmx::mbeanserver::MBeanAnalyzer$MBeanVisitor;
using $MBeanIntrospector$MBeanInfoMaker = ::com::sun::jmx::mbeanserver::MBeanIntrospector$MBeanInfoMaker;
using $MBeanIntrospector$MBeanInfoMap = ::com::sun::jmx::mbeanserver::MBeanIntrospector$MBeanInfoMap;
using $MBeanIntrospector$PerInterfaceMap = ::com::sun::jmx::mbeanserver::MBeanIntrospector$PerInterfaceMap;
using $PerInterface = ::com::sun::jmx::mbeanserver::PerInterface;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $1Array = ::java::lang::reflect::Array;
using $Constructor = ::java::lang::reflect::Constructor;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $Type = ::java::lang::reflect::Type;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $WeakHashMap = ::java::util::WeakHashMap;
using $Descriptor = ::javax::management::Descriptor;
using $ImmutableDescriptor = ::javax::management::ImmutableDescriptor;
using $InvalidAttributeValueException = ::javax::management::InvalidAttributeValueException;
using $MBeanAttributeInfo = ::javax::management::MBeanAttributeInfo;
using $MBeanConstructorInfo = ::javax::management::MBeanConstructorInfo;
using $MBeanException = ::javax::management::MBeanException;
using $MBeanInfo = ::javax::management::MBeanInfo;
using $MBeanNotificationInfo = ::javax::management::MBeanNotificationInfo;
using $MBeanOperationInfo = ::javax::management::MBeanOperationInfo;
using $NotCompliantMBeanException = ::javax::management::NotCompliantMBeanException;
using $NotificationBroadcaster = ::javax::management::NotificationBroadcaster;
using $ReflectionException = ::javax::management::ReflectionException;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$MethodInfo _MBeanIntrospector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MBeanIntrospector::*)()>(&MBeanIntrospector::init$))},
	{"checkMethod", "(Ljava/lang/Object;)V", "(TM;)V", $ABSTRACT},
	{"consistent", "(Ljava/lang/Object;Ljava/lang/Object;)Z", "(TM;TM;)Z", $FINAL, $method(static_cast<bool(MBeanIntrospector::*)(Object$*,Object$*)>(&MBeanIntrospector::consistent))},
	{"findConstructors", "(Ljava/lang/Class;)[Ljavax/management/MBeanConstructorInfo;", "(Ljava/lang/Class<*>;)[Ljavax/management/MBeanConstructorInfo;", $PRIVATE | $STATIC, $method(static_cast<$MBeanConstructorInfoArray*(*)($Class*)>(&MBeanIntrospector::findConstructors))},
	{"findNotifications", "(Ljava/lang/Object;)[Ljavax/management/MBeanNotificationInfo;", nullptr, $STATIC, $method(static_cast<$MBeanNotificationInfoArray*(*)(Object$*)>(&MBeanIntrospector::findNotifications))},
	{"getAnalyzer", "(Ljava/lang/Class;)Lcom/sun/jmx/mbeanserver/MBeanAnalyzer;", "(Ljava/lang/Class<*>;)Lcom/sun/jmx/mbeanserver/MBeanAnalyzer<TM;>;", $ABSTRACT, nullptr, "javax.management.NotCompliantMBeanException"},
	{"getBasicMBeanDescriptor", "()Ljavax/management/Descriptor;", nullptr, $ABSTRACT},
	{"getClassMBeanInfo", "(Ljava/lang/Class;Lcom/sun/jmx/mbeanserver/PerInterface;)Ljavax/management/MBeanInfo;", "(Ljava/lang/Class<*>;Lcom/sun/jmx/mbeanserver/PerInterface<TM;>;)Ljavax/management/MBeanInfo;", $FINAL, $method(static_cast<$MBeanInfo*(MBeanIntrospector::*)($Class*,$PerInterface*)>(&MBeanIntrospector::getClassMBeanInfo))},
	{"getGenericParameterTypes", "(Ljava/lang/Object;)[Ljava/lang/reflect/Type;", "(TM;)[Ljava/lang/reflect/Type;", $ABSTRACT},
	{"getGenericReturnType", "(Ljava/lang/Object;)Ljava/lang/reflect/Type;", "(TM;)Ljava/lang/reflect/Type;", $ABSTRACT},
	{"getMBeanAttributeInfo", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)Ljavax/management/MBeanAttributeInfo;", "(Ljava/lang/String;TM;TM;)Ljavax/management/MBeanAttributeInfo;", $ABSTRACT},
	{"getMBeanDescriptor", "(Ljava/lang/Class;)Ljavax/management/Descriptor;", "(Ljava/lang/Class<*>;)Ljavax/management/Descriptor;", $ABSTRACT},
	{"getMBeanInfo", "(Ljava/lang/Object;Lcom/sun/jmx/mbeanserver/PerInterface;)Ljavax/management/MBeanInfo;", "(Ljava/lang/Object;Lcom/sun/jmx/mbeanserver/PerInterface<TM;>;)Ljavax/management/MBeanInfo;", $FINAL, $method(static_cast<$MBeanInfo*(MBeanIntrospector::*)(Object$*,$PerInterface*)>(&MBeanIntrospector::getMBeanInfo))},
	{"getMBeanInfoMap", "()Lcom/sun/jmx/mbeanserver/MBeanIntrospector$MBeanInfoMap;", nullptr, $ABSTRACT},
	{"getMBeanOperationInfo", "(Ljava/lang/String;Ljava/lang/Object;)Ljavax/management/MBeanOperationInfo;", "(Ljava/lang/String;TM;)Ljavax/management/MBeanOperationInfo;", $ABSTRACT},
	{"getMethods", "(Ljava/lang/Class;)Ljava/util/List;", "(Ljava/lang/Class<*>;)Ljava/util/List<Ljava/lang/reflect/Method;>;", $FINAL, $method(static_cast<$List*(MBeanIntrospector::*)($Class*)>(&MBeanIntrospector::getMethods))},
	{"getName", "(Ljava/lang/Object;)Ljava/lang/String;", "(TM;)Ljava/lang/String;", $ABSTRACT},
	{"getPerInterface", "(Ljava/lang/Class;)Lcom/sun/jmx/mbeanserver/PerInterface;", "(Ljava/lang/Class<*>;)Lcom/sun/jmx/mbeanserver/PerInterface<TM;>;", $FINAL, $method(static_cast<$PerInterface*(MBeanIntrospector::*)($Class*)>(&MBeanIntrospector::getPerInterface)), "javax.management.NotCompliantMBeanException"},
	{"getPerInterfaceMap", "()Lcom/sun/jmx/mbeanserver/MBeanIntrospector$PerInterfaceMap;", "()Lcom/sun/jmx/mbeanserver/MBeanIntrospector$PerInterfaceMap<TM;>;", $ABSTRACT},
	{"getSignature", "(Ljava/lang/Object;)[Ljava/lang/String;", "(TM;)[Ljava/lang/String;", $ABSTRACT},
	{"invokeM", "(Ljava/lang/Object;Ljava/lang/Object;[Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TM;Ljava/lang/Object;[Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", $FINAL, $method(static_cast<$Object*(MBeanIntrospector::*)(Object$*,Object$*,$ObjectArray*,Object$*)>(&MBeanIntrospector::invokeM)), "javax.management.MBeanException,javax.management.ReflectionException"},
	{"invokeM2", "(Ljava/lang/Object;Ljava/lang/Object;[Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TM;Ljava/lang/Object;[Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", $ABSTRACT, nullptr, "java.lang.reflect.InvocationTargetException,java.lang.IllegalAccessException,javax.management.MBeanException"},
	{"invokeSetter", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V", "(Ljava/lang/String;TM;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V", $FINAL, $method(static_cast<void(MBeanIntrospector::*)($String*,Object$*,Object$*,Object$*,Object$*)>(&MBeanIntrospector::invokeSetter)), "javax.management.MBeanException,javax.management.ReflectionException,javax.management.InvalidAttributeValueException"},
	{"isMXBean", "()Z", nullptr, $ABSTRACT},
	{"isValidParameter", "(Ljava/lang/reflect/Method;Ljava/lang/Object;I)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Method*,Object$*,int32_t)>(&MBeanIntrospector::isValidParameter))},
	{"mFrom", "(Ljava/lang/reflect/Method;)Ljava/lang/Object;", "(Ljava/lang/reflect/Method;)TM;", $ABSTRACT},
	{"makeInterfaceMBeanInfo", "(Ljava/lang/Class;Lcom/sun/jmx/mbeanserver/MBeanAnalyzer;)Ljavax/management/MBeanInfo;", "(Ljava/lang/Class<*>;Lcom/sun/jmx/mbeanserver/MBeanAnalyzer<TM;>;)Ljavax/management/MBeanInfo;", $PRIVATE, $method(static_cast<$MBeanInfo*(MBeanIntrospector::*)($Class*,$MBeanAnalyzer*)>(&MBeanIntrospector::makeInterfaceMBeanInfo))},
	{"maybeInvalidParameter", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V", "(Ljava/lang/String;TM;Ljava/lang/Object;Ljava/lang/Object;)V", $PRIVATE, $method(static_cast<void(MBeanIntrospector::*)($String*,Object$*,Object$*,Object$*)>(&MBeanIntrospector::maybeInvalidParameter)), "javax.management.InvalidAttributeValueException"},
	{"unwrapInvocationTargetException", "(Ljava/lang/reflect/InvocationTargetException;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($InvocationTargetException*)>(&MBeanIntrospector::unwrapInvocationTargetException)), "javax.management.MBeanException"},
	{"validParameter", "(Ljava/lang/Object;Ljava/lang/Object;ILjava/lang/Object;)Z", "(TM;Ljava/lang/Object;ILjava/lang/Object;)Z", $ABSTRACT},
	{}
};

$InnerClassInfo _MBeanIntrospector_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.MBeanIntrospector$MBeanInfoMap", "com.sun.jmx.mbeanserver.MBeanIntrospector", "MBeanInfoMap", $STATIC},
	{"com.sun.jmx.mbeanserver.MBeanIntrospector$MBeanInfoMaker", "com.sun.jmx.mbeanserver.MBeanIntrospector", "MBeanInfoMaker", $PRIVATE},
	{"com.sun.jmx.mbeanserver.MBeanIntrospector$PerInterfaceMap", "com.sun.jmx.mbeanserver.MBeanIntrospector", "PerInterfaceMap", $STATIC | $FINAL},
	{}
};

$ClassInfo _MBeanIntrospector_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.jmx.mbeanserver.MBeanIntrospector",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MBeanIntrospector_MethodInfo_,
	"<M:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_MBeanIntrospector_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.MBeanIntrospector$MBeanInfoMap,com.sun.jmx.mbeanserver.MBeanIntrospector$MBeanInfoMaker,com.sun.jmx.mbeanserver.MBeanIntrospector$PerInterfaceMap"
};

$Object* allocate$MBeanIntrospector($Class* clazz) {
	return $of($alloc(MBeanIntrospector));
}

void MBeanIntrospector::init$() {
}

$List* MBeanIntrospector::getMethods($Class* mbeanType) {
	$beforeCallerSensitive();
	$ReflectUtil::checkPackageAccess(mbeanType);
	return $Arrays::asList($($nc(mbeanType)->getMethods()));
}

$PerInterface* MBeanIntrospector::getPerInterface($Class* mbeanInterface) {
	$useLocalCurrentObjectStackCache();
	$var($MBeanIntrospector$PerInterfaceMap, map, getPerInterfaceMap());
	$synchronized(map) {
		$var($WeakReference, wr, $cast($WeakReference, $nc(map)->get(mbeanInterface)));
		$var($PerInterface, pi, (wr == nullptr) ? ($PerInterface*)nullptr : $cast($PerInterface, $nc(wr)->get()));
		if (pi == nullptr) {
			try {
				$var($MBeanAnalyzer, analyzer, getAnalyzer(mbeanInterface));
				$var($MBeanInfo, mbeanInfo, makeInterfaceMBeanInfo(mbeanInterface, analyzer));
				$assign(pi, $new($PerInterface, mbeanInterface, this, analyzer, mbeanInfo));
				$assign(wr, $new($WeakReference, pi));
				map->put(mbeanInterface, wr);
			} catch ($Exception& x) {
				$throw($($Introspector::throwException(mbeanInterface, x)));
			}
		}
		return pi;
	}
}

$MBeanInfo* MBeanIntrospector::makeInterfaceMBeanInfo($Class* mbeanInterface, $MBeanAnalyzer* analyzer) {
	$useLocalCurrentObjectStackCache();
	$var($MBeanIntrospector$MBeanInfoMaker, maker, $new($MBeanIntrospector$MBeanInfoMaker, this));
	$nc(analyzer)->visit(maker);
	$var($String, description, "Information on the management interface of the MBean"_s);
	return maker->makeMBeanInfo(mbeanInterface, description);
}

bool MBeanIntrospector::consistent(Object$* getter, Object$* setter) {
	$useLocalCurrentObjectStackCache();
	return (getter == nullptr || setter == nullptr || $nc($of($(getGenericReturnType(getter))))->equals($nc($(getGenericParameterTypes(setter)))->get(0)));
}

$Object* MBeanIntrospector::invokeM(Object$* m, Object$* target, $ObjectArray* args, Object$* cookie) {
	try {
		return $of(invokeM2(m, target, args, cookie));
	} catch ($InvocationTargetException& e) {
		unwrapInvocationTargetException(e);
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException& e) {
		$throwNew($ReflectionException, e, $(e->toString()));
	}
	$shouldNotReachHere();
}

void MBeanIntrospector::invokeSetter($String* name, Object$* setter, Object$* target, Object$* arg, Object$* cookie) {
	$useLocalCurrentObjectStackCache();
	try {
		invokeM2(setter, target, $$new($ObjectArray, {arg}), cookie);
	} catch ($IllegalAccessException& e) {
		$throwNew($ReflectionException, e, $(e->toString()));
	} catch ($RuntimeException& e) {
		maybeInvalidParameter(name, setter, arg, cookie);
		$throw(e);
	} catch ($InvocationTargetException& e) {
		maybeInvalidParameter(name, setter, arg, cookie);
		unwrapInvocationTargetException(e);
	}
}

void MBeanIntrospector::maybeInvalidParameter($String* name, Object$* setter, Object$* arg, Object$* cookie) {
	if (!validParameter(setter, arg, 0, cookie)) {
		$var($String, msg, $str({"Invalid value for attribute "_s, name, ": "_s, arg}));
		$throwNew($InvalidAttributeValueException, msg);
	}
}

bool MBeanIntrospector::isValidParameter($Method* m, Object$* value, int32_t paramNo) {
	$useLocalCurrentObjectStackCache();
	$Class* c = $nc($($nc(m)->getParameterTypes()))->get(paramNo);
	try {
		$var($Object, a, $1Array::newInstance(c, 1));
		$1Array::set(a, 0, value);
		return true;
	} catch ($IllegalArgumentException& e) {
		return false;
	}
	$shouldNotReachHere();
}

void MBeanIntrospector::unwrapInvocationTargetException($InvocationTargetException* e) {
	$useLocalCurrentObjectStackCache();
	$var($Throwable, t, $nc(e)->getCause());
	if ($instanceOf($RuntimeException, t)) {
		$throw($cast($RuntimeException, t));
	} else if ($instanceOf($Error, t)) {
		$throw($cast($Error, t));
	} else {
		$throwNew($MBeanException, $cast($Exception, t), (t == nullptr ? ($String*)nullptr : $($nc(t)->toString())));
	}
}

$MBeanInfo* MBeanIntrospector::getMBeanInfo(Object$* resource, $PerInterface* perInterface) {
	$useLocalCurrentObjectStackCache();
	$var($MBeanInfo, mbi, getClassMBeanInfo($nc($of(resource))->getClass(), perInterface));
	$var($MBeanNotificationInfoArray, notifs, findNotifications(resource));
	if (notifs == nullptr || $nc(notifs)->length == 0) {
		return mbi;
	} else {
		$var($String, var$0, $nc(mbi)->getClassName());
		$var($String, var$1, mbi->getDescription());
		$var($MBeanAttributeInfoArray, var$2, mbi->getAttributes());
		$var($MBeanConstructorInfoArray, var$3, mbi->getConstructors());
		$var($MBeanOperationInfoArray, var$4, mbi->getOperations());
		$var($MBeanNotificationInfoArray, var$5, notifs);
		return $new($MBeanInfo, var$0, var$1, var$2, var$3, var$4, var$5, $(mbi->getDescriptor()));
	}
}

$MBeanInfo* MBeanIntrospector::getClassMBeanInfo($Class* resourceClass, $PerInterface* perInterface) {
	$useLocalCurrentObjectStackCache();
	$var($MBeanIntrospector$MBeanInfoMap, map, getMBeanInfoMap());
	$synchronized(map) {
		$var($WeakHashMap, intfMap, $cast($WeakHashMap, $nc(map)->get(resourceClass)));
		if (intfMap == nullptr) {
			$assign(intfMap, $new($WeakHashMap));
			map->put(resourceClass, intfMap);
		}
		$Class* intfClass = $nc(perInterface)->getMBeanInterface();
		$var($MBeanInfo, mbi, $cast($MBeanInfo, $nc(intfMap)->get(intfClass)));
		if (mbi == nullptr) {
			$var($MBeanInfo, imbi, perInterface->getMBeanInfo());
			$var($Descriptor, descriptor, $ImmutableDescriptor::union$($$new($DescriptorArray, {
				$($nc(imbi)->getDescriptor()),
				$(getMBeanDescriptor(resourceClass))
			})));
			$var($String, var$0, $nc(resourceClass)->getName());
			$var($String, var$1, $nc(imbi)->getDescription());
			$var($MBeanAttributeInfoArray, var$2, imbi->getAttributes());
			$var($MBeanConstructorInfoArray, var$3, findConstructors(resourceClass));
			$assign(mbi, $new($MBeanInfo, var$0, var$1, var$2, var$3, $(imbi->getOperations()), ($MBeanNotificationInfoArray*)nullptr, descriptor));
			intfMap->put(intfClass, mbi);
		}
		return mbi;
	}
}

$MBeanNotificationInfoArray* MBeanIntrospector::findNotifications(Object$* moi) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($NotificationBroadcaster, moi))) {
		return nullptr;
	}
	$var($MBeanNotificationInfoArray, mbn, $nc(($cast($NotificationBroadcaster, moi)))->getNotificationInfo());
	if (mbn == nullptr) {
		return nullptr;
	}
	$var($MBeanNotificationInfoArray, result, $new($MBeanNotificationInfoArray, $nc(mbn)->length));
	for (int32_t i = 0; i < mbn->length; ++i) {
		$var($MBeanNotificationInfo, ni, mbn->get(i));
		$load($MBeanNotificationInfo);
		if ($nc($of(ni))->getClass() != $MBeanNotificationInfo::class$) {
			$assign(ni, $cast($MBeanNotificationInfo, ni->clone()));
		}
		result->set(i, ni);
	}
	return result;
}

$MBeanConstructorInfoArray* MBeanIntrospector::findConstructors($Class* c) {
	$load(MBeanIntrospector);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ConstructorArray, cons, $nc(c)->getConstructors());
	$var($MBeanConstructorInfoArray, mbc, $new($MBeanConstructorInfoArray, $nc(cons)->length));
	for (int32_t i = 0; i < cons->length; ++i) {
		$var($String, descr, "Public constructor of the MBean"_s);
		mbc->set(i, $$new($MBeanConstructorInfo, descr, cons->get(i)));
	}
	return mbc;
}

MBeanIntrospector::MBeanIntrospector() {
}

$Class* MBeanIntrospector::load$($String* name, bool initialize) {
	$loadClass(MBeanIntrospector, name, initialize, &_MBeanIntrospector_ClassInfo_, allocate$MBeanIntrospector);
	return class$;
}

$Class* MBeanIntrospector::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com