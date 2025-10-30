#include <com/sun/jmx/mbeanserver/JmxMBeanServer.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor.h>
#include <com/sun/jmx/interceptor/MBeanServerInterceptor.h>
#include <com/sun/jmx/mbeanserver/ClassLoaderRepositorySupport.h>
#include <com/sun/jmx/mbeanserver/JmxMBeanServer$1.h>
#include <com/sun/jmx/mbeanserver/JmxMBeanServer$2.h>
#include <com/sun/jmx/mbeanserver/JmxMBeanServer$3.h>
#include <com/sun/jmx/mbeanserver/MBeanInstantiator.h>
#include <com/sun/jmx/mbeanserver/MBeanServerDelegateImpl.h>
#include <com/sun/jmx/mbeanserver/ModifiableClassLoaderRepository.h>
#include <com/sun/jmx/mbeanserver/Repository.h>
#include <com/sun/jmx/mbeanserver/SecureClassLoaderRepository.h>
#include <com/sun/jmx/mbeanserver/SunJmxMBeanServer.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/management/Attribute.h>
#include <javax/management/AttributeList.h>
#include <javax/management/MBeanInfo.h>
#include <javax/management/MBeanPermission.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/MBeanServerDelegate.h>
#include <javax/management/MBeanServerPermission.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationListener.h>
#include <javax/management/ObjectInstance.h>
#include <javax/management/ObjectName.h>
#include <javax/management/QueryExp.h>
#include <javax/management/ReflectionException.h>
#include <javax/management/RuntimeOperationsException.h>
#include <javax/management/loading/ClassLoaderRepository.h>
#include <jcpp.h>

#undef DEBUG
#undef DEFAULT_FAIR_LOCK_POLICY
#undef MBEANSERVER_LOGGER

