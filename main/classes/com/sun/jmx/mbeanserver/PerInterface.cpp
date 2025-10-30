#include <com/sun/jmx/mbeanserver/PerInterface.h>

#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <com/sun/jmx/mbeanserver/MBeanAnalyzer$MBeanVisitor.h>
#include <com/sun/jmx/mbeanserver/MBeanAnalyzer.h>
#include <com/sun/jmx/mbeanserver/MBeanIntrospector.h>
#include <com/sun/jmx/mbeanserver/PerInterface$InitMaps.h>
#include <com/sun/jmx/mbeanserver/PerInterface$MethodAndSig.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/management/AttributeNotFoundException.h>
#include <javax/management/MBeanInfo.h>
#include <javax/management/ReflectionException.h>
#include <jcpp.h>

using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $MBeanAnalyzer = ::com::sun::jmx::mbeanserver::MBeanAnalyzer;
using $MBeanAnalyzer$MBeanVisitor = ::com::sun::jmx::mbeanserver::MBeanAnalyzer$MBeanVisitor;
using $MBeanIntrospector = ::com::sun::jmx::mbeanserver::MBeanIntrospector;
using $PerInterface$InitMaps = ::com::sun::jmx::mbeanserver::PerInterface$InitMaps;
using $PerInterface$MethodAndSig = ::com::sun::jmx::mbeanserver::PerInterface$MethodAndSig;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $AttributeNotFoundException = ::javax::management::AttributeNotFoundException;
using $MBeanInfo = ::javax::management::MBeanInfo;
using $ReflectionException = ::javax::management::ReflectionException;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _PerInterface_FieldInfo_[] = {
	{"mbeanInterface", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(PerInterface, mbeanInterface)},
	{"introspector", "Lcom/sun/jmx/mbeanserver/MBeanIntrospector;", "Lcom/sun/jmx/mbeanserver/MBeanIntrospector<TM;>;", $PRIVATE | $FINAL, $field(PerInterface, introspector)},
	{"mbeanInfo", "Ljavax/management/MBeanInfo;", nullptr, $PRIVATE | $FINAL, $field(PerInterface, mbeanInfo)},
	{"getters", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;TM;>;", $PRIVATE | $FINAL, $field(PerInterface, getters)},
	{"setters", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;TM;>;", $PRIVATE | $FINAL, $field(PerInterface, setters)},
	{"ops", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Lcom/sun/jmx/mbeanserver/PerInterface<TM;>.MethodAndSig;>;>;", $PRIVATE | $FINAL, $field(PerInterface, ops)},
	{}
};

$MethodInfo _PerInterface_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Lcom/sun/jmx/mbeanserver/MBeanIntrospector;Lcom/sun/jmx/mbeanserver/MBeanAnalyzer;Ljavax/management/MBeanInfo;)V", "(Ljava/lang/Class<*>;Lcom/sun/jmx/mbeanserver/MBeanIntrospector<TM;>;Lcom/sun/jmx/mbeanserver/MBeanAnalyzer<TM;>;Ljavax/management/MBeanInfo;)V", 0, $method(static_cast<void(PerInterface::*)($Class*,$MBeanIntrospector*,$MBeanAnalyzer*,$MBeanInfo*)>(&PerInterface::init$))},
	{"getAttribute", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, $method(static_cast<$Object*(PerInterface::*)(Object$*,$String*,Object$*)>(&PerInterface::getAttribute)), "javax.management.AttributeNotFoundException,javax.management.MBeanException,javax.management.ReflectionException"},
	{"getMBeanInfo", "()Ljavax/management/MBeanInfo;", nullptr, 0, $method(static_cast<$MBeanInfo*(PerInterface::*)()>(&PerInterface::getMBeanInfo))},
	{"getMBeanInterface", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", 0, $method(static_cast<$Class*(PerInterface::*)()>(&PerInterface::getMBeanInterface))},
	{"invoke", "(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, $method(static_cast<$Object*(PerInterface::*)(Object$*,$String*,$ObjectArray*,$StringArray*,Object$*)>(&PerInterface::invoke)), "javax.management.MBeanException,javax.management.ReflectionException"},
	{"isMXBean", "()Z", nullptr, 0, $method(static_cast<bool(PerInterface::*)()>(&PerInterface::isMXBean))},
	{"noSuchMethod", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(PerInterface::*)($String*,Object$*,$String*,$ObjectArray*,$StringArray*,Object$*)>(&PerInterface::noSuchMethod)), "javax.management.MBeanException,javax.management.ReflectionException"},
	{"setAttribute", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(PerInterface::*)(Object$*,$String*,Object$*,Object$*)>(&PerInterface::setAttribute)), "javax.management.AttributeNotFoundException,javax.management.InvalidAttributeValueException,javax.management.MBeanException,javax.management.ReflectionException"},
	{"sigString", "([Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(PerInterface::*)($StringArray*)>(&PerInterface::sigString))},
	{}
};

$InnerClassInfo _PerInterface_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.PerInterface$MethodAndSig", "com.sun.jmx.mbeanserver.PerInterface", "MethodAndSig", $PRIVATE},
	{"com.sun.jmx.mbeanserver.PerInterface$InitMaps", "com.sun.jmx.mbeanserver.PerInterface", "InitMaps", $PRIVATE},
	{}
};

$ClassInfo _PerInterface_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.PerInterface",
	"java.lang.Object",
	nullptr,
	_PerInterface_FieldInfo_,
	_PerInterface_MethodInfo_,
	"<M:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_PerInterface_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.PerInterface$MethodAndSig,com.sun.jmx.mbeanserver.PerInterface$InitMaps"
};

