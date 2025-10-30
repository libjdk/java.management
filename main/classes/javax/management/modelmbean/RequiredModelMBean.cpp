#include <javax/management/modelmbean/RequiredModelMBean.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <java/io/FileOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Date.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/Vector.h>
#include <java/util/function/Supplier.h>
#include <javax/management/Attribute.h>
#include <javax/management/AttributeChangeNotification.h>
#include <javax/management/AttributeChangeNotificationFilter.h>
#include <javax/management/AttributeList.h>
#include <javax/management/AttributeNotFoundException.h>
#include <javax/management/Descriptor.h>
#include <javax/management/InvalidAttributeValueException.h>
#include <javax/management/JMException.h>
#include <javax/management/JMRuntimeException.h>
#include <javax/management/ListenerNotFoundException.h>
#include <javax/management/MBeanAttributeInfo.h>
#include <javax/management/MBeanConstructorInfo.h>
#include <javax/management/MBeanException.h>
#include <javax/management/MBeanInfo.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/MBeanOperationInfo.h>
#include <javax/management/MBeanParameterInfo.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/MBeanServerFactory.h>
#include <javax/management/Notification.h>
#include <javax/management/NotificationBroadcasterSupport.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationListener.h>
#include <javax/management/ObjectName.h>
#include <javax/management/OperationsException.h>
#include <javax/management/ReflectionException.h>
#include <javax/management/RuntimeErrorException.h>
#include <javax/management/RuntimeOperationsException.h>
#include <javax/management/ServiceNotFoundException.h>
#include <javax/management/loading/ClassLoaderRepository.h>
#include <javax/management/modelmbean/DescriptorSupport.h>
#include <javax/management/modelmbean/InvalidTargetObjectTypeException.h>
#include <javax/management/modelmbean/ModelMBean.h>
#include <javax/management/modelmbean/ModelMBeanAttributeInfo.h>
#include <javax/management/modelmbean/ModelMBeanConstructorInfo.h>
#include <javax/management/modelmbean/ModelMBeanInfo.h>
#include <javax/management/modelmbean/ModelMBeanInfoSupport.h>
#include <javax/management/modelmbean/ModelMBeanNotificationInfo.h>
#include <javax/management/modelmbean/ModelMBeanOperationInfo.h>
#include <javax/management/modelmbean/RequiredModelMBean$1.h>
#include <javax/management/modelmbean/RequiredModelMBean$2.h>
#include <javax/management/modelmbean/RequiredModelMBean$3.h>
#include <javax/management/modelmbean/RequiredModelMBean$4.h>
#include <javax/management/modelmbean/RequiredModelMBean$5.h>
#include <javax/management/modelmbean/RequiredModelMBean$6.h>
#include <jdk/internal/access/JavaSecurityAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

#undef DEBUG
#undef MODELMBEAN_LOGGER
#undef TRACE
#undef TYPE