using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $DefaultMBeanServerInterceptor = ::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor;
using $MBeanServerInterceptor = ::com::sun::jmx::interceptor::MBeanServerInterceptor;
using $ClassLoaderRepositorySupport = ::com::sun::jmx::mbeanserver::ClassLoaderRepositorySupport;
using $JmxMBeanServer$1 = ::com::sun::jmx::mbeanserver::JmxMBeanServer$1;
using $JmxMBeanServer$2 = ::com::sun::jmx::mbeanserver::JmxMBeanServer$2;
using $JmxMBeanServer$3 = ::com::sun::jmx::mbeanserver::JmxMBeanServer$3;
using $MBeanInstantiator = ::com::sun::jmx::mbeanserver::MBeanInstantiator;
using $MBeanServerDelegateImpl = ::com::sun::jmx::mbeanserver::MBeanServerDelegateImpl;
using $ModifiableClassLoaderRepository = ::com::sun::jmx::mbeanserver::ModifiableClassLoaderRepository;
using $Repository = ::com::sun::jmx::mbeanserver::Repository;
using $SecureClassLoaderRepository = ::com::sun::jmx::mbeanserver::SecureClassLoaderRepository;
using $SunJmxMBeanServer = ::com::sun::jmx::mbeanserver::SunJmxMBeanServer;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $Attribute = ::javax::management::Attribute;
using $AttributeList = ::javax::management::AttributeList;
using $MBeanInfo = ::javax::management::MBeanInfo;
using $MBeanPermission = ::javax::management::MBeanPermission;
using $MBeanServer = ::javax::management::MBeanServer;
using $MBeanServerDelegate = ::javax::management::MBeanServerDelegate;
using $MBeanServerPermission = ::javax::management::MBeanServerPermission;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationListener = ::javax::management::NotificationListener;
using $ObjectInstance = ::javax::management::ObjectInstance;
using $ObjectName = ::javax::management::ObjectName;
using $QueryExp = ::javax::management::QueryExp;
using $ReflectionException = ::javax::management::ReflectionException;
using $RuntimeOperationsException = ::javax::management::RuntimeOperationsException;
using $ClassLoaderRepository = ::javax::management::loading::ClassLoaderRepository;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$CompoundAttribute _JmxMBeanServer_MethodAnnotations_deserialize15[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _JmxMBeanServer_MethodAnnotations_deserialize16[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _JmxMBeanServer_MethodAnnotations_deserialize17[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _JmxMBeanServer_FieldInfo_[] = {
	{"DEFAULT_FAIR_LOCK_POLICY", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JmxMBeanServer, DEFAULT_FAIR_LOCK_POLICY)},
	{"instantiator", "Lcom/sun/jmx/mbeanserver/MBeanInstantiator;", nullptr, $PRIVATE | $FINAL, $field(JmxMBeanServer, instantiator)},
	{"secureClr", "Lcom/sun/jmx/mbeanserver/SecureClassLoaderRepository;", nullptr, $PRIVATE | $FINAL, $field(JmxMBeanServer, secureClr)},
	{"interceptorsEnabled", "Z", nullptr, $PRIVATE | $FINAL, $field(JmxMBeanServer, interceptorsEnabled$)},
	{"outerShell", "Ljavax/management/MBeanServer;", nullptr, $PRIVATE | $FINAL, $field(JmxMBeanServer, outerShell)},
	{"mbsInterceptor", "Ljavax/management/MBeanServer;", nullptr, $PRIVATE | $VOLATILE, $field(JmxMBeanServer, mbsInterceptor)},
	{"mBeanServerDelegateObject", "Ljavax/management/MBeanServerDelegate;", nullptr, $PRIVATE | $FINAL, $field(JmxMBeanServer, mBeanServerDelegateObject)},
	{}
};

$MethodInfo _JmxMBeanServer_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljavax/management/MBeanServer;Ljavax/management/MBeanServerDelegate;)V", nullptr, 0, $method(static_cast<void(JmxMBeanServer::*)($String*,$MBeanServer*,$MBeanServerDelegate*)>(&JmxMBeanServer::init$))},
	{"<init>", "(Ljava/lang/String;Ljavax/management/MBeanServer;Ljavax/management/MBeanServerDelegate;Z)V", nullptr, 0, $method(static_cast<void(JmxMBeanServer::*)($String*,$MBeanServer*,$MBeanServerDelegate*,bool)>(&JmxMBeanServer::init$))},
	{"<init>", "(Ljava/lang/String;Ljavax/management/MBeanServer;Ljavax/management/MBeanServerDelegate;Lcom/sun/jmx/mbeanserver/MBeanInstantiator;Z)V", nullptr, 0, $method(static_cast<void(JmxMBeanServer::*)($String*,$MBeanServer*,$MBeanServerDelegate*,$MBeanInstantiator*,bool)>(&JmxMBeanServer::init$))},
	{"<init>", "(Ljava/lang/String;Ljavax/management/MBeanServer;Ljavax/management/MBeanServerDelegate;Lcom/sun/jmx/mbeanserver/MBeanInstantiator;ZZ)V", nullptr, 0, $method(static_cast<void(JmxMBeanServer::*)($String*,$MBeanServer*,$MBeanServerDelegate*,$MBeanInstantiator*,bool,bool)>(&JmxMBeanServer::init$))},
	{"addNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException"},
	{"addNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/ObjectName;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException"},
	{"checkMBeanPermission", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/ObjectName;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*,$ObjectName*,$String*)>(&JmxMBeanServer::checkMBeanPermission)), "java.lang.SecurityException"},
	{"checkNewMBeanServerPermission", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&JmxMBeanServer::checkNewMBeanServerPermission))},
	{"cloneAttribute", "(Ljavax/management/Attribute;)Ljavax/management/Attribute;", nullptr, $PRIVATE, $method(static_cast<$Attribute*(JmxMBeanServer::*)($Attribute*)>(&JmxMBeanServer::cloneAttribute))},
	{"cloneAttributeList", "(Ljavax/management/AttributeList;)Ljavax/management/AttributeList;", nullptr, $PRIVATE, $method(static_cast<$AttributeList*(JmxMBeanServer::*)($AttributeList*)>(&JmxMBeanServer::cloneAttributeList))},
	{"cloneObjectName", "(Ljavax/management/ObjectName;)Ljavax/management/ObjectName;", nullptr, $PRIVATE, $method(static_cast<$ObjectName*(JmxMBeanServer::*)($ObjectName*)>(&JmxMBeanServer::cloneObjectName))},
	{"createMBean", "(Ljava/lang/String;Ljavax/management/ObjectName;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.InstanceAlreadyExistsException,javax.management.MBeanRegistrationException,javax.management.MBeanException,javax.management.NotCompliantMBeanException"},
	{"createMBean", "(Ljava/lang/String;Ljavax/management/ObjectName;Ljavax/management/ObjectName;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.InstanceAlreadyExistsException,javax.management.MBeanRegistrationException,javax.management.MBeanException,javax.management.NotCompliantMBeanException,javax.management.InstanceNotFoundException"},
	{"createMBean", "(Ljava/lang/String;Ljavax/management/ObjectName;[Ljava/lang/Object;[Ljava/lang/String;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.InstanceAlreadyExistsException,javax.management.MBeanRegistrationException,javax.management.MBeanException,javax.management.NotCompliantMBeanException"},
	{"createMBean", "(Ljava/lang/String;Ljavax/management/ObjectName;Ljavax/management/ObjectName;[Ljava/lang/Object;[Ljava/lang/String;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.InstanceAlreadyExistsException,javax.management.MBeanRegistrationException,javax.management.MBeanException,javax.management.NotCompliantMBeanException,javax.management.InstanceNotFoundException"},
	{"deserialize", "(Ljavax/management/ObjectName;[B)Ljava/io/ObjectInputStream;", nullptr, $PUBLIC | $DEPRECATED, nullptr, "javax.management.InstanceNotFoundException,javax.management.OperationsException", nullptr, _JmxMBeanServer_MethodAnnotations_deserialize15},
	{"deserialize", "(Ljava/lang/String;[B)Ljava/io/ObjectInputStream;", nullptr, $PUBLIC | $DEPRECATED, nullptr, "javax.management.OperationsException,javax.management.ReflectionException", nullptr, _JmxMBeanServer_MethodAnnotations_deserialize16},
	{"deserialize", "(Ljava/lang/String;Ljavax/management/ObjectName;[B)Ljava/io/ObjectInputStream;", nullptr, $PUBLIC | $DEPRECATED, nullptr, "javax.management.InstanceNotFoundException,javax.management.OperationsException,javax.management.ReflectionException", nullptr, _JmxMBeanServer_MethodAnnotations_deserialize17},
	{"getAttribute", "(Ljavax/management/ObjectName;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.AttributeNotFoundException,javax.management.InstanceNotFoundException,javax.management.ReflectionException"},
	{"getAttributes", "(Ljavax/management/ObjectName;[Ljava/lang/String;)Ljavax/management/AttributeList;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.ReflectionException"},
	{"getClassLoader", "(Ljavax/management/ObjectName;)Ljava/lang/ClassLoader;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException"},
	{"getClassLoaderFor", "(Ljavax/management/ObjectName;)Ljava/lang/ClassLoader;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException"},
	{"getClassLoaderRepository", "()Ljavax/management/loading/ClassLoaderRepository;", nullptr, $PUBLIC},
	{"getDefaultDomain", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDomains", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMBeanCount", "()Ljava/lang/Integer;", nullptr, $PUBLIC},
	{"getMBeanInfo", "(Ljavax/management/ObjectName;)Ljavax/management/MBeanInfo;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.IntrospectionException,javax.management.ReflectionException"},
	{"getMBeanInstantiator", "()Lcom/sun/jmx/mbeanserver/MBeanInstantiator;", nullptr, $PUBLIC},
	{"getMBeanServerDelegate", "()Ljavax/management/MBeanServerDelegate;", nullptr, $PUBLIC},
	{"getMBeanServerInterceptor", "()Ljavax/management/MBeanServer;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getObjectInstance", "(Ljavax/management/ObjectName;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException"},
	{"initialize", "()V", nullptr, $PRIVATE, $method(static_cast<void(JmxMBeanServer::*)()>(&JmxMBeanServer::initialize))},
	{"instantiate", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.MBeanException"},
	{"instantiate", "(Ljava/lang/String;Ljavax/management/ObjectName;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.MBeanException,javax.management.InstanceNotFoundException"},
	{"instantiate", "(Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.MBeanException"},
	{"instantiate", "(Ljava/lang/String;Ljavax/management/ObjectName;[Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.MBeanException,javax.management.InstanceNotFoundException"},
	{"interceptorsEnabled", "()Z", nullptr, $PUBLIC},
	{"invoke", "(Ljavax/management/ObjectName;Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.MBeanException,javax.management.ReflectionException"},
	{"isInstanceOf", "(Ljavax/management/ObjectName;Ljava/lang/String;)Z", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException"},
	{"isRegistered", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC},
	{"newMBeanServer", "(Ljava/lang/String;Ljavax/management/MBeanServer;Ljavax/management/MBeanServerDelegate;Z)Ljavax/management/MBeanServer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MBeanServer*(*)($String*,$MBeanServer*,$MBeanServerDelegate*,bool)>(&JmxMBeanServer::newMBeanServer))},
	{"newMBeanServerDelegate", "()Ljavax/management/MBeanServerDelegate;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MBeanServerDelegate*(*)()>(&JmxMBeanServer::newMBeanServerDelegate))},
	{"queryMBeans", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set;", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set<Ljavax/management/ObjectInstance;>;", $PUBLIC},
	{"queryNames", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set;", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set<Ljavax/management/ObjectName;>;", $PUBLIC},
	{"registerMBean", "(Ljava/lang/Object;Ljavax/management/ObjectName;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceAlreadyExistsException,javax.management.MBeanRegistrationException,javax.management.NotCompliantMBeanException"},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.ListenerNotFoundException"},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.ListenerNotFoundException"},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/ObjectName;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.ListenerNotFoundException"},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/ObjectName;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.ListenerNotFoundException"},
	{"setAttribute", "(Ljavax/management/ObjectName;Ljavax/management/Attribute;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.AttributeNotFoundException,javax.management.InvalidAttributeValueException,javax.management.MBeanException,javax.management.ReflectionException"},
	{"setAttributes", "(Ljavax/management/ObjectName;Ljavax/management/AttributeList;)Ljavax/management/AttributeList;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.ReflectionException"},
	{"setMBeanServerInterceptor", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"unregisterMBean", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.MBeanRegistrationException"},
	{}
};

$InnerClassInfo _JmxMBeanServer_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.JmxMBeanServer$3", nullptr, nullptr, 0},
	{"com.sun.jmx.mbeanserver.JmxMBeanServer$2", nullptr, nullptr, 0},
	{"com.sun.jmx.mbeanserver.JmxMBeanServer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JmxMBeanServer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.JmxMBeanServer",
	"java.lang.Object",
	"com.sun.jmx.mbeanserver.SunJmxMBeanServer",
	_JmxMBeanServer_FieldInfo_,
	_JmxMBeanServer_MethodInfo_,
	nullptr,
	nullptr,
	_JmxMBeanServer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.JmxMBeanServer$3,com.sun.jmx.mbeanserver.JmxMBeanServer$2,com.sun.jmx.mbeanserver.JmxMBeanServer$1"
};

$Object* allocate$JmxMBeanServer($Class* clazz) {
	return $of($alloc(JmxMBeanServer));
}

void JmxMBeanServer::init$($String* domain, $MBeanServer* outer, $MBeanServerDelegate* delegate) {
	JmxMBeanServer::init$(domain, outer, delegate, nullptr, false);
}

void JmxMBeanServer::init$($String* domain, $MBeanServer* outer, $MBeanServerDelegate* delegate, bool interceptors) {
	JmxMBeanServer::init$(domain, outer, delegate, nullptr, false);
}

void JmxMBeanServer::init$($String* domain, $MBeanServer* outer, $MBeanServerDelegate* delegate, $MBeanInstantiator* instantiator, bool interceptors) {
	JmxMBeanServer::init$(domain, outer, delegate, instantiator, interceptors, true);
}

void JmxMBeanServer::init$($String* domain, $MBeanServer* outer$renamed, $MBeanServerDelegate* delegate$renamed, $MBeanInstantiator* instantiator$renamed, bool interceptors, bool fairLock) {
	$useLocalCurrentObjectStackCache();
	$var($MBeanServerDelegate, delegate, delegate$renamed);
	$var($MBeanInstantiator, instantiator, instantiator$renamed);
	$var($MBeanServer, outer, outer$renamed);
	$beforeCallerSensitive();
	$set(this, mbsInterceptor, nullptr);
	if (instantiator == nullptr) {
		$var($ModifiableClassLoaderRepository, clr, $new($ClassLoaderRepositorySupport));
		$assign(instantiator, $new($MBeanInstantiator, clr));
	}
	$var($MBeanInstantiator, fInstantiator, instantiator);
	$set(this, secureClr, $new($SecureClassLoaderRepository, $cast($ClassLoaderRepository, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($JmxMBeanServer$1, this, fInstantiator)))))));
	if (delegate == nullptr) {
		$assign(delegate, $new($MBeanServerDelegateImpl));
	}
	if (outer == nullptr) {
		$assign(outer, this);
	}
	$set(this, instantiator, instantiator);
	$set(this, mBeanServerDelegateObject, delegate);
	$set(this, outerShell, outer);
	$var($Repository, repository, $new($Repository, domain));
	$set(this, mbsInterceptor, $new($DefaultMBeanServerInterceptor, outer, delegate, instantiator, repository));
	this->interceptorsEnabled$ = interceptors;
	initialize();
}

