#include <com/sun/jmx/mbeanserver/MBeanSupport.h>

#include <com/sun/jmx/mbeanserver/DynamicMBean2.h>
#include <com/sun/jmx/mbeanserver/MBeanIntrospector.h>
#include <com/sun/jmx/mbeanserver/PerInterface.h>
#include <java/util/Iterator.h>
#include <javax/management/Attribute.h>
#include <javax/management/AttributeList.h>
#include <javax/management/MBeanInfo.h>
#include <javax/management/MBeanRegistration.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/NotCompliantMBeanException.h>
#include <javax/management/ObjectName.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $DynamicMBean2 = ::com::sun::jmx::mbeanserver::DynamicMBean2;
using $MBeanIntrospector = ::com::sun::jmx::mbeanserver::MBeanIntrospector;
using $PerInterface = ::com::sun::jmx::mbeanserver::PerInterface;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $Attribute = ::javax::management::Attribute;
using $AttributeList = ::javax::management::AttributeList;
using $MBeanInfo = ::javax::management::MBeanInfo;
using $MBeanRegistration = ::javax::management::MBeanRegistration;
using $MBeanServer = ::javax::management::MBeanServer;
using $NotCompliantMBeanException = ::javax::management::NotCompliantMBeanException;
using $ObjectName = ::javax::management::ObjectName;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _MBeanSupport_FieldInfo_[] = {
	{"mbeanInfo", "Ljavax/management/MBeanInfo;", nullptr, $PRIVATE | $FINAL, $field(MBeanSupport, mbeanInfo)},
	{"resource", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(MBeanSupport, resource)},
	{"perInterface", "Lcom/sun/jmx/mbeanserver/PerInterface;", "Lcom/sun/jmx/mbeanserver/PerInterface<TM;>;", $PRIVATE | $FINAL, $field(MBeanSupport, perInterface)},
	{}
};