using $ClassNotFoundExceptionArray = $Array<::java::lang::ClassNotFoundException>;
using $ExceptionArray = $Array<::java::lang::Exception>;
using $ThrowableArray = $Array<::java::lang::Throwable>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $MBeanAttributeInfoArray = $Array<::javax::management::MBeanAttributeInfo>;
using $MBeanConstructorInfoArray = $Array<::javax::management::MBeanConstructorInfo>;
using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $MBeanOperationInfoArray = $Array<::javax::management::MBeanOperationInfo>;
using $MBeanParameterInfoArray = $Array<::javax::management::MBeanParameterInfo>;
using $ReflectionExceptionArray = $Array<::javax::management::ReflectionException>;
using $ModelMBeanAttributeInfoArray = $Array<::javax::management::modelmbean::ModelMBeanAttributeInfo>;
using $ModelMBeanConstructorInfoArray = $Array<::javax::management::modelmbean::ModelMBeanConstructorInfo>;
using $ModelMBeanNotificationInfoArray = $Array<::javax::management::modelmbean::ModelMBeanNotificationInfo>;
using $ModelMBeanOperationInfoArray = $Array<::javax::management::modelmbean::ModelMBeanOperationInfo>;
using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $FileOutputStream = ::java::io::FileOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Double = ::java::lang::Double;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Short = ::java::lang::Short;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Date = ::java::util::Date;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Vector = ::java::util::Vector;
using $Supplier = ::java::util::function::Supplier;
using $Attribute = ::javax::management::Attribute;
using $AttributeChangeNotification = ::javax::management::AttributeChangeNotification;
using $AttributeChangeNotificationFilter = ::javax::management::AttributeChangeNotificationFilter;
using $AttributeList = ::javax::management::AttributeList;
using $AttributeNotFoundException = ::javax::management::AttributeNotFoundException;
using $Descriptor = ::javax::management::Descriptor;
using $InvalidAttributeValueException = ::javax::management::InvalidAttributeValueException;
using $JMException = ::javax::management::JMException;
using $JMRuntimeException = ::javax::management::JMRuntimeException;
using $ListenerNotFoundException = ::javax::management::ListenerNotFoundException;
using $MBeanAttributeInfo = ::javax::management::MBeanAttributeInfo;
using $MBeanConstructorInfo = ::javax::management::MBeanConstructorInfo;
using $MBeanException = ::javax::management::MBeanException;
using $MBeanFeatureInfo = ::javax::management::MBeanFeatureInfo;
using $MBeanInfo = ::javax::management::MBeanInfo;
using $MBeanNotificationInfo = ::javax::management::MBeanNotificationInfo;
using $MBeanOperationInfo = ::javax::management::MBeanOperationInfo;
using $MBeanRegistration = ::javax::management::MBeanRegistration;
using $MBeanServer = ::javax::management::MBeanServer;
using $MBeanServerFactory = ::javax::management::MBeanServerFactory;
using $Notification = ::javax::management::Notification;
using $NotificationBroadcasterSupport = ::javax::management::NotificationBroadcasterSupport;
using $NotificationEmitter = ::javax::management::NotificationEmitter;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationListener = ::javax::management::NotificationListener;
using $ObjectName = ::javax::management::ObjectName;
using $OperationsException = ::javax::management::OperationsException;
using $ReflectionException = ::javax::management::ReflectionException;
using $RuntimeErrorException = ::javax::management::RuntimeErrorException;
using $RuntimeOperationsException = ::javax::management::RuntimeOperationsException;
using $ServiceNotFoundException = ::javax::management::ServiceNotFoundException;
using $ClassLoaderRepository = ::javax::management::loading::ClassLoaderRepository;
using $DescriptorSupport = ::javax::management::modelmbean::DescriptorSupport;
using $InvalidTargetObjectTypeException = ::javax::management::modelmbean::InvalidTargetObjectTypeException;
using $ModelMBean = ::javax::management::modelmbean::ModelMBean;
using $ModelMBeanAttributeInfo = ::javax::management::modelmbean::ModelMBeanAttributeInfo;
using $ModelMBeanConstructorInfo = ::javax::management::modelmbean::ModelMBeanConstructorInfo;
using $ModelMBeanInfo = ::javax::management::modelmbean::ModelMBeanInfo;
using $ModelMBeanInfoSupport = ::javax::management::modelmbean::ModelMBeanInfoSupport;
using $ModelMBeanNotificationInfo = ::javax::management::modelmbean::ModelMBeanNotificationInfo;
using $ModelMBeanOperationInfo = ::javax::management::modelmbean::ModelMBeanOperationInfo;
using $RequiredModelMBean$1 = ::javax::management::modelmbean::RequiredModelMBean$1;
using $RequiredModelMBean$2 = ::javax::management::modelmbean::RequiredModelMBean$2;
using $RequiredModelMBean$3 = ::javax::management::modelmbean::RequiredModelMBean$3;
using $RequiredModelMBean$4 = ::javax::management::modelmbean::RequiredModelMBean$4;
using $RequiredModelMBean$5 = ::javax::management::modelmbean::RequiredModelMBean$5;
using $RequiredModelMBean$6 = ::javax::management::modelmbean::RequiredModelMBean$6;
using $JavaSecurityAccess = ::jdk::internal::access::JavaSecurityAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace javax {
	namespace management {
		namespace modelmbean {

class RequiredModelMBean$$Lambda$toString : public $Supplier {
	$class(RequiredModelMBean$$Lambda$toString, $NO_CLASS_INIT, $Supplier)
public:
	void init$($StringBuilder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->toString());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RequiredModelMBean$$Lambda$toString>());
	}
	$StringBuilder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RequiredModelMBean$$Lambda$toString::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RequiredModelMBean$$Lambda$toString, inst$)},
	{}
};
$MethodInfo RequiredModelMBean$$Lambda$toString::methodInfos[3] = {
	{"<init>", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(RequiredModelMBean$$Lambda$toString::*)($StringBuilder*)>(&RequiredModelMBean$$Lambda$toString::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo RequiredModelMBean$$Lambda$toString::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.management.modelmbean.RequiredModelMBean$$Lambda$toString",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* RequiredModelMBean$$Lambda$toString::load$($String* name, bool initialize) {
	$loadClass(RequiredModelMBean$$Lambda$toString, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RequiredModelMBean$$Lambda$toString::class$ = nullptr;

$FieldInfo _RequiredModelMBean_FieldInfo_[] = {
	{"modelMBeanInfo", "Ljavax/management/modelmbean/ModelMBeanInfo;", nullptr, 0, $field(RequiredModelMBean, modelMBeanInfo)},
	{"generalBroadcaster", "Ljavax/management/NotificationBroadcasterSupport;", nullptr, $PRIVATE, $field(RequiredModelMBean, generalBroadcaster)},
	{"attributeBroadcaster", "Ljavax/management/NotificationBroadcasterSupport;", nullptr, $PRIVATE, $field(RequiredModelMBean, attributeBroadcaster)},
	{"managedResource", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(RequiredModelMBean, managedResource)},
	{"registered", "Z", nullptr, $PRIVATE, $field(RequiredModelMBean, registered)},
	{"server", "Ljavax/management/MBeanServer;", nullptr, $PRIVATE | $TRANSIENT, $field(RequiredModelMBean, server)},
	{"javaSecurityAccess", "Ljdk/internal/access/JavaSecurityAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RequiredModelMBean, javaSecurityAccess)},
	{"acc", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $FINAL, $field(RequiredModelMBean, acc)},
	{"primitiveClasses", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(RequiredModelMBean, primitiveClasses)},
	{"primitiveClassMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(RequiredModelMBean, primitiveClassMap)},
	{"rmmbMethodNames", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(RequiredModelMBean, rmmbMethodNames)},
	{"primitiveTypes", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RequiredModelMBean, primitiveTypes)},
	{"primitiveWrappers", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RequiredModelMBean, primitiveWrappers)},
	{}
};

$MethodInfo _RequiredModelMBean_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RequiredModelMBean::*)()>(&RequiredModelMBean::init$)), "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"<init>", "(Ljavax/management/modelmbean/ModelMBeanInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(RequiredModelMBean::*)($ModelMBeanInfo*)>(&RequiredModelMBean::init$)), "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"addAttributeChangeNotificationListener", "(Ljavax/management/NotificationListener;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException,java.lang.IllegalArgumentException"},
	{"addNotificationListener", "(Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"cacheResult", "(Ljavax/management/modelmbean/ModelMBeanOperationInfo;Ljavax/management/Descriptor;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(RequiredModelMBean::*)($ModelMBeanOperationInfo*,$Descriptor*,Object$*)>(&RequiredModelMBean::cacheResult)), "javax.management.MBeanException"},
	{"createDefaultModelMBeanInfo", "()Ljavax/management/modelmbean/ModelMBeanInfo;", nullptr, $PRIVATE, $method(static_cast<$ModelMBeanInfo*(RequiredModelMBean::*)()>(&RequiredModelMBean::createDefaultModelMBeanInfo))},
	{"findRMMBMethod", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/reflect/Method;", nullptr, $PRIVATE, $method(static_cast<$Method*(RequiredModelMBean::*)($String*,Object$*,$String*,$StringArray*)>(&RequiredModelMBean::findRMMBMethod))},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.AttributeNotFoundException,javax.management.MBeanException,javax.management.ReflectionException"},
	{"getAttributes", "([Ljava/lang/String;)Ljavax/management/AttributeList;", nullptr, $PUBLIC},
	{"getClassLoaderRepository", "()Ljavax/management/loading/ClassLoaderRepository;", nullptr, $PROTECTED},
	{"getMBeanInfo", "()Ljavax/management/MBeanInfo;", nullptr, $PUBLIC},
	{"getNotificationInfo", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PUBLIC},
	{"hasNotification", "(Ljavax/management/modelmbean/ModelMBeanInfo;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<bool(*)($ModelMBeanInfo*,$String*)>(&RequiredModelMBean::hasNotification))},
	{"invoke", "(Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.ReflectionException"},
	{"invokeMethod", "(Ljava/lang/String;Ljava/lang/reflect/Method;Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(RequiredModelMBean::*)($String*,$Method*,Object$*,$ObjectArray*)>(&RequiredModelMBean::invokeMethod)), "javax.management.MBeanException,javax.management.ReflectionException"},
	{"isRMMBMethodName", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<bool(*)($String*)>(&RequiredModelMBean::isRMMBMethodName))},
	{"load", "()V", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException,javax.management.InstanceNotFoundException"},
	{"loadClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PRIVATE, $method(static_cast<$Class*(RequiredModelMBean::*)($String*)>(&RequiredModelMBean::loadClass)), "java.lang.ClassNotFoundException"},
	{"makeAttributeChangeInfo", "()Ljavax/management/modelmbean/ModelMBeanNotificationInfo;", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$ModelMBeanNotificationInfo*(*)()>(&RequiredModelMBean::makeAttributeChangeInfo))},
	{"makeGenericInfo", "()Ljavax/management/modelmbean/ModelMBeanNotificationInfo;", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$ModelMBeanNotificationInfo*(*)()>(&RequiredModelMBean::makeGenericInfo))},
	{"postDeregister", "()V", nullptr, $PUBLIC},
	{"postRegister", "(Ljava/lang/Boolean;)V", nullptr, $PUBLIC},
	{"preDeregister", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"preRegister", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)Ljavax/management/ObjectName;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"printModelMBeanInfo", "(Ljavax/management/modelmbean/ModelMBeanInfo;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(RequiredModelMBean::*)($ModelMBeanInfo*)>(&RequiredModelMBean::printModelMBeanInfo))},
	{"removeAttributeChangeNotificationListener", "(Ljavax/management/NotificationListener;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException,javax.management.ListenerNotFoundException"},
	{"removeNotificationListener", "(Ljavax/management/NotificationListener;)V", nullptr, $PUBLIC, nullptr, "javax.management.ListenerNotFoundException"},
	{"removeNotificationListener", "(Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.management.ListenerNotFoundException"},
	{"resolveForCacheValue", "(Ljavax/management/Descriptor;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(RequiredModelMBean::*)($Descriptor*)>(&RequiredModelMBean::resolveForCacheValue)), "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"resolveMethod", "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/reflect/Method;", $PRIVATE, $method(static_cast<$Method*(RequiredModelMBean::*)($Class*,$String*,$StringArray*)>(&RequiredModelMBean::resolveMethod)), "javax.management.ReflectionException"},
	{"sendAttributeChangeNotification", "(Ljavax/management/AttributeChangeNotification;)V", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"sendAttributeChangeNotification", "(Ljavax/management/Attribute;Ljavax/management/Attribute;)V", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"sendNotification", "(Ljavax/management/Notification;)V", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"sendNotification", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"setAttribute", "(Ljavax/management/Attribute;)V", nullptr, $PUBLIC, nullptr, "javax.management.AttributeNotFoundException,javax.management.InvalidAttributeValueException,javax.management.MBeanException,javax.management.ReflectionException"},
	{"setAttributes", "(Ljavax/management/AttributeList;)Ljavax/management/AttributeList;", nullptr, $PUBLIC},
	{"setManagedResource", "(Ljava/lang/Object;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException,javax.management.InstanceNotFoundException,javax.management.modelmbean.InvalidTargetObjectTypeException"},
	{"setModelMBeanInfo", "(Ljavax/management/modelmbean/ModelMBeanInfo;)V", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException"},
	{"store", "()V", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.RuntimeOperationsException,javax.management.InstanceNotFoundException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeToLog", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(RequiredModelMBean::*)($String*,$String*)>(&RequiredModelMBean::writeToLog)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _RequiredModelMBean_InnerClassesInfo_[] = {
	{"javax.management.modelmbean.RequiredModelMBean$6", nullptr, nullptr, 0},
	{"javax.management.modelmbean.RequiredModelMBean$5", nullptr, nullptr, 0},
	{"javax.management.modelmbean.RequiredModelMBean$4", nullptr, nullptr, 0},
	{"javax.management.modelmbean.RequiredModelMBean$3", nullptr, nullptr, 0},
	{"javax.management.modelmbean.RequiredModelMBean$2", nullptr, nullptr, 0},
	{"javax.management.modelmbean.RequiredModelMBean$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RequiredModelMBean_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.modelmbean.RequiredModelMBean",
	"java.lang.Object",
	"javax.management.modelmbean.ModelMBean,javax.management.MBeanRegistration,javax.management.NotificationEmitter",
	_RequiredModelMBean_FieldInfo_,
	_RequiredModelMBean_MethodInfo_,
	nullptr,
	nullptr,
	_RequiredModelMBean_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.management.modelmbean.RequiredModelMBean$6,javax.management.modelmbean.RequiredModelMBean$5,javax.management.modelmbean.RequiredModelMBean$4,javax.management.modelmbean.RequiredModelMBean$3,javax.management.modelmbean.RequiredModelMBean$2,javax.management.modelmbean.RequiredModelMBean$1"
};

$Object* allocate$RequiredModelMBean($Class* clazz) {
	return $of($alloc(RequiredModelMBean));
}

int32_t RequiredModelMBean::hashCode() {
	 return this->$ModelMBean::hashCode();
}

bool RequiredModelMBean::equals(Object$* arg0) {
	 return this->$ModelMBean::equals(arg0);
}

$Object* RequiredModelMBean::clone() {
	 return this->$ModelMBean::clone();
}

$String* RequiredModelMBean::toString() {
	 return this->$ModelMBean::toString();
}

void RequiredModelMBean::finalize() {
	this->$ModelMBean::finalize();
}

$JavaSecurityAccess* RequiredModelMBean::javaSecurityAccess = nullptr;
$ClassArray* RequiredModelMBean::primitiveClasses = nullptr;
$Map* RequiredModelMBean::primitiveClassMap = nullptr;
$Set* RequiredModelMBean::rmmbMethodNames = nullptr;
$StringArray* RequiredModelMBean::primitiveTypes = nullptr;
$StringArray* RequiredModelMBean::primitiveWrappers = nullptr;

void RequiredModelMBean::init$() {
	$set(this, generalBroadcaster, nullptr);
	$set(this, attributeBroadcaster, nullptr);
	$set(this, managedResource, nullptr);
	this->registered = false;
	$set(this, server, nullptr);
	$set(this, acc, $AccessController::getContext());
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	$set(this, modelMBeanInfo, createDefaultModelMBeanInfo());
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
}

void RequiredModelMBean::init$($ModelMBeanInfo* mbi) {
	$set(this, generalBroadcaster, nullptr);
	$set(this, attributeBroadcaster, nullptr);
	$set(this, managedResource, nullptr);
	this->registered = false;
	$set(this, server, nullptr);
	$set(this, acc, $AccessController::getContext());
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	setModelMBeanInfo(mbi);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
}

void RequiredModelMBean::setModelMBeanInfo($ModelMBeanInfo* mbi) {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if (mbi == nullptr) {
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "ModelMBeanInfo is null: Raising exception."_s);
		}
		$var($RuntimeException, x, $new($IllegalArgumentException, "ModelMBeanInfo must not be null"_s));
		$var($String, exceptionText, "Exception occurred trying to initialize the ModelMBeanInfo of the RequiredModelMBean"_s);
		$throwNew($RuntimeOperationsException, x, exceptionText);
	}
	if (this->registered) {
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "RequiredMBean is registered: Raising exception."_s);
		}
		$var($String, exceptionText, "Exception occurred trying to set the ModelMBeanInfo of the RequiredModelMBean"_s);
		$var($RuntimeException, x, $new($IllegalStateException, "cannot call setModelMBeanInfo while ModelMBean is registered"_s));
		$throwNew($RuntimeOperationsException, x, exceptionText);
	}
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Setting ModelMBeanInfo to "_s, $(printModelMBeanInfo(mbi))}));
		int32_t noOfNotifications = 0;
		if ($nc(mbi)->getNotifications() != nullptr) {
			noOfNotifications = $nc($(mbi->getNotifications()))->length;
		}
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"ModelMBeanInfo notifications has "_s, $$str(noOfNotifications), " elements"_s}));
	}
	$set(this, modelMBeanInfo, $cast($ModelMBeanInfo, $nc(mbi)->clone()));
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"set mbeanInfo to: "_s, $(printModelMBeanInfo(this->modelMBeanInfo))}));
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
}

