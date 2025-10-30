#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor$1.h>
#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor$2.h>
#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor$3.h>
#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor$ListenerWrapper.h>
#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor$ResourceContext.h>
#include <com/sun/jmx/mbeanserver/DynamicMBean2.h>
#include <com/sun/jmx/mbeanserver/Introspector.h>
#include <com/sun/jmx/mbeanserver/MBeanInstantiator.h>
#include <com/sun/jmx/mbeanserver/ModifiableClassLoaderRepository.h>
#include <com/sun/jmx/mbeanserver/NamedObject.h>
#include <com/sun/jmx/mbeanserver/Repository$RegistrationContext.h>
#include <com/sun/jmx/mbeanserver/Repository.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <com/sun/jmx/remote/util/EnvHelp.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Error.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/ref/WeakReference.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/ProtectionDomain.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/WeakHashMap.h>
#include <javax/management/Attribute.h>
#include <javax/management/AttributeList.h>
#include <javax/management/AttributeNotFoundException.h>
#include <javax/management/DynamicMBean.h>
#include <javax/management/InstanceAlreadyExistsException.h>
#include <javax/management/InstanceNotFoundException.h>
#include <javax/management/InvalidAttributeValueException.h>
#include <javax/management/JMException.h>
#include <javax/management/JMRuntimeException.h>
#include <javax/management/ListenerNotFoundException.h>
#include <javax/management/MBeanException.h>
#include <javax/management/MBeanInfo.h>
#include <javax/management/MBeanPermission.h>
#include <javax/management/MBeanRegistration.h>
#include <javax/management/MBeanRegistrationException.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/MBeanServerDelegate.h>
#include <javax/management/MBeanServerNotification.h>
#include <javax/management/MBeanTrustPermission.h>
#include <javax/management/NotCompliantMBeanException.h>
#include <javax/management/Notification.h>
#include <javax/management/NotificationBroadcaster.h>
#include <javax/management/NotificationEmitter.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationListener.h>
#include <javax/management/ObjectInstance.h>
#include <javax/management/ObjectName.h>
#include <javax/management/OperationsException.h>
#include <javax/management/QueryEval.h>
#include <javax/management/QueryExp.h>
#include <javax/management/ReflectionException.h>
#include <javax/management/RuntimeErrorException.h>
#include <javax/management/RuntimeMBeanException.h>
#include <javax/management/RuntimeOperationsException.h>
#include <javax/management/loading/ClassLoaderRepository.h>
#include <jcpp.h>

#undef DEBUG
#undef DELEGATE_NAME
#undef MBEANSERVER_LOGGER
#undef NONE
#undef REGISTRATION_NOTIFICATION
#undef TRACE
#undef UNREGISTRATION_NOTIFICATION

