#ifndef _com_sun_jmx_mbeanserver_JmxMBeanServer_h_
#define _com_sun_jmx_mbeanserver_JmxMBeanServer_h_
//$ class com.sun.jmx.mbeanserver.JmxMBeanServer
//$ extends com.sun.jmx.mbeanserver.SunJmxMBeanServer

#include <com/sun/jmx/mbeanserver/SunJmxMBeanServer.h>
#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_FAIR_LOCK_POLICY")
#undef DEFAULT_FAIR_LOCK_POLICY

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class MBeanInstantiator;
				class SecureClassLoaderRepository;
			}
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
		class Integer;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace javax {
	namespace management {
		class Attribute;
		class AttributeList;
		class MBeanInfo;
		class MBeanServer;
		class MBeanServerDelegate;
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
			namespace mbeanserver {

class JmxMBeanServer : public ::com::sun::jmx::mbeanserver::SunJmxMBeanServer {
	$class(JmxMBeanServer, $NO_CLASS_INIT, ::com::sun::jmx::mbeanserver::SunJmxMBeanServer)
public:
	JmxMBeanServer();
	void init$($String* domain, ::javax::management::MBeanServer* outer, ::javax::management::MBeanServerDelegate* delegate);
	void init$($String* domain, ::javax::management::MBeanServer* outer, ::javax::management::MBeanServerDelegate* delegate, bool interceptors);
	void init$($String* domain, ::javax::management::MBeanServer* outer, ::javax::management::MBeanServerDelegate* delegate, ::com::sun::jmx::mbeanserver::MBeanInstantiator* instantiator, bool interceptors);
	void init$($String* domain, ::javax::management::MBeanServer* outer, ::javax::management::MBeanServerDelegate* delegate, ::com::sun::jmx::mbeanserver::MBeanInstantiator* instantiator, bool interceptors, bool fairLock);
	virtual void addNotificationListener(::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override;
	virtual void addNotificationListener(::javax::management::ObjectName* name, ::javax::management::ObjectName* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override;
	static void checkMBeanPermission($String* classname, $String* member, ::javax::management::ObjectName* objectName, $String* actions);
	static void checkNewMBeanServerPermission();
	::javax::management::Attribute* cloneAttribute(::javax::management::Attribute* attribute);
	::javax::management::AttributeList* cloneAttributeList(::javax::management::AttributeList* list);
	::javax::management::ObjectName* cloneObjectName(::javax::management::ObjectName* name);
	virtual ::javax::management::ObjectInstance* createMBean($String* className, ::javax::management::ObjectName* name) override;
	virtual ::javax::management::ObjectInstance* createMBean($String* className, ::javax::management::ObjectName* name, ::javax::management::ObjectName* loaderName) override;
	virtual ::javax::management::ObjectInstance* createMBean($String* className, ::javax::management::ObjectName* name, $ObjectArray* params, $StringArray* signature) override;
	virtual ::javax::management::ObjectInstance* createMBean($String* className, ::javax::management::ObjectName* name, ::javax::management::ObjectName* loaderName, $ObjectArray* params, $StringArray* signature) override;
	virtual ::java::io::ObjectInputStream* deserialize(::javax::management::ObjectName* name, $bytes* data) override;
	virtual ::java::io::ObjectInputStream* deserialize($String* className, $bytes* data) override;
	virtual ::java::io::ObjectInputStream* deserialize($String* className, ::javax::management::ObjectName* loaderName, $bytes* data) override;
	virtual $Object* getAttribute(::javax::management::ObjectName* name, $String* attribute) override;
	virtual ::javax::management::AttributeList* getAttributes(::javax::management::ObjectName* name, $StringArray* attributes) override;
	virtual ::java::lang::ClassLoader* getClassLoader(::javax::management::ObjectName* loaderName) override;
	virtual ::java::lang::ClassLoader* getClassLoaderFor(::javax::management::ObjectName* mbeanName) override;
	virtual ::javax::management::loading::ClassLoaderRepository* getClassLoaderRepository() override;
	virtual $String* getDefaultDomain() override;
	virtual $StringArray* getDomains() override;
	virtual ::java::lang::Integer* getMBeanCount() override;
	virtual ::javax::management::MBeanInfo* getMBeanInfo(::javax::management::ObjectName* name) override;
	virtual ::com::sun::jmx::mbeanserver::MBeanInstantiator* getMBeanInstantiator() override;
	virtual ::javax::management::MBeanServerDelegate* getMBeanServerDelegate() override;
	virtual ::javax::management::MBeanServer* getMBeanServerInterceptor() override;
	virtual ::javax::management::ObjectInstance* getObjectInstance(::javax::management::ObjectName* name) override;
	void initialize();
	virtual $Object* instantiate($String* className) override;
	virtual $Object* instantiate($String* className, ::javax::management::ObjectName* loaderName) override;
	virtual $Object* instantiate($String* className, $ObjectArray* params, $StringArray* signature) override;
	virtual $Object* instantiate($String* className, ::javax::management::ObjectName* loaderName, $ObjectArray* params, $StringArray* signature) override;
	virtual bool interceptorsEnabled() override;
	virtual $Object* invoke(::javax::management::ObjectName* name, $String* operationName, $ObjectArray* params, $StringArray* signature) override;
	virtual bool isInstanceOf(::javax::management::ObjectName* name, $String* className) override;
	virtual bool isRegistered(::javax::management::ObjectName* name) override;
	static ::javax::management::MBeanServer* newMBeanServer($String* defaultDomain, ::javax::management::MBeanServer* outer, ::javax::management::MBeanServerDelegate* delegate, bool interceptors);
	static ::javax::management::MBeanServerDelegate* newMBeanServerDelegate();
	virtual ::java::util::Set* queryMBeans(::javax::management::ObjectName* name, ::javax::management::QueryExp* query) override;
	virtual ::java::util::Set* queryNames(::javax::management::ObjectName* name, ::javax::management::QueryExp* query) override;
	virtual ::javax::management::ObjectInstance* registerMBean(Object$* object, ::javax::management::ObjectName* name) override;
	virtual void removeNotificationListener(::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener) override;
	virtual void removeNotificationListener(::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override;
	virtual void removeNotificationListener(::javax::management::ObjectName* name, ::javax::management::ObjectName* listener) override;
	virtual void removeNotificationListener(::javax::management::ObjectName* name, ::javax::management::ObjectName* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override;
	virtual void setAttribute(::javax::management::ObjectName* name, ::javax::management::Attribute* attribute) override;
	virtual ::javax::management::AttributeList* setAttributes(::javax::management::ObjectName* name, ::javax::management::AttributeList* attributes) override;
	virtual void setMBeanServerInterceptor(::javax::management::MBeanServer* interceptor) override;
	virtual void unregisterMBean(::javax::management::ObjectName* name) override;
	static const bool DEFAULT_FAIR_LOCK_POLICY = true;
	::com::sun::jmx::mbeanserver::MBeanInstantiator* instantiator = nullptr;
	::com::sun::jmx::mbeanserver::SecureClassLoaderRepository* secureClr = nullptr;
	bool interceptorsEnabled$ = false;
	::javax::management::MBeanServer* outerShell = nullptr;
	$volatile(::javax::management::MBeanServer*) mbsInterceptor = nullptr;
	::javax::management::MBeanServerDelegate* mBeanServerDelegateObject = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#pragma pop_macro("DEFAULT_FAIR_LOCK_POLICY")

#endif // _com_sun_jmx_mbeanserver_JmxMBeanServer_h_