bool JmxMBeanServer::interceptorsEnabled() {
	return this->interceptorsEnabled$;
}

$MBeanInstantiator* JmxMBeanServer::getMBeanInstantiator() {
	if (this->interceptorsEnabled$) {
		return this->instantiator;
	} else {
		$throwNew($UnsupportedOperationException, "MBeanServerInterceptors are disabled."_s);
	}
}

$ObjectInstance* JmxMBeanServer::createMBean($String* className, $ObjectName* name) {
	return $nc(this->mbsInterceptor)->createMBean(className, $(cloneObjectName(name)), ($ObjectArray*)nullptr, ($StringArray*)nullptr);
}

$ObjectInstance* JmxMBeanServer::createMBean($String* className, $ObjectName* name, $ObjectName* loaderName) {
	return $nc(this->mbsInterceptor)->createMBean(className, $(cloneObjectName(name)), loaderName, ($ObjectArray*)nullptr, ($StringArray*)nullptr);
}

$ObjectInstance* JmxMBeanServer::createMBean($String* className, $ObjectName* name, $ObjectArray* params, $StringArray* signature) {
	return $nc(this->mbsInterceptor)->createMBean(className, $(cloneObjectName(name)), params, signature);
}

$ObjectInstance* JmxMBeanServer::createMBean($String* className, $ObjectName* name, $ObjectName* loaderName, $ObjectArray* params, $StringArray* signature) {
	return $nc(this->mbsInterceptor)->createMBean(className, $(cloneObjectName(name)), loaderName, params, signature);
}