using $ProtectionDomainArray = $Array<::java::security::ProtectionDomain>;
using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $DefaultMBeanServerInterceptor$1 = ::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor$1;
using $DefaultMBeanServerInterceptor$2 = ::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor$2;
using $DefaultMBeanServerInterceptor$3 = ::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor$3;
using $DefaultMBeanServerInterceptor$ListenerWrapper = ::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor$ListenerWrapper;
using $DefaultMBeanServerInterceptor$ResourceContext = ::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor$ResourceContext;
using $MBeanServerInterceptor = ::com::sun::jmx::interceptor::MBeanServerInterceptor;
using $DynamicMBean2 = ::com::sun::jmx::mbeanserver::DynamicMBean2;
using $Introspector = ::com::sun::jmx::mbeanserver::Introspector;
using $MBeanInstantiator = ::com::sun::jmx::mbeanserver::MBeanInstantiator;
using $ModifiableClassLoaderRepository = ::com::sun::jmx::mbeanserver::ModifiableClassLoaderRepository;
using $NamedObject = ::com::sun::jmx::mbeanserver::NamedObject;
using $Repository = ::com::sun::jmx::mbeanserver::Repository;
using $Repository$RegistrationContext = ::com::sun::jmx::mbeanserver::Repository$RegistrationContext;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $EnvHelp = ::com::sun::jmx::remote::util::EnvHelp;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $WeakHashMap = ::java::util::WeakHashMap;
using $Attribute = ::javax::management::Attribute;
using $AttributeList = ::javax::management::AttributeList;
using $AttributeNotFoundException = ::javax::management::AttributeNotFoundException;
using $DynamicMBean = ::javax::management::DynamicMBean;
using $InstanceAlreadyExistsException = ::javax::management::InstanceAlreadyExistsException;
using $InstanceNotFoundException = ::javax::management::InstanceNotFoundException;
using $InvalidAttributeValueException = ::javax::management::InvalidAttributeValueException;
using $JMException = ::javax::management::JMException;
using $JMRuntimeException = ::javax::management::JMRuntimeException;
using $ListenerNotFoundException = ::javax::management::ListenerNotFoundException;
using $MBeanException = ::javax::management::MBeanException;
using $MBeanInfo = ::javax::management::MBeanInfo;
using $MBeanPermission = ::javax::management::MBeanPermission;
using $MBeanRegistration = ::javax::management::MBeanRegistration;
using $MBeanRegistrationException = ::javax::management::MBeanRegistrationException;
using $MBeanServer = ::javax::management::MBeanServer;
using $MBeanServerDelegate = ::javax::management::MBeanServerDelegate;
using $MBeanServerNotification = ::javax::management::MBeanServerNotification;
using $MBeanTrustPermission = ::javax::management::MBeanTrustPermission;
using $NotCompliantMBeanException = ::javax::management::NotCompliantMBeanException;
using $Notification = ::javax::management::Notification;
using $NotificationBroadcaster = ::javax::management::NotificationBroadcaster;
using $NotificationEmitter = ::javax::management::NotificationEmitter;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationListener = ::javax::management::NotificationListener;
using $ObjectInstance = ::javax::management::ObjectInstance;
using $ObjectName = ::javax::management::ObjectName;
using $OperationsException = ::javax::management::OperationsException;
using $QueryEval = ::javax::management::QueryEval;
using $QueryExp = ::javax::management::QueryExp;
using $ReflectionException = ::javax::management::ReflectionException;
using $RuntimeErrorException = ::javax::management::RuntimeErrorException;
using $RuntimeMBeanException = ::javax::management::RuntimeMBeanException;
using $RuntimeOperationsException = ::javax::management::RuntimeOperationsException;
using $ClassLoaderRepository = ::javax::management::loading::ClassLoaderRepository;

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {

$FieldInfo _DefaultMBeanServerInterceptor_FieldInfo_[] = {
	{"instantiator", "Lcom/sun/jmx/mbeanserver/MBeanInstantiator;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(DefaultMBeanServerInterceptor, instantiator)},
	{"server", "Ljavax/management/MBeanServer;", nullptr, $PRIVATE | $TRANSIENT, $field(DefaultMBeanServerInterceptor, server)},
	{"delegate", "Ljavax/management/MBeanServerDelegate;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(DefaultMBeanServerInterceptor, delegate)},
	{"repository", "Lcom/sun/jmx/mbeanserver/Repository;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(DefaultMBeanServerInterceptor, repository)},
	{"listenerWrappers", "Ljava/util/WeakHashMap;", "Ljava/util/WeakHashMap<Lcom/sun/jmx/interceptor/DefaultMBeanServerInterceptor$ListenerWrapper;Ljava/lang/ref/WeakReference<Lcom/sun/jmx/interceptor/DefaultMBeanServerInterceptor$ListenerWrapper;>;>;", $PRIVATE | $FINAL | $TRANSIENT, $field(DefaultMBeanServerInterceptor, listenerWrappers)},
	{"domain", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DefaultMBeanServerInterceptor, domain)},
	{"beingUnregistered", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/management/ObjectName;>;", $PRIVATE | $FINAL, $field(DefaultMBeanServerInterceptor, beingUnregistered)},
	{}
};

$MethodInfo _DefaultMBeanServerInterceptor_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/MBeanServer;Ljavax/management/MBeanServerDelegate;Lcom/sun/jmx/mbeanserver/MBeanInstantiator;Lcom/sun/jmx/mbeanserver/Repository;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultMBeanServerInterceptor::*)($MBeanServer*,$MBeanServerDelegate*,$MBeanInstantiator*,$Repository*)>(&DefaultMBeanServerInterceptor::init$))},
	{"addClassLoader", "(Ljava/lang/ClassLoader;Ljavax/management/ObjectName;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultMBeanServerInterceptor::*)($ClassLoader*,$ObjectName*)>(&DefaultMBeanServerInterceptor::addClassLoader))},
	{"addNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException"},
	{"addNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/ObjectName;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException"},
	{"checkMBeanPermission", "(Ljavax/management/DynamicMBean;Ljava/lang/String;Ljavax/management/ObjectName;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($DynamicMBean*,$String*,$ObjectName*,$String*)>(&DefaultMBeanServerInterceptor::checkMBeanPermission))},
	{"checkMBeanPermission", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/ObjectName;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*,$ObjectName*,$String*)>(&DefaultMBeanServerInterceptor::checkMBeanPermission))},
	{"checkMBeanTrustPermission", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Class*)>(&DefaultMBeanServerInterceptor::checkMBeanTrustPermission)), "java.lang.SecurityException"},
	{"createClassLoaderContext", "(Ljava/lang/ClassLoader;Ljavax/management/ObjectName;)Lcom/sun/jmx/interceptor/DefaultMBeanServerInterceptor$ResourceContext;", nullptr, $PRIVATE, $method(static_cast<$DefaultMBeanServerInterceptor$ResourceContext*(DefaultMBeanServerInterceptor::*)($ClassLoader*,$ObjectName*)>(&DefaultMBeanServerInterceptor::createClassLoaderContext))},
	{"createMBean", "(Ljava/lang/String;Ljavax/management/ObjectName;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.InstanceAlreadyExistsException,javax.management.MBeanRegistrationException,javax.management.MBeanException,javax.management.NotCompliantMBeanException"},
	{"createMBean", "(Ljava/lang/String;Ljavax/management/ObjectName;Ljavax/management/ObjectName;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.InstanceAlreadyExistsException,javax.management.MBeanRegistrationException,javax.management.MBeanException,javax.management.NotCompliantMBeanException,javax.management.InstanceNotFoundException"},
	{"createMBean", "(Ljava/lang/String;Ljavax/management/ObjectName;[Ljava/lang/Object;[Ljava/lang/String;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.InstanceAlreadyExistsException,javax.management.MBeanRegistrationException,javax.management.MBeanException,javax.management.NotCompliantMBeanException"},
	{"createMBean", "(Ljava/lang/String;Ljavax/management/ObjectName;Ljavax/management/ObjectName;[Ljava/lang/Object;[Ljava/lang/String;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.InstanceAlreadyExistsException,javax.management.MBeanRegistrationException,javax.management.MBeanException,javax.management.NotCompliantMBeanException,javax.management.InstanceNotFoundException"},
	{"createMBean", "(Ljava/lang/String;Ljavax/management/ObjectName;Ljavax/management/ObjectName;Z[Ljava/lang/Object;[Ljava/lang/String;)Ljavax/management/ObjectInstance;", nullptr, $PRIVATE, $method(static_cast<$ObjectInstance*(DefaultMBeanServerInterceptor::*)($String*,$ObjectName*,$ObjectName*,bool,$ObjectArray*,$StringArray*)>(&DefaultMBeanServerInterceptor::createMBean)), "javax.management.ReflectionException,javax.management.InstanceAlreadyExistsException,javax.management.MBeanRegistrationException,javax.management.MBeanException,javax.management.NotCompliantMBeanException,javax.management.InstanceNotFoundException"},
	{"exclusiveUnregisterMBean", "(Ljavax/management/ObjectName;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultMBeanServerInterceptor::*)($ObjectName*)>(&DefaultMBeanServerInterceptor::exclusiveUnregisterMBean)), "javax.management.InstanceNotFoundException,javax.management.MBeanRegistrationException"},
	{"filterListOfObjectInstances", "(Ljava/util/Set;Ljavax/management/QueryExp;)Ljava/util/Set;", "(Ljava/util/Set<Ljavax/management/ObjectInstance;>;Ljavax/management/QueryExp;)Ljava/util/Set<Ljavax/management/ObjectInstance;>;", $PRIVATE, $method(static_cast<$Set*(DefaultMBeanServerInterceptor::*)($Set*,$QueryExp*)>(&DefaultMBeanServerInterceptor::filterListOfObjectInstances))},
	{"getAttribute", "(Ljavax/management/ObjectName;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.MBeanException,javax.management.AttributeNotFoundException,javax.management.InstanceNotFoundException,javax.management.ReflectionException"},
	{"getAttributes", "(Ljavax/management/ObjectName;[Ljava/lang/String;)Ljavax/management/AttributeList;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.ReflectionException"},
	{"getClassLoader", "(Ljavax/management/ObjectName;)Ljava/lang/ClassLoader;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException"},
	{"getClassLoaderFor", "(Ljavax/management/ObjectName;)Ljava/lang/ClassLoader;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException"},
	{"getClassLoaderRepository", "()Ljavax/management/loading/ClassLoaderRepository;", nullptr, $PUBLIC},
	{"getClassName", "(Ljavax/management/DynamicMBean;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($DynamicMBean*)>(&DefaultMBeanServerInterceptor::getClassName))},
	{"getDefaultDomain", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDomains", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getInstantiatorCLR", "()Lcom/sun/jmx/mbeanserver/ModifiableClassLoaderRepository;", nullptr, $PRIVATE, $method(static_cast<$ModifiableClassLoaderRepository*(DefaultMBeanServerInterceptor::*)()>(&DefaultMBeanServerInterceptor::getInstantiatorCLR))},
	{"getListener", "(Ljavax/management/ObjectName;)Ljavax/management/NotificationListener;", nullptr, $PRIVATE, $method(static_cast<$NotificationListener*(DefaultMBeanServerInterceptor::*)($ObjectName*)>(&DefaultMBeanServerInterceptor::getListener)), "javax.management.ListenerNotFoundException"},
	{"getListenerWrapper", "(Ljavax/management/NotificationListener;Ljavax/management/ObjectName;Ljavax/management/DynamicMBean;Z)Ljavax/management/NotificationListener;", nullptr, $PRIVATE, $method(static_cast<$NotificationListener*(DefaultMBeanServerInterceptor::*)($NotificationListener*,$ObjectName*,$DynamicMBean*,bool)>(&DefaultMBeanServerInterceptor::getListenerWrapper))},
	{"getMBean", "(Ljavax/management/ObjectName;)Ljavax/management/DynamicMBean;", nullptr, $PRIVATE, $method(static_cast<$DynamicMBean*(DefaultMBeanServerInterceptor::*)($ObjectName*)>(&DefaultMBeanServerInterceptor::getMBean)), "javax.management.InstanceNotFoundException"},
	{"getMBeanCount", "()Ljava/lang/Integer;", nullptr, $PUBLIC},
	{"getMBeanInfo", "(Ljavax/management/ObjectName;)Ljavax/management/MBeanInfo;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.IntrospectionException,javax.management.ReflectionException"},
	{"getNewMBeanClassName", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(Object$*)>(&DefaultMBeanServerInterceptor::getNewMBeanClassName)), "javax.management.NotCompliantMBeanException"},
	{"getNotificationBroadcaster", "(Ljavax/management/ObjectName;Ljava/lang/Object;Ljava/lang/Class;)Ljavax/management/NotificationBroadcaster;", "<T::Ljavax/management/NotificationBroadcaster;>(Ljavax/management/ObjectName;Ljava/lang/Object;Ljava/lang/Class<TT;>;)TT;", $PRIVATE | $STATIC, $method(static_cast<$NotificationBroadcaster*(*)($ObjectName*,Object$*,$Class*)>(&DefaultMBeanServerInterceptor::getNotificationBroadcaster))},
	{"getObjectInstance", "(Ljavax/management/ObjectName;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException"},
	{"getResource", "(Ljavax/management/DynamicMBean;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($DynamicMBean*)>(&DefaultMBeanServerInterceptor::getResource))},
	{"instantiate", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.MBeanException"},
	{"instantiate", "(Ljava/lang/String;Ljavax/management/ObjectName;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.MBeanException,javax.management.InstanceNotFoundException"},
	{"instantiate", "(Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.MBeanException"},
	{"instantiate", "(Ljava/lang/String;Ljavax/management/ObjectName;[Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.MBeanException,javax.management.InstanceNotFoundException"},
	{"invoke", "(Ljavax/management/ObjectName;Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.MBeanException,javax.management.ReflectionException"},
	{"isInstanceOf", "(Ljavax/management/ObjectName;Ljava/lang/String;)Z", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException"},
	{"isRegistered", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC},
	{"makeResourceContextFor", "(Ljava/lang/Object;Ljavax/management/ObjectName;)Lcom/sun/jmx/interceptor/DefaultMBeanServerInterceptor$ResourceContext;", nullptr, $PRIVATE, $method(static_cast<$DefaultMBeanServerInterceptor$ResourceContext*(DefaultMBeanServerInterceptor::*)(Object$*,$ObjectName*)>(&DefaultMBeanServerInterceptor::makeResourceContextFor))},
	{"nonDefaultDomain", "(Ljavax/management/ObjectName;)Ljavax/management/ObjectName;", nullptr, $PRIVATE, $method(static_cast<$ObjectName*(DefaultMBeanServerInterceptor::*)($ObjectName*)>(&DefaultMBeanServerInterceptor::nonDefaultDomain))},
	{"objectInstancesFromFilteredNamedObjects", "(Ljava/util/Set;Ljavax/management/QueryExp;)Ljava/util/Set;", "(Ljava/util/Set<Lcom/sun/jmx/mbeanserver/NamedObject;>;Ljavax/management/QueryExp;)Ljava/util/Set<Ljavax/management/ObjectInstance;>;", $PRIVATE, $method(static_cast<$Set*(DefaultMBeanServerInterceptor::*)($Set*,$QueryExp*)>(&DefaultMBeanServerInterceptor::objectInstancesFromFilteredNamedObjects))},
	{"objectNamesFromFilteredNamedObjects", "(Ljava/util/Set;Ljavax/management/QueryExp;)Ljava/util/Set;", "(Ljava/util/Set<Lcom/sun/jmx/mbeanserver/NamedObject;>;Ljavax/management/QueryExp;)Ljava/util/Set<Ljavax/management/ObjectName;>;", $PRIVATE, $method(static_cast<$Set*(DefaultMBeanServerInterceptor::*)($Set*,$QueryExp*)>(&DefaultMBeanServerInterceptor::objectNamesFromFilteredNamedObjects))},
	{"postDeregisterInvoke", "(Ljavax/management/ObjectName;Ljavax/management/MBeanRegistration;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ObjectName*,$MBeanRegistration*)>(&DefaultMBeanServerInterceptor::postDeregisterInvoke))},
	{"postRegister", "(Ljavax/management/ObjectName;Ljavax/management/DynamicMBean;ZZ)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ObjectName*,$DynamicMBean*,bool,bool)>(&DefaultMBeanServerInterceptor::postRegister))},
	{"preDeregisterInvoke", "(Ljavax/management/MBeanRegistration;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($MBeanRegistration*)>(&DefaultMBeanServerInterceptor::preDeregisterInvoke)), "javax.management.MBeanRegistrationException"},
	{"preRegister", "(Ljavax/management/DynamicMBean;Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)Ljavax/management/ObjectName;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ObjectName*(*)($DynamicMBean*,$MBeanServer*,$ObjectName*)>(&DefaultMBeanServerInterceptor::preRegister)), "javax.management.InstanceAlreadyExistsException,javax.management.MBeanRegistrationException"},
	{"queryMBeans", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set;", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set<Ljavax/management/ObjectInstance;>;", $PUBLIC},
	{"queryMBeansImpl", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set;", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set<Ljavax/management/ObjectInstance;>;", $PRIVATE, $method(static_cast<$Set*(DefaultMBeanServerInterceptor::*)($ObjectName*,$QueryExp*)>(&DefaultMBeanServerInterceptor::queryMBeansImpl))},
	{"queryNames", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set;", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set<Ljavax/management/ObjectName;>;", $PUBLIC},
	{"queryNamesImpl", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set;", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set<Ljavax/management/ObjectName;>;", $PRIVATE, $method(static_cast<$Set*(DefaultMBeanServerInterceptor::*)($ObjectName*,$QueryExp*)>(&DefaultMBeanServerInterceptor::queryNamesImpl))},
	{"registerDynamicMBean", "(Ljava/lang/String;Ljavax/management/DynamicMBean;Ljavax/management/ObjectName;)Ljavax/management/ObjectInstance;", nullptr, $PRIVATE, $method(static_cast<$ObjectInstance*(DefaultMBeanServerInterceptor::*)($String*,$DynamicMBean*,$ObjectName*)>(&DefaultMBeanServerInterceptor::registerDynamicMBean)), "javax.management.InstanceAlreadyExistsException,javax.management.MBeanRegistrationException,javax.management.NotCompliantMBeanException"},
	{"registerMBean", "(Ljava/lang/Object;Ljavax/management/ObjectName;)Ljavax/management/ObjectInstance;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceAlreadyExistsException,javax.management.MBeanRegistrationException,javax.management.NotCompliantMBeanException"},
	{"registerObject", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/management/ObjectName;)Ljavax/management/ObjectInstance;", nullptr, $PRIVATE, $method(static_cast<$ObjectInstance*(DefaultMBeanServerInterceptor::*)($String*,Object$*,$ObjectName*)>(&DefaultMBeanServerInterceptor::registerObject)), "javax.management.InstanceAlreadyExistsException,javax.management.MBeanRegistrationException,javax.management.NotCompliantMBeanException"},
	{"registerWithRepository", "(Ljava/lang/Object;Ljavax/management/DynamicMBean;Ljavax/management/ObjectName;)Lcom/sun/jmx/interceptor/DefaultMBeanServerInterceptor$ResourceContext;", nullptr, $PRIVATE, $method(static_cast<$DefaultMBeanServerInterceptor$ResourceContext*(DefaultMBeanServerInterceptor::*)(Object$*,$DynamicMBean*,$ObjectName*)>(&DefaultMBeanServerInterceptor::registerWithRepository)), "javax.management.InstanceAlreadyExistsException,javax.management.MBeanRegistrationException"},
	{"removeClassLoader", "(Ljava/lang/ClassLoader;Ljavax/management/ObjectName;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultMBeanServerInterceptor::*)($ClassLoader*,$ObjectName*)>(&DefaultMBeanServerInterceptor::removeClassLoader))},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.ListenerNotFoundException"},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.ListenerNotFoundException"},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/ObjectName;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.ListenerNotFoundException"},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/ObjectName;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.ListenerNotFoundException"},
	{"removeNotificationListener", "(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;Z)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultMBeanServerInterceptor::*)($ObjectName*,$NotificationListener*,$NotificationFilter*,Object$*,bool)>(&DefaultMBeanServerInterceptor::removeNotificationListener)), "javax.management.InstanceNotFoundException,javax.management.ListenerNotFoundException"},
	{"rethrow", "(Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Throwable*)>(&DefaultMBeanServerInterceptor::rethrow)), "javax.management.ReflectionException"},
	{"rethrowMaybeMBeanException", "(Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Throwable*)>(&DefaultMBeanServerInterceptor::rethrowMaybeMBeanException)), "javax.management.ReflectionException,javax.management.MBeanException"},
	{"safeGetClassName", "(Ljavax/management/DynamicMBean;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($DynamicMBean*)>(&DefaultMBeanServerInterceptor::safeGetClassName))},
	{"sendNotification", "(Ljava/lang/String;Ljavax/management/ObjectName;)V", nullptr, $PRIVATE, $method(static_cast<void(DefaultMBeanServerInterceptor::*)($String*,$ObjectName*)>(&DefaultMBeanServerInterceptor::sendNotification))},
	{"setAttribute", "(Ljavax/management/ObjectName;Ljavax/management/Attribute;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.AttributeNotFoundException,javax.management.InvalidAttributeValueException,javax.management.MBeanException,javax.management.ReflectionException"},
	{"setAttributes", "(Ljavax/management/ObjectName;Ljavax/management/AttributeList;)Ljavax/management/AttributeList;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.ReflectionException"},
	{"throwMBeanRegistrationException", "(Ljava/lang/Throwable;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Throwable*,$String*)>(&DefaultMBeanServerInterceptor::throwMBeanRegistrationException)), "javax.management.MBeanRegistrationException"},
	{"unregisterFromRepository", "(Ljava/lang/Object;Ljavax/management/DynamicMBean;Ljavax/management/ObjectName;)Lcom/sun/jmx/interceptor/DefaultMBeanServerInterceptor$ResourceContext;", nullptr, $PRIVATE, $method(static_cast<$DefaultMBeanServerInterceptor$ResourceContext*(DefaultMBeanServerInterceptor::*)(Object$*,$DynamicMBean*,$ObjectName*)>(&DefaultMBeanServerInterceptor::unregisterFromRepository)), "javax.management.InstanceNotFoundException"},
	{"unregisterMBean", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.MBeanRegistrationException"},
	{}
};

$InnerClassInfo _DefaultMBeanServerInterceptor_InnerClassesInfo_[] = {
	{"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext", "com.sun.jmx.interceptor.DefaultMBeanServerInterceptor", "ResourceContext", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ListenerWrapper", "com.sun.jmx.interceptor.DefaultMBeanServerInterceptor", "ListenerWrapper", $PRIVATE | $STATIC},
	{"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$3", nullptr, nullptr, 0},
	{"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$2", nullptr, nullptr, 0},
	{"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultMBeanServerInterceptor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor",
	"java.lang.Object",
	"com.sun.jmx.interceptor.MBeanServerInterceptor",
	_DefaultMBeanServerInterceptor_FieldInfo_,
	_DefaultMBeanServerInterceptor_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultMBeanServerInterceptor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext,com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext$1,com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ListenerWrapper,com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$3,com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$2,com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$1"
};

$Object* allocate$DefaultMBeanServerInterceptor($Class* clazz) {
	return $of($alloc(DefaultMBeanServerInterceptor));
}

void DefaultMBeanServerInterceptor::init$($MBeanServer* outer, $MBeanServerDelegate* delegate, $MBeanInstantiator* instantiator, $Repository* repository) {
	$set(this, server, nullptr);
	$set(this, listenerWrappers, $new($WeakHashMap));
	$set(this, beingUnregistered, $new($HashSet));
	if (outer == nullptr) {
		$throwNew($IllegalArgumentException, "outer MBeanServer cannot be null"_s);
	}
	if (delegate == nullptr) {
		$throwNew($IllegalArgumentException, "MBeanServerDelegate cannot be null"_s);
	}
	if (instantiator == nullptr) {
		$throwNew($IllegalArgumentException, "MBeanInstantiator cannot be null"_s);
	}
	if (repository == nullptr) {
		$throwNew($IllegalArgumentException, "Repository cannot be null"_s);
	}
	$set(this, server, outer);
	$set(this, delegate, delegate);
	$set(this, instantiator, instantiator);
	$set(this, repository, repository);
	$set(this, domain, $nc(repository)->getDefaultDomain());
}

$ObjectInstance* DefaultMBeanServerInterceptor::createMBean($String* className, $ObjectName* name) {
	return createMBean(className, name, ($ObjectArray*)nullptr, ($StringArray*)nullptr);
}

$ObjectInstance* DefaultMBeanServerInterceptor::createMBean($String* className, $ObjectName* name, $ObjectName* loaderName) {
	return createMBean(className, name, loaderName, ($ObjectArray*)nullptr, ($StringArray*)nullptr);
}

$ObjectInstance* DefaultMBeanServerInterceptor::createMBean($String* className, $ObjectName* name, $ObjectArray* params, $StringArray* signature) {
	$useLocalCurrentObjectStackCache();
	try {
		return createMBean(className, name, nullptr, true, params, signature);
	} catch ($InstanceNotFoundException& e) {
		$throw($cast($IllegalArgumentException, $($EnvHelp::initCause($$new($IllegalArgumentException, $$str({"Unexpected exception: "_s, e})), e))));
	}
	$shouldNotReachHere();
}

$ObjectInstance* DefaultMBeanServerInterceptor::createMBean($String* className, $ObjectName* name, $ObjectName* loaderName, $ObjectArray* params, $StringArray* signature) {
	return createMBean(className, name, loaderName, false, params, signature);
}

$ObjectInstance* DefaultMBeanServerInterceptor::createMBean($String* className, $ObjectName* name$renamed, $ObjectName* loaderName$renamed, bool withDefaultLoaderRepository, $ObjectArray* params, $StringArray* signature) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectName, loaderName, loaderName$renamed);
	$var($ObjectName, name, name$renamed);
	$beforeCallerSensitive();
	$Class* theClass = nullptr;
	if (className == nullptr) {
		$var($RuntimeException, wrapped, $new($IllegalArgumentException, "The class name cannot be null"_s));
		$throwNew($RuntimeOperationsException, wrapped, "Exception occurred during MBean creation"_s);
	}
	if (name != nullptr) {
		if (name->isPattern()) {
			$var($RuntimeException, wrapped, $new($IllegalArgumentException, $$str({"Invalid name->"_s, $(name->toString())})));
			$var($String, msg, "Exception occurred during MBean creation"_s);
			$throwNew($RuntimeOperationsException, wrapped, msg);
		}
		$assign(name, nonDefaultDomain(name));
	}
	checkMBeanPermission(className, ($String*)nullptr, ($ObjectName*)nullptr, "instantiate"_s);
	checkMBeanPermission(className, ($String*)nullptr, name, "registerMBean"_s);
	if (withDefaultLoaderRepository) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({"ClassName = "_s, className, ", ObjectName = "_s, name}));
		}
		theClass = $nc(this->instantiator)->findClassWithDefaultLoaderRepository(className);
	} else if (loaderName == nullptr) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({"ClassName = "_s, className, ", ObjectName = "_s, name, ", Loader name = null"_s}));
		}
		theClass = $nc(this->instantiator)->findClass(className, $($nc($of(this->server))->getClass()->getClassLoader()));
	} else {
		$assign(loaderName, nonDefaultDomain(loaderName));
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({"ClassName = "_s, className, ", ObjectName = "_s, name, ", Loader name = "_s, loaderName}));
		}
		theClass = $nc(this->instantiator)->findClass(className, loaderName);
	}
	checkMBeanTrustPermission(theClass);
	$Introspector::testCreation(theClass);
	$Introspector::checkCompliance(theClass);
	$var($Object, moi, $nc(this->instantiator)->instantiate(theClass, params, signature, $($nc($of(this->server))->getClass()->getClassLoader())));
	$var($String, infoClassName, getNewMBeanClassName(moi));
	return registerObject(infoClassName, moi, name);
}

$ObjectInstance* DefaultMBeanServerInterceptor::registerMBean(Object$* object, $ObjectName* name) {
	$Class* theClass = $nc($of(object))->getClass();
	$Introspector::checkCompliance(theClass);
	$var($String, infoClassName, getNewMBeanClassName(object));
	checkMBeanPermission(infoClassName, ($String*)nullptr, name, "registerMBean"_s);
	checkMBeanTrustPermission(theClass);
	return registerObject(infoClassName, object, name);
}

$String* DefaultMBeanServerInterceptor::getNewMBeanClassName(Object$* mbeanToRegister) {
	$init(DefaultMBeanServerInterceptor);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($DynamicMBean, mbeanToRegister)) {
		$var($DynamicMBean, mbean, $cast($DynamicMBean, mbeanToRegister));
		$var($String, name, nullptr);
		try {
			$assign(name, $nc($($nc(mbean)->getMBeanInfo()))->getClassName());
		} catch ($Exception& e) {
			$var($NotCompliantMBeanException, ncmbe, $new($NotCompliantMBeanException, "Bad getMBeanInfo()"_s));
			ncmbe->initCause(e);
			$throw(ncmbe);
		}
		if (name == nullptr) {
			$var($String, msg, "MBeanInfo has null class name"_s);
			$throwNew($NotCompliantMBeanException, msg);
		}
		return name;
	} else {
		return $nc($of(mbeanToRegister))->getClass()->getName();
	}
}

void DefaultMBeanServerInterceptor::unregisterMBean($ObjectName* name$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectName, name, name$renamed);
	if (name == nullptr) {
		$var($RuntimeException, wrapped, $new($IllegalArgumentException, "Object name cannot be null"_s));
		$throwNew($RuntimeOperationsException, wrapped, "Exception occurred trying to unregister the MBean"_s);
	}
	$assign(name, nonDefaultDomain(name));
	$synchronized(this->beingUnregistered) {
		while ($nc(this->beingUnregistered)->contains(name)) {
			try {
				$nc($of(this->beingUnregistered))->wait();
			} catch ($InterruptedException& e) {
				$throwNew($MBeanRegistrationException, e, $(e->toString()));
			}
		}
		$nc(this->beingUnregistered)->add(name);
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			exclusiveUnregisterMBean(name);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$synchronized(this->beingUnregistered) {
				$nc(this->beingUnregistered)->remove(name);
				$nc($of(this->beingUnregistered))->notifyAll();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void DefaultMBeanServerInterceptor::exclusiveUnregisterMBean($ObjectName* name) {
	$useLocalCurrentObjectStackCache();
	$var($DynamicMBean, instance, getMBean(name));
	checkMBeanPermission(instance, ($String*)nullptr, name, "unregisterMBean"_s);
	if ($instanceOf($MBeanRegistration, instance)) {
		preDeregisterInvoke($cast($MBeanRegistration, instance));
	}
	$var($Object, resource, getResource(instance));
	$var($DefaultMBeanServerInterceptor$ResourceContext, context, unregisterFromRepository(resource, instance, name));
	{
		$var($Throwable, var$0, nullptr);
		try {
			if ($instanceOf($MBeanRegistration, instance)) {
				postDeregisterInvoke(name, $cast($MBeanRegistration, instance));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(context)->done();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$ObjectInstance* DefaultMBeanServerInterceptor::getObjectInstance($ObjectName* name$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectName, name, name$renamed);
	$assign(name, nonDefaultDomain(name));
	$var($DynamicMBean, instance, getMBean(name));
	checkMBeanPermission(instance, ($String*)nullptr, name, "getObjectInstance"_s);
	$var($String, className, getClassName(instance));
	return $new($ObjectInstance, name, className);
}

$Set* DefaultMBeanServerInterceptor::queryMBeans($ObjectName* name, $QueryExp* query) {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		checkMBeanPermission(($String*)nullptr, ($String*)nullptr, ($ObjectName*)nullptr, "queryMBeans"_s);
		$var($Set, list, queryMBeansImpl(name, nullptr));
		$var($Set, allowedList, $new($HashSet, $nc(list)->size()));
		{
			$var($Iterator, i$, $nc(list)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($ObjectInstance, oi, $cast($ObjectInstance, i$->next()));
				{
					try {
						$var($String, var$0, $nc(oi)->getClassName());
						checkMBeanPermission(var$0, ($String*)nullptr, $(oi->getObjectName()), "queryMBeans"_s);
						allowedList->add(oi);
					} catch ($SecurityException& e) {
					}
				}
			}
		}
		return filterListOfObjectInstances(allowedList, query);
	} else {
		return queryMBeansImpl(name, query);
	}
}

$Set* DefaultMBeanServerInterceptor::queryMBeansImpl($ObjectName* name, $QueryExp* query) {
	$var($Set, list, $nc(this->repository)->query(name, query));
	return (objectInstancesFromFilteredNamedObjects(list, query));
}

$Set* DefaultMBeanServerInterceptor::queryNames($ObjectName* name, $QueryExp* query) {
	$useLocalCurrentObjectStackCache();
	$var($Set, queryList, nullptr);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		checkMBeanPermission(($String*)nullptr, ($String*)nullptr, ($ObjectName*)nullptr, "queryNames"_s);
		$var($Set, list, queryMBeansImpl(name, nullptr));
		$var($Set, allowedList, $new($HashSet, $nc(list)->size()));
		{
			$var($Iterator, i$, $nc(list)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($ObjectInstance, oi, $cast($ObjectInstance, i$->next()));
				{
					try {
						$var($String, var$0, $nc(oi)->getClassName());
						checkMBeanPermission(var$0, ($String*)nullptr, $(oi->getObjectName()), "queryNames"_s);
						allowedList->add(oi);
					} catch ($SecurityException& e) {
					}
				}
			}
		}
		$var($Set, queryObjectInstanceList, filterListOfObjectInstances(allowedList, query));
		$assign(queryList, $new($HashSet, $nc(queryObjectInstanceList)->size()));
		{
			$var($Iterator, i$, $nc(queryObjectInstanceList)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($ObjectInstance, oi, $cast($ObjectInstance, i$->next()));
				{
					queryList->add($($nc(oi)->getObjectName()));
				}
			}
		}
	} else {
		$assign(queryList, queryNamesImpl(name, query));
	}
	return queryList;
}

$Set* DefaultMBeanServerInterceptor::queryNamesImpl($ObjectName* name, $QueryExp* query) {
	$var($Set, list, $nc(this->repository)->query(name, query));
	return (objectNamesFromFilteredNamedObjects(list, query));
}

bool DefaultMBeanServerInterceptor::isRegistered($ObjectName* name$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectName, name, name$renamed);
	if (name == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "Object name cannot be null"_s), "Object name cannot be null"_s);
	}
	$assign(name, nonDefaultDomain(name));
	return ($nc(this->repository)->contains(name));
}

$StringArray* DefaultMBeanServerInterceptor::getDomains() {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		checkMBeanPermission(($String*)nullptr, ($String*)nullptr, ($ObjectName*)nullptr, "getDomains"_s);
		$var($StringArray, domains, $nc(this->repository)->getDomains());
		$var($List, result, $new($ArrayList, $nc(domains)->length));
		for (int32_t i = 0; i < $nc(domains)->length; ++i) {
			try {
				$var($ObjectName, dom, $Util::newObjectName($$str({domains->get(i), ":x=x"_s})));
				checkMBeanPermission(($String*)nullptr, ($String*)nullptr, dom, "getDomains"_s);
				result->add(domains->get(i));
			} catch ($SecurityException& e) {
			}
		}
		return $fcast($StringArray, result->toArray($$new($StringArray, result->size())));
	} else {
		return $nc(this->repository)->getDomains();
	}
}

$Integer* DefaultMBeanServerInterceptor::getMBeanCount() {
	return ($nc(this->repository)->getCount());
}

$Object* DefaultMBeanServerInterceptor::getAttribute($ObjectName* name$renamed, $String* attribute) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectName, name, name$renamed);
	if (name == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "Object name cannot be null"_s), "Exception occurred trying to invoke the getter on the MBean"_s);
	}
	if (attribute == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "Attribute cannot be null"_s), "Exception occurred trying to invoke the getter on the MBean"_s);
	}
	$assign(name, nonDefaultDomain(name));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Attribute = "_s, attribute, ", ObjectName = "_s, name}));
	}
	$var($DynamicMBean, instance, getMBean(name));
	checkMBeanPermission(instance, attribute, name, "getAttribute"_s);
	try {
		return $of($nc(instance)->getAttribute(attribute));
	} catch ($AttributeNotFoundException& e) {
		$throw(e);
	} catch ($Throwable& t) {
		rethrowMaybeMBeanException(t);
		$throwNew($AssertionError);
	}
	$shouldNotReachHere();
}

