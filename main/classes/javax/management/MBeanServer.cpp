#include <javax/management/MBeanServer.h>

#include <java/io/ObjectInputStream.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/UnsupportedOperationException.h>
#include <javax/management/ObjectInstance.h>
#include <javax/management/ObjectName.h>
#include <javax/management/loading/ClassLoaderRepository.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MBeanServerConnection = ::javax::management::MBeanServerConnection;
using $ObjectInstance = ::javax::management::ObjectInstance;
using $ObjectName = ::javax::management::ObjectName;
using $ClassLoaderRepository = ::javax::management::loading::ClassLoaderRepository;

namespace javax {
	namespace management {

$NamedAttribute MBeanServer_Attribute_var$0[] = {
	{"since", 's', "1.5"},
	{}
};

$CompoundAttribute _MBeanServer_MethodAnnotations_deserialize0[] = {
	{"Ljava/lang/Deprecated;", MBeanServer_Attribute_var$0},
	{}
};

$NamedAttribute MBeanServer_Attribute_var$1[] = {
	{"since", 's', "1.5"},
	{}
};

$CompoundAttribute _MBeanServer_MethodAnnotations_deserialize1[] = {
	{"Ljava/lang/Deprecated;", MBeanServer_Attribute_var$1},
	{}
};

$NamedAttribute MBeanServer_Attribute_var$2[] = {
	{"since", 's', "1.5"},
	{}
};

$CompoundAttribute _MBeanServer_MethodAnnotations_deserialize2[] = {
	{"Ljava/lang/Deprecated;", MBeanServer_Attribute_var$2},
	{}
};

$MethodInfo _MBeanServer_MethodInfo_[] = {
	{"addNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/ObjectName;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"createMBean", "(Ljava/lang/String;Ljavax/management/ObjectName;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC | $ABSTRACT},
	{"createMBean", "(Ljava/lang/String;Ljavax/management/ObjectName;Ljavax/management/ObjectName;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC | $ABSTRACT},
	{"createMBean", "(Ljava/lang/String;Ljavax/management/ObjectName;[Ljava/lang/Object;[Ljava/lang/String;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC | $ABSTRACT},
	{"createMBean", "(Ljava/lang/String;Ljavax/management/ObjectName;Ljavax/management/ObjectName;[Ljava/lang/Object;[Ljava/lang/String;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC | $ABSTRACT},
	{"deserialize", "(Ljavax/management/ObjectName;[B)Ljava/io/ObjectInputStream;", nullptr, $PUBLIC | $DEPRECATED, nullptr, "javax.management.InstanceNotFoundException,javax.management.OperationsException", nullptr, _MBeanServer_MethodAnnotations_deserialize0},
	{"deserialize", "(Ljava/lang/String;[B)Ljava/io/ObjectInputStream;", nullptr, $PUBLIC | $DEPRECATED, nullptr, "javax.management.OperationsException,javax.management.ReflectionException", nullptr, _MBeanServer_MethodAnnotations_deserialize1},
	{"deserialize", "(Ljava/lang/String;Ljavax/management/ObjectName;[B)Ljava/io/ObjectInputStream;", nullptr, $PUBLIC | $DEPRECATED, nullptr, "javax.management.InstanceNotFoundException,javax.management.OperationsException,javax.management.ReflectionException", nullptr, _MBeanServer_MethodAnnotations_deserialize2},
	{"getAttribute", "(Ljavax/management/ObjectName;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAttributes", "(Ljavax/management/ObjectName;[Ljava/lang/String;)Ljavax/management/AttributeList;", nullptr, $PUBLIC | $ABSTRACT},
	{"getClassLoader", "(Ljavax/management/ObjectName;)Ljava/lang/ClassLoader;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.InstanceNotFoundException"},
	{"getClassLoaderFor", "(Ljavax/management/ObjectName;)Ljava/lang/ClassLoader;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.InstanceNotFoundException"},
	{"getClassLoaderRepository", "()Ljavax/management/loading/ClassLoaderRepository;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDefaultDomain", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDomains", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMBeanCount", "()Ljava/lang/Integer;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMBeanInfo", "(Ljavax/management/ObjectName;)Ljavax/management/MBeanInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"getObjectInstance", "(Ljavax/management/ObjectName;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC | $ABSTRACT},
	{"instantiate", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.ReflectionException,javax.management.MBeanException"},
	{"instantiate", "(Ljava/lang/String;Ljavax/management/ObjectName;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.ReflectionException,javax.management.MBeanException,javax.management.InstanceNotFoundException"},
	{"instantiate", "(Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.ReflectionException,javax.management.MBeanException"},
	{"instantiate", "(Ljava/lang/String;Ljavax/management/ObjectName;[Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.ReflectionException,javax.management.MBeanException,javax.management.InstanceNotFoundException"},
	{"invoke", "(Ljavax/management/ObjectName;Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"isInstanceOf", "(Ljavax/management/ObjectName;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isRegistered", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"queryMBeans", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set;", nullptr, $PUBLIC | $ABSTRACT},
	{"queryNames", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set;", nullptr, $PUBLIC | $ABSTRACT},
	{"registerMBean", "(Ljava/lang/Object;Ljavax/management/ObjectName;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.management.InstanceAlreadyExistsException,javax.management.MBeanRegistrationException,javax.management.NotCompliantMBeanException"},
	{"unregisterMBean", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setAttribute", "(Ljavax/management/ObjectName;Ljavax/management/Attribute;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setAttributes", "(Ljavax/management/ObjectName;Ljavax/management/AttributeList;)Ljavax/management/AttributeList;", nullptr, $PUBLIC | $ABSTRACT},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/ObjectName;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MBeanServer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.MBeanServer",
	nullptr,
	"javax.management.MBeanServerConnection",
	nullptr,
	_MBeanServer_MethodInfo_
};

$Object* allocate$MBeanServer($Class* clazz) {
	return $of($alloc(MBeanServer));
}

$ObjectInputStream* MBeanServer::deserialize($ObjectName* name, $bytes* data) {
	$throwNew($UnsupportedOperationException, "Not supported."_s);
	$shouldNotReachHere();
}

$ObjectInputStream* MBeanServer::deserialize($String* className, $bytes* data) {
	$throwNew($UnsupportedOperationException, "Not supported."_s);
	$shouldNotReachHere();
}

$ObjectInputStream* MBeanServer::deserialize($String* className, $ObjectName* loaderName, $bytes* data) {
	$throwNew($UnsupportedOperationException, "Not supported."_s);
	$shouldNotReachHere();
}

$Class* MBeanServer::load$($String* name, bool initialize) {
	$loadClass(MBeanServer, name, initialize, &_MBeanServer_ClassInfo_, allocate$MBeanServer);
	return class$;
}

$Class* MBeanServer::class$ = nullptr;

	} // management
} // javax