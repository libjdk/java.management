#include <com/sun/jmx/remote/security/MBeanServerAccessController.h>

#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Set.h>
#include <javax/management/Attribute.h>
#include <javax/management/AttributeList.h>
#include <javax/management/MBeanInfo.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationListener.h>
#include <javax/management/ObjectInstance.h>
#include <javax/management/ObjectName.h>
#include <javax/management/QueryExp.h>
#include <javax/management/loading/ClassLoaderRepository.h>
#include <jcpp.h>

using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Set = ::java::util::Set;
using $Attribute = ::javax::management::Attribute;
using $AttributeList = ::javax::management::AttributeList;
using $MBeanInfo = ::javax::management::MBeanInfo;
using $MBeanServer = ::javax::management::MBeanServer;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationListener = ::javax::management::NotificationListener;
using $ObjectInstance = ::javax::management::ObjectInstance;
using $ObjectName = ::javax::management::ObjectName;
using $QueryExp = ::javax::management::QueryExp;
using $ClassLoaderRepository = ::javax::management::loading::ClassLoaderRepository;
using $MBeanServerForwarder = ::javax::management::remote::MBeanServerForwarder;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

$CompoundAttribute _MBeanServerAccessController_MethodAnnotations_deserialize13[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _MBeanServerAccessController_MethodAnnotations_deserialize14[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _MBeanServerAccessController_MethodAnnotations_deserialize15[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _MBeanServerAccessController_FieldInfo_[] = {
	{"mbs", "Ljavax/management/MBeanServer;", nullptr, $PRIVATE, $field(MBeanServerAccessController, mbs)},
	{}
};

$MethodInfo _MBeanServerAccessController_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MBeanServerAccessController::*)()>(&MBeanServerAccessController::init$))},
	{"addNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException"},
	{"addNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/ObjectName;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException"},
	{"checkClassLoader", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(MBeanServerAccessController::*)(Object$*)>(&MBeanServerAccessController::checkClassLoader))},
	{"checkCreate", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"checkMLetMethods", "(Ljavax/management/ObjectName;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(MBeanServerAccessController::*)($ObjectName*,$String*)>(&MBeanServerAccessController::checkMLetMethods)), "javax.management.InstanceNotFoundException"},
	{"checkRead", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"checkUnregister", "(Ljavax/management/ObjectName;)V", nullptr, $PROTECTED},
	{"checkWrite", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"createMBean", "(Ljava/lang/String;Ljavax/management/ObjectName;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.InstanceAlreadyExistsException,javax.management.MBeanRegistrationException,javax.management.MBeanException,javax.management.NotCompliantMBeanException"},
	{"createMBean", "(Ljava/lang/String;Ljavax/management/ObjectName;[Ljava/lang/Object;[Ljava/lang/String;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.InstanceAlreadyExistsException,javax.management.MBeanRegistrationException,javax.management.MBeanException,javax.management.NotCompliantMBeanException"},
	{"createMBean", "(Ljava/lang/String;Ljavax/management/ObjectName;Ljavax/management/ObjectName;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.InstanceAlreadyExistsException,javax.management.MBeanRegistrationException,javax.management.MBeanException,javax.management.NotCompliantMBeanException,javax.management.InstanceNotFoundException"},
	{"createMBean", "(Ljava/lang/String;Ljavax/management/ObjectName;Ljavax/management/ObjectName;[Ljava/lang/Object;[Ljava/lang/String;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.InstanceAlreadyExistsException,javax.management.MBeanRegistrationException,javax.management.MBeanException,javax.management.NotCompliantMBeanException,javax.management.InstanceNotFoundException"},
	{"deserialize", "(Ljavax/management/ObjectName;[B)Ljava/io/ObjectInputStream;", nullptr, $PUBLIC | $DEPRECATED, nullptr, "javax.management.InstanceNotFoundException,javax.management.OperationsException", nullptr, _MBeanServerAccessController_MethodAnnotations_deserialize13},
	{"deserialize", "(Ljava/lang/String;[B)Ljava/io/ObjectInputStream;", nullptr, $PUBLIC | $DEPRECATED, nullptr, "javax.management.OperationsException,javax.management.ReflectionException", nullptr, _MBeanServerAccessController_MethodAnnotations_deserialize14},
	{"deserialize", "(Ljava/lang/String;Ljavax/management/ObjectName;[B)Ljava/io/ObjectInputStream;", nullptr, $PUBLIC | $DEPRECATED, nullptr, "javax.management.InstanceNotFoundException,javax.management.OperationsException,javax.management.ReflectionException", nullptr, _MBeanServerAccessController_MethodAnnotations_deserialize15},
	{"getAttribute", "(Ljavax/management/ObjectName;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.AttributeNotFoundException,javax.management.InstanceNotFoundException,javax.management.ReflectionException"},
	{"getAttributes", "(Ljavax/management/ObjectName;[Ljava/lang/String;)Ljavax/management/AttributeList;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.ReflectionException"},
	{"getClassLoader", "(Ljavax/management/ObjectName;)Ljava/lang/ClassLoader;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException"},
	{"getClassLoaderFor", "(Ljavax/management/ObjectName;)Ljava/lang/ClassLoader;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException"},
	{"getClassLoaderRepository", "()Ljavax/management/loading/ClassLoaderRepository;", nullptr, $PUBLIC},
	{"getDefaultDomain", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDomains", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMBeanCount", "()Ljava/lang/Integer;", nullptr, $PUBLIC},
	{"getMBeanInfo", "(Ljavax/management/ObjectName;)Ljavax/management/MBeanInfo;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.IntrospectionException,javax.management.ReflectionException"},
	{"getMBeanServer", "()Ljavax/management/MBeanServer;", nullptr, $PUBLIC},
	{"getObjectInstance", "(Ljavax/management/ObjectName;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException"},
	{"instantiate", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.MBeanException"},
	{"instantiate", "(Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.MBeanException"},
	{"instantiate", "(Ljava/lang/String;Ljavax/management/ObjectName;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.MBeanException,javax.management.InstanceNotFoundException"},
	{"instantiate", "(Ljava/lang/String;Ljavax/management/ObjectName;[Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.MBeanException,javax.management.InstanceNotFoundException"},
	{"invoke", "(Ljavax/management/ObjectName;Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.MBeanException,javax.management.ReflectionException"},
	{"isInstanceOf", "(Ljavax/management/ObjectName;Ljava/lang/String;)Z", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException"},
	{"isRegistered", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC},
	{"queryMBeans", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set;", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set<Ljavax/management/ObjectInstance;>;", $PUBLIC},
	{"queryNames", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set;", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set<Ljavax/management/ObjectName;>;", $PUBLIC},
	{"registerMBean", "(Ljava/lang/Object;Ljavax/management/ObjectName;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceAlreadyExistsException,javax.management.MBeanRegistrationException,javax.management.NotCompliantMBeanException"},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.ListenerNotFoundException"},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.ListenerNotFoundException"},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/ObjectName;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.ListenerNotFoundException"},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/ObjectName;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.ListenerNotFoundException"},
	{"setAttribute", "(Ljavax/management/ObjectName;Ljavax/management/Attribute;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.AttributeNotFoundException,javax.management.InvalidAttributeValueException,javax.management.MBeanException,javax.management.ReflectionException"},
	{"setAttributes", "(Ljavax/management/ObjectName;Ljavax/management/AttributeList;)Ljavax/management/AttributeList;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.ReflectionException"},
	{"setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC},
	{"unregisterMBean", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.MBeanRegistrationException"},
	{}
};

$ClassInfo _MBeanServerAccessController_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.jmx.remote.security.MBeanServerAccessController",
	"java.lang.Object",
	"javax.management.remote.MBeanServerForwarder",
	_MBeanServerAccessController_FieldInfo_,
	_MBeanServerAccessController_MethodInfo_
};

$Object* allocate$MBeanServerAccessController($Class* clazz) {
	return $of($alloc(MBeanServerAccessController));
}

void MBeanServerAccessController::init$() {
}

$MBeanServer* MBeanServerAccessController::getMBeanServer() {
	return this->mbs;
}

void MBeanServerAccessController::setMBeanServer($MBeanServer* mbs) {
	if (mbs == nullptr) {
		$throwNew($IllegalArgumentException, "Null MBeanServer"_s);
	}
	if (this->mbs != nullptr) {
		$throwNew($IllegalArgumentException, "MBeanServer object already initialized"_s);
	}
	$set(this, mbs, mbs);
}

void MBeanServerAccessController::checkCreate($String* className) {
	checkWrite();
}

void MBeanServerAccessController::checkUnregister($ObjectName* name) {
	checkWrite();
}

void MBeanServerAccessController::addNotificationListener($ObjectName* name, $NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	checkRead();
	$nc($(getMBeanServer()))->addNotificationListener(name, listener, filter, handback);
}

void MBeanServerAccessController::addNotificationListener($ObjectName* name, $ObjectName* listener, $NotificationFilter* filter, Object$* handback) {
	checkRead();
	$nc($(getMBeanServer()))->addNotificationListener(name, listener, filter, handback);
}

$ObjectInstance* MBeanServerAccessController::createMBean($String* className, $ObjectName* name) {
	$useLocalCurrentObjectStackCache();
	checkCreate(className);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm == nullptr) {
		$var($Object, object, $nc($(getMBeanServer()))->instantiate(className));
		checkClassLoader(object);
		return $nc($(getMBeanServer()))->registerMBean(object, name);
	} else {
		return $nc($(getMBeanServer()))->createMBean(className, name);
	}
}