$ObjectInstance* JmxMBeanServer::registerMBean(Object$* object, $ObjectName* name) {
	return $nc(this->mbsInterceptor)->registerMBean(object, $(cloneObjectName(name)));
}

void JmxMBeanServer::unregisterMBean($ObjectName* name) {
	$nc(this->mbsInterceptor)->unregisterMBean($(cloneObjectName(name)));
}

$ObjectInstance* JmxMBeanServer::getObjectInstance($ObjectName* name) {
	return $nc(this->mbsInterceptor)->getObjectInstance($(cloneObjectName(name)));
}

$Set* JmxMBeanServer::queryMBeans($ObjectName* name, $QueryExp* query) {
	return $nc(this->mbsInterceptor)->queryMBeans($(cloneObjectName(name)), query);
}

$Set* JmxMBeanServer::queryNames($ObjectName* name, $QueryExp* query) {
	return $nc(this->mbsInterceptor)->queryNames($(cloneObjectName(name)), query);
}

bool JmxMBeanServer::isRegistered($ObjectName* name) {
	return $nc(this->mbsInterceptor)->isRegistered(name);
}

$Integer* JmxMBeanServer::getMBeanCount() {
	return $nc(this->mbsInterceptor)->getMBeanCount();
}

$Object* JmxMBeanServer::getAttribute($ObjectName* name, $String* attribute) {
	return $of($nc(this->mbsInterceptor)->getAttribute($(cloneObjectName(name)), attribute));
}