$AttributeList* DefaultMBeanServerInterceptor::getAttributes($ObjectName* name$renamed, $StringArray* attributes) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectName, name, name$renamed);
	if (name == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "ObjectName name cannot be null"_s), "Exception occurred trying to invoke the getter on the MBean"_s);
	}
	if (attributes == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "Attributes cannot be null"_s), "Exception occurred trying to invoke the getter on the MBean"_s);
	}
	$assign(name, nonDefaultDomain(name));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({"ObjectName = "_s, name}));
	}
	$var($DynamicMBean, instance, getMBean(name));
	$var($StringArray, allowedAttributes, nullptr);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm == nullptr) {
		$assign(allowedAttributes, attributes);
	} else {
		$var($String, classname, getClassName(instance));
		checkMBeanPermission(classname, ($String*)nullptr, name, "getAttribute"_s);
		$var($List, allowedList, $new($ArrayList, $nc(attributes)->length));
		{
			$var($StringArray, arr$, attributes);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, attr, arr$->get(i$));
				{
					try {
						checkMBeanPermission(classname, attr, name, "getAttribute"_s);
						allowedList->add(attr);
					} catch ($SecurityException& e) {
					}
				}
			}
		}
		$assign(allowedAttributes, $fcast($StringArray, allowedList->toArray($$new($StringArray, allowedList->size()))));
	}
	try {
		return $nc(instance)->getAttributes(allowedAttributes);
	} catch ($Throwable& t) {
		rethrow(t);
		$throwNew($AssertionError);
	}
	$shouldNotReachHere();
}