void RequiredModelMBean::setManagedResource(Object$* mr, $String* mr_type) {
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if ((mr_type == nullptr) || (!$nc(mr_type)->equalsIgnoreCase("objectReference"_s))) {
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Managed Resource Type is not supported: "_s, mr_type}));
		}
		$throwNew($InvalidTargetObjectTypeException, mr_type);
	}
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Managed Resource is valid"_s);
	}
	$set(this, managedResource, mr);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
}

void RequiredModelMBean::load() {
	$useLocalCurrentObjectStackCache();
	$var($ServiceNotFoundException, x, $new($ServiceNotFoundException, "Persistence not supported for this MBean"_s));
	$throwNew($MBeanException, x, $(x->getMessage()));
}

void RequiredModelMBean::store() {
	$useLocalCurrentObjectStackCache();
	$var($ServiceNotFoundException, x, $new($ServiceNotFoundException, "Persistence not supported for this MBean"_s));
	$throwNew($MBeanException, x, $(x->getMessage()));
}

$Object* RequiredModelMBean::resolveForCacheValue($Descriptor* descr) {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	bool tracing = $nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE);
	if (tracing) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	$var($Object, response, nullptr);
	bool resetValue = false;
	bool returnCachedValue = true;
	int64_t currencyPeriod = 0;
	if (descr == nullptr) {
		if (tracing) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Input Descriptor is null"_s);
		}
		return $of(response);
	}
	if (tracing) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"descriptor is "_s, descr}));
	}
	$var($Descriptor, mmbDescr, $nc(this->modelMBeanInfo)->getMBeanDescriptor());
	if (mmbDescr == nullptr) {
		if (tracing) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "MBean Descriptor is null"_s);
		}
	}
	$var($Object, objExpTime, $nc(descr)->getFieldValue("currencyTimeLimit"_s));
	$var($String, expTime, nullptr);
	if (objExpTime != nullptr) {
		$assign(expTime, $of(objExpTime)->toString());
	} else {
		$assign(expTime, nullptr);
	}
	if ((expTime == nullptr) && (mmbDescr != nullptr)) {
		$assign(objExpTime, mmbDescr->getFieldValue("currencyTimeLimit"_s));
		if (objExpTime != nullptr) {
			$assign(expTime, $of(objExpTime)->toString());
		} else {
			$assign(expTime, nullptr);
		}
	}
	if (expTime != nullptr) {
		if (tracing) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"currencyTimeLimit: "_s, expTime}));
		}
		currencyPeriod = $Long::parseLong(expTime) * 1000;
		if (currencyPeriod < 0) {
			returnCachedValue = false;
			resetValue = true;
			if (tracing) {
				$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({$$str(currencyPeriod), ": never Cached"_s}));
			}
		} else if (currencyPeriod == 0) {
			returnCachedValue = true;
			resetValue = false;
			if (tracing) {
				$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "always valid Cache"_s);
			}
		} else {
			$var($Object, objtStamp, descr->getFieldValue("lastUpdatedTimeStamp"_s));
			$var($String, tStamp, nullptr);
			if (objtStamp != nullptr) {
				$assign(tStamp, $of(objtStamp)->toString());
			} else {
				$assign(tStamp, nullptr);
			}
			if (tracing) {
				$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"lastUpdatedTimeStamp: "_s, tStamp}));
			}
			if (tStamp == nullptr) {
				$assign(tStamp, "0"_s);
			}
			int64_t lastTime = $Long::parseLong(tStamp);
			if (tracing) {
				$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"currencyPeriod:"_s, $$str(currencyPeriod), " lastUpdatedTimeStamp:"_s, $$str(lastTime)}));
			}
			int64_t now = ($$new($Date))->getTime();
			if (now < (lastTime + currencyPeriod)) {
				returnCachedValue = true;
				resetValue = false;
				if (tracing) {
					$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({" timed valid Cache for "_s, $$str(now), " < "_s, $$str((lastTime + currencyPeriod))}));
				}
			} else {
				returnCachedValue = false;
				resetValue = true;
				if (tracing) {
					$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"timed expired cache for "_s, $$str(now), " > "_s, $$str((lastTime + currencyPeriod))}));
				}
			}
		}
		if (tracing) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"returnCachedValue:"_s, $$str(returnCachedValue), " resetValue: "_s, $$str(resetValue)}));
		}
		if (returnCachedValue == true) {
			$var($Object, currValue, descr->getFieldValue("value"_s));
			if (currValue != nullptr) {
				$assign(response, currValue);
				if (tracing) {
					$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"valid Cache value: "_s, currValue}));
				}
			} else {
				$assign(response, nullptr);
				if (tracing) {
					$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "no Cached value"_s);
				}
			}
		}
		if (resetValue == true) {
			descr->removeField("lastUpdatedTimeStamp"_s);
			descr->removeField("value"_s);
			$assign(response, nullptr);
			$nc(this->modelMBeanInfo)->setDescriptor(descr, nullptr);
			if (tracing) {
				$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "reset cached value to null"_s);
			}
		}
	}
	if (tracing) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
	return $of(response);
}

$MBeanInfo* RequiredModelMBean::getMBeanInfo() {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if (this->modelMBeanInfo == nullptr) {
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "modelMBeanInfo is null"_s);
		}
		$set(this, modelMBeanInfo, createDefaultModelMBeanInfo());
	}
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$var($String, var$0, $$str({"ModelMBeanInfo is "_s, $($nc(this->modelMBeanInfo)->getClassName()), " for "_s}));
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$concat(var$0, $($nc(this->modelMBeanInfo)->getDescription())));
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $(printModelMBeanInfo(this->modelMBeanInfo)));
	}
	return ($cast($MBeanInfo, $nc(this->modelMBeanInfo)->clone()));
}

$String* RequiredModelMBean::printModelMBeanInfo($ModelMBeanInfo* info$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ModelMBeanInfo, info, info$renamed);
	$var($StringBuilder, retStr, $new($StringBuilder));
	if (info == nullptr) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "ModelMBeanInfo to print is null, printing local ModelMBeanInfo"_s);
		}
		$assign(info, this->modelMBeanInfo);
	}
	retStr->append("\nMBeanInfo for ModelMBean is:"_s);
	retStr->append("\nCLASSNAME: \t"_s)->append($($nc(info)->getClassName()));
	retStr->append("\nDESCRIPTION: \t"_s)->append($($nc(info)->getDescription()));
	try {
		retStr->append("\nMBEAN DESCRIPTOR: \t"_s)->append($($of($nc(info)->getMBeanDescriptor())));
	} catch ($Exception& e) {
		retStr->append("\nMBEAN DESCRIPTOR: \t  is invalid"_s);
	}
	retStr->append("\nATTRIBUTES"_s);
	$var($MBeanAttributeInfoArray, attrInfo, $nc(info)->getAttributes());
	if ((attrInfo != nullptr) && (attrInfo->length > 0)) {
		for (int32_t i = 0; i < attrInfo->length; ++i) {
			$var($ModelMBeanAttributeInfo, attInfo, $cast($ModelMBeanAttributeInfo, attrInfo->get(i)));
			retStr->append(" ** NAME: \t"_s)->append($($nc(attInfo)->getName()));
			retStr->append("    DESCR: \t"_s)->append($($nc(attInfo)->getDescription()));
			retStr->append("    TYPE: \t"_s)->append($($nc(attInfo)->getType()))->append("    READ: \t"_s)->append($nc(attInfo)->isReadable())->append("    WRITE: \t"_s)->append($nc(attInfo)->isWritable());
			retStr->append("    DESCRIPTOR: "_s)->append($($of($nc(attInfo)->getDescriptor())));
		}
	} else {
		retStr->append(" ** No attributes **"_s);
	}
	retStr->append("\nCONSTRUCTORS"_s);
	$var($MBeanConstructorInfoArray, constrInfo, info->getConstructors());
	if ((constrInfo != nullptr) && (constrInfo->length > 0)) {
		for (int32_t i = 0; i < constrInfo->length; ++i) {
			$var($ModelMBeanConstructorInfo, ctorInfo, $cast($ModelMBeanConstructorInfo, constrInfo->get(i)));
			retStr->append(" ** NAME: \t"_s)->append($($nc(ctorInfo)->getName()));
			retStr->append("    DESCR: \t"_s)->append($($nc(ctorInfo)->getDescription()));
			retStr->append("    PARAM: \t"_s)->append($nc($($nc(ctorInfo)->getSignature()))->length)->append(" parameter(s)"_s);
			retStr->append("    DESCRIPTOR: "_s)->append($($of($nc(ctorInfo)->getDescriptor())));
		}
	} else {
		retStr->append(" ** No Constructors **"_s);
	}
	retStr->append("\nOPERATIONS"_s);
	$var($MBeanOperationInfoArray, opsInfo, info->getOperations());
	if ((opsInfo != nullptr) && (opsInfo->length > 0)) {
		for (int32_t i = 0; i < opsInfo->length; ++i) {
			$var($ModelMBeanOperationInfo, operInfo, $cast($ModelMBeanOperationInfo, opsInfo->get(i)));
			retStr->append(" ** NAME: \t"_s)->append($($nc(operInfo)->getName()));
			retStr->append("    DESCR: \t"_s)->append($($nc(operInfo)->getDescription()));
			retStr->append("    PARAM: \t"_s)->append($nc($($nc(operInfo)->getSignature()))->length)->append(" parameter(s)"_s);
			retStr->append("    DESCRIPTOR: "_s)->append($($of($nc(operInfo)->getDescriptor())));
		}
	} else {
		retStr->append(" ** No operations ** "_s);
	}
	retStr->append("\nNOTIFICATIONS"_s);
	$var($MBeanNotificationInfoArray, notifInfo, info->getNotifications());
	if ((notifInfo != nullptr) && (notifInfo->length > 0)) {
		for (int32_t i = 0; i < notifInfo->length; ++i) {
			$var($ModelMBeanNotificationInfo, nInfo, $cast($ModelMBeanNotificationInfo, notifInfo->get(i)));
			retStr->append(" ** NAME: \t"_s)->append($($nc(nInfo)->getName()));
			retStr->append("    DESCR: \t"_s)->append($($nc(nInfo)->getDescription()));
			retStr->append("    DESCRIPTOR: "_s)->append($($of($nc(nInfo)->getDescriptor())));
		}
	} else {
		retStr->append(" ** No notifications **"_s);
	}
	retStr->append(" ** ModelMBean: End of MBeanInfo ** "_s);
	return retStr->toString();
}