$AttributeList* JmxMBeanServer::getAttributes($ObjectName* name, $StringArray* attributes) {
	return $nc(this->mbsInterceptor)->getAttributes($(cloneObjectName(name)), attributes);
}

void JmxMBeanServer::setAttribute($ObjectName* name, $Attribute* attribute) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectName, var$0, cloneObjectName(name));
	$nc(this->mbsInterceptor)->setAttribute(var$0, $(cloneAttribute(attribute)));
}

$AttributeList* JmxMBeanServer::setAttributes($ObjectName* name, $AttributeList* attributes) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectName, var$0, cloneObjectName(name));
	return $nc(this->mbsInterceptor)->setAttributes(var$0, $(cloneAttributeList(attributes)));
}

$Object* JmxMBeanServer::invoke($ObjectName* name, $String* operationName, $ObjectArray* params, $StringArray* signature) {
	return $of($nc(this->mbsInterceptor)->invoke($(cloneObjectName(name)), operationName, params, signature));
}

$String* JmxMBeanServer::getDefaultDomain() {
	return $nc(this->mbsInterceptor)->getDefaultDomain();
}

$StringArray* JmxMBeanServer::getDomains() {
	return $nc(this->mbsInterceptor)->getDomains();
}

void JmxMBeanServer::addNotificationListener($ObjectName* name, $NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	$nc(this->mbsInterceptor)->addNotificationListener($(cloneObjectName(name)), listener, filter, handback);
}

