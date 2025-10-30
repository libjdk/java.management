#include <com/sun/jmx/mbeanserver/MBeanServerDelegateImpl.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <javax/management/Attribute.h>
#include <javax/management/AttributeList.h>
#include <javax/management/AttributeNotFoundException.h>
#include <javax/management/JMRuntimeException.h>
#include <javax/management/MBeanAttributeInfo.h>
#include <javax/management/MBeanConstructorInfo.h>
#include <javax/management/MBeanException.h>
#include <javax/management/MBeanInfo.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/MBeanOperationInfo.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/MBeanServerDelegate.h>
#include <javax/management/ObjectName.h>
#include <javax/management/ReflectionException.h>
#include <javax/management/RuntimeOperationsException.h>
#include <jcpp.h>

#undef DELEGATE_NAME
#undef MBEANSERVER_LOGGER
#undef TRACE

using $MBeanAttributeInfoArray = $Array<::javax::management::MBeanAttributeInfo>;
using $MBeanConstructorInfoArray = $Array<::javax::management::MBeanConstructorInfo>;
using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $MBeanOperationInfoArray = $Array<::javax::management::MBeanOperationInfo>;
using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $Attribute = ::javax::management::Attribute;
using $AttributeList = ::javax::management::AttributeList;
using $AttributeNotFoundException = ::javax::management::AttributeNotFoundException;
using $DynamicMBean = ::javax::management::DynamicMBean;
using $JMRuntimeException = ::javax::management::JMRuntimeException;
using $MBeanAttributeInfo = ::javax::management::MBeanAttributeInfo;
using $MBeanException = ::javax::management::MBeanException;
using $MBeanInfo = ::javax::management::MBeanInfo;
using $MBeanRegistration = ::javax::management::MBeanRegistration;
using $MBeanServer = ::javax::management::MBeanServer;
using $MBeanServerDelegate = ::javax::management::MBeanServerDelegate;
using $ObjectName = ::javax::management::ObjectName;
using $ReflectionException = ::javax::management::ReflectionException;
using $RuntimeOperationsException = ::javax::management::RuntimeOperationsException;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _MBeanServerDelegateImpl_FieldInfo_[] = {
	{"attributeNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MBeanServerDelegateImpl, attributeNames)},
	{"attributeInfos", "[Ljavax/management/MBeanAttributeInfo;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MBeanServerDelegateImpl, attributeInfos)},
	{"delegateInfo", "Ljavax/management/MBeanInfo;", nullptr, $PRIVATE | $FINAL, $field(MBeanServerDelegateImpl, delegateInfo)},
	{}
};

$MethodInfo _MBeanServerDelegateImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MBeanServerDelegateImpl::*)()>(&MBeanServerDelegateImpl::init$))},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.AttributeNotFoundException,javax.management.MBeanException,javax.management.ReflectionException"},
	{"getAttributes", "([Ljava/lang/String;)Ljavax/management/AttributeList;", nullptr, $PUBLIC},
	{"getMBeanInfo", "()Ljavax/management/MBeanInfo;", nullptr, $PUBLIC},
	{"invoke", "(Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.ReflectionException"},
	{"postDeregister", "()V", nullptr, $PUBLIC | $FINAL},
	{"postRegister", "(Ljava/lang/Boolean;)V", nullptr, $PUBLIC | $FINAL},
	{"preDeregister", "()V", nullptr, $PUBLIC | $FINAL, nullptr, "java.lang.Exception"},
	{"preRegister", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)Ljavax/management/ObjectName;", nullptr, $PUBLIC | $FINAL, nullptr, "java.lang.Exception"},
	{"setAttribute", "(Ljavax/management/Attribute;)V", nullptr, $PUBLIC, nullptr, "javax.management.AttributeNotFoundException,javax.management.InvalidAttributeValueException,javax.management.MBeanException,javax.management.ReflectionException"},
	{"setAttributes", "(Ljavax/management/AttributeList;)Ljavax/management/AttributeList;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MBeanServerDelegateImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.MBeanServerDelegateImpl",
	"javax.management.MBeanServerDelegate",
	"javax.management.DynamicMBean,javax.management.MBeanRegistration",
	_MBeanServerDelegateImpl_FieldInfo_,
	_MBeanServerDelegateImpl_MethodInfo_
};