$Object* RequiredModelMBean::invoke($String* opName, $ObjectArray* opArgs, $StringArray* sig) {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	bool tracing = $nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE);
	if (tracing) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if (opName == nullptr) {
		$var($RuntimeException, x, $new($IllegalArgumentException, "Method name must not be null"_s));
		$throwNew($RuntimeOperationsException, x, "An exception occurred while trying to invoke a method on a RequiredModelMBean"_s);
	}
	$var($String, opClassName, nullptr);
	$var($String, opMethodName, nullptr);
	int32_t opSplitter = $nc(opName)->lastIndexOf((int32_t)u'.');
	if (opSplitter > 0) {
		$assign(opClassName, opName->substring(0, opSplitter));
		$assign(opMethodName, opName->substring(opSplitter + 1));
	} else {
		$assign(opMethodName, opName);
	}
	opSplitter = $nc(opMethodName)->indexOf((int32_t)u'(');
	if (opSplitter > 0) {
		$assign(opMethodName, opMethodName->substring(0, opSplitter));
	}
	if (tracing) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Finding operation "_s, opName, " as "_s, opMethodName}));
	}
	$var($ModelMBeanOperationInfo, opInfo, $nc(this->modelMBeanInfo)->getOperation(opMethodName));
	if (opInfo == nullptr) {
		$var($String, msg, $str({"Operation "_s, opName, " not in ModelMBeanInfo"_s}));
		$throwNew($MBeanException, $$new($ServiceNotFoundException, msg), msg);
	}
	$var($Descriptor, opDescr, $nc(opInfo)->getDescriptor());
	if (opDescr == nullptr) {
		$var($String, msg, "Operation descriptor null"_s);
		$throwNew($MBeanException, $$new($ServiceNotFoundException, msg), msg);
	}
	$var($Object, cached, resolveForCacheValue(opDescr));
	if (cached != nullptr) {
		if (tracing) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Returning cached value"_s);
		}
		return $of(cached);
	}
	if (opClassName == nullptr) {
		$assign(opClassName, $cast($String, $nc(opDescr)->getFieldValue("class"_s)));
	}
	$assign(opMethodName, $cast($String, $nc(opDescr)->getFieldValue("name"_s)));
	if (opMethodName == nullptr) {
		$var($String, msg, "Method descriptor must include `name\' field"_s);
		$throwNew($MBeanException, $$new($ServiceNotFoundException, msg), msg);
	}
	$var($String, targetTypeField, $cast($String, opDescr->getFieldValue("targetType"_s)));
	if (targetTypeField != nullptr && !targetTypeField->equalsIgnoreCase("objectReference"_s)) {
		$var($String, msg, $str({"Target type must be objectReference: "_s, targetTypeField}));
		$throwNew($MBeanException, $$new($InvalidTargetObjectTypeException, msg), msg);
	}
	$var($Object, targetObjectField, opDescr->getFieldValue("targetObject"_s));
	if (tracing && targetObjectField != nullptr) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Found target object in descriptor"_s);
	}
	$var($Method, method, nullptr);
	$var($Object, targetObject, nullptr);
	$assign(method, findRMMBMethod(opMethodName, targetObjectField, opClassName, sig));
	if (method != nullptr) {
		$assign(targetObject, this);
	} else {
		if (tracing) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "looking for method in managedResource class"_s);
		}
		if (targetObjectField != nullptr) {
			$assign(targetObject, targetObjectField);
		} else {
			$assign(targetObject, this->managedResource);
			if (targetObject == nullptr) {
				$var($String, msg, $str({"managedResource for invoke "_s, opName, " is null"_s}));
				$var($Exception, snfe, $new($ServiceNotFoundException, msg));
				$throwNew($MBeanException, snfe);
			}
		}
		$Class* targetClass = nullptr;
		if (opClassName != nullptr) {
			try {
				$var($AccessControlContext, stack, $AccessController::getContext());
				$var($Object, obj, targetObject);
				$var($String, className, opClassName);
				$var($ClassNotFoundExceptionArray, caughtException, $new($ClassNotFoundExceptionArray, 1));
				targetClass = $cast($Class, $nc(RequiredModelMBean::javaSecurityAccess)->doIntersectionPrivilege($$new($RequiredModelMBean$1, this, className, obj, caughtException), stack, this->acc));
				if (caughtException->get(0) != nullptr) {
					$throw(caughtException->get(0));
				}
			} catch ($ClassNotFoundException& e) {
				$var($String, msg, $str({"class for invoke "_s, opName, " not found"_s}));
				$throwNew($ReflectionException, e, msg);
			}
		} else {
			targetClass = $nc($of(targetObject))->getClass();
		}
		$assign(method, resolveMethod(targetClass, opMethodName, sig));
	}
	if (tracing) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"found "_s, opMethodName, ", now invoking"_s}));
	}
	$var($Object, result, invokeMethod(opName, method, targetObject, opArgs));
	if (tracing) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "successfully invoked method"_s);
	}
	if (result != nullptr) {
		cacheResult(opInfo, opDescr, result);
	}
	return $of(result);
}

$Method* RequiredModelMBean::resolveMethod($Class* targetClass, $String* opMethodName, $StringArray* sig) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init($JmxProperties);
	$init($System$Logger$Level);
	bool tracing = $nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE);
	if (tracing) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"resolving "_s, $($nc(targetClass)->getName()), "."_s, opMethodName}));
	}
	$var($ClassArray, argClasses, nullptr);
	if (sig == nullptr) {
		$assign(argClasses, nullptr);
	} else {
		$var($AccessControlContext, stack, $AccessController::getContext());
		$var($ReflectionExceptionArray, caughtException, $new($ReflectionExceptionArray, 1));
		$var($ClassLoader, targetClassLoader, $nc(targetClass)->getClassLoader());
		$assign(argClasses, $new($ClassArray, $nc(sig)->length));
		$nc(RequiredModelMBean::javaSecurityAccess)->doIntersectionPrivilege($$new($RequiredModelMBean$2, this, sig, tracing, argClasses, targetClassLoader, caughtException), stack, this->acc);
		if (caughtException->get(0) != nullptr) {
			$throw(caughtException->get(0));
		}
	}
	try {
		return $nc(targetClass)->getMethod(opMethodName, argClasses);
	} catch ($NoSuchMethodException& e) {
		$var($String, msg, $str({"Target method not found: "_s, $($nc(targetClass)->getName()), "."_s, opMethodName}));
		$throwNew($ReflectionException, e, msg);
	}
	$shouldNotReachHere();
}