void DefaultMBeanServerInterceptor::setAttribute($ObjectName* name$renamed, $Attribute* attribute) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectName, name, name$renamed);
	if (name == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "ObjectName name cannot be null"_s), "Exception occurred trying to invoke the setter on the MBean"_s);
	}
	if (attribute == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "Attribute cannot be null"_s), "Exception occurred trying to invoke the setter on the MBean"_s);
	}
	$assign(name, nonDefaultDomain(name));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$var($String, var$0, $$str({"ObjectName = "_s, name, ", Attribute = "_s}));
		$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$concat(var$0, $($nc(attribute)->getName())));
	}
	$var($DynamicMBean, instance, getMBean(name));
	checkMBeanPermission(instance, $($nc(attribute)->getName()), name, "setAttribute"_s);
	try {
		$nc(instance)->setAttribute(attribute);
	} catch ($AttributeNotFoundException& e) {
		$throw(e);
	} catch ($InvalidAttributeValueException& e) {
		$throw(e);
	} catch ($Throwable& t) {
		rethrowMaybeMBeanException(t);
		$throwNew($AssertionError);
	}
}

$AttributeList* DefaultMBeanServerInterceptor::setAttributes($ObjectName* name$renamed, $AttributeList* attributes) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectName, name, name$renamed);
	if (name == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "ObjectName name cannot be null"_s), "Exception occurred trying to invoke the setter on the MBean"_s);
	}
	if (attributes == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "AttributeList  cannot be null"_s), "Exception occurred trying to invoke the setter on the MBean"_s);
	}
	$assign(name, nonDefaultDomain(name));
	$var($DynamicMBean, instance, getMBean(name));
	$var($AttributeList, allowedAttributes, nullptr);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm == nullptr) {
		$assign(allowedAttributes, attributes);
	} else {
		$var($String, classname, getClassName(instance));
		checkMBeanPermission(classname, ($String*)nullptr, name, "setAttribute"_s);
		$assign(allowedAttributes, $new($AttributeList, $nc(attributes)->size()));
		{
			$var($Iterator, i$, $nc($($nc(attributes)->asList()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Attribute, attribute, $cast($Attribute, i$->next()));
				{
					try {
						checkMBeanPermission(classname, $($nc(attribute)->getName()), name, "setAttribute"_s);
						allowedAttributes->add(attribute);
					} catch ($SecurityException& e) {
					}
				}
			}
		}
	}
	try {
		return $nc(instance)->setAttributes(allowedAttributes);
	} catch ($Throwable& t) {
		rethrow(t);
		$throwNew($AssertionError);
	}
	$shouldNotReachHere();
}