$ObjectInstance* MBeanServerAccessController::createMBean($String* className, $ObjectName* name, $ObjectArray* params, $StringArray* signature) {
	$useLocalCurrentObjectStackCache();
	checkCreate(className);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm == nullptr) {
		$var($Object, object, $nc($(getMBeanServer()))->instantiate(className, params, signature));
		checkClassLoader(object);
		return $nc($(getMBeanServer()))->registerMBean(object, name);
	} else {
		return $nc($(getMBeanServer()))->createMBean(className, name, params, signature);
	}
}

$ObjectInstance* MBeanServerAccessController::createMBean($String* className, $ObjectName* name, $ObjectName* loaderName) {
	$useLocalCurrentObjectStackCache();
	checkCreate(className);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm == nullptr) {
		$var($Object, object, $nc($(getMBeanServer()))->instantiate(className, loaderName));
		checkClassLoader(object);
		return $nc($(getMBeanServer()))->registerMBean(object, name);
	} else {
		return $nc($(getMBeanServer()))->createMBean(className, name, loaderName);
	}
}

$ObjectInstance* MBeanServerAccessController::createMBean($String* className, $ObjectName* name, $ObjectName* loaderName, $ObjectArray* params, $StringArray* signature) {
	$useLocalCurrentObjectStackCache();
	checkCreate(className);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm == nullptr) {
		$var($Object, object, $nc($(getMBeanServer()))->instantiate(className, loaderName, params, signature));
		checkClassLoader(object);
		return $nc($(getMBeanServer()))->registerMBean(object, name);
	} else {
		return $nc($(getMBeanServer()))->createMBean(className, name, loaderName, params, signature);
	}
}