$Method* RequiredModelMBean::findRMMBMethod($String* opMethodName, Object$* targetObjectField, $String* opClassName, $StringArray* sig) {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	bool tracing = $nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE);
	if (tracing) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "looking for method in RequiredModelMBean class"_s);
	}
	if (!isRMMBMethodName(opMethodName)) {
		return nullptr;
	}
	if (targetObjectField != nullptr) {
		return nullptr;
	}
	$Class* rmmbClass = RequiredModelMBean::class$;
	$Class* targetClass = nullptr;
	if (opClassName == nullptr) {
		targetClass = rmmbClass;
	} else {
		$var($AccessControlContext, stack, $AccessController::getContext());
		$var($String, className, opClassName);
		targetClass = $cast($Class, $nc(RequiredModelMBean::javaSecurityAccess)->doIntersectionPrivilege($$new($RequiredModelMBean$3, this, className, rmmbClass), stack, this->acc));
	}
	try {
		return targetClass != nullptr ? resolveMethod(targetClass, opMethodName, sig) : ($Method*)nullptr;
	} catch ($ReflectionException& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$Object* RequiredModelMBean::invokeMethod($String* opName, $Method* method, Object$* targetObject, $ObjectArray* opArgs) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($ThrowableArray, caughtException, $new($ThrowableArray, 1));
		$var($AccessControlContext, stack, $AccessController::getContext());
		$var($Object, rslt, $nc(RequiredModelMBean::javaSecurityAccess)->doIntersectionPrivilege($$new($RequiredModelMBean$4, this, method, targetObject, opArgs, caughtException), stack, this->acc));
		if (caughtException->get(0) != nullptr) {
			if ($instanceOf($Exception, caughtException->get(0))) {
				$throw($cast($Exception, caughtException->get(0)));
			} else if ($instanceOf($Error, caughtException->get(0))) {
				$throw($cast($Error, caughtException->get(0)));
			}
		}
		return $of(rslt);
	} catch ($RuntimeErrorException& ree) {
		$throwNew($RuntimeOperationsException, ree, $$str({"RuntimeException occurred in RequiredModelMBean while trying to invoke operation "_s, opName}));
	} catch ($RuntimeException& re) {
		$throwNew($RuntimeOperationsException, re, $$str({"RuntimeException occurred in RequiredModelMBean while trying to invoke operation "_s, opName}));
	} catch ($IllegalAccessException& iae) {
		$throwNew($ReflectionException, iae, $$str({"IllegalAccessException occurred in RequiredModelMBean while trying to invoke operation "_s, opName}));
	} catch ($InvocationTargetException& ite) {
		$var($Throwable, mmbTargEx, ite->getCause());
		if ($instanceOf($RuntimeException, mmbTargEx)) {
			$throwNew($MBeanException, $cast($RuntimeException, mmbTargEx), $$str({"RuntimeException thrown in RequiredModelMBean while trying to invoke operation "_s, opName}));
		} else if ($instanceOf($Error, mmbTargEx)) {
			$throwNew($RuntimeErrorException, $cast($Error, mmbTargEx), $$str({"Error occurred in RequiredModelMBean while trying to invoke operation "_s, opName}));
		} else if ($instanceOf($ReflectionException, mmbTargEx)) {
			$throw($cast($ReflectionException, mmbTargEx));
		} else {
			$throwNew($MBeanException, $cast($Exception, mmbTargEx), $$str({"Exception thrown in RequiredModelMBean while trying to invoke operation "_s, opName}));
		}
	} catch ($Error& err) {
		$throwNew($RuntimeErrorException, err, $$str({"Error occurred in RequiredModelMBean while trying to invoke operation "_s, opName}));
	} catch ($Exception& e) {
		$throwNew($ReflectionException, e, $$str({"Exception occurred in RequiredModelMBean while trying to invoke operation "_s, opName}));
	}
	$shouldNotReachHere();
}

void RequiredModelMBean::cacheResult($ModelMBeanOperationInfo* opInfo, $Descriptor* opDescr, Object$* result) {
	$useLocalCurrentObjectStackCache();
	$var($Descriptor, mmbDesc, $nc(this->modelMBeanInfo)->getMBeanDescriptor());
	$var($Object, objctl, $nc(opDescr)->getFieldValue("currencyTimeLimit"_s));
	$var($String, ctl, nullptr);
	if (objctl != nullptr) {
		$assign(ctl, $of(objctl)->toString());
	} else {
		$assign(ctl, nullptr);
	}
	if ((ctl == nullptr) && (mmbDesc != nullptr)) {
		$assign(objctl, mmbDesc->getFieldValue("currencyTimeLimit"_s));
		if (objctl != nullptr) {
			$assign(ctl, $of(objctl)->toString());
		} else {
			$assign(ctl, nullptr);
		}
	}
	if ((ctl != nullptr) && !(ctl->equals("-1"_s))) {
		opDescr->setField("value"_s, result);
		opDescr->setField("lastUpdatedTimeStamp"_s, $($String::valueOf(($$new($Date))->getTime())));
		$nc(this->modelMBeanInfo)->setDescriptor(opDescr, "operation"_s);
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"new descriptor is "_s, opDescr}));
		}
	}
}

bool RequiredModelMBean::isRMMBMethodName($String* name) {
	$load(RequiredModelMBean);
	$synchronized(class$) {
		$init(RequiredModelMBean);
		$useLocalCurrentObjectStackCache();
		$beforeCallerSensitive();
		if (RequiredModelMBean::rmmbMethodNames == nullptr) {
			try {
				$var($Set, names, $new($HashSet));
				$var($MethodArray, methods, RequiredModelMBean::class$->getMethods());
				for (int32_t i = 0; i < $nc(methods)->length; ++i) {
					names->add($($nc(methods->get(i))->getName()));
				}
				$assignStatic(RequiredModelMBean::rmmbMethodNames, names);
			} catch ($Exception& e) {
				return true;
			}
		}
		return $nc(RequiredModelMBean::rmmbMethodNames)->contains(name);
	}
}

$Object* RequiredModelMBean::getAttribute($String* attrName) {
	$useLocalCurrentObjectStackCache();
	if (attrName == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "attributeName must not be null"_s), "Exception occurred trying to get attribute of a RequiredModelMBean"_s);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	bool tracing = $nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE);
	if (tracing) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Entry with "_s, attrName}));
	}
	$var($Object, response, nullptr);
	try {
		if (this->modelMBeanInfo == nullptr) {
			$throwNew($AttributeNotFoundException, $$str({"getAttribute failed: ModelMBeanInfo not found for "_s, attrName}));
		}
		$var($ModelMBeanAttributeInfo, attrInfo, $nc(this->modelMBeanInfo)->getAttribute(attrName));
		$var($Descriptor, mmbDesc, $nc(this->modelMBeanInfo)->getMBeanDescriptor());
		if (attrInfo == nullptr) {
			$throwNew($AttributeNotFoundException, $$str({"getAttribute failed: ModelMBeanAttributeInfo not found for "_s, attrName}));
		}
		$var($Descriptor, attrDescr, $nc(attrInfo)->getDescriptor());
		if (attrDescr != nullptr) {
			if (!attrInfo->isReadable()) {
				$throwNew($AttributeNotFoundException, $$str({"getAttribute failed: "_s, attrName, " is not readable "_s}));
			}
			$assign(response, resolveForCacheValue(attrDescr));
			if (tracing) {
				$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"*** cached value is "_s, response}));
			}
			if (response == nullptr) {
				if (tracing) {
					$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "**** cached value is null - getting getMethod"_s);
				}
				$var($String, attrGetMethod, ($cast($String, attrDescr->getFieldValue("getMethod"_s))));
				if (attrGetMethod != nullptr) {
					if (tracing) {
						$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"invoking a getMethod for "_s, attrName}));
					}
					$var($Object, getResponse, invoke(attrGetMethod, $$new($ObjectArray, 0), $$new($StringArray, 0)));
					if (getResponse != nullptr) {
						if (tracing) {
							$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "got a non-null response from getMethod\n"_s);
						}
						$assign(response, getResponse);
						$var($Object, objctl, attrDescr->getFieldValue("currencyTimeLimit"_s));
						$var($String, ctl, nullptr);
						if (objctl != nullptr) {
							$assign(ctl, $of(objctl)->toString());
						} else {
							$assign(ctl, nullptr);
						}
						if ((ctl == nullptr) && (mmbDesc != nullptr)) {
							$assign(objctl, mmbDesc->getFieldValue("currencyTimeLimit"_s));
							if (objctl != nullptr) {
								$assign(ctl, $of(objctl)->toString());
							} else {
								$assign(ctl, nullptr);
							}
						}
						if ((ctl != nullptr) && !(ctl->equals("-1"_s))) {
							if (tracing) {
								$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "setting cached value and lastUpdatedTime in descriptor"_s);
							}
							attrDescr->setField("value"_s, response);
							$var($String, stamp, $String::valueOf(($$new($Date))->getTime()));
							attrDescr->setField("lastUpdatedTimeStamp"_s, stamp);
							attrInfo->setDescriptor(attrDescr);
							$nc(this->modelMBeanInfo)->setDescriptor(attrDescr, "attribute"_s);
							if (tracing) {
								$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"new descriptor is "_s, attrDescr}));
								$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"AttributeInfo descriptor is "_s, $(attrInfo->getDescriptor())}));
								$var($String, attStr, $nc($of($($nc(this->modelMBeanInfo)->getDescriptor(attrName, "attribute"_s))))->toString());
								$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"modelMBeanInfo: AttributeInfo descriptor is "_s, attStr}));
							}
						}
					} else {
						if (tracing) {
							$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "got a null response from getMethod\n"_s);
						}
						$assign(response, nullptr);
					}
				} else {
					$var($String, qualifier, ""_s);
					$assign(response, attrDescr->getFieldValue("value"_s));
					if (response == nullptr) {
						$assign(qualifier, "default "_s);
						$assign(response, attrDescr->getFieldValue("default"_s));
					}
					if (tracing) {
						$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"could not find getMethod for "_s, attrName, ", returning descriptor "_s, qualifier, "value"_s}));
					}
				}
			}
			$var($String, respType, attrInfo->getType());
			if (response != nullptr) {
				$var($String, responseClass, $of(response)->getClass()->getName());
				if (!$nc(respType)->equals(responseClass)) {
					bool wrongType = false;
					bool primitiveType = false;
					bool correspondingTypes = false;
					for (int32_t i = 0; i < $nc(RequiredModelMBean::primitiveTypes)->length; ++i) {
						if (respType->equals($nc(RequiredModelMBean::primitiveTypes)->get(i))) {
							primitiveType = true;
							if ($nc(responseClass)->equals($nc(RequiredModelMBean::primitiveWrappers)->get(i))) {
								correspondingTypes = true;
							}
							break;
						}
					}
					if (primitiveType) {
						if (!correspondingTypes) {
							wrongType = true;
						}
					} else {
						bool subtype = false;
						try {
							$Class* respClass = $of(response)->getClass();
							$var($ExceptionArray, caughException, $new($ExceptionArray, 1));
							$var($AccessControlContext, stack, $AccessController::getContext());
							$Class* c = $cast($Class, $nc(RequiredModelMBean::javaSecurityAccess)->doIntersectionPrivilege($$new($RequiredModelMBean$5, this, respType, respClass, caughException), stack, this->acc));
							if (caughException->get(0) != nullptr) {
								$throw(caughException->get(0));
							}
							subtype = $nc(c)->isInstance(response);
						} catch ($Exception& e) {
							subtype = false;
							if (tracing) {
								$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exception: "_s, static_cast<$Throwable*>(e));
							}
						}
						if (!subtype) {
							wrongType = true;
						}
					}
					if (wrongType) {
						if (tracing) {
							$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Wrong response type \'"_s, respType, "\'"_s}));
						}
						$throwNew($MBeanException, $$new($InvalidAttributeValueException, "Wrong value type received for get attribute"_s), "An exception occurred while trying to get an attribute value through a RequiredModelMBean"_s);
					}
				}
			}
		} else {
			if (tracing) {
				$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"getMethod failed "_s, attrName, " not in attributeDescriptor\n"_s}));
			}
			$throwNew($MBeanException, $$new($InvalidAttributeValueException, "Unable to resolve attribute value, no getMethod defined in descriptor for attribute"_s), "An exception occurred while trying to get an attribute value through a RequiredModelMBean"_s);
		}
	} catch ($MBeanException& mbe) {
		$throw(mbe);
	} catch ($AttributeNotFoundException& t) {
		$throw(t);
	} catch ($Exception& e) {
		if (tracing) {
			$var($String, var$0, $$str({"getMethod failed with "_s, $(e->getMessage()), " exception type "_s}));
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$concat(var$0, $(($of(e)->getClass())->toString())));
		}
		$throwNew($MBeanException, e, $$str({"An exception occurred while trying to get an attribute value: "_s, $(e->getMessage())}));
	}
	if (tracing) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
	return $of(response);
}