$Object* DefaultMBeanServerInterceptor::invoke($ObjectName* name$renamed, $String* operationName, $ObjectArray* params, $StringArray* signature) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectName, name, name$renamed);
	$assign(name, nonDefaultDomain(name));
	$var($DynamicMBean, instance, getMBean(name));
	checkMBeanPermission(instance, operationName, name, "invoke"_s);
	try {
		return $of($nc(instance)->invoke(operationName, params, signature));
	} catch ($Throwable& t) {
		rethrowMaybeMBeanException(t);
		$throwNew($AssertionError);
	}
	$shouldNotReachHere();
}

void DefaultMBeanServerInterceptor::rethrow($Throwable* t) {
	$init(DefaultMBeanServerInterceptor);
	$useLocalCurrentObjectStackCache();
	try {
		$throw(t);
	} catch ($ReflectionException& e) {
		$throw(e);
	} catch ($RuntimeOperationsException& e) {
		$throw(e);
	} catch ($RuntimeErrorException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($RuntimeMBeanException, e, $(e->toString()));
	} catch ($Error& e) {
		$throwNew($RuntimeErrorException, e, $(e->toString()));
	} catch ($Throwable& t2) {
		$throwNew($RuntimeException, "Unexpected exception"_s, t2);
	}
}

void DefaultMBeanServerInterceptor::rethrowMaybeMBeanException($Throwable* t) {
	$init(DefaultMBeanServerInterceptor);
	if ($instanceOf($MBeanException, t)) {
		$throw($cast($MBeanException, t));
	}
	rethrow(t);
}

$ObjectInstance* DefaultMBeanServerInterceptor::registerObject($String* classname, Object$* object, $ObjectName* name) {
	$useLocalCurrentObjectStackCache();
	if (object == nullptr) {
		$var($RuntimeException, wrapped, $new($IllegalArgumentException, "Cannot add null object"_s));
		$throwNew($RuntimeOperationsException, wrapped, "Exception occurred trying to register the MBean"_s);
	}
	$var($DynamicMBean, mbean, $Introspector::makeDynamicMBean(object));
	return registerDynamicMBean(classname, mbean, name);
}