$Object* allocate$MBeanServerDelegateImpl($Class* clazz) {
	return $of($alloc(MBeanServerDelegateImpl));
}

int32_t MBeanServerDelegateImpl::hashCode() {
	 return this->$MBeanServerDelegate::hashCode();
}

bool MBeanServerDelegateImpl::equals(Object$* arg0) {
	 return this->$MBeanServerDelegate::equals(arg0);
}

$Object* MBeanServerDelegateImpl::clone() {
	 return this->$MBeanServerDelegate::clone();
}

$String* MBeanServerDelegateImpl::toString() {
	 return this->$MBeanServerDelegate::toString();
}

void MBeanServerDelegateImpl::finalize() {
	this->$MBeanServerDelegate::finalize();
}

$StringArray* MBeanServerDelegateImpl::attributeNames = nullptr;
$MBeanAttributeInfoArray* MBeanServerDelegateImpl::attributeInfos = nullptr;

void MBeanServerDelegateImpl::init$() {
	$MBeanServerDelegate::init$();
	$set(this, delegateInfo, $new($MBeanInfo, "javax.management.MBeanServerDelegate"_s, "Represents  the MBean server from the management point of view."_s, MBeanServerDelegateImpl::attributeInfos, nullptr, nullptr, $(getNotificationInfo())));
}

$ObjectName* MBeanServerDelegateImpl::preRegister($MBeanServer* server, $ObjectName* name) {
	if (name == nullptr) {
		$init($MBeanServerDelegate);
		return $MBeanServerDelegate::DELEGATE_NAME;
	} else {
		return name;
	}
}

void MBeanServerDelegateImpl::postRegister($Boolean* registrationDone) {
}

void MBeanServerDelegateImpl::preDeregister() {
	$throwNew($IllegalArgumentException, "The MBeanServerDelegate MBean cannot be unregistered"_s);
}

void MBeanServerDelegateImpl::postDeregister() {
}

$Object* MBeanServerDelegateImpl::getAttribute($String* attribute) {
	try {
		if (attribute == nullptr) {
			$throwNew($AttributeNotFoundException, "null"_s);
		}
		if ($nc(attribute)->equals("MBeanServerId"_s)) {
			return $of(getMBeanServerId());
		} else if (attribute->equals("SpecificationName"_s)) {
			return $of(getSpecificationName());
		} else if (attribute->equals("SpecificationVersion"_s)) {
			return $of(getSpecificationVersion());
		} else if (attribute->equals("SpecificationVendor"_s)) {
			return $of(getSpecificationVendor());
		} else if (attribute->equals("ImplementationName"_s)) {
			return $of(getImplementationName());
		} else if (attribute->equals("ImplementationVersion"_s)) {
			return $of(getImplementationVersion());
		} else if (attribute->equals("ImplementationVendor"_s)) {
			return $of(getImplementationVendor());
		} else {
			$throwNew($AttributeNotFoundException, "null"_s);
		}
	} catch ($AttributeNotFoundException& x) {
		$throw(x);
	} catch ($JMRuntimeException& j) {
		$throw(j);
	} catch ($SecurityException& s) {
		$throw(s);
	} catch ($Exception& x) {
		$throwNew($MBeanException, x, $$str({"Failed to get "_s, attribute}));
	}
	$shouldNotReachHere();
}

void MBeanServerDelegateImpl::setAttribute($Attribute* attribute) {
	$useLocalCurrentObjectStackCache();
	$var($String, attname, attribute == nullptr ? ($String*)nullptr : $nc(attribute)->getName());
	if (attname == nullptr) {
		$var($RuntimeException, r, $new($IllegalArgumentException, "Attribute name cannot be null"_s));
		$throwNew($RuntimeOperationsException, r, "Exception occurred trying to invoke the setter on the MBean"_s);
	}
	$var($Object, val, getAttribute(attname));
	$throwNew($AttributeNotFoundException, $$str({attname, " not accessible"_s}));
}