$AttributeList* RequiredModelMBean::getAttributes($StringArray* attrNames) {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $(RequiredModelMBean::class$->getName()), $$new($ObjectArray, {$of("Entry"_s)}));
	}
	if (attrNames == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "attributeNames must not be null"_s), "Exception occurred trying to get attributes of a RequiredModelMBean"_s);
	}
	$var($AttributeList, responseList, $new($AttributeList));
	for (int32_t i = 0; i < $nc(attrNames)->length; ++i) {
		try {
			responseList->add($$new($Attribute, attrNames->get(i), $(getAttribute(attrNames->get(i)))));
		} catch ($Exception& e) {
			if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
				$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Failed to get \""_s, attrNames->get(i), "\": "_s}), static_cast<$Throwable*>(e));
			}
		}
	}
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
	return responseList;
}

void RequiredModelMBean::setAttribute($Attribute* attribute) {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	bool tracing = $nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE);
	if (tracing) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if (attribute == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "attribute must not be null"_s), "Exception occurred trying to set an attribute of a RequiredModelMBean"_s);
	}
	$var($String, attrName, $nc(attribute)->getName());
	$var($Object, attrValue, attribute->getValue());
	bool updateDescriptor = false;
	$var($ModelMBeanAttributeInfo, attrInfo, $nc(this->modelMBeanInfo)->getAttribute(attrName));
	if (attrInfo == nullptr) {
		$throwNew($AttributeNotFoundException, $$str({"setAttribute failed: "_s, attrName, " is not found "_s}));
	}
	$var($Descriptor, mmbDesc, $nc(this->modelMBeanInfo)->getMBeanDescriptor());
	$var($Descriptor, attrDescr, $nc(attrInfo)->getDescriptor());
	if (attrDescr != nullptr) {
		if (!attrInfo->isWritable()) {
			$throwNew($AttributeNotFoundException, $$str({"setAttribute failed: "_s, attrName, " is not writable "_s}));
		}
		$var($String, attrSetMethod, ($cast($String, attrDescr->getFieldValue("setMethod"_s))));
		$var($String, attrGetMethod, ($cast($String, attrDescr->getFieldValue("getMethod"_s))));
		$var($String, attrType, attrInfo->getType());
		$var($Object, currValue, "Unknown"_s);
		try {
			$assign(currValue, this->getAttribute(attrName));
		} catch ($Throwable& t) {
		}
		$var($Attribute, oldAttr, $new($Attribute, attrName, currValue));
		if (attrSetMethod == nullptr) {
			if (attrValue != nullptr) {
				try {
					$Class* clazz = loadClass(attrType);
					if (!$nc(clazz)->isInstance(attrValue)) {
						$var($String, var$1, $$str({$(clazz->getName()), " expected, "_s}));
						$var($String, var$0, $$concat(var$1, $($of(attrValue)->getClass()->getName())));
						$throwNew($InvalidAttributeValueException, $$concat(var$0, " received."));
					}
				} catch ($ClassNotFoundException& x) {
					if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
						$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Class "_s, attrType, " for attribute "_s, attrName, " not found: "_s}), static_cast<$Throwable*>(x));
					}
				}
			}
			updateDescriptor = true;
		} else {
			invoke(attrSetMethod, ($$new($ObjectArray, {attrValue})), ($$new($StringArray, {attrType})));
		}
		$var($Object, objctl, attrDescr->getFieldValue("currencyTimeLimit"_s));
		$var($String, ctl, nullptr);
		if (objctl != nullptr) {
			$assign(ctl, $of(objctl)->toString());
		} else {
			$assign(ctl, nullptr);
		}
		if ((ctl == nullptr) && (mmbDesc != nullptr)) {
			$assign(objctl, mmbDesc->getFieldValue("currencyTimeLimit"_s));
			if (objctl != nullptr) {
				$assign(ctl, $of(objctl)->toString());
			} else {
				$assign(ctl, nullptr);
			}
		}
		bool updateCache = ((ctl != nullptr) && !(ctl->equals("-1"_s)));
		if (attrSetMethod == nullptr && !updateCache && attrGetMethod != nullptr) {
			$throwNew($MBeanException, $$new($ServiceNotFoundException, $$str({"No setMethod field is defined in the descriptor for "_s, attrName, " attribute and caching is not enabled for it"_s})));
		}
		if (updateCache || updateDescriptor) {
			if (tracing) {
				$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"setting cached value of "_s, attrName, " to "_s, attrValue}));
			}
			attrDescr->setField("value"_s, attrValue);
			if (updateCache) {
				$var($String, currtime, $String::valueOf(($$new($Date))->getTime()));
				attrDescr->setField("lastUpdatedTimeStamp"_s, currtime);
			}
			attrInfo->setDescriptor(attrDescr);
			$nc(this->modelMBeanInfo)->setDescriptor(attrDescr, "attribute"_s);
			if (tracing) {
				$var($StringBuilder, strb, $$new($StringBuilder)->append("new descriptor is "_s)->append($of(attrDescr))->append(". AttributeInfo descriptor is "_s)->append($($of(attrInfo->getDescriptor())))->append(". AttributeInfo descriptor is "_s)->append($($of($nc(this->modelMBeanInfo)->getDescriptor(attrName, "attribute"_s)))));
				$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, static_cast<$Supplier*>($$new(RequiredModelMBean$$Lambda$toString, static_cast<$StringBuilder*>(strb))));
			}
		}
		if (tracing) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "sending sendAttributeNotification"_s);
		}
		sendAttributeChangeNotification(oldAttr, attribute);
	} else {
		if (tracing) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"setMethod failed "_s, attrName, " not in attributeDescriptor\n"_s}));
		}
		$throwNew($InvalidAttributeValueException, "Unable to resolve attribute value, no defined in descriptor for attribute"_s);
	}
	if (tracing) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
}

$AttributeList* RequiredModelMBean::setAttributes($AttributeList* attributes) {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if (attributes == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "attributes must not be null"_s), "Exception occurred trying to set attributes of a RequiredModelMBean"_s);
	}
	$var($AttributeList, responseList, $new($AttributeList));
	{
		$var($Iterator, i$, $nc($($nc(attributes)->asList()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Attribute, attr, $cast($Attribute, i$->next()));
			{
				try {
					setAttribute(attr);
					responseList->add(attr);
				} catch ($Exception& excep) {
					responseList->remove($of(attr));
				}
			}
		}
	}
	return responseList;
}

$ModelMBeanInfo* RequiredModelMBean::createDefaultModelMBeanInfo() {
	return ($new($ModelMBeanInfoSupport, ($($of(this)->getClass()->getName())), "Default ModelMBean"_s, nullptr, nullptr, nullptr, nullptr));
}

void RequiredModelMBean::writeToLog($String* logFileName, $String* logEntry) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Notification Logging to "_s, logFileName, ": "_s, logEntry}));
		}
		if ((logFileName == nullptr) || (logEntry == nullptr)) {
			if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
				$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Bad input parameters, will not log this entry."_s);
			}
			return;
		}
		$var($FileOutputStream, fos, $new($FileOutputStream, logFileName, true));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($PrintStream, logOut, $new($PrintStream, static_cast<$OutputStream*>(fos)));
					logOut->println(logEntry);
					logOut->close();
					if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
						$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Successfully opened log "_s, logFileName}));
					}
				} catch ($Exception& e) {
					if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
						$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Exception "_s, $(e->toString()), " trying to write to the Notification log file "_s, logFileName}));
					}
					$throw(e);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				fos->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void RequiredModelMBean::addNotificationListener($NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if (listener == nullptr) {
		$throwNew($IllegalArgumentException, "notification listener must not be null"_s);
	}
	if (this->generalBroadcaster == nullptr) {
		$set(this, generalBroadcaster, $new($NotificationBroadcasterSupport));
	}
	$nc(this->generalBroadcaster)->addNotificationListener(listener, filter, handback);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "NotificationListener added"_s);
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
}