$ObjectInstance* DefaultMBeanServerInterceptor::registerDynamicMBean($String* classname, $DynamicMBean* mbean, $ObjectName* name$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectName, name, name$renamed);
	$assign(name, nonDefaultDomain(name));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({"ObjectName = "_s, name}));
	}
	$var($ObjectName, logicalName, preRegister(mbean, this->server, name));
	bool registered = false;
	bool registerFailed = false;
	$var($DefaultMBeanServerInterceptor$ResourceContext, context, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			if ($instanceOf($DynamicMBean2, mbean)) {
				try {
					$nc(($cast($DynamicMBean2, mbean)))->preRegister2(this->server, logicalName);
					registerFailed = true;
				} catch ($Exception& e) {
					if ($instanceOf($RuntimeException, e)) {
						$throw($cast($RuntimeException, e));
					}
					if ($instanceOf($InstanceAlreadyExistsException, e)) {
						$throw($cast($InstanceAlreadyExistsException, e));
					}
					$throwNew($RuntimeException, static_cast<$Throwable*>(e));
				}
			}
			if (logicalName != name && logicalName != nullptr) {
				$assign(logicalName, $ObjectName::getInstance($(nonDefaultDomain(logicalName))));
			}
			checkMBeanPermission(classname, ($String*)nullptr, logicalName, "registerMBean"_s);
			if (logicalName == nullptr) {
				$var($RuntimeException, wrapped, $new($IllegalArgumentException, "No object name specified"_s));
				$throwNew($RuntimeOperationsException, wrapped, "Exception occurred trying to register the MBean"_s);
			}
			$var($Object, resource, getResource(mbean));
			$assign(context, registerWithRepository(resource, mbean, logicalName));
			registerFailed = false;
			registered = true;
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			{
				$var($Throwable, var$2, nullptr);
				try {
					postRegister(logicalName, mbean, registered, registerFailed);
				} catch ($Throwable& var$3) {
					$assign(var$2, var$3);
				} /*finally*/ {
					if (registered && context != nullptr) {
						context->done();
					}
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return $new($ObjectInstance, logicalName, classname);
}

void DefaultMBeanServerInterceptor::throwMBeanRegistrationException($Throwable* t, $String* where) {
	$init(DefaultMBeanServerInterceptor);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($RuntimeException, t)) {
		$throwNew($RuntimeMBeanException, $cast($RuntimeException, t), $$str({"RuntimeException thrown "_s, where}));
	} else if ($instanceOf($Error, t)) {
		$throwNew($RuntimeErrorException, $cast($Error, t), $$str({"Error thrown "_s, where}));
	} else if ($instanceOf($MBeanRegistrationException, t)) {
		$throw($cast($MBeanRegistrationException, t));
	} else if ($instanceOf($Exception, t)) {
		$throwNew($MBeanRegistrationException, $cast($Exception, t), $$str({"Exception thrown "_s, where}));
	} else {
		$throwNew($RuntimeException, t);
	}
}

$ObjectName* DefaultMBeanServerInterceptor::preRegister($DynamicMBean* mbean, $MBeanServer* mbs, $ObjectName* name) {
	$init(DefaultMBeanServerInterceptor);
	$var($ObjectName, newName, nullptr);
	try {
		if ($instanceOf($MBeanRegistration, mbean)) {
			$assign(newName, $nc(($cast($MBeanRegistration, mbean)))->preRegister(mbs, name));
		}
	} catch ($Throwable& t) {
		throwMBeanRegistrationException(t, "in preRegister method"_s);
	}
	if (newName != nullptr) {
		return newName;
	} else {
		return name;
	}
}

void DefaultMBeanServerInterceptor::postRegister($ObjectName* logicalName, $DynamicMBean* mbean, bool registrationDone, bool registerFailed) {
	$init(DefaultMBeanServerInterceptor);
	$useLocalCurrentObjectStackCache();
	if (registerFailed && $instanceOf($DynamicMBean2, mbean)) {
		$nc(($cast($DynamicMBean2, mbean)))->registerFailed();
	}
	try {
		if ($instanceOf($MBeanRegistration, mbean)) {
			$nc(($cast($MBeanRegistration, mbean)))->postRegister($($Boolean::valueOf(registrationDone)));
		}
	} catch ($RuntimeException& e) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::DEBUG, $$str({"While registering MBean ["_s, logicalName, "]: Exception thrown by postRegister: rethrowing <"_s, e, ">, but keeping the MBean registered"_s}));
		$throwNew($RuntimeMBeanException, e, $$str({"RuntimeException thrown in postRegister method: rethrowing <"_s, e, ">, but keeping the MBean registered"_s}));
	} catch ($Error& er) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::DEBUG, $$str({"While registering MBean ["_s, logicalName, "]: Error thrown by postRegister: rethrowing <"_s, er, ">, but keeping the MBean registered"_s}));
		$throwNew($RuntimeErrorException, er, $$str({"Error thrown in postRegister method: rethrowing <"_s, er, ">, but keeping the MBean registered"_s}));
	}
}

void DefaultMBeanServerInterceptor::preDeregisterInvoke($MBeanRegistration* moi) {
	$init(DefaultMBeanServerInterceptor);
	try {
		$nc(moi)->preDeregister();
	} catch ($Throwable& t) {
		throwMBeanRegistrationException(t, "in preDeregister method"_s);
	}
}

void DefaultMBeanServerInterceptor::postDeregisterInvoke($ObjectName* mbean, $MBeanRegistration* moi) {
	$init(DefaultMBeanServerInterceptor);
	$useLocalCurrentObjectStackCache();
	try {
		$nc(moi)->postDeregister();
	} catch ($RuntimeException& e) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::DEBUG, $$str({"While unregistering MBean ["_s, mbean, "]: Exception thrown by postDeregister: rethrowing <"_s, e, ">, although the MBean is succesfully unregistered"_s}));
		$throwNew($RuntimeMBeanException, e, $$str({"RuntimeException thrown in postDeregister method: rethrowing <"_s, e, ">, although the MBean is sucessfully unregistered"_s}));
	} catch ($Error& er) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::DEBUG, $$str({"While unregistering MBean ["_s, mbean, "]: Error thrown by postDeregister: rethrowing <"_s, er, ">, although the MBean is succesfully unregistered"_s}));
		$throwNew($RuntimeErrorException, er, $$str({"Error thrown in postDeregister method: rethrowing <"_s, er, ">, although the MBean is sucessfully unregistered"_s}));
	}
}

$DynamicMBean* DefaultMBeanServerInterceptor::getMBean($ObjectName* name) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "Object name cannot be null"_s), "Exception occurred trying to get an MBean"_s);
	}
	$var($DynamicMBean, obj, $nc(this->repository)->retrieve(name));
	if (obj == nullptr) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({name, " : Found no object"_s}));
		}
		$throwNew($InstanceNotFoundException, $($nc(name)->toString()));
	}
	return obj;
}

$Object* DefaultMBeanServerInterceptor::getResource($DynamicMBean* mbean) {
	$init(DefaultMBeanServerInterceptor);
	if ($instanceOf($DynamicMBean2, mbean)) {
		return $of($nc(($cast($DynamicMBean2, mbean)))->getResource());
	} else {
		return $of(mbean);
	}
}

$ObjectName* DefaultMBeanServerInterceptor::nonDefaultDomain($ObjectName* name) {
	$useLocalCurrentObjectStackCache();
	if (name == nullptr || $nc($($nc(name)->getDomain()))->length() > 0) {
		return name;
	}
	$var($String, completeName, $str({this->domain, name}));
	return $Util::newObjectName(completeName);
}

$String* DefaultMBeanServerInterceptor::getDefaultDomain() {
	return this->domain;
}

void DefaultMBeanServerInterceptor::addNotificationListener($ObjectName* name, $NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({"ObjectName = "_s, name}));
	}
	$var($DynamicMBean, instance, getMBean(name));
	checkMBeanPermission(instance, ($String*)nullptr, name, "addNotificationListener"_s);
	$load($NotificationBroadcaster);
	$var($NotificationBroadcaster, broadcaster, getNotificationBroadcaster(name, instance, $NotificationBroadcaster::class$));
	if (listener == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "Null listener"_s), "Null listener"_s);
	}
	$var($NotificationListener, listenerWrapper, getListenerWrapper(listener, name, instance, true));
	$nc(broadcaster)->addNotificationListener(listenerWrapper, filter, handback);
}

void DefaultMBeanServerInterceptor::addNotificationListener($ObjectName* name, $ObjectName* listener, $NotificationFilter* filter, Object$* handback) {
	$useLocalCurrentObjectStackCache();
	$var($DynamicMBean, instance, getMBean(listener));
	$var($Object, resource, getResource(instance));
	if (!($instanceOf($NotificationListener, resource))) {
		$var($RuntimeException, var$0, static_cast<$RuntimeException*>($new($IllegalArgumentException, $($nc(listener)->getCanonicalName()))));
		$throwNew($RuntimeOperationsException, var$0, $$str({"The MBean "_s, $($nc(listener)->getCanonicalName()), " does not implement the NotificationListener interface"_s}));
	}
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({"ObjectName = "_s, name, ", Listener = "_s, listener}));
	}
	$nc(this->server)->addNotificationListener(name, $cast($NotificationListener, resource), filter, handback);
}

void DefaultMBeanServerInterceptor::removeNotificationListener($ObjectName* name, $NotificationListener* listener) {
	removeNotificationListener(name, listener, nullptr, nullptr, true);
}

void DefaultMBeanServerInterceptor::removeNotificationListener($ObjectName* name, $NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	removeNotificationListener(name, listener, filter, handback, false);
}

void DefaultMBeanServerInterceptor::removeNotificationListener($ObjectName* name, $ObjectName* listener) {
	$useLocalCurrentObjectStackCache();
	$var($NotificationListener, instance, getListener(listener));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({"ObjectName = "_s, name, ", Listener = "_s, listener}));
	}
	$nc(this->server)->removeNotificationListener(name, instance);
}