$ObjectInputStream* MBeanServerAccessController::deserialize($ObjectName* name, $bytes* data) {
	checkRead();
	return $nc($(getMBeanServer()))->deserialize(name, data);
}

$ObjectInputStream* MBeanServerAccessController::deserialize($String* className, $bytes* data) {
	checkRead();
	return $nc($(getMBeanServer()))->deserialize(className, data);
}

$ObjectInputStream* MBeanServerAccessController::deserialize($String* className, $ObjectName* loaderName, $bytes* data) {
	checkRead();
	return $nc($(getMBeanServer()))->deserialize(className, loaderName, data);
}

$Object* MBeanServerAccessController::getAttribute($ObjectName* name, $String* attribute) {
	checkRead();
	return $of($nc($(getMBeanServer()))->getAttribute(name, attribute));
}

$AttributeList* MBeanServerAccessController::getAttributes($ObjectName* name, $StringArray* attributes) {
	checkRead();
	return $nc($(getMBeanServer()))->getAttributes(name, attributes);
}

$ClassLoader* MBeanServerAccessController::getClassLoader($ObjectName* loaderName) {
	checkRead();
	return $nc($(getMBeanServer()))->getClassLoader(loaderName);
}

$ClassLoader* MBeanServerAccessController::getClassLoaderFor($ObjectName* mbeanName) {
	checkRead();
	return $nc($(getMBeanServer()))->getClassLoaderFor(mbeanName);
}

$ClassLoaderRepository* MBeanServerAccessController::getClassLoaderRepository() {
	checkRead();
	return $nc($(getMBeanServer()))->getClassLoaderRepository();
}

$String* MBeanServerAccessController::getDefaultDomain() {
	checkRead();
	return $nc($(getMBeanServer()))->getDefaultDomain();
}

$StringArray* MBeanServerAccessController::getDomains() {
	checkRead();
	return $nc($(getMBeanServer()))->getDomains();
}

$Integer* MBeanServerAccessController::getMBeanCount() {
	checkRead();
	return $nc($(getMBeanServer()))->getMBeanCount();
}

$MBeanInfo* MBeanServerAccessController::getMBeanInfo($ObjectName* name) {
	checkRead();
	return $nc($(getMBeanServer()))->getMBeanInfo(name);
}

$ObjectInstance* MBeanServerAccessController::getObjectInstance($ObjectName* name) {
	checkRead();
	return $nc($(getMBeanServer()))->getObjectInstance(name);
}

$Object* MBeanServerAccessController::instantiate($String* className) {
	checkCreate(className);
	return $of($nc($(getMBeanServer()))->instantiate(className));
}

$Object* MBeanServerAccessController::instantiate($String* className, $ObjectArray* params, $StringArray* signature) {
	checkCreate(className);
	return $of($nc($(getMBeanServer()))->instantiate(className, params, signature));
}

$Object* MBeanServerAccessController::instantiate($String* className, $ObjectName* loaderName) {
	checkCreate(className);
	return $of($nc($(getMBeanServer()))->instantiate(className, loaderName));
}