$AttributeList* MBeanServerDelegateImpl::getAttributes($StringArray* attributes) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, attn, attributes == nullptr ? MBeanServerDelegateImpl::attributeNames : attributes);
	int32_t len = $nc(attn)->length;
	$var($AttributeList, list, $new($AttributeList, len));
	for (int32_t i = 0; i < len; ++i) {
		try {
			$var($Attribute, a, $new($Attribute, attn->get(i), $(getAttribute(attn->get(i)))));
			list->add(a);
		} catch ($Exception& x) {
			$init($JmxProperties);
			$init($System$Logger$Level);
			if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
				$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Attribute "_s, attn->get(i), " not found"_s}));
			}
		}
	}
	return list;
}

$AttributeList* MBeanServerDelegateImpl::setAttributes($AttributeList* attributes) {
	return $new($AttributeList, 0);
}

$Object* MBeanServerDelegateImpl::invoke($String* actionName, $ObjectArray* params, $StringArray* signature) {
	$useLocalCurrentObjectStackCache();
	if (actionName == nullptr) {
		$var($RuntimeException, r, $new($IllegalArgumentException, "Operation name  cannot be null"_s));
		$throwNew($RuntimeOperationsException, r, "Exception occurred trying to invoke the operation on the MBean"_s);
	}
	$throwNew($ReflectionException, $$new($NoSuchMethodException, actionName), $$str({"The operation with name "_s, actionName, " could not be found"_s}));
	$shouldNotReachHere();
}

$MBeanInfo* MBeanServerDelegateImpl::getMBeanInfo() {
	return this->delegateInfo;
}

void clinit$MBeanServerDelegateImpl($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MBeanServerDelegateImpl::attributeNames, $new($StringArray, {
		"MBeanServerId"_s,
		"SpecificationName"_s,
		"SpecificationVersion"_s,
		"SpecificationVendor"_s,
		"ImplementationName"_s,
		"ImplementationVersion"_s,
		"ImplementationVendor"_s
	}));
	$assignStatic(MBeanServerDelegateImpl::attributeInfos, $new($MBeanAttributeInfoArray, {
		$$new($MBeanAttributeInfo, "MBeanServerId"_s, "java.lang.String"_s, "The MBean server agent identification"_s, true, false, false),
		$$new($MBeanAttributeInfo, "SpecificationName"_s, "java.lang.String"_s, "The full name of the JMX specification implemented by this product."_s, true, false, false),
		$$new($MBeanAttributeInfo, "SpecificationVersion"_s, "java.lang.String"_s, "The version of the JMX specification implemented by this product."_s, true, false, false),
		$$new($MBeanAttributeInfo, "SpecificationVendor"_s, "java.lang.String"_s, "The vendor of the JMX specification implemented by this product."_s, true, false, false),
		$$new($MBeanAttributeInfo, "ImplementationName"_s, "java.lang.String"_s, "The JMX implementation name (the name of this product)"_s, true, false, false),
		$$new($MBeanAttributeInfo, "ImplementationVersion"_s, "java.lang.String"_s, "The JMX implementation version (the version of this product)."_s, true, false, false),
		$$new($MBeanAttributeInfo, "ImplementationVendor"_s, "java.lang.String"_s, "the JMX implementation vendor (the vendor of this product)."_s, true, false, false)
	}));
}

MBeanServerDelegateImpl::MBeanServerDelegateImpl() {
}

$Class* MBeanServerDelegateImpl::load$($String* name, bool initialize) {
	$loadClass(MBeanServerDelegateImpl, name, initialize, &_MBeanServerDelegateImpl_ClassInfo_, clinit$MBeanServerDelegateImpl, allocate$MBeanServerDelegateImpl);
	return class$;
}

$Class* MBeanServerDelegateImpl::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com