void DefaultMBeanServerInterceptor::removeNotificationListener($ObjectName* name, $ObjectName* listener, $NotificationFilter* filter, Object$* handback) {
	$useLocalCurrentObjectStackCache();
	$var($NotificationListener, instance, getListener(listener));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({"ObjectName = "_s, name, ", Listener = "_s, listener}));
	}
	$nc(this->server)->removeNotificationListener(name, instance, filter, handback);
}

$NotificationListener* DefaultMBeanServerInterceptor::getListener($ObjectName* listener) {
	$useLocalCurrentObjectStackCache();
	$var($DynamicMBean, instance, nullptr);
	try {
		$assign(instance, getMBean(listener));
	} catch ($InstanceNotFoundException& e) {
		$throw($cast($ListenerNotFoundException, $($EnvHelp::initCause($$new($ListenerNotFoundException, $(e->getMessage())), e))));
	}
	$var($Object, resource, getResource(instance));
	if (!($instanceOf($NotificationListener, resource))) {
		$var($RuntimeException, exc, $new($IllegalArgumentException, $($nc(listener)->getCanonicalName())));
		$var($String, var$0, $$str({"MBean "_s, $($nc(listener)->getCanonicalName()), " does not implement "_s}));
		$load($NotificationListener);
		$var($String, msg, $concat(var$0, $($NotificationListener::class$->getName())));
		$throwNew($RuntimeOperationsException, exc, msg);
	}
	return $cast($NotificationListener, resource);
}

void DefaultMBeanServerInterceptor::removeNotificationListener($ObjectName* name, $NotificationListener* listener, $NotificationFilter* filter, Object$* handback, bool removeAll) {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({"ObjectName = "_s, name}));
	}
	$var($DynamicMBean, instance, getMBean(name));
	checkMBeanPermission(instance, ($String*)nullptr, name, "removeNotificationListener"_s);
	$load($NotificationBroadcaster);
	$load($NotificationEmitter);
	$Class* reqClass = removeAll ? $NotificationBroadcaster::class$ : $NotificationEmitter::class$;
	$var($NotificationBroadcaster, broadcaster, getNotificationBroadcaster(name, instance, reqClass));
	$var($NotificationListener, listenerWrapper, getListenerWrapper(listener, name, instance, false));
	if (listenerWrapper == nullptr) {
		$throwNew($ListenerNotFoundException, "Unknown listener"_s);
	}
	if (removeAll) {
		$nc(broadcaster)->removeNotificationListener(listenerWrapper);
	} else {
		$var($NotificationEmitter, emitter, $cast($NotificationEmitter, broadcaster));
		$nc(emitter)->removeNotificationListener(listenerWrapper, filter, handback);
	}
}

$NotificationBroadcaster* DefaultMBeanServerInterceptor::getNotificationBroadcaster($ObjectName* name, Object$* instance$renamed, $Class* reqClass) {
	$init(DefaultMBeanServerInterceptor);
	$useLocalCurrentObjectStackCache();
	$var($Object, instance, instance$renamed);
	if ($nc(reqClass)->isInstance(instance)) {
		return $cast($NotificationBroadcaster, reqClass->cast(instance));
	}
	if ($instanceOf($DynamicMBean2, instance)) {
		$assign(instance, $nc(($cast($DynamicMBean2, instance)))->getResource());
	}
	if ($nc(reqClass)->isInstance(instance)) {
		return $cast($NotificationBroadcaster, reqClass->cast(instance));
	}
	$var($RuntimeException, exc, $new($IllegalArgumentException, $($nc(name)->getCanonicalName())));
	$var($String, var$0, $$str({"MBean "_s, $($nc(name)->getCanonicalName()), " does not implement "_s}));
	$var($String, msg, $concat(var$0, $($nc(reqClass)->getName())));
	$throwNew($RuntimeOperationsException, exc, msg);
}

$MBeanInfo* DefaultMBeanServerInterceptor::getMBeanInfo($ObjectName* name) {
	$useLocalCurrentObjectStackCache();
	$var($DynamicMBean, moi, getMBean(name));
	$var($MBeanInfo, mbi, nullptr);
	try {
		$assign(mbi, $nc(moi)->getMBeanInfo());
	} catch ($RuntimeMBeanException& e) {
		$throw(e);
	} catch ($RuntimeErrorException& e) {
		$throw(e);
	} catch ($RuntimeException& e) {
		$throwNew($RuntimeMBeanException, e, "getMBeanInfo threw RuntimeException"_s);
	} catch ($Error& e) {
		$throwNew($RuntimeErrorException, e, "getMBeanInfo threw Error"_s);
	}
	if (mbi == nullptr) {
		$throwNew($JMRuntimeException, $$str({"MBean "_s, name, "has no MBeanInfo"_s}));
	}
	checkMBeanPermission($($nc(mbi)->getClassName()), ($String*)nullptr, name, "getMBeanInfo"_s);
	return mbi;
}

bool DefaultMBeanServerInterceptor::isInstanceOf($ObjectName* name, $String* className) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($DynamicMBean, instance, getMBean(name));
	checkMBeanPermission(instance, ($String*)nullptr, name, "isInstanceOf"_s);
	try {
		$var($Object, resource, getResource(instance));
		$var($String, resourceClassName, ($instanceOf($DynamicMBean, resource)) ? getClassName($cast($DynamicMBean, resource)) : $nc($of(resource))->getClass()->getName());
		if ($nc(resourceClassName)->equals(className)) {
			return true;
		}
		$var($ClassLoader, cl, $of(resource)->getClass()->getClassLoader());
		$Class* classNameClass = $Class::forName(className, false, cl);
		if ($nc(classNameClass)->isInstance(resource)) {
			return true;
		}
		$Class* resourceClass = $Class::forName(resourceClassName, false, cl);
		return $nc(classNameClass)->isAssignableFrom(resourceClass);
	} catch ($Exception& x) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::DEBUG)) {
			$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::DEBUG, "Exception calling isInstanceOf"_s, static_cast<$Throwable*>(x));
		}
		return false;
	}
	$shouldNotReachHere();
}

$ClassLoader* DefaultMBeanServerInterceptor::getClassLoaderFor($ObjectName* mbeanName) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($DynamicMBean, instance, getMBean(mbeanName));
	checkMBeanPermission(instance, ($String*)nullptr, mbeanName, "getClassLoaderFor"_s);
	return $nc($of($(getResource(instance))))->getClass()->getClassLoader();
}

$ClassLoader* DefaultMBeanServerInterceptor::getClassLoader($ObjectName* loaderName) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (loaderName == nullptr) {
		checkMBeanPermission(($String*)nullptr, ($String*)nullptr, ($ObjectName*)nullptr, "getClassLoader"_s);
		return $nc($of(this->server))->getClass()->getClassLoader();
	}
	$var($DynamicMBean, instance, getMBean(loaderName));
	checkMBeanPermission(instance, ($String*)nullptr, loaderName, "getClassLoader"_s);
	$var($Object, resource, getResource(instance));
	if (!($instanceOf($ClassLoader, resource))) {
		$throwNew($InstanceNotFoundException, $$str({$($nc(loaderName)->toString()), " is not a classloader"_s}));
	}
	return $cast($ClassLoader, resource);
}

void DefaultMBeanServerInterceptor::sendNotification($String* NotifType, $ObjectName* name) {
	$useLocalCurrentObjectStackCache();
	$init($MBeanServerDelegate);
	$var($MBeanServerNotification, notif, $new($MBeanServerNotification, NotifType, $MBeanServerDelegate::DELEGATE_NAME, 0, name));
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({NotifType, " "_s, name}));
	}
	$nc(this->delegate)->sendNotification(notif);
}