$MethodInfo _MBeanSupport_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Class;)V", "<T:Ljava/lang/Object;>(TT;Ljava/lang/Class<TT;>;)V", 0, $method(static_cast<void(MBeanSupport::*)(Object$*,$Class*)>(&MBeanSupport::init$)), "javax.management.NotCompliantMBeanException"},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, nullptr, "javax.management.AttributeNotFoundException,javax.management.MBeanException,javax.management.ReflectionException"},
	{"getAttributes", "([Ljava/lang/String;)Ljavax/management/AttributeList;", nullptr, $PUBLIC | $FINAL},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getCookie", "()Ljava/lang/Object;", nullptr, $ABSTRACT},
	{"getMBeanInfo", "()Ljavax/management/MBeanInfo;", nullptr, $PUBLIC},
	{"getMBeanInterface", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC | $FINAL, $method(static_cast<$Class*(MBeanSupport::*)()>(&MBeanSupport::getMBeanInterface))},
	{"getMBeanIntrospector", "()Lcom/sun/jmx/mbeanserver/MBeanIntrospector;", "()Lcom/sun/jmx/mbeanserver/MBeanIntrospector<TM;>;", $ABSTRACT},
	{"getResource", "()Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL},
	{"invoke", "(Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL, nullptr, "javax.management.MBeanException,javax.management.ReflectionException"},
	{"isMXBean", "()Z", nullptr, $PUBLIC | $FINAL, $method(static_cast<bool(MBeanSupport::*)()>(&MBeanSupport::isMXBean))},
	{"postDeregister", "()V", nullptr, $PUBLIC | $FINAL},
	{"postRegister", "(Ljava/lang/Boolean;)V", nullptr, $PUBLIC | $FINAL},
	{"preDeregister", "()V", nullptr, $PUBLIC | $FINAL, nullptr, "java.lang.Exception"},
	{"preRegister", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)Ljavax/management/ObjectName;", nullptr, $PUBLIC | $FINAL, nullptr, "java.lang.Exception"},
	{"preRegister2", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $FINAL, nullptr, "java.lang.Exception"},
	{"register", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{"registerFailed", "()V", nullptr, $PUBLIC | $FINAL},
	{"setAttribute", "(Ljavax/management/Attribute;)V", nullptr, $PUBLIC | $FINAL, nullptr, "javax.management.AttributeNotFoundException,javax.management.InvalidAttributeValueException,javax.management.MBeanException,javax.management.ReflectionException"},
	{"setAttributes", "(Ljavax/management/AttributeList;)Ljavax/management/AttributeList;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unregister", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MBeanSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.jmx.mbeanserver.MBeanSupport",
	"java.lang.Object",
	"com.sun.jmx.mbeanserver.DynamicMBean2,javax.management.MBeanRegistration",
	_MBeanSupport_FieldInfo_,
	_MBeanSupport_MethodInfo_,
	"<M:Ljava/lang/Object;>Ljava/lang/Object;Lcom/sun/jmx/mbeanserver/DynamicMBean2;Ljavax/management/MBeanRegistration;"
};

$Object* allocate$MBeanSupport($Class* clazz) {
	return $of($alloc(MBeanSupport));
}

int32_t MBeanSupport::hashCode() {
	 return this->$DynamicMBean2::hashCode();
}

bool MBeanSupport::equals(Object$* arg0) {
	 return this->$DynamicMBean2::equals(arg0);
}

$Object* MBeanSupport::clone() {
	 return this->$DynamicMBean2::clone();
}

$String* MBeanSupport::toString() {
	 return this->$DynamicMBean2::toString();
}

void MBeanSupport::finalize() {
	this->$DynamicMBean2::finalize();
}

void MBeanSupport::init$(Object$* resource, $Class* mbeanInterfaceType) {
	$useLocalCurrentObjectStackCache();
	if (mbeanInterfaceType == nullptr) {
		$throwNew($NotCompliantMBeanException, "Null MBean interface"_s);
	}
	if (!$nc(mbeanInterfaceType)->isInstance(resource)) {
		$var($String, var$0, $$str({"Resource class "_s, $($nc($of(resource))->getClass()->getName()), " is not an instance of "_s}));
		$var($String, msg, $concat(var$0, $(mbeanInterfaceType->getName())));
		$throwNew($NotCompliantMBeanException, msg);
	}
	$ReflectUtil::checkPackageAccess(mbeanInterfaceType);
	$set(this, resource, resource);
	$var($MBeanIntrospector, introspector, getMBeanIntrospector());
	$set(this, perInterface, $nc(introspector)->getPerInterface(mbeanInterfaceType));
	$set(this, mbeanInfo, introspector->getMBeanInfo(resource, this->perInterface));
}

bool MBeanSupport::isMXBean() {
	return $nc(this->perInterface)->isMXBean();
}

$ObjectName* MBeanSupport::preRegister($MBeanServer* server, $ObjectName* name$renamed) {
	$var($ObjectName, name, name$renamed);
	if ($instanceOf($MBeanRegistration, this->resource)) {
		$assign(name, $nc(($cast($MBeanRegistration, this->resource)))->preRegister(server, name));
	}
	return name;
}

void MBeanSupport::preRegister2($MBeanServer* server, $ObjectName* name) {
	register$(server, name);
}

void MBeanSupport::registerFailed() {
	unregister();
}

void MBeanSupport::postRegister($Boolean* registrationDone) {
	if ($instanceOf($MBeanRegistration, this->resource)) {
		$nc(($cast($MBeanRegistration, this->resource)))->postRegister(registrationDone);
	}
}

void MBeanSupport::preDeregister() {
	if ($instanceOf($MBeanRegistration, this->resource)) {
		$nc(($cast($MBeanRegistration, this->resource)))->preDeregister();
	}
}

void MBeanSupport::postDeregister() {
	{
		$var($Throwable, var$0, nullptr);
		try {
			unregister();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if ($instanceOf($MBeanRegistration, this->resource)) {
				$nc(($cast($MBeanRegistration, this->resource)))->postDeregister();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$Object* MBeanSupport::getAttribute($String* attribute) {
	return $of($nc(this->perInterface)->getAttribute(this->resource, attribute, $(getCookie())));
}

$AttributeList* MBeanSupport::getAttributes($StringArray* attributes) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeList, result, $new($AttributeList, $nc(attributes)->length));
	{
		$var($StringArray, arr$, attributes);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, attrName, arr$->get(i$));
			{
				try {
					$var($Object, attrValue, getAttribute(attrName));
					result->add($$new($Attribute, attrName, attrValue));
				} catch ($Exception& e) {
				}
			}
		}
	}
	return result;
}

void MBeanSupport::setAttribute($Attribute* attribute) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(attribute)->getName());
	$var($Object, value, attribute->getValue());
	$nc(this->perInterface)->setAttribute(this->resource, name, value, $(getCookie()));
}

$AttributeList* MBeanSupport::setAttributes($AttributeList* attributes) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeList, result, $new($AttributeList, $nc(attributes)->size()));
	{
		$var($Iterator, i$, $nc(attributes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, attrObj, i$->next());
			{
				$var($Attribute, attr, $cast($Attribute, attrObj));
				try {
					setAttribute(attr);
					$var($String, var$0, $nc(attr)->getName());
					result->add($$new($Attribute, var$0, $(attr->getValue())));
				} catch ($Exception& e) {
				}
			}
		}
	}
	return result;
}

$Object* MBeanSupport::invoke($String* operation, $ObjectArray* params, $StringArray* signature) {
	return $of($nc(this->perInterface)->invoke(this->resource, operation, params, signature, $(getCookie())));
}

$MBeanInfo* MBeanSupport::getMBeanInfo() {
	return this->mbeanInfo;
}

$String* MBeanSupport::getClassName() {
	return $nc($of(this->resource))->getClass()->getName();
}

$Object* MBeanSupport::getResource() {
	return $of(this->resource);
}

$Class* MBeanSupport::getMBeanInterface() {
	return $nc(this->perInterface)->getMBeanInterface();
}

MBeanSupport::MBeanSupport() {
}

$Class* MBeanSupport::load$($String* name, bool initialize) {
	$loadClass(MBeanSupport, name, initialize, &_MBeanSupport_ClassInfo_, allocate$MBeanSupport);
	return class$;
}

$Class* MBeanSupport::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com