void JmxMBeanServer::addNotificationListener($ObjectName* name, $ObjectName* listener, $NotificationFilter* filter, Object$* handback) {
	$nc(this->mbsInterceptor)->addNotificationListener($(cloneObjectName(name)), listener, filter, handback);
}

void JmxMBeanServer::removeNotificationListener($ObjectName* name, $NotificationListener* listener) {
	$nc(this->mbsInterceptor)->removeNotificationListener($(cloneObjectName(name)), listener);
}

void JmxMBeanServer::removeNotificationListener($ObjectName* name, $NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	$nc(this->mbsInterceptor)->removeNotificationListener($(cloneObjectName(name)), listener, filter, handback);
}

void JmxMBeanServer::removeNotificationListener($ObjectName* name, $ObjectName* listener) {
	$nc(this->mbsInterceptor)->removeNotificationListener($(cloneObjectName(name)), listener);
}

void JmxMBeanServer::removeNotificationListener($ObjectName* name, $ObjectName* listener, $NotificationFilter* filter, Object$* handback) {
	$nc(this->mbsInterceptor)->removeNotificationListener($(cloneObjectName(name)), listener, filter, handback);
}

$MBeanInfo* JmxMBeanServer::getMBeanInfo($ObjectName* name) {
	return $nc(this->mbsInterceptor)->getMBeanInfo($(cloneObjectName(name)));
}

$Object* JmxMBeanServer::instantiate($String* className) {
	checkMBeanPermission(className, nullptr, nullptr, "instantiate"_s);
	return $of($nc(this->instantiator)->instantiate(className));
}

$Object* JmxMBeanServer::instantiate($String* className, $ObjectName* loaderName) {
	$beforeCallerSensitive();
	checkMBeanPermission(className, nullptr, nullptr, "instantiate"_s);
	$var($ClassLoader, myLoader, $nc($of(this->outerShell))->getClass()->getClassLoader());
	return $of($nc(this->instantiator)->instantiate(className, loaderName, myLoader));
}

$Object* JmxMBeanServer::instantiate($String* className, $ObjectArray* params, $StringArray* signature) {
	$beforeCallerSensitive();
	checkMBeanPermission(className, nullptr, nullptr, "instantiate"_s);
	$var($ClassLoader, myLoader, $nc($of(this->outerShell))->getClass()->getClassLoader());
	return $of($nc(this->instantiator)->instantiate(className, params, signature, myLoader));
}