$Set* DefaultMBeanServerInterceptor::objectNamesFromFilteredNamedObjects($Set* list, $QueryExp* query) {
	$useLocalCurrentObjectStackCache();
	$var($Set, result, $new($HashSet));
	if (query == nullptr) {
		{
			$var($Iterator, i$, $nc(list)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($NamedObject, no, $cast($NamedObject, i$->next()));
				{
					result->add($($nc(no)->getName()));
				}
			}
		}
	} else {
		$var($MBeanServer, oldServer, $QueryEval::getMBeanServer());
		$nc(query)->setMBeanServer(this->server);
		{
			$var($Throwable, var$0, nullptr);
			try {
				{
					$var($Iterator, i$, $nc(list)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($NamedObject, no, $cast($NamedObject, i$->next()));
						{
							bool res = false;
							try {
								res = query->apply($($nc(no)->getName()));
							} catch ($Exception& e) {
								res = false;
							}
							if (res) {
								result->add($($nc(no)->getName()));
							}
						}
					}
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				query->setMBeanServer(oldServer);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	return result;
}

$Set* DefaultMBeanServerInterceptor::objectInstancesFromFilteredNamedObjects($Set* list, $QueryExp* query) {
	$useLocalCurrentObjectStackCache();
	$var($Set, result, $new($HashSet));
	if (query == nullptr) {
		{
			$var($Iterator, i$, $nc(list)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($NamedObject, no, $cast($NamedObject, i$->next()));
				{
					$var($DynamicMBean, obj, $nc(no)->getObject());
					$var($String, className, safeGetClassName(obj));
					result->add($$new($ObjectInstance, $(no->getName()), className));
				}
			}
		}
	} else {
		$var($MBeanServer, oldServer, $QueryEval::getMBeanServer());
		$nc(query)->setMBeanServer(this->server);
		{
			$var($Throwable, var$0, nullptr);
			try {
				{
					$var($Iterator, i$, $nc(list)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($NamedObject, no, $cast($NamedObject, i$->next()));
						{
							$var($DynamicMBean, obj, $nc(no)->getObject());
							bool res = false;
							try {
								res = query->apply($(no->getName()));
							} catch ($Exception& e) {
								res = false;
							}
							if (res) {
								$var($String, className, safeGetClassName(obj));
								result->add($$new($ObjectInstance, $(no->getName()), className));
							}
						}
					}
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				query->setMBeanServer(oldServer);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	return result;
}

$String* DefaultMBeanServerInterceptor::safeGetClassName($DynamicMBean* mbean) {
	$init(DefaultMBeanServerInterceptor);
	try {
		return getClassName(mbean);
	} catch ($Exception& e) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::DEBUG)) {
			$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::DEBUG, "Exception getting MBean class name"_s, static_cast<$Throwable*>(e));
		}
		return nullptr;
	}
	$shouldNotReachHere();
}

$Set* DefaultMBeanServerInterceptor::filterListOfObjectInstances($Set* list, $QueryExp* query) {
	$useLocalCurrentObjectStackCache();
	if (query == nullptr) {
		return list;
	} else {
		$var($Set, result, $new($HashSet));
		{
			$var($Iterator, i$, $nc(list)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($ObjectInstance, oi, $cast($ObjectInstance, i$->next()));
				{
					bool res = false;
					$var($MBeanServer, oldServer, $QueryEval::getMBeanServer());
					$nc(query)->setMBeanServer(this->server);
					{
						$var($Throwable, var$0, nullptr);
						try {
							try {
								res = query->apply($($nc(oi)->getObjectName()));
							} catch ($Exception& e) {
								res = false;
							}
						} catch ($Throwable& var$1) {
							$assign(var$0, var$1);
						} /*finally*/ {
							query->setMBeanServer(oldServer);
						}
						if (var$0 != nullptr) {
							$throw(var$0);
						}
					}
					if (res) {
						result->add(oi);
					}
				}
			}
		}
		return result;
	}
}

$NotificationListener* DefaultMBeanServerInterceptor::getListenerWrapper($NotificationListener* l, $ObjectName* name, $DynamicMBean* mbean, bool create) {
	$useLocalCurrentObjectStackCache();
	$var($Object, resource, getResource(mbean));
	$var($DefaultMBeanServerInterceptor$ListenerWrapper, wrapper, $new($DefaultMBeanServerInterceptor$ListenerWrapper, l, name, resource));
	$synchronized(this->listenerWrappers) {
		$var($WeakReference, ref, $cast($WeakReference, $nc(this->listenerWrappers)->get(wrapper)));
		if (ref != nullptr) {
			$var($NotificationListener, existing, $cast($NotificationListener, ref->get()));
			if (existing != nullptr) {
				return existing;
			}
		}
		if (create) {
			$assign(ref, $new($WeakReference, wrapper));
			$nc(this->listenerWrappers)->put(wrapper, ref);
			return wrapper;
		} else {
			return nullptr;
		}
	}
}

$Object* DefaultMBeanServerInterceptor::instantiate($String* className) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$Object* DefaultMBeanServerInterceptor::instantiate($String* className, $ObjectName* loaderName) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$Object* DefaultMBeanServerInterceptor::instantiate($String* className, $ObjectArray* params, $StringArray* signature) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$Object* DefaultMBeanServerInterceptor::instantiate($String* className, $ObjectName* loaderName, $ObjectArray* params, $StringArray* signature) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$ClassLoaderRepository* DefaultMBeanServerInterceptor::getClassLoaderRepository() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$String* DefaultMBeanServerInterceptor::getClassName($DynamicMBean* mbean) {
	$init(DefaultMBeanServerInterceptor);
	if ($instanceOf($DynamicMBean2, mbean)) {
		return $nc(($cast($DynamicMBean2, mbean)))->getClassName();
	} else {
		return $nc($($nc(mbean)->getMBeanInfo()))->getClassName();
	}
}

void DefaultMBeanServerInterceptor::checkMBeanPermission($DynamicMBean* mbean, $String* member, $ObjectName* objectName, $String* actions) {
	$init(DefaultMBeanServerInterceptor);
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		checkMBeanPermission($(safeGetClassName(mbean)), member, objectName, actions);
	}
}

void DefaultMBeanServerInterceptor::checkMBeanPermission($String* classname, $String* member, $ObjectName* objectName, $String* actions) {
	$init(DefaultMBeanServerInterceptor);
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$var($Permission, perm, $new($MBeanPermission, classname, member, objectName, actions));
		sm->checkPermission(perm);
	}
}

void DefaultMBeanServerInterceptor::checkMBeanTrustPermission($Class* theClass) {
	$init(DefaultMBeanServerInterceptor);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$var($Permission, perm, $new($MBeanTrustPermission, "register"_s));
		$var($PrivilegedAction, act, $new($DefaultMBeanServerInterceptor$1, theClass));
		$var($ProtectionDomain, pd, $cast($ProtectionDomain, $AccessController::doPrivileged(act)));
		$var($AccessControlContext, acc, $new($AccessControlContext, $$new($ProtectionDomainArray, {pd})));
		sm->checkPermission(perm, acc);
	}
}

$DefaultMBeanServerInterceptor$ResourceContext* DefaultMBeanServerInterceptor::registerWithRepository(Object$* resource, $DynamicMBean* object, $ObjectName* logicalName) {
	$useLocalCurrentObjectStackCache();
	$var($DefaultMBeanServerInterceptor$ResourceContext, context, makeResourceContextFor(resource, logicalName));
	$nc(this->repository)->addMBean(object, logicalName, context);
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Send create notification of object "_s, $($nc(logicalName)->getCanonicalName())}));
	}
	$init($MBeanServerNotification);
	sendNotification($MBeanServerNotification::REGISTRATION_NOTIFICATION, logicalName);
	return context;
}

$DefaultMBeanServerInterceptor$ResourceContext* DefaultMBeanServerInterceptor::unregisterFromRepository(Object$* resource, $DynamicMBean* object, $ObjectName* logicalName) {
	$useLocalCurrentObjectStackCache();
	$var($DefaultMBeanServerInterceptor$ResourceContext, context, makeResourceContextFor(resource, logicalName));
	$nc(this->repository)->remove(logicalName, context);
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Send delete notification of object "_s, $($nc(logicalName)->getCanonicalName())}));
	}
	$init($MBeanServerNotification);
	sendNotification($MBeanServerNotification::UNREGISTRATION_NOTIFICATION, logicalName);
	return context;
}

void DefaultMBeanServerInterceptor::addClassLoader($ClassLoader* loader, $ObjectName* logicalName) {
	$useLocalCurrentObjectStackCache();
	$var($ModifiableClassLoaderRepository, clr, getInstantiatorCLR());
	if (clr == nullptr) {
		$var($RuntimeException, wrapped, $new($IllegalArgumentException, "Dynamic addition of class loaders is not supported"_s));
		$throwNew($RuntimeOperationsException, wrapped, "Exception occurred trying to register the MBean as a class loader"_s);
	}
	$nc(clr)->addClassLoader(logicalName, loader);
}

void DefaultMBeanServerInterceptor::removeClassLoader($ClassLoader* loader, $ObjectName* logicalName) {
	$beforeCallerSensitive();
	if (loader != $nc($of(this->server))->getClass()->getClassLoader()) {
		$var($ModifiableClassLoaderRepository, clr, getInstantiatorCLR());
		if (clr != nullptr) {
			clr->removeClassLoader(logicalName);
		}
	}
}

$DefaultMBeanServerInterceptor$ResourceContext* DefaultMBeanServerInterceptor::createClassLoaderContext($ClassLoader* loader, $ObjectName* logicalName) {
	return $new($DefaultMBeanServerInterceptor$2, this, loader, logicalName);
}

$DefaultMBeanServerInterceptor$ResourceContext* DefaultMBeanServerInterceptor::makeResourceContextFor(Object$* resource, $ObjectName* logicalName) {
	if ($instanceOf($ClassLoader, resource)) {
		return createClassLoaderContext($cast($ClassLoader, resource), logicalName);
	}
	$init($DefaultMBeanServerInterceptor$ResourceContext);
	return $DefaultMBeanServerInterceptor$ResourceContext::NONE;
}

$ModifiableClassLoaderRepository* DefaultMBeanServerInterceptor::getInstantiatorCLR() {
	$beforeCallerSensitive();
	return $cast($ModifiableClassLoaderRepository, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($DefaultMBeanServerInterceptor$3, this))));
}

DefaultMBeanServerInterceptor::DefaultMBeanServerInterceptor() {
}

$Class* DefaultMBeanServerInterceptor::load$($String* name, bool initialize) {
	$loadClass(DefaultMBeanServerInterceptor, name, initialize, &_DefaultMBeanServerInterceptor_ClassInfo_, allocate$DefaultMBeanServerInterceptor);
	return class$;
}

$Class* DefaultMBeanServerInterceptor::class$ = nullptr;

			} // interceptor
		} // jmx
	} // sun
} // com