$Object* allocate$PerInterface($Class* clazz) {
	return $of($alloc(PerInterface));
}

void PerInterface::init$($Class* mbeanInterface, $MBeanIntrospector* introspector, $MBeanAnalyzer* analyzer, $MBeanInfo* mbeanInfo) {
	$set(this, getters, $Util::newMap());
	$set(this, setters, $Util::newMap());
	$set(this, ops, $Util::newMap());
	$set(this, mbeanInterface, mbeanInterface);
	$set(this, introspector, introspector);
	$set(this, mbeanInfo, mbeanInfo);
	$nc(analyzer)->visit($$new($PerInterface$InitMaps, this));
}

$Class* PerInterface::getMBeanInterface() {
	return this->mbeanInterface;
}

$MBeanInfo* PerInterface::getMBeanInfo() {
	return this->mbeanInfo;
}

bool PerInterface::isMXBean() {
	return $nc(this->introspector)->isMXBean();
}

$Object* PerInterface::getAttribute(Object$* resource, $String* attribute, Object$* cookie) {
	$useLocalCurrentObjectStackCache();
	$var($Object, cm, $nc(this->getters)->get(attribute));
	if (cm == nullptr) {
		$var($String, msg, nullptr);
		if ($nc(this->setters)->containsKey(attribute)) {
			$assign(msg, $str({"Write-only attribute: "_s, attribute}));
		} else {
			$assign(msg, $str({"No such attribute: "_s, attribute}));
		}
		$throwNew($AttributeNotFoundException, msg);
	}
	return $of($nc(this->introspector)->invokeM(cm, resource, ($ObjectArray*)nullptr, cookie));
}

void PerInterface::setAttribute(Object$* resource, $String* attribute, Object$* value, Object$* cookie) {
	$useLocalCurrentObjectStackCache();
	$var($Object, cm, $nc(this->setters)->get(attribute));
	if (cm == nullptr) {
		$var($String, msg, nullptr);
		if ($nc(this->getters)->containsKey(attribute)) {
			$assign(msg, $str({"Read-only attribute: "_s, attribute}));
		} else {
			$assign(msg, $str({"No such attribute: "_s, attribute}));
		}
		$throwNew($AttributeNotFoundException, msg);
	}
	$nc(this->introspector)->invokeSetter(attribute, cm, resource, value, cookie);
}