$Object* JmxMBeanServer::instantiate($String* className, $ObjectName* loaderName, $ObjectArray* params, $StringArray* signature) {
	$beforeCallerSensitive();
	checkMBeanPermission(className, nullptr, nullptr, "instantiate"_s);
	$var($ClassLoader, myLoader, $nc($of(this->outerShell))->getClass()->getClassLoader());
	return $of($nc(this->instantiator)->instantiate(className, loaderName, params, signature, myLoader));
}

bool JmxMBeanServer::isInstanceOf($ObjectName* name, $String* className) {
	return $nc(this->mbsInterceptor)->isInstanceOf($(cloneObjectName(name)), className);
}

$ObjectInputStream* JmxMBeanServer::deserialize($ObjectName* name, $bytes* data) {
	$var($ClassLoader, loader, getClassLoaderFor(name));
	return $nc(this->instantiator)->deserialize(loader, data);
}

$ObjectInputStream* JmxMBeanServer::deserialize($String* className, $bytes* data) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (className == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException), "Null className passed in parameter"_s);
	}
	$var($ClassLoaderRepository, clr, getClassLoaderRepository());
	$Class* theClass = nullptr;
	try {
		if (clr == nullptr) {
			$throwNew($ClassNotFoundException, className);
		}
		theClass = $nc(clr)->loadClass(className);
	} catch ($ClassNotFoundException& e) {
		$throwNew($ReflectionException, e, "The given class could not be loaded by the default loader repository"_s);
	}
	return $nc(this->instantiator)->deserialize($($nc(theClass)->getClassLoader()), data);
}

$ObjectInputStream* JmxMBeanServer::deserialize($String* className, $ObjectName* loaderName$renamed, $bytes* data) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectName, loaderName, loaderName$renamed);
	$beforeCallerSensitive();
	$assign(loaderName, cloneObjectName(loaderName));
	try {
		getClassLoader(loaderName);
	} catch ($SecurityException& e) {
		$throw(e);
	} catch ($Exception& e) {
	}
	$var($ClassLoader, myLoader, $nc($of(this->outerShell))->getClass()->getClassLoader());
	return $nc(this->instantiator)->deserialize(className, loaderName, data, myLoader);
}

void JmxMBeanServer::initialize() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (this->instantiator == nullptr) {
		$throwNew($IllegalStateException, "instantiator must not be null."_s);
	}
	try {
		$AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($JmxMBeanServer$2, this)));
	} catch ($SecurityException& e) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::DEBUG)) {
			$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::DEBUG, "Unexpected security exception occurred"_s, static_cast<$Throwable*>(e));
		}
		$throw(e);
	} catch ($Exception& e) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::DEBUG)) {
			$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::DEBUG, "Unexpected exception occurred"_s, static_cast<$Throwable*>(e));
		}
		$throwNew($IllegalStateException, "Can\'t register delegate."_s, e);
	}
	$var($ClassLoader, myLoader, $nc($of(this->outerShell))->getClass()->getClassLoader());
	$var($ModifiableClassLoaderRepository, loaders, $cast($ModifiableClassLoaderRepository, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($JmxMBeanServer$3, this)))));
	if (loaders != nullptr) {
		loaders->addClassLoader(myLoader);
		$var($ClassLoader, systemLoader, $ClassLoader::getSystemClassLoader());
		if (systemLoader != myLoader) {
			loaders->addClassLoader(systemLoader);
		}
	}
}

$MBeanServer* JmxMBeanServer::getMBeanServerInterceptor() {
	$synchronized(this) {
		if (this->interceptorsEnabled$) {
			return this->mbsInterceptor;
		} else {
			$throwNew($UnsupportedOperationException, "MBeanServerInterceptors are disabled."_s);
		}
	}
}

void JmxMBeanServer::setMBeanServerInterceptor($MBeanServer* interceptor) {
	$synchronized(this) {
		if (!this->interceptorsEnabled$) {
			$throwNew($UnsupportedOperationException, "MBeanServerInterceptors are disabled."_s);
		}
		if (interceptor == nullptr) {
			$throwNew($IllegalArgumentException, "MBeanServerInterceptor is null"_s);
		}
		$set(this, mbsInterceptor, interceptor);
	}
}