void RequiredModelMBean::removeNotificationListener($NotificationListener* listener) {
	if (listener == nullptr) {
		$throwNew($ListenerNotFoundException, "Notification listener is null"_s);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if (this->generalBroadcaster == nullptr) {
		$throwNew($ListenerNotFoundException, "No notification listeners registered"_s);
	}
	$nc(this->generalBroadcaster)->removeNotificationListener(listener);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
}

void RequiredModelMBean::removeNotificationListener($NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	if (listener == nullptr) {
		$throwNew($ListenerNotFoundException, "Notification listener is null"_s);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if (this->generalBroadcaster == nullptr) {
		$throwNew($ListenerNotFoundException, "No notification listeners registered"_s);
	}
	$nc(this->generalBroadcaster)->removeNotificationListener(listener, filter, handback);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
}

void RequiredModelMBean::sendNotification($Notification* ntfyObj) {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if (ntfyObj == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "notification object must not be null"_s), "Exception occurred trying to send a notification from a RequiredModelMBean"_s);
	}
	$var($Descriptor, ntfyDesc, $nc(this->modelMBeanInfo)->getDescriptor($($nc(ntfyObj)->getType()), "notification"_s));
	$var($Descriptor, mmbDesc, $nc(this->modelMBeanInfo)->getMBeanDescriptor());
	if (ntfyDesc != nullptr) {
		$var($String, logging, $cast($String, ntfyDesc->getFieldValue("log"_s)));
		if (logging == nullptr) {
			if (mmbDesc != nullptr) {
				$assign(logging, $cast($String, mmbDesc->getFieldValue("log"_s)));
			}
		}
		bool var$0 = (logging != nullptr);
		if (var$0) {
			bool var$1 = logging->equalsIgnoreCase("t"_s);
			var$0 = (var$1 || logging->equalsIgnoreCase("true"_s));
		}
		if (var$0) {
			$var($String, logfile, $cast($String, ntfyDesc->getFieldValue("logfile"_s)));
			if (logfile == nullptr) {
				if (mmbDesc != nullptr) {
					$assign(logfile, $cast($String, mmbDesc->getFieldValue("logfile"_s)));
				}
			}
			if (logfile != nullptr) {
				try {
					$var($String, var$6, $$str({"LogMsg: "_s, ($(($$new($Date, $nc(ntfyObj)->getTimeStamp()))->toString())), " "_s}));
					$var($String, var$5, $$concat(var$6, $($nc(ntfyObj)->getType())));
					$var($String, var$4, $$concat(var$5, " "));
					$var($String, var$3, $$concat(var$4, $(ntfyObj->getMessage())));
					$var($String, var$2, $$concat(var$3, " Severity = "));
					writeToLog(logfile, $$concat(var$2, $cast($String, $(ntfyDesc->getFieldValue("severity"_s)))));
				} catch ($Exception& e) {
					if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::DEBUG)) {
						$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::DEBUG, $$str({"Failed to log "_s, $($nc(ntfyObj)->getType()), " notification: "_s}), static_cast<$Throwable*>(e));
					}
				}
			}
		}
	}
	if (this->generalBroadcaster != nullptr) {
		$nc(this->generalBroadcaster)->sendNotification(ntfyObj);
	}
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "sendNotification sent provided notification object"_s);
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
}

void RequiredModelMBean::sendNotification($String* ntfyText) {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if (ntfyText == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "notification message must not be null"_s), "Exception occurred trying to send a text notification from a ModelMBean"_s);
	}
	$var($Notification, myNtfyObj, $new($Notification, "jmx.modelmbean.generic"_s, $of(this), (int64_t)1, ntfyText));
	sendNotification(myNtfyObj);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Notification sent"_s);
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
}

bool RequiredModelMBean::hasNotification($ModelMBeanInfo* info, $String* notifName) {
	$init(RequiredModelMBean);
	try {
		if (info == nullptr) {
			return false;
		} else {
			return ($nc(info)->getNotification(notifName) != nullptr);
		}
	} catch ($MBeanException& x) {
		return false;
	} catch ($RuntimeOperationsException& r) {
		return false;
	}
	$shouldNotReachHere();
}

$ModelMBeanNotificationInfo* RequiredModelMBean::makeGenericInfo() {
	$init(RequiredModelMBean);
	$useLocalCurrentObjectStackCache();
	$var($Descriptor, genericDescriptor, $new($DescriptorSupport, $$new($StringArray, {
		"name=GENERIC"_s,
		"descriptorType=notification"_s,
		"log=T"_s,
		"severity=6"_s,
		"displayName=jmx.modelmbean.generic"_s
	})));
	return $new($ModelMBeanNotificationInfo, $$new($StringArray, {"jmx.modelmbean.generic"_s}), "GENERIC"_s, "A text notification has been issued by the managed resource"_s, genericDescriptor);
}

$ModelMBeanNotificationInfo* RequiredModelMBean::makeAttributeChangeInfo() {
	$init(RequiredModelMBean);
	$useLocalCurrentObjectStackCache();
	$var($Descriptor, attributeDescriptor, $new($DescriptorSupport, $$new($StringArray, {
		"name=ATTRIBUTE_CHANGE"_s,
		"descriptorType=notification"_s,
		"log=T"_s,
		"severity=6"_s,
		"displayName=jmx.attribute.change"_s
	})));
	return $new($ModelMBeanNotificationInfo, $$new($StringArray, {"jmx.attribute.change"_s}), "ATTRIBUTE_CHANGE"_s, "Signifies that an observed MBean attribute value has changed"_s, attributeDescriptor);
}

$MBeanNotificationInfoArray* RequiredModelMBean::getNotificationInfo() {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	bool hasGeneric = hasNotification(this->modelMBeanInfo, "GENERIC"_s);
	bool hasAttributeChange = hasNotification(this->modelMBeanInfo, "ATTRIBUTE_CHANGE"_s);
	$var($ModelMBeanNotificationInfoArray, currInfo, $fcast($ModelMBeanNotificationInfoArray, $nc(this->modelMBeanInfo)->getNotifications()));
	int32_t len = ((currInfo == nullptr ? 0 : $nc(currInfo)->length) + (hasGeneric ? 0 : 1) + (hasAttributeChange ? 0 : 1));
	$var($ModelMBeanNotificationInfoArray, respInfo, $new($ModelMBeanNotificationInfoArray, len));
	int32_t inserted = 0;
	if (!hasGeneric) {
		respInfo->set(inserted++, $(makeGenericInfo()));
	}
	if (!hasAttributeChange) {
		respInfo->set(inserted++, $(makeAttributeChangeInfo()));
	}
	int32_t count = currInfo->length;
	int32_t offset = inserted;
	for (int32_t j = 0; j < count; ++j) {
		respInfo->set(offset + j, currInfo->get(j));
	}
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
	return $fcast($MBeanNotificationInfoArray, respInfo);
}

void RequiredModelMBean::addAttributeChangeNotificationListener($NotificationListener* inlistener, $String* inAttributeName, Object$* inhandback) {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if (inlistener == nullptr) {
		$throwNew($IllegalArgumentException, "Listener to be registered must not be null"_s);
	}
	if (this->attributeBroadcaster == nullptr) {
		$set(this, attributeBroadcaster, $new($NotificationBroadcasterSupport));
	}
	$var($AttributeChangeNotificationFilter, currFilter, $new($AttributeChangeNotificationFilter));
	$var($MBeanAttributeInfoArray, attrInfo, $nc(this->modelMBeanInfo)->getAttributes());
	bool found = false;
	if (inAttributeName == nullptr) {
		if ((attrInfo != nullptr) && (attrInfo->length > 0)) {
			for (int32_t i = 0; i < attrInfo->length; ++i) {
				currFilter->enableAttribute($($nc(attrInfo->get(i))->getName()));
			}
		}
	} else {
		if ((attrInfo != nullptr) && (attrInfo->length > 0)) {
			for (int32_t i = 0; i < attrInfo->length; ++i) {
				if ($nc(inAttributeName)->equals($($nc(attrInfo->get(i))->getName()))) {
					found = true;
					currFilter->enableAttribute(inAttributeName);
					break;
				}
			}
		}
		if (!found) {
			$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "The attribute name does not exist"_s), "Exception occurred trying to add an AttributeChangeNotification listener"_s);
		}
	}
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$var($Vector, enabledAttrs, currFilter->getEnabledAttributes());
		$var($String, s, ($nc(enabledAttrs)->size() > 1) ? $str({"["_s, $cast($String, $($nc(enabledAttrs)->firstElement())), ", ...]"_s}) : enabledAttrs->toString());
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Set attribute change filter to "_s, s}));
	}
	$nc(this->attributeBroadcaster)->addNotificationListener(inlistener, currFilter, inhandback);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Notification listener added for "_s, inAttributeName}));
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
}

void RequiredModelMBean::removeAttributeChangeNotificationListener($NotificationListener* inlistener, $String* inAttributeName) {
	$useLocalCurrentObjectStackCache();
	if (inlistener == nullptr) {
		$throwNew($ListenerNotFoundException, "Notification listener is null"_s);
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $(RequiredModelMBean::class$->getName()), $$new($ObjectArray, {$of("Entry"_s)}));
	}
	if (this->attributeBroadcaster == nullptr) {
		$throwNew($ListenerNotFoundException, "No attribute change notification listeners registered"_s);
	}
	$var($MBeanAttributeInfoArray, attrInfo, $nc(this->modelMBeanInfo)->getAttributes());
	bool found = false;
	if ((attrInfo != nullptr) && (attrInfo->length > 0)) {
		for (int32_t i = 0; i < attrInfo->length; ++i) {
			if ($nc($($nc(attrInfo->get(i))->getName()))->equals(inAttributeName)) {
				found = true;
				break;
			}
		}
	}
	if ((!found) && (inAttributeName != nullptr)) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "Invalid attribute name"_s), "Exception occurred trying to remove attribute change notification listener"_s);
	}
	$nc(this->attributeBroadcaster)->removeNotificationListener(inlistener);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
}