$Object* PerInterface::invoke(Object$* resource, $String* operation, $ObjectArray* params, $StringArray* signature$renamed, Object$* cookie) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, signature, signature$renamed);
	$var($List, list, $cast($List, $nc(this->ops)->get(operation)));
	if (list == nullptr) {
		$var($String, msg, $str({"No such operation: "_s, operation}));
		return $of(noSuchMethod(msg, resource, operation, params, signature, cookie));
	}
	if (signature == nullptr) {
		$assign(signature, $new($StringArray, 0));
	}
	$var($PerInterface$MethodAndSig, found, nullptr);
	{
		$var($Iterator, i$, $nc(list)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($PerInterface$MethodAndSig, mas, $cast($PerInterface$MethodAndSig, i$->next()));
			{
				if ($Arrays::equals($nc(mas)->signature, signature)) {
					$assign(found, mas);
					break;
				}
			}
		}
	}
	if (found == nullptr) {
		$var($String, badSig, sigString(signature));
		$var($String, msg, nullptr);
		if (list->size() == 1) {
			$assign(msg, $str({"Signature mismatch for operation "_s, operation, ": "_s, badSig, " should be "_s, $(sigString($nc(($cast($PerInterface$MethodAndSig, $(list->get(0)))))->signature))}));
		} else {
			$assign(msg, $str({"Operation "_s, operation, " exists but not with this signature: "_s, badSig}));
		}
		return $of(noSuchMethod(msg, resource, operation, params, signature, cookie));
	}
	return $of($nc(this->introspector)->invokeM($nc(found)->method, resource, params, cookie));
}

$Object* PerInterface::noSuchMethod($String* msg, Object$* resource, $String* operation, $ObjectArray* params, $StringArray* signature, Object$* cookie) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($NoSuchMethodException, nsme, $new($NoSuchMethodException, $$str({operation, $(sigString(signature))})));
	$var($ReflectionException, exception, $new($ReflectionException, nsme, msg));
	if ($nc(this->introspector)->isMXBean()) {
		$throw(exception);
	}
	$var($GetPropertyAction, act, $new($GetPropertyAction, "jmx.invoke.getters"_s));
	$var($String, invokeGettersS, nullptr);
	try {
		$assign(invokeGettersS, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(act))));
	} catch ($Exception& e) {
		$assign(invokeGettersS, nullptr);
	}
	if (invokeGettersS == nullptr) {
		$throw(exception);
	}
	int32_t rest = 0;
	$var($Map, methods, nullptr);
	if (signature == nullptr || $nc(signature)->length == 0) {
		if ($nc(operation)->startsWith("get"_s)) {
			rest = 3;
		} else if (operation->startsWith("is"_s)) {
			rest = 2;
		}
		if (rest != 0) {
			$assign(methods, this->getters);
		}
	} else if (signature->length == 1 && $nc(operation)->startsWith("set"_s)) {
		rest = 3;
		$assign(methods, this->setters);
	}
	if (rest != 0) {
		$var($String, attrName, $nc(operation)->substring(rest));
		$var($Object, method, $nc(methods)->get(attrName));
		if (method != nullptr && $nc($($nc(this->introspector)->getName(method)))->equals(operation)) {
			$var($StringArray, msig, $nc(this->introspector)->getSignature(method));
			if ((signature == nullptr && $nc(msig)->length == 0) || $Arrays::equals(signature, msig)) {
				return $of($nc(this->introspector)->invokeM(method, resource, params, cookie));
			}
		}
	}
	$throw(exception);
}

$String* PerInterface::sigString($StringArray* signature) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, b, $new($StringBuilder, "("_s));
	if (signature != nullptr) {
		{
			$var($StringArray, arr$, signature);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, s, arr$->get(i$));
				{
					if (b->length() > 1) {
						b->append(", "_s);
					}
					b->append(s);
				}
			}
		}
	}
	return b->append(")"_s)->toString();
}

PerInterface::PerInterface() {
}

$Class* PerInterface::load$($String* name, bool initialize) {
	$loadClass(PerInterface, name, initialize, &_PerInterface_ClassInfo_, allocate$PerInterface);
	return class$;
}

$Class* PerInterface::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com