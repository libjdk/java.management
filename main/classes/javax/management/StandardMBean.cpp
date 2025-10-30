#include <javax/management/StandardMBean.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <com/sun/jmx/mbeanserver/DescriptorCache.h>
#include <com/sun/jmx/mbeanserver/Introspector.h>
#include <com/sun/jmx/mbeanserver/MBeanSupport.h>
#include <com/sun/jmx/mbeanserver/MXBeanSupport.h>
#include <com/sun/jmx/mbeanserver/StandardMBeanSupport.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <javax/management/Attribute.h>
#include <javax/management/AttributeList.h>
#include <javax/management/Descriptor.h>
#include <javax/management/DynamicMBean.h>
#include <javax/management/ImmutableDescriptor.h>
#include <javax/management/JMException.h>
#include <javax/management/JMX.h>
#include <javax/management/MBeanAttributeInfo.h>
#include <javax/management/MBeanConstructorInfo.h>
#include <javax/management/MBeanFeatureInfo.h>
#include <javax/management/MBeanInfo.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/MBeanOperationInfo.h>
#include <javax/management/MBeanParameterInfo.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/NotCompliantMBeanException.h>
#include <javax/management/ObjectName.h>
#include <javax/management/OperationsException.h>
#include <javax/management/StandardEmitterMBean.h>
#include <javax/management/StandardMBean$MBeanInfoSafeAction.h>
#include <javax/management/openmbean/OpenMBeanAttributeInfo.h>
#include <javax/management/openmbean/OpenMBeanAttributeInfoSupport.h>
#include <javax/management/openmbean/OpenMBeanConstructorInfo.h>
#include <javax/management/openmbean/OpenMBeanConstructorInfoSupport.h>
#include <javax/management/openmbean/OpenMBeanOperationInfo.h>
#include <javax/management/openmbean/OpenMBeanOperationInfoSupport.h>
#include <javax/management/openmbean/OpenMBeanParameterInfo.h>
#include <javax/management/openmbean/OpenMBeanParameterInfoSupport.h>
#include <javax/management/openmbean/OpenType.h>
#include <jcpp.h>

#undef DEBUG
#undef MISC_LOGGER
#undef TRACE
#undef UNKNOWN

using $MBeanAttributeInfoArray = $Array<::javax::management::MBeanAttributeInfo>;
using $MBeanConstructorInfoArray = $Array<::javax::management::MBeanConstructorInfo>;
using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $MBeanOperationInfoArray = $Array<::javax::management::MBeanOperationInfo>;
using $MBeanParameterInfoArray = $Array<::javax::management::MBeanParameterInfo>;
using $OpenMBeanParameterInfoArray = $Array<::javax::management::openmbean::OpenMBeanParameterInfo>;
using $OpenMBeanParameterInfoSupportArray = $Array<::javax::management::openmbean::OpenMBeanParameterInfoSupport>;
using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $DescriptorCache = ::com::sun::jmx::mbeanserver::DescriptorCache;
using $Introspector = ::com::sun::jmx::mbeanserver::Introspector;
using $MBeanSupport = ::com::sun::jmx::mbeanserver::MBeanSupport;
using $MXBeanSupport = ::com::sun::jmx::mbeanserver::MXBeanSupport;
using $StandardMBeanSupport = ::com::sun::jmx::mbeanserver::StandardMBeanSupport;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $RuntimeException = ::java::lang::RuntimeException;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $Method = ::java::lang::reflect::Method;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $WeakHashMap = ::java::util::WeakHashMap;
using $Attribute = ::javax::management::Attribute;
using $AttributeList = ::javax::management::AttributeList;
using $Descriptor = ::javax::management::Descriptor;
using $DynamicMBean = ::javax::management::DynamicMBean;
using $ImmutableDescriptor = ::javax::management::ImmutableDescriptor;
using $JMException = ::javax::management::JMException;
using $JMX = ::javax::management::JMX;
using $MBeanAttributeInfo = ::javax::management::MBeanAttributeInfo;
using $MBeanConstructorInfo = ::javax::management::MBeanConstructorInfo;
using $MBeanFeatureInfo = ::javax::management::MBeanFeatureInfo;
using $MBeanInfo = ::javax::management::MBeanInfo;
using $MBeanNotificationInfo = ::javax::management::MBeanNotificationInfo;
using $MBeanOperationInfo = ::javax::management::MBeanOperationInfo;
using $MBeanParameterInfo = ::javax::management::MBeanParameterInfo;
using $MBeanRegistration = ::javax::management::MBeanRegistration;
using $MBeanServer = ::javax::management::MBeanServer;
using $NotCompliantMBeanException = ::javax::management::NotCompliantMBeanException;
using $ObjectName = ::javax::management::ObjectName;
using $OperationsException = ::javax::management::OperationsException;
using $StandardEmitterMBean = ::javax::management::StandardEmitterMBean;
using $StandardMBean$MBeanInfoSafeAction = ::javax::management::StandardMBean$MBeanInfoSafeAction;
using $OpenMBeanAttributeInfo = ::javax::management::openmbean::OpenMBeanAttributeInfo;
using $OpenMBeanAttributeInfoSupport = ::javax::management::openmbean::OpenMBeanAttributeInfoSupport;
using $OpenMBeanConstructorInfo = ::javax::management::openmbean::OpenMBeanConstructorInfo;
using $OpenMBeanConstructorInfoSupport = ::javax::management::openmbean::OpenMBeanConstructorInfoSupport;
using $OpenMBeanOperationInfo = ::javax::management::openmbean::OpenMBeanOperationInfo;
using $OpenMBeanOperationInfoSupport = ::javax::management::openmbean::OpenMBeanOperationInfoSupport;
using $OpenMBeanParameterInfo = ::javax::management::openmbean::OpenMBeanParameterInfo;
using $OpenMBeanParameterInfoSupport = ::javax::management::openmbean::OpenMBeanParameterInfoSupport;
using $OpenType = ::javax::management::openmbean::OpenType;