void RequiredModelMBean::sendAttributeChangeNotification($AttributeChangeNotification* ntfyObj) {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if (ntfyObj == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "attribute change notification object must not be null"_s), "Exception occurred trying to send attribute change notification of a ModelMBean"_s);
	}
	$var($Object, oldv, $nc(ntfyObj)->getOldValue());
	$var($Object, newv, ntfyObj->getNewValue());
	if (oldv == nullptr) {
		$assign(oldv, "null"_s);
	}
	if (newv == nullptr) {
		$assign(newv, "null"_s);
	}
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$var($String, var$2, $$str({"Sending AttributeChangeNotification with "_s, $(ntfyObj->getAttributeName())}));
		$var($String, var$1, $$concat(var$2, $(ntfyObj->getAttributeType())));
		$var($String, var$0, $$concat(var$1, $(ntfyObj->getNewValue())));
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, $$concat(var$0, $(ntfyObj->getOldValue())));
	}
	$var($Descriptor, ntfyDesc, $nc(this->modelMBeanInfo)->getDescriptor($(ntfyObj->getType()), "notification"_s));
	$var($Descriptor, mmbDesc, $nc(this->modelMBeanInfo)->getMBeanDescriptor());
	$var($String, logging, nullptr);
	$var($String, logfile, nullptr);
	if (ntfyDesc != nullptr) {
		$assign(logging, $cast($String, ntfyDesc->getFieldValue("log"_s)));
		if (logging == nullptr) {
			if (mmbDesc != nullptr) {
				$assign(logging, $cast($String, mmbDesc->getFieldValue("log"_s)));
			}
		}
		bool var$3 = (logging != nullptr);
		if (var$3) {
			bool var$4 = logging->equalsIgnoreCase("t"_s);
			var$3 = (var$4 || logging->equalsIgnoreCase("true"_s));
		}
		if (var$3) {
			$assign(logfile, $cast($String, ntfyDesc->getFieldValue("logfile"_s)));
			if (logfile == nullptr) {
				if (mmbDesc != nullptr) {
					$assign(logfile, $cast($String, mmbDesc->getFieldValue("logfile"_s)));
				}
			}
			if (logfile != nullptr) {
				try {
					$var($String, var$13, $$str({"LogMsg: "_s, ($(($$new($Date, ntfyObj->getTimeStamp()))->toString())), " "_s}));
					$var($String, var$12, $$concat(var$13, $(ntfyObj->getType())));
					$var($String, var$11, $$concat(var$12, " "));
					$var($String, var$10, $$concat(var$11, $(ntfyObj->getMessage())));
					$var($String, var$9, $$concat(var$10, " Name = "));
					$var($String, var$8, $$concat(var$9, $(ntfyObj->getAttributeName())));
					$var($String, var$7, $$concat(var$8, " Old value = "));
					$var($String, var$6, $$concat(var$7, $(oldv)));
					$var($String, var$5, $$concat(var$6, " New value = "));
					writeToLog(logfile, $$concat(var$5, $(newv)));
				} catch ($Exception& e) {
					if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::DEBUG)) {
						$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::DEBUG, $$str({"Failed to log "_s, $(ntfyObj->getType()), " notification: "_s}), static_cast<$Throwable*>(e));
					}
				}
			}
		}
	} else if (mmbDesc != nullptr) {
		$assign(logging, $cast($String, mmbDesc->getFieldValue("log"_s)));
		bool var$14 = (logging != nullptr);
		if (var$14) {
			bool var$15 = logging->equalsIgnoreCase("t"_s);
			var$14 = (var$15 || logging->equalsIgnoreCase("true"_s));
		}
		if (var$14) {
			$assign(logfile, $cast($String, mmbDesc->getFieldValue("logfile"_s)));
			if (logfile != nullptr) {
				try {
					$var($String, var$24, $$str({"LogMsg: "_s, ($(($$new($Date, ntfyObj->getTimeStamp()))->toString())), " "_s}));
					$var($String, var$23, $$concat(var$24, $(ntfyObj->getType())));
					$var($String, var$22, $$concat(var$23, " "));
					$var($String, var$21, $$concat(var$22, $(ntfyObj->getMessage())));
					$var($String, var$20, $$concat(var$21, " Name = "));
					$var($String, var$19, $$concat(var$20, $(ntfyObj->getAttributeName())));
					$var($String, var$18, $$concat(var$19, " Old value = "));
					$var($String, var$17, $$concat(var$18, $(oldv)));
					$var($String, var$16, $$concat(var$17, " New value = "));
					writeToLog(logfile, $$concat(var$16, $(newv)));
				} catch ($Exception& e) {
					if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::DEBUG)) {
						$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::DEBUG, $$str({"Failed to log "_s, $(ntfyObj->getType()), " notification: "_s}), static_cast<$Throwable*>(e));
					}
				}
			}
		}
	}
	if (this->attributeBroadcaster != nullptr) {
		$nc(this->attributeBroadcaster)->sendNotification(ntfyObj);
	}
	if (this->generalBroadcaster != nullptr) {
		$nc(this->generalBroadcaster)->sendNotification(ntfyObj);
	}
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "sent notification"_s);
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
}

void RequiredModelMBean::sendAttributeChangeNotification($Attribute* inOldVal, $Attribute* inNewVal) {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Entry"_s);
	}
	if ((inOldVal == nullptr) || (inNewVal == nullptr)) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "Attribute object must not be null"_s), "Exception occurred trying to send attribute change notification of a ModelMBean"_s);
	}
	if (!($nc($($nc(inOldVal)->getName()))->equals($($nc(inNewVal)->getName())))) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "Attribute names are not the same"_s), "Exception occurred trying to send attribute change notification of a ModelMBean"_s);
	}
	$var($Object, newVal, $nc(inNewVal)->getValue());
	$var($Object, oldVal, $nc(inOldVal)->getValue());
	$var($String, className, "unknown"_s);
	if (newVal != nullptr) {
		$assign(className, $of(newVal)->getClass()->getName());
	}
	if (oldVal != nullptr) {
		$assign(className, $of(oldVal)->getClass()->getName());
	}
	int64_t var$0 = (($$new($Date))->getTime());
	$var($String, var$1, "AttributeChangeDetected"_s);
	$var($String, var$2, inOldVal->getName());
	$var($String, var$3, className);
	$var($Object, var$4, inOldVal->getValue());
	$var($AttributeChangeNotification, myNtfyObj, $new($AttributeChangeNotification, this, 1, var$0, var$1, var$2, var$3, var$4, $(inNewVal->getValue())));
	sendAttributeChangeNotification(myNtfyObj);
	if ($nc($JmxProperties::MODELMBEAN_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MODELMBEAN_LOGGER)->log($System$Logger$Level::TRACE, "Exit"_s);
	}
}

$ClassLoaderRepository* RequiredModelMBean::getClassLoaderRepository() {
	return $MBeanServerFactory::getClassLoaderRepository(this->server);
}

$Class* RequiredModelMBean::loadClass($String* className) {
	$useLocalCurrentObjectStackCache();
	$var($AccessControlContext, stack, $AccessController::getContext());
	$var($ClassNotFoundExceptionArray, caughtException, $new($ClassNotFoundExceptionArray, 1));
	$Class* c = $cast($Class, $nc(RequiredModelMBean::javaSecurityAccess)->doIntersectionPrivilege($$new($RequiredModelMBean$6, this, className, caughtException), stack, this->acc));
	if (caughtException->get(0) != nullptr) {
		$throw(caughtException->get(0));
	}
	return c;
}

$ObjectName* RequiredModelMBean::preRegister($MBeanServer* server, $ObjectName* name) {
	if (name == nullptr) {
		$throwNew($NullPointerException, "name of RequiredModelMBean to registered is null"_s);
	}
	$set(this, server, server);
	return name;
}

void RequiredModelMBean::postRegister($Boolean* registrationDone) {
	this->registered = $nc(registrationDone)->booleanValue();
}

void RequiredModelMBean::preDeregister() {
}

void RequiredModelMBean::postDeregister() {
	this->registered = false;
	$set(this, server, nullptr);
}

void clinit$RequiredModelMBean($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(RequiredModelMBean::javaSecurityAccess, $SharedSecrets::getJavaSecurityAccess());
	$init($Integer);
	$init($Long);
	$init($Boolean);
	$init($Double);
	$init($Float);
	$init($Short);
	$init($Byte);
	$init($Character);
	$assignStatic(RequiredModelMBean::primitiveClasses, $new($ClassArray, {
		$Integer::TYPE,
		$Long::TYPE,
		$Boolean::TYPE,
		$Double::TYPE,
		$Float::TYPE,
		$Short::TYPE,
		$Byte::TYPE,
		$Character::TYPE
	}));
	$assignStatic(RequiredModelMBean::primitiveClassMap, $new($HashMap));
	{
		for (int32_t i = 0; i < $nc(RequiredModelMBean::primitiveClasses)->length; ++i) {
			$Class* c = $nc(RequiredModelMBean::primitiveClasses)->get(i);
			$nc(RequiredModelMBean::primitiveClassMap)->put($($nc(c)->getName()), c);
		}
	}
	{
		$init($Void);
		$assignStatic(RequiredModelMBean::primitiveTypes, $new($StringArray, {
			$($nc($Boolean::TYPE)->getName()),
			$($nc($Byte::TYPE)->getName()),
			$($nc($Character::TYPE)->getName()),
			$($nc($Short::TYPE)->getName()),
			$($nc($Integer::TYPE)->getName()),
			$($nc($Long::TYPE)->getName()),
			$($nc($Float::TYPE)->getName()),
			$($nc($Double::TYPE)->getName()),
			$($nc($Void::TYPE)->getName())
		}));
		$assignStatic(RequiredModelMBean::primitiveWrappers, $new($StringArray, {
			$($Boolean::class$->getName()),
			$($Byte::class$->getName()),
			$($Character::class$->getName()),
			$($Short::class$->getName()),
			$($Integer::class$->getName()),
			$($Long::class$->getName()),
			$($Float::class$->getName()),
			$($Double::class$->getName()),
			$($Void::class$->getName())
		}));
	}
}

RequiredModelMBean::RequiredModelMBean() {
}

$Class* RequiredModelMBean::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(RequiredModelMBean$$Lambda$toString::classInfo$.name)) {
			return RequiredModelMBean$$Lambda$toString::load$(name, initialize);
		}
	}
	$loadClass(RequiredModelMBean, name, initialize, &_RequiredModelMBean_ClassInfo_, clinit$RequiredModelMBean, allocate$RequiredModelMBean);
	return class$;
}

$Class* RequiredModelMBean::class$ = nullptr;

		} // modelmbean
	} // management
} // javax