$Object* MBeanServerAccessController::instantiate($String* className, $ObjectName* loaderName, $ObjectArray* params, $StringArray* signature) {
	checkCreate(className);
	return $of($nc($(getMBeanServer()))->instantiate(className, loaderName, params, signature));
}

$Object* MBeanServerAccessController::invoke($ObjectName* name, $String* operationName, $ObjectArray* params, $StringArray* signature) {
	checkWrite();
	checkMLetMethods(name, operationName);
	return $of($nc($(getMBeanServer()))->invoke(name, operationName, params, signature));
}

bool MBeanServerAccessController::isInstanceOf($ObjectName* name, $String* className) {
	checkRead();
	return $nc($(getMBeanServer()))->isInstanceOf(name, className);
}

bool MBeanServerAccessController::isRegistered($ObjectName* name) {
	checkRead();
	return $nc($(getMBeanServer()))->isRegistered(name);
}

$Set* MBeanServerAccessController::queryMBeans($ObjectName* name, $QueryExp* query) {
	checkRead();
	return $nc($(getMBeanServer()))->queryMBeans(name, query);
}

$Set* MBeanServerAccessController::queryNames($ObjectName* name, $QueryExp* query) {
	checkRead();
	return $nc($(getMBeanServer()))->queryNames(name, query);
}

$ObjectInstance* MBeanServerAccessController::registerMBean(Object$* object, $ObjectName* name) {
	checkWrite();
	return $nc($(getMBeanServer()))->registerMBean(object, name);
}

void MBeanServerAccessController::removeNotificationListener($ObjectName* name, $NotificationListener* listener) {
	checkRead();
	$nc($(getMBeanServer()))->removeNotificationListener(name, listener);
}

void MBeanServerAccessController::removeNotificationListener($ObjectName* name, $NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	checkRead();
	$nc($(getMBeanServer()))->removeNotificationListener(name, listener, filter, handback);
}

void MBeanServerAccessController::removeNotificationListener($ObjectName* name, $ObjectName* listener) {
	checkRead();
	$nc($(getMBeanServer()))->removeNotificationListener(name, listener);
}

void MBeanServerAccessController::removeNotificationListener($ObjectName* name, $ObjectName* listener, $NotificationFilter* filter, Object$* handback) {
	checkRead();
	$nc($(getMBeanServer()))->removeNotificationListener(name, listener, filter, handback);
}

void MBeanServerAccessController::setAttribute($ObjectName* name, $Attribute* attribute) {
	checkWrite();
	$nc($(getMBeanServer()))->setAttribute(name, attribute);
}

$AttributeList* MBeanServerAccessController::setAttributes($ObjectName* name, $AttributeList* attributes) {
	checkWrite();
	return $nc($(getMBeanServer()))->setAttributes(name, attributes);
}

void MBeanServerAccessController::unregisterMBean($ObjectName* name) {
	checkUnregister(name);
	$nc($(getMBeanServer()))->unregisterMBean(name);
}

void MBeanServerAccessController::checkClassLoader(Object$* object) {
	if ($instanceOf($ClassLoader, object)) {
		$throwNew($SecurityException, "Access denied! Creating an MBean that is a ClassLoader is forbidden unless a security manager is installed."_s);
	}
}

void MBeanServerAccessController::checkMLetMethods($ObjectName* name, $String* operation) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		return;
	}
	bool var$0 = !$nc(operation)->equals("addURL"_s);
	if (var$0 && !operation->equals("getMBeansFromURL"_s)) {
		return;
	}
	if (!$nc($(getMBeanServer()))->isInstanceOf(name, "javax.management.loading.MLet"_s)) {
		return;
	}
	if ($nc(operation)->equals("addURL"_s)) {
		$throwNew($SecurityException, "Access denied! MLet method addURL cannot be invoked unless a security manager is installed."_s);
	} else {
		$var($String, propName, "jmx.remote.x.mlet.allow.getMBeansFromURL"_s);
		$var($GetPropertyAction, propAction, $new($GetPropertyAction, propName));
		$var($String, propValue, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(propAction))));
		bool allowGetMBeansFromURL = "true"_s->equalsIgnoreCase(propValue);
		if (!allowGetMBeansFromURL) {
			$throwNew($SecurityException, "Access denied! MLet method getMBeansFromURL cannot be invoked unless a security manager is installed or the system property -Djmx.remote.x.mlet.allow.getMBeansFromURL=true is specified."_s);
		}
	}
}

MBeanServerAccessController::MBeanServerAccessController() {
}

$Class* MBeanServerAccessController::load$($String* name, bool initialize) {
	$loadClass(MBeanServerAccessController, name, initialize, &_MBeanServerAccessController_ClassInfo_, allocate$MBeanServerAccessController);
	return class$;
}

$Class* MBeanServerAccessController::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com