namespace javax {
	namespace management {

$FieldInfo _StandardMBean_FieldInfo_[] = {
	{"descriptors", "Lcom/sun/jmx/mbeanserver/DescriptorCache;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(StandardMBean, descriptors)},
	{"mbean", "Lcom/sun/jmx/mbeanserver/MBeanSupport;", "Lcom/sun/jmx/mbeanserver/MBeanSupport<*>;", $PRIVATE | $VOLATILE, $field(StandardMBean, mbean)},
	{"cachedMBeanInfo", "Ljavax/management/MBeanInfo;", nullptr, $PRIVATE | $VOLATILE, $field(StandardMBean, cachedMBeanInfo)},
	{"mbeanInfoSafeMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/lang/Boolean;>;", $PRIVATE | $STATIC | $FINAL, $staticField(StandardMBean, mbeanInfoSafeMap)},
	{}
};

$MethodInfo _StandardMBean_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Class;)V", "<T:Ljava/lang/Object;>(TT;Ljava/lang/Class<TT;>;)V", $PUBLIC, $method(static_cast<void(StandardMBean::*)(Object$*,$Class*)>(&StandardMBean::init$)), "javax.management.NotCompliantMBeanException"},
	{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PROTECTED, $method(static_cast<void(StandardMBean::*)($Class*)>(&StandardMBean::init$)), "javax.management.NotCompliantMBeanException"},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Class;Z)V", "<T:Ljava/lang/Object;>(TT;Ljava/lang/Class<TT;>;Z)V", $PUBLIC, $method(static_cast<void(StandardMBean::*)(Object$*,$Class*,bool)>(&StandardMBean::init$))},
	{"<init>", "(Ljava/lang/Class;Z)V", "(Ljava/lang/Class<*>;Z)V", $PROTECTED, $method(static_cast<void(StandardMBean::*)($Class*,bool)>(&StandardMBean::init$))},
	{"cacheMBeanInfo", "(Ljavax/management/MBeanInfo;)V", nullptr, $PROTECTED},
	{"construct", "(Ljava/lang/Object;Ljava/lang/Class;ZZ)V", "<T:Ljava/lang/Object;>(TT;Ljava/lang/Class<TT;>;ZZ)V", $PRIVATE, $method(static_cast<void(StandardMBean::*)(Object$*,$Class*,bool,bool)>(&StandardMBean::construct)), "javax.management.NotCompliantMBeanException"},
	{"customize", "(Ljavax/management/MBeanParameterInfo;Ljava/lang/String;Ljava/lang/String;)Ljavax/management/MBeanParameterInfo;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MBeanParameterInfo*(*)($MBeanParameterInfo*,$String*,$String*)>(&StandardMBean::customize))},
	{"customize", "(Ljavax/management/MBeanConstructorInfo;Ljava/lang/String;[Ljavax/management/MBeanParameterInfo;)Ljavax/management/MBeanConstructorInfo;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MBeanConstructorInfo*(*)($MBeanConstructorInfo*,$String*,$MBeanParameterInfoArray*)>(&StandardMBean::customize))},
	{"customize", "(Ljavax/management/MBeanOperationInfo;Ljava/lang/String;[Ljavax/management/MBeanParameterInfo;I)Ljavax/management/MBeanOperationInfo;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MBeanOperationInfo*(*)($MBeanOperationInfo*,$String*,$MBeanParameterInfoArray*,int32_t)>(&StandardMBean::customize))},
	{"customize", "(Ljavax/management/MBeanAttributeInfo;Ljava/lang/String;)Ljavax/management/MBeanAttributeInfo;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MBeanAttributeInfo*(*)($MBeanAttributeInfo*,$String*)>(&StandardMBean::customize))},
	{"equal", "(Ljava/lang/Object;Ljava/lang/Object;)Z", "<T:Ljava/lang/Object;>(TT;TT;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)(Object$*,Object$*)>(&StandardMBean::equal))},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.AttributeNotFoundException,javax.management.MBeanException,javax.management.ReflectionException"},
	{"getAttributes", "([Ljava/lang/String;)Ljavax/management/AttributeList;", nullptr, $PUBLIC},
	{"getAttributes", "(Ljavax/management/MBeanInfo;)[Ljavax/management/MBeanAttributeInfo;", nullptr, $PRIVATE, $method(static_cast<$MBeanAttributeInfoArray*(StandardMBean::*)($MBeanInfo*)>(&StandardMBean::getAttributes))},
	{"getCachedMBeanInfo", "()Ljavax/management/MBeanInfo;", nullptr, $PROTECTED},
	{"getClassName", "(Ljavax/management/MBeanInfo;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getConstructors", "([Ljavax/management/MBeanConstructorInfo;Ljava/lang/Object;)[Ljavax/management/MBeanConstructorInfo;", nullptr, $PROTECTED},
	{"getConstructors", "(Ljavax/management/MBeanInfo;Ljava/lang/Object;)[Ljavax/management/MBeanConstructorInfo;", nullptr, $PRIVATE, $method(static_cast<$MBeanConstructorInfoArray*(StandardMBean::*)($MBeanInfo*,Object$*)>(&StandardMBean::getConstructors))},
	{"getDescription", "(Ljavax/management/MBeanInfo;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getDescription", "(Ljavax/management/MBeanFeatureInfo;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getDescription", "(Ljavax/management/MBeanAttributeInfo;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getDescription", "(Ljavax/management/MBeanConstructorInfo;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getDescription", "(Ljavax/management/MBeanConstructorInfo;Ljavax/management/MBeanParameterInfo;I)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getDescription", "(Ljavax/management/MBeanOperationInfo;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getDescription", "(Ljavax/management/MBeanOperationInfo;Ljavax/management/MBeanParameterInfo;I)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getDescriptor", "(Ljavax/management/MBeanInfo;Z)Ljavax/management/Descriptor;", nullptr, 0},
	{"getImpact", "(Ljavax/management/MBeanOperationInfo;)I", nullptr, $PROTECTED},
	{"getImplementation", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getImplementationClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{"getMBeanInfo", "()Ljavax/management/MBeanInfo;", nullptr, $PUBLIC},
	{"getMBeanInterface", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC | $FINAL, $method(static_cast<$Class*(StandardMBean::*)()>(&StandardMBean::getMBeanInterface))},
	{"getNotifications", "(Ljavax/management/MBeanInfo;)[Ljavax/management/MBeanNotificationInfo;", nullptr, 0},
	{"getOperations", "(Ljavax/management/MBeanInfo;)[Ljavax/management/MBeanOperationInfo;", nullptr, $PRIVATE, $method(static_cast<$MBeanOperationInfoArray*(StandardMBean::*)($MBeanInfo*)>(&StandardMBean::getOperations))},
	{"getParameterName", "(Ljavax/management/MBeanConstructorInfo;Ljavax/management/MBeanParameterInfo;I)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getParameterName", "(Ljavax/management/MBeanOperationInfo;Ljavax/management/MBeanParameterInfo;I)Ljava/lang/String;", nullptr, $PROTECTED},
	{"identicalArrays", "([Ljava/lang/Object;[Ljava/lang/Object;)Z", "<T:Ljava/lang/Object;>([TT;[TT;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($ObjectArray*,$ObjectArray*)>(&StandardMBean::identicalArrays))},
	{"immutableInfo", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<+Ljavax/management/StandardMBean;>;)Z", $STATIC, $method(static_cast<bool(*)($Class*)>(&StandardMBean::immutableInfo))},
	{"invoke", "(Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.ReflectionException"},
	{"isMXBean", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(StandardMBean::*)()>(&StandardMBean::isMXBean))},
	{"overrides", "(Ljava/lang/Class;Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;Ljava/lang/String;[Ljava/lang/Class<*>;)Z", $STATIC | $TRANSIENT, $method(static_cast<bool(*)($Class*,$Class*,$String*,$ClassArray*)>(&StandardMBean::overrides))},
	{"paramsToOpenParams", "([Ljavax/management/MBeanParameterInfo;)[Ljavax/management/openmbean/OpenMBeanParameterInfo;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$OpenMBeanParameterInfoArray*(*)($MBeanParameterInfoArray*)>(&StandardMBean::paramsToOpenParams))},
	{"postDeregister", "()V", nullptr, $PUBLIC},
	{"postRegister", "(Ljava/lang/Boolean;)V", nullptr, $PUBLIC},
	{"preDeregister", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"preRegister", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)Ljavax/management/ObjectName;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"setAttribute", "(Ljavax/management/Attribute;)V", nullptr, $PUBLIC, nullptr, "javax.management.AttributeNotFoundException,javax.management.InvalidAttributeValueException,javax.management.MBeanException,javax.management.ReflectionException"},
	{"setAttributes", "(Ljavax/management/AttributeList;)Ljavax/management/AttributeList;", nullptr, $PUBLIC},
	{"setImplementation", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.management.NotCompliantMBeanException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StandardMBean_InnerClassesInfo_[] = {
	{"javax.management.StandardMBean$MBeanInfoSafeAction", "javax.management.StandardMBean", "MBeanInfoSafeAction", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _StandardMBean_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.StandardMBean",
	"java.lang.Object",
	"javax.management.DynamicMBean,javax.management.MBeanRegistration",
	_StandardMBean_FieldInfo_,
	_StandardMBean_MethodInfo_,
	nullptr,
	nullptr,
	_StandardMBean_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.management.StandardMBean$MBeanInfoSafeAction"
};

$Object* allocate$StandardMBean($Class* clazz) {
	return $of($alloc(StandardMBean));
}

int32_t StandardMBean::hashCode() {
	 return this->$DynamicMBean::hashCode();
}

bool StandardMBean::equals(Object$* arg0) {
	 return this->$DynamicMBean::equals(arg0);
}

$Object* StandardMBean::clone() {
	 return this->$DynamicMBean::clone();
}

$String* StandardMBean::toString() {
	 return this->$DynamicMBean::toString();
}

void StandardMBean::finalize() {
	this->$DynamicMBean::finalize();
}

$DescriptorCache* StandardMBean::descriptors = nullptr;
$Map* StandardMBean::mbeanInfoSafeMap = nullptr;

void StandardMBean::construct(Object$* implementation$renamed, $Class* mbeanInterface, bool nullImplementationAllowed, bool isMXBean) {
	$var($Object, implementation, implementation$renamed);
	if (implementation == nullptr) {
		if (nullImplementationAllowed) {
			$assign(implementation, $Util::cast(this));
		} else {
			$throwNew($IllegalArgumentException, "implementation is null"_s);
		}
	}
	if (isMXBean) {
		if (mbeanInterface == nullptr) {
			mbeanInterface = $cast($Class, $Util::cast($Introspector::getMXBeanInterface($nc($of(implementation))->getClass())));
		}
		$set(this, mbean, $new($MXBeanSupport, implementation, mbeanInterface));
	} else {
		if (mbeanInterface == nullptr) {
			mbeanInterface = $cast($Class, $Util::cast($Introspector::getStandardMBeanInterface($nc($of(implementation))->getClass())));
		}
		$set(this, mbean, $new($StandardMBeanSupport, implementation, mbeanInterface));
	}
}

void StandardMBean::init$(Object$* implementation, $Class* mbeanInterface) {
	construct(implementation, mbeanInterface, false, false);
}

void StandardMBean::init$($Class* mbeanInterface) {
	construct(nullptr, mbeanInterface, true, false);
}

void StandardMBean::init$(Object$* implementation, $Class* mbeanInterface, bool isMXBean) {
	try {
		construct(implementation, mbeanInterface, false, isMXBean);
	} catch ($NotCompliantMBeanException& e) {
		$throwNew($IllegalArgumentException, static_cast<$Throwable*>(e));
	}
}

void StandardMBean::init$($Class* mbeanInterface, bool isMXBean) {
	try {
		construct(nullptr, mbeanInterface, true, isMXBean);
	} catch ($NotCompliantMBeanException& e) {
		$throwNew($IllegalArgumentException, static_cast<$Throwable*>(e));
	}
}

void StandardMBean::setImplementation(Object$* implementation) {
	$useLocalCurrentObjectStackCache();
	if (implementation == nullptr) {
		$throwNew($IllegalArgumentException, "implementation is null"_s);
	}
	if (isMXBean()) {
		$set(this, mbean, $new($MXBeanSupport, implementation, $cast($Class, $($Util::cast(getMBeanInterface())))));
	} else {
		$set(this, mbean, $new($StandardMBeanSupport, implementation, $cast($Class, $($Util::cast(getMBeanInterface())))));
	}
}

$Object* StandardMBean::getImplementation() {
	return $of($nc(this->mbean)->getResource());
}

$Class* StandardMBean::getMBeanInterface() {
	return $nc(this->mbean)->getMBeanInterface();
}

$Class* StandardMBean::getImplementationClass() {
	return $nc($of($($nc(this->mbean)->getResource())))->getClass();
}

$Object* StandardMBean::getAttribute($String* attribute) {
	return $of($nc(this->mbean)->getAttribute(attribute));
}

void StandardMBean::setAttribute($Attribute* attribute) {
	$nc(this->mbean)->setAttribute(attribute);
}

$AttributeList* StandardMBean::getAttributes($StringArray* attributes) {
	return $nc(this->mbean)->getAttributes(attributes);
}

$AttributeList* StandardMBean::setAttributes($AttributeList* attributes) {
	return $nc(this->mbean)->setAttributes(attributes);
}

$Object* StandardMBean::invoke($String* actionName, $ObjectArray* params, $StringArray* signature) {
	return $of($nc(this->mbean)->invoke(actionName, params, signature));
}

$MBeanInfo* StandardMBean::getMBeanInfo() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($MBeanInfo, cached, getCachedMBeanInfo());
		if (cached != nullptr) {
			return cached;
		}
	} catch ($RuntimeException& x) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MISC_LOGGER)->isLoggable($System$Logger$Level::DEBUG)) {
			$nc($JmxProperties::MISC_LOGGER)->log($System$Logger$Level::DEBUG, "Failed to get cached MBeanInfo"_s, static_cast<$Throwable*>(x));
		}
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MISC_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MISC_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Building MBeanInfo for "_s, $($nc(getImplementationClass())->getName())}));
	}
	$var($MBeanSupport, msupport, this->mbean);
	$var($MBeanInfo, bi, $nc(msupport)->getMBeanInfo());
	$var($Object, impl, msupport->getResource());
	bool immutableInfo = StandardMBean::immutableInfo($of(this)->getClass());
	$var($String, cname, getClassName(bi));
	$var($String, text, getDescription(bi));
	$var($MBeanConstructorInfoArray, ctors, getConstructors(bi, impl));
	$var($MBeanAttributeInfoArray, attrs, getAttributes(bi));
	$var($MBeanOperationInfoArray, ops, getOperations(bi));
	$var($MBeanNotificationInfoArray, ntfs, getNotifications(bi));
	$var($Descriptor, desc, getDescriptor(bi, immutableInfo));
	$var($MBeanInfo, nmbi, $new($MBeanInfo, cname, text, attrs, ctors, ops, ntfs, desc));
	try {
		cacheMBeanInfo(nmbi);
	} catch ($RuntimeException& x) {
		if ($nc($JmxProperties::MISC_LOGGER)->isLoggable($System$Logger$Level::DEBUG)) {
			$nc($JmxProperties::MISC_LOGGER)->log($System$Logger$Level::DEBUG, "Failed to cache MBeanInfo"_s, static_cast<$Throwable*>(x));
		}
	}
	return nmbi;
}

$String* StandardMBean::getClassName($MBeanInfo* info) {
	if (info == nullptr) {
		return $nc(getImplementationClass())->getName();
	}
	return $nc(info)->getClassName();
}

$String* StandardMBean::getDescription($MBeanInfo* info) {
	if (info == nullptr) {
		return nullptr;
	}
	return $nc(info)->getDescription();
}

$String* StandardMBean::getDescription($MBeanFeatureInfo* info) {
	if (info == nullptr) {
		return nullptr;
	}
	return $nc(info)->getDescription();
}

$String* StandardMBean::getDescription($MBeanAttributeInfo* info) {
	return getDescription(static_cast<$MBeanFeatureInfo*>(info));
}

$String* StandardMBean::getDescription($MBeanConstructorInfo* info) {
	return getDescription(static_cast<$MBeanFeatureInfo*>(info));
}

$String* StandardMBean::getDescription($MBeanConstructorInfo* ctor, $MBeanParameterInfo* param, int32_t sequence) {
	if (param == nullptr) {
		return nullptr;
	}
	return $nc(param)->getDescription();
}

$String* StandardMBean::getParameterName($MBeanConstructorInfo* ctor, $MBeanParameterInfo* param, int32_t sequence) {
	if (param == nullptr) {
		return nullptr;
	}
	return $nc(param)->getName();
}

$String* StandardMBean::getDescription($MBeanOperationInfo* info) {
	return getDescription(static_cast<$MBeanFeatureInfo*>(info));
}

int32_t StandardMBean::getImpact($MBeanOperationInfo* info) {
	if (info == nullptr) {
		return $MBeanOperationInfo::UNKNOWN;
	}
	return $nc(info)->getImpact();
}

$String* StandardMBean::getParameterName($MBeanOperationInfo* op, $MBeanParameterInfo* param, int32_t sequence) {
	if (param == nullptr) {
		return nullptr;
	}
	return $nc(param)->getName();
}

$String* StandardMBean::getDescription($MBeanOperationInfo* op, $MBeanParameterInfo* param, int32_t sequence) {
	if (param == nullptr) {
		return nullptr;
	}
	return $nc(param)->getDescription();
}

$MBeanConstructorInfoArray* StandardMBean::getConstructors($MBeanConstructorInfoArray* ctors, Object$* impl) {
	if (ctors == nullptr) {
		return nullptr;
	}
	if (impl != nullptr && !$equals(impl, this)) {
		return nullptr;
	}
	return ctors;
}

$MBeanNotificationInfoArray* StandardMBean::getNotifications($MBeanInfo* info) {
	return nullptr;
}

$Descriptor* StandardMBean::getDescriptor($MBeanInfo* info, bool immutableInfo) {
	$useLocalCurrentObjectStackCache();
	$var($ImmutableDescriptor, desc, nullptr);
	bool var$0 = info == nullptr || $nc(info)->getDescriptor() == nullptr;
	if (var$0 || $nc($($nc($($nc(info)->getDescriptor()))->getFieldNames()))->length == 0) {
		$var($String, interfaceClassNameS, $str({"interfaceClassName="_s, $($nc(getMBeanInterface())->getName())}));
		$var($String, immutableInfoS, $str({"immutableInfo="_s, $$str(immutableInfo)}));
		$assign(desc, $new($ImmutableDescriptor, $$new($StringArray, {
			interfaceClassNameS,
			immutableInfoS
		})));
		$assign(desc, $nc(StandardMBean::descriptors)->get(desc));
	} else {
		$var($Descriptor, d, info->getDescriptor());
		$var($Map, fields, $new($HashMap));
		{
			$var($StringArray, arr$, $nc(d)->getFieldNames());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, fieldName, arr$->get(i$));
				{
					if ($nc(fieldName)->equals("immutableInfo"_s)) {
						fields->put(fieldName, $($Boolean::toString(immutableInfo)));
					} else {
						fields->put(fieldName, $(d->getFieldValue(fieldName)));
					}
				}
			}
		}
		$assign(desc, $new($ImmutableDescriptor, fields));
	}
	return desc;
}

$MBeanInfo* StandardMBean::getCachedMBeanInfo() {
	return this->cachedMBeanInfo;
}

void StandardMBean::cacheMBeanInfo($MBeanInfo* info) {
	$set(this, cachedMBeanInfo, info);
}

bool StandardMBean::isMXBean() {
	return $nc(this->mbean)->isMXBean();
}

bool StandardMBean::identicalArrays($ObjectArray* a, $ObjectArray* b) {
	$init(StandardMBean);
	if (a == b) {
		return true;
	}
	if (a == nullptr || b == nullptr || $nc(a)->length != $nc(b)->length) {
		return false;
	}
	for (int32_t i = 0; i < $nc(a)->length; ++i) {
		if (!$equals(a->get(i), $nc(b)->get(i))) {
			return false;
		}
	}
	return true;
}

bool StandardMBean::equal(Object$* a, Object$* b) {
	$init(StandardMBean);
	if ($equals(a, b)) {
		return true;
	}
	if (a == nullptr || b == nullptr) {
		return false;
	}
	return $nc($of(a))->equals(b);
}

$MBeanParameterInfo* StandardMBean::customize($MBeanParameterInfo* pi, $String* name, $String* description) {
	$init(StandardMBean);
	$useLocalCurrentObjectStackCache();
	bool var$0 = equal(name, $($nc(pi)->getName()));
	if (var$0 && equal(description, $($nc(pi)->getDescription()))) {
		return pi;
	} else if ($instanceOf($OpenMBeanParameterInfo, pi)) {
		$var($OpenMBeanParameterInfo, opi, $cast($OpenMBeanParameterInfo, pi));
		$var($String, var$1, name);
		$var($String, var$2, description);
		$var($OpenType, var$3, $nc(opi)->getOpenType());
		return $new($OpenMBeanParameterInfoSupport, var$1, var$2, var$3, $($nc(pi)->getDescriptor()));
	} else {
		$var($String, var$4, name);
		$var($String, var$5, $nc(pi)->getType());
		$var($String, var$6, description);
		return $new($MBeanParameterInfo, var$4, var$5, var$6, $(pi->getDescriptor()));
	}
}

$MBeanConstructorInfo* StandardMBean::customize($MBeanConstructorInfo* ci, $String* description, $MBeanParameterInfoArray* signature) {
	$init(StandardMBean);
	$useLocalCurrentObjectStackCache();
	bool var$0 = equal(description, $($nc(ci)->getDescription()));
	if (var$0 && identicalArrays(signature, $($nc(ci)->getSignature()))) {
		return ci;
	}
	if ($instanceOf($OpenMBeanConstructorInfo, ci)) {
		$var($OpenMBeanParameterInfoArray, oparams, paramsToOpenParams(signature));
		$var($String, var$1, $nc(ci)->getName());
		$var($String, var$2, description);
		$var($OpenMBeanParameterInfoArray, var$3, oparams);
		return $new($OpenMBeanConstructorInfoSupport, var$1, var$2, var$3, $(ci->getDescriptor()));
	} else {
		$var($String, var$4, $nc(ci)->getName());
		$var($String, var$5, description);
		$var($MBeanParameterInfoArray, var$6, signature);
		return $new($MBeanConstructorInfo, var$4, var$5, var$6, $(ci->getDescriptor()));
	}
}

$MBeanOperationInfo* StandardMBean::customize($MBeanOperationInfo* oi, $String* description, $MBeanParameterInfoArray* signature, int32_t impact) {
	$init(StandardMBean);
	$useLocalCurrentObjectStackCache();
	bool var$1 = equal(description, $($nc(oi)->getDescription()));
	bool var$0 = var$1 && identicalArrays(signature, $($nc(oi)->getSignature()));
	if (var$0 && impact == $nc(oi)->getImpact()) {
		return oi;
	}
	if ($instanceOf($OpenMBeanOperationInfo, oi)) {
		$var($OpenMBeanOperationInfo, ooi, $cast($OpenMBeanOperationInfo, oi));
		$var($OpenMBeanParameterInfoArray, oparams, paramsToOpenParams(signature));
		$var($String, var$2, $nc(oi)->getName());
		$var($String, var$3, description);
		$var($OpenMBeanParameterInfoArray, var$4, oparams);
		$var($OpenType, var$5, $nc(ooi)->getReturnOpenType());
		int32_t var$6 = impact;
		return $new($OpenMBeanOperationInfoSupport, var$2, var$3, var$4, var$5, var$6, $(oi->getDescriptor()));
	} else {
		$var($String, var$7, $nc(oi)->getName());
		$var($String, var$8, description);
		$var($MBeanParameterInfoArray, var$9, signature);
		$var($String, var$10, oi->getReturnType());
		int32_t var$11 = impact;
		return $new($MBeanOperationInfo, var$7, var$8, var$9, var$10, var$11, $(oi->getDescriptor()));
	}
}

$MBeanAttributeInfo* StandardMBean::customize($MBeanAttributeInfo* ai, $String* description) {
	$init(StandardMBean);
	$useLocalCurrentObjectStackCache();
	if (equal(description, $($nc(ai)->getDescription()))) {
		return ai;
	}
	if ($instanceOf($OpenMBeanAttributeInfo, ai)) {
		$var($OpenMBeanAttributeInfo, oai, $cast($OpenMBeanAttributeInfo, ai));
		$var($String, var$0, $nc(ai)->getName());
		$var($String, var$1, description);
		$var($OpenType, var$2, $nc(oai)->getOpenType());
		bool var$3 = ai->isReadable();
		bool var$4 = ai->isWritable();
		bool var$5 = ai->isIs();
		return $new($OpenMBeanAttributeInfoSupport, var$0, var$1, var$2, var$3, var$4, var$5, $(ai->getDescriptor()));
	} else {
		$var($String, var$6, $nc(ai)->getName());
		$var($String, var$7, ai->getType());
		$var($String, var$8, description);
		bool var$9 = ai->isReadable();
		bool var$10 = ai->isWritable();
		bool var$11 = ai->isIs();
		return $new($MBeanAttributeInfo, var$6, var$7, var$8, var$9, var$10, var$11, $(ai->getDescriptor()));
	}
}

$OpenMBeanParameterInfoArray* StandardMBean::paramsToOpenParams($MBeanParameterInfoArray* params) {
	$init(StandardMBean);
	if ($instanceOf($OpenMBeanParameterInfoArray, params)) {
		return $fcast($OpenMBeanParameterInfoArray, params);
	}
	$var($OpenMBeanParameterInfoArray, oparams, $fcast($OpenMBeanParameterInfoArray, $new($OpenMBeanParameterInfoSupportArray, $nc(params)->length)));
	$System::arraycopy(params, 0, oparams, 0, params->length);
	return oparams;
}

$MBeanConstructorInfoArray* StandardMBean::getConstructors($MBeanInfo* info, Object$* impl) {
	$useLocalCurrentObjectStackCache();
	$var($MBeanConstructorInfoArray, ctors, getConstructors($($nc(info)->getConstructors()), impl));
	if (ctors == nullptr) {
		return nullptr;
	}
	int32_t ctorlen = $nc(ctors)->length;
	$var($MBeanConstructorInfoArray, nctors, $new($MBeanConstructorInfoArray, ctorlen));
	for (int32_t i = 0; i < ctorlen; ++i) {
		$var($MBeanConstructorInfo, c, ctors->get(i));
		$var($MBeanParameterInfoArray, params, $nc(c)->getSignature());
		$var($MBeanParameterInfoArray, nps, nullptr);
		if (params != nullptr) {
			int32_t plen = params->length;
			$assign(nps, $new($MBeanParameterInfoArray, plen));
			for (int32_t ii = 0; ii < plen; ++ii) {
				$var($MBeanParameterInfo, p, params->get(ii));
				$var($MBeanParameterInfo, var$0, p);
				$var($String, var$1, getParameterName(c, p, ii));
				nps->set(ii, $(customize(var$0, var$1, $(getDescription(c, p, ii)))));
			}
		} else {
			$assign(nps, nullptr);
		}
		nctors->set(i, $(customize(c, $(getDescription(c)), nps)));
	}
	return nctors;
}

$MBeanOperationInfoArray* StandardMBean::getOperations($MBeanInfo* info) {
	$useLocalCurrentObjectStackCache();
	$var($MBeanOperationInfoArray, ops, $nc(info)->getOperations());
	if (ops == nullptr) {
		return nullptr;
	}
	int32_t oplen = $nc(ops)->length;
	$var($MBeanOperationInfoArray, nops, $new($MBeanOperationInfoArray, oplen));
	for (int32_t i = 0; i < oplen; ++i) {
		$var($MBeanOperationInfo, o, ops->get(i));
		$var($MBeanParameterInfoArray, params, $nc(o)->getSignature());
		$var($MBeanParameterInfoArray, nps, nullptr);
		if (params != nullptr) {
			int32_t plen = params->length;
			$assign(nps, $new($MBeanParameterInfoArray, plen));
			for (int32_t ii = 0; ii < plen; ++ii) {
				$var($MBeanParameterInfo, p, params->get(ii));
				$var($MBeanParameterInfo, var$0, p);
				$var($String, var$1, getParameterName(o, p, ii));
				nps->set(ii, $(customize(var$0, var$1, $(getDescription(o, p, ii)))));
			}
		} else {
			$assign(nps, nullptr);
		}
		$var($MBeanOperationInfo, var$2, o);
		$var($String, var$3, getDescription(o));
		$var($MBeanParameterInfoArray, var$4, nps);
		nops->set(i, $(customize(var$2, var$3, var$4, getImpact(o))));
	}
	return nops;
}

$MBeanAttributeInfoArray* StandardMBean::getAttributes($MBeanInfo* info) {
	$useLocalCurrentObjectStackCache();
	$var($MBeanAttributeInfoArray, atts, $nc(info)->getAttributes());
	if (atts == nullptr) {
		return nullptr;
	}
	$var($MBeanAttributeInfoArray, natts, nullptr);
	int32_t attlen = $nc(atts)->length;
	$assign(natts, $new($MBeanAttributeInfoArray, attlen));
	for (int32_t i = 0; i < attlen; ++i) {
		$var($MBeanAttributeInfo, a, atts->get(i));
		natts->set(i, $(customize(a, $(getDescription(a)))));
	}
	return natts;
}

$ObjectName* StandardMBean::preRegister($MBeanServer* server, $ObjectName* name) {
	$nc(this->mbean)->register$(server, name);
	return name;
}

void StandardMBean::postRegister($Boolean* registrationDone) {
	if (!$nc(registrationDone)->booleanValue()) {
		$nc(this->mbean)->unregister();
	}
}

void StandardMBean::preDeregister() {
}

void StandardMBean::postDeregister() {
	$nc(this->mbean)->unregister();
}

bool StandardMBean::immutableInfo($Class* subclass) {
	$init(StandardMBean);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($StandardEmitterMBean);
	if (subclass == StandardMBean::class$ || subclass == $StandardEmitterMBean::class$) {
		return true;
	}
	$synchronized(StandardMBean::mbeanInfoSafeMap) {
		$var($Boolean, safe, $cast($Boolean, $nc(StandardMBean::mbeanInfoSafeMap)->get(subclass)));
		if (safe == nullptr) {
			try {
				$var($StandardMBean$MBeanInfoSafeAction, action, $new($StandardMBean$MBeanInfoSafeAction, subclass));
				$assign(safe, $cast($Boolean, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(action))));
			} catch ($Exception& e) {
				$assign(safe, $Boolean::valueOf(false));
			}
			$nc(StandardMBean::mbeanInfoSafeMap)->put(subclass, safe);
		}
		return $nc(safe)->booleanValue();
	}
}

bool StandardMBean::overrides($Class* subclass, $Class* superclass, $String* name, $ClassArray* params) {
	$init(StandardMBean);
	$beforeCallerSensitive();
	{
		$Class* c = subclass;
		for (; c != superclass; c = $nc(c)->getSuperclass()) {
			try {
				c->getDeclaredMethod(name, params);
				return true;
			} catch ($NoSuchMethodException& e) {
			}
		}
	}
	return false;
}

void clinit$StandardMBean($Class* class$) {
	$init($JMX);
	$assignStatic(StandardMBean::descriptors, $DescriptorCache::getInstance($JMX::proof));
	$assignStatic(StandardMBean::mbeanInfoSafeMap, $new($WeakHashMap));
}

StandardMBean::StandardMBean() {
}

$Class* StandardMBean::load$($String* name, bool initialize) {
	$loadClass(StandardMBean, name, initialize, &_StandardMBean_ClassInfo_, clinit$StandardMBean, allocate$StandardMBean);
	return class$;
}

$Class* StandardMBean::class$ = nullptr;

	} // management
} // javax