$ClassLoader* JmxMBeanServer::getClassLoaderFor($ObjectName* mbeanName) {
	return $nc(this->mbsInterceptor)->getClassLoaderFor($(cloneObjectName(mbeanName)));
}

$ClassLoader* JmxMBeanServer::getClassLoader($ObjectName* loaderName) {
	return $nc(this->mbsInterceptor)->getClassLoader($(cloneObjectName(loaderName)));
}

$ClassLoaderRepository* JmxMBeanServer::getClassLoaderRepository() {
	checkMBeanPermission(nullptr, nullptr, nullptr, "getClassLoaderRepository"_s);
	return this->secureClr;
}

$MBeanServerDelegate* JmxMBeanServer::getMBeanServerDelegate() {
	if (!this->interceptorsEnabled$) {
		$throwNew($UnsupportedOperationException, "MBeanServerInterceptors are disabled."_s);
	}
	return this->mBeanServerDelegateObject;
}

$MBeanServerDelegate* JmxMBeanServer::newMBeanServerDelegate() {
	$init(JmxMBeanServer);
	return $new($MBeanServerDelegateImpl);
}

$MBeanServer* JmxMBeanServer::newMBeanServer($String* defaultDomain, $MBeanServer* outer, $MBeanServerDelegate* delegate, bool interceptors) {
	$init(JmxMBeanServer);
	bool fairLock = JmxMBeanServer::DEFAULT_FAIR_LOCK_POLICY;
	checkNewMBeanServerPermission();
	return $new(JmxMBeanServer, defaultDomain, outer, delegate, nullptr, interceptors, fairLock);
}

$ObjectName* JmxMBeanServer::cloneObjectName($ObjectName* name) {
	if (name != nullptr) {
		return $ObjectName::getInstance(name);
	}
	return name;
}

$Attribute* JmxMBeanServer::cloneAttribute($Attribute* attribute) {
	$useLocalCurrentObjectStackCache();
	if (attribute != nullptr) {
		$load($Attribute);
		if (!$of($of(attribute)->getClass())->equals($Attribute::class$)) {
			$var($String, var$0, attribute->getName());
			return $new($Attribute, var$0, $(attribute->getValue()));
		}
	}
	return attribute;
}

$AttributeList* JmxMBeanServer::cloneAttributeList($AttributeList* list) {
	$useLocalCurrentObjectStackCache();
	if (list != nullptr) {
		$var($List, alist, list->asList());
		if (!$of($of(list)->getClass())->equals($AttributeList::class$)) {
			$var($AttributeList, newList, $new($AttributeList, $nc(alist)->size()));
			{
				$var($Iterator, i$, $nc(alist)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Attribute, attribute, $cast($Attribute, i$->next()));
					newList->add($(cloneAttribute(attribute)));
				}
			}
			return newList;
		} else {
			for (int32_t i = 0; i < $nc(alist)->size(); ++i) {
				$var($Attribute, attribute, $cast($Attribute, alist->get(i)));
				$load($Attribute);
				if (!$of($nc($of(attribute))->getClass())->equals($Attribute::class$)) {
					list->set(i, $(cloneAttribute(attribute)));
				}
			}
			return list;
		}
	}
	return list;
}

void JmxMBeanServer::checkMBeanPermission($String* classname, $String* member, $ObjectName* objectName, $String* actions) {
	$init(JmxMBeanServer);
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$var($Permission, perm, $new($MBeanPermission, classname, member, objectName, actions));
		sm->checkPermission(perm);
	}
}

void JmxMBeanServer::checkNewMBeanServerPermission() {
	$init(JmxMBeanServer);
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$var($Permission, perm, $new($MBeanServerPermission, "newMBeanServer"_s));
		sm->checkPermission(perm);
	}
}

JmxMBeanServer::JmxMBeanServer() {
}

$Class* JmxMBeanServer::load$($String* name, bool initialize) {
	$loadClass(JmxMBeanServer, name, initialize, &_JmxMBeanServer_ClassInfo_, allocate$JmxMBeanServer);
	return class$;
}

$Class* JmxMBeanServer::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com