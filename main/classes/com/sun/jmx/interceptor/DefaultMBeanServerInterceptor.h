#ifndef _com_sun_jmx_interceptor_DefaultMBeanServerInterceptor_h_
#define _com_sun_jmx_interceptor_DefaultMBeanServerInterceptor_h_
//$ class com.sun.jmx.interceptor.DefaultMBeanServerInterceptor
//$ extends com.sun.jmx.interceptor.MBeanServerInterceptor

#include <com/sun/jmx/interceptor/MBeanServerInterceptor.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {
				class DefaultMBeanServerInterceptor$ResourceContext;
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class MBeanInstantiator;
				class ModifiableClassLoaderRepository;
				class Repository;
			}
		}
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
		class Integer;
		class Throwable;
	}
}
namespace java {
	namespace util {
		class Set;
		class WeakHashMap;
	}
}
namespace javax {
	namespace management {
		class Attribute;
		class AttributeList;
		class DynamicMBean;
		class MBeanInfo;
		class MBeanRegistration;
		class MBeanServer;
		class MBeanServerDelegate;
		class NotificationBroadcaster;
		class NotificationFilter;
		class NotificationListener;
		class ObjectInstance;
		class ObjectName;
		class QueryExp;
	}
}
namespace javax {
	namespace management {
		namespace loading {
			class ClassLoaderRepository;
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {

class DefaultMBeanServerInterceptor : public ::com::sun::jmx::interceptor::MBeanServerInterceptor {
	$class(DefaultMBeanServerInterceptor, $NO_CLASS_INIT, ::com::sun::jmx::interceptor::MBeanServerInterceptor)
public:
	DefaultMBeanServerInterceptor();
	void init$(::javax::management::MBeanServer* outer, ::javax::management::MBeanServerDelegate* delegate, ::com::sun::jmx::mbeanserver::MBeanInstantiator* instantiator, ::com::sun::jmx::mbeanserver::Repository* repository);
	void addClassLoader(::java::lang::ClassLoader* loader, ::javax::management::ObjectName* logicalName);
	virtual void addNotificationListener(::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override;
	virtual void addNotificationListener(::javax::management::ObjectName* name, ::javax::management::ObjectName* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override;
	static void checkMBeanPermission(::javax::management::DynamicMBean* mbean, $String* member, ::javax::management::ObjectName* objectName, $String* actions);
	static void checkMBeanPermission($String* classname, $String* member, ::javax::management::ObjectName* objectName, $String* actions);
	static void checkMBeanTrustPermission($Class* theClass);
	::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor$ResourceContext* createClassLoaderContext(::java::lang::ClassLoader* loader, ::javax::management::ObjectName* logicalName);
	virtual ::javax::management::ObjectInstance* createMBean($String* className, ::javax::management::ObjectName* name) override;
	virtual ::javax::management::ObjectInstance* createMBean($String* className, ::javax::management::ObjectName* name, ::javax::management::ObjectName* loaderName) override;
	virtual ::javax::management::ObjectInstance* createMBean($String* className, ::javax::management::ObjectName* name, $ObjectArray* params, $StringArray* signature) override;
	virtual ::javax::management::ObjectInstance* createMBean($String* className, ::javax::management::ObjectName* name, ::javax::management::ObjectName* loaderName, $ObjectArray* params, $StringArray* signature) override;
	::javax::management::ObjectInstance* createMBean($String* className, ::javax::management::ObjectName* name, ::javax::management::ObjectName* loaderName, bool withDefaultLoaderRepository, $ObjectArray* params, $StringArray* signature);
	void exclusiveUnregisterMBean(::javax::management::ObjectName* name);
	::java::util::Set* filterListOfObjectInstances(::java::util::Set* list, ::javax::management::QueryExp* query);
	virtual $Object* getAttribute(::javax::management::ObjectName* name, $String* attribute) override;
	virtual ::javax::management::AttributeList* getAttributes(::javax::management::ObjectName* name, $StringArray* attributes) override;
	virtual ::java::lang::ClassLoader* getClassLoader(::javax::management::ObjectName* loaderName) override;
	virtual ::java::lang::ClassLoader* getClassLoaderFor(::javax::management::ObjectName* mbeanName) override;
	virtual ::javax::management::loading::ClassLoaderRepository* getClassLoaderRepository() override;
	static $String* getClassName(::javax::management::DynamicMBean* mbean);
	virtual $String* getDefaultDomain() override;
	virtual $StringArray* getDomains() override;
	::com::sun::jmx::mbeanserver::ModifiableClassLoaderRepository* getInstantiatorCLR();
	::javax::management::NotificationListener* getListener(::javax::management::ObjectName* listener);
	::javax::management::NotificationListener* getListenerWrapper(::javax::management::NotificationListener* l, ::javax::management::ObjectName* name, ::javax::management::DynamicMBean* mbean, bool create);
	::javax::management::DynamicMBean* getMBean(::javax::management::ObjectName* name);
	virtual ::java::lang::Integer* getMBeanCount() override;
	virtual ::javax::management::MBeanInfo* getMBeanInfo(::javax::management::ObjectName* name) override;
	static $String* getNewMBeanClassName(Object$* mbeanToRegister);
	static ::javax::management::NotificationBroadcaster* getNotificationBroadcaster(::javax::management::ObjectName* name, Object$* instance, $Class* reqClass);
	virtual ::javax::management::ObjectInstance* getObjectInstance(::javax::management::ObjectName* name) override;
	static $Object* getResource(::javax::management::DynamicMBean* mbean);
	virtual $Object* instantiate($String* className) override;
	virtual $Object* instantiate($String* className, ::javax::management::ObjectName* loaderName) override;
	virtual $Object* instantiate($String* className, $ObjectArray* params, $StringArray* signature) override;
	virtual $Object* instantiate($String* className, ::javax::management::ObjectName* loaderName, $ObjectArray* params, $StringArray* signature) override;
	virtual $Object* invoke(::javax::management::ObjectName* name, $String* operationName, $ObjectArray* params, $StringArray* signature) override;
	virtual bool isInstanceOf(::javax::management::ObjectName* name, $String* className) override;
	virtual bool isRegistered(::javax::management::ObjectName* name) override;
	::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor$ResourceContext* makeResourceContextFor(Object$* resource, ::javax::management::ObjectName* logicalName);
	::javax::management::ObjectName* nonDefaultDomain(::javax::management::ObjectName* name);
	::java::util::Set* objectInstancesFromFilteredNamedObjects(::java::util::Set* list, ::javax::management::QueryExp* query);
	::java::util::Set* objectNamesFromFilteredNamedObjects(::java::util::Set* list, ::javax::management::QueryExp* query);
	static void postDeregisterInvoke(::javax::management::ObjectName* mbean, ::javax::management::MBeanRegistration* moi);
	static void postRegister(::javax::management::ObjectName* logicalName, ::javax::management::DynamicMBean* mbean, bool registrationDone, bool registerFailed);
	static void preDeregisterInvoke(::javax::management::MBeanRegistration* moi);
	static ::javax::management::ObjectName* preRegister(::javax::management::DynamicMBean* mbean, ::javax::management::MBeanServer* mbs, ::javax::management::ObjectName* name);
	virtual ::java::util::Set* queryMBeans(::javax::management::ObjectName* name, ::javax::management::QueryExp* query) override;
	::java::util::Set* queryMBeansImpl(::javax::management::ObjectName* name, ::javax::management::QueryExp* query);
	virtual ::java::util::Set* queryNames(::javax::management::ObjectName* name, ::javax::management::QueryExp* query) override;
	::java::util::Set* queryNamesImpl(::javax::management::ObjectName* name, ::javax::management::QueryExp* query);
	::javax::management::ObjectInstance* registerDynamicMBean($String* classname, ::javax::management::DynamicMBean* mbean, ::javax::management::ObjectName* name);
	virtual ::javax::management::ObjectInstance* registerMBean(Object$* object, ::javax::management::ObjectName* name) override;
	::javax::management::ObjectInstance* registerObject($String* classname, Object$* object, ::javax::management::ObjectName* name);
	::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor$ResourceContext* registerWithRepository(Object$* resource, ::javax::management::DynamicMBean* object, ::javax::management::ObjectName* logicalName);
	void removeClassLoader(::java::lang::ClassLoader* loader, ::javax::management::ObjectName* logicalName);
	virtual void removeNotificationListener(::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener) override;
	virtual void removeNotificationListener(::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override;
	virtual void removeNotificationListener(::javax::management::ObjectName* name, ::javax::management::ObjectName* listener) override;
	virtual void removeNotificationListener(::javax::management::ObjectName* name, ::javax::management::ObjectName* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override;
	void removeNotificationListener(::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback, bool removeAll);
	static void rethrow($Throwable* t);
	static void rethrowMaybeMBeanException($Throwable* t);
	static $String* safeGetClassName(::javax::management::DynamicMBean* mbean);
	void sendNotification($String* NotifType, ::javax::management::ObjectName* name);
	virtual void setAttribute(::javax::management::ObjectName* name, ::javax::management::Attribute* attribute) override;
	virtual ::javax::management::AttributeList* setAttributes(::javax::management::ObjectName* name, ::javax::management::AttributeList* attributes) override;
	static void throwMBeanRegistrationException($Throwable* t, $String* where);
	::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor$ResourceContext* unregisterFromRepository(Object$* resource, ::javax::management::DynamicMBean* object, ::javax::management::ObjectName* logicalName);
	virtual void unregisterMBean(::javax::management::ObjectName* name) override;
	::com::sun::jmx::mbeanserver::MBeanInstantiator* instantiator = nullptr;
	::javax::management::MBeanServer* server = nullptr;
	::javax::management::MBeanServerDelegate* delegate = nullptr;
	::com::sun::jmx::mbeanserver::Repository* repository = nullptr;
	::java::util::WeakHashMap* listenerWrappers = nullptr;
	$String* domain = nullptr;
	::java::util::Set* beingUnregistered = nullptr;
};

			} // interceptor
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_interceptor_DefaultMBeanServerInterceptor_h_