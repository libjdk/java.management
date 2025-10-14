#ifndef _com_sun_jmx_remote_security_MBeanServerAccessController_h_
#define _com_sun_jmx_remote_security_MBeanServerAccessController_h_
//$ class com.sun.jmx.remote.security.MBeanServerAccessController
//$ extends javax.management.remote.MBeanServerForwarder

#include <java/lang/Array.h>
#include <javax/management/remote/MBeanServerForwarder.h>

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
			namespace remote {
				namespace security {

class $export MBeanServerAccessController : public ::javax::management::remote::MBeanServerForwarder {
	$class(MBeanServerAccessController, $NO_CLASS_INIT, ::javax::management::remote::MBeanServerForwarder)
public:
	MBeanServerAccessController();
	void init$();
	virtual void addNotificationListener(::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override;
	virtual void addNotificationListener(::javax::management::ObjectName* name, ::javax::management::ObjectName* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override;
	void checkClassLoader(Object$* object);
	virtual void checkCreate($String* className);
	void checkMLetMethods(::javax::management::ObjectName* name, $String* operation);
	virtual void checkRead() {}
	virtual void checkUnregister(::javax::management::ObjectName* name);
	virtual void checkWrite() {}
	virtual ::javax::management::ObjectInstance* createMBean($String* className, ::javax::management::ObjectName* name) override;
	virtual ::javax::management::ObjectInstance* createMBean($String* className, ::javax::management::ObjectName* name, $ObjectArray* params, $StringArray* signature) override;
	virtual ::javax::management::ObjectInstance* createMBean($String* className, ::javax::management::ObjectName* name, ::javax::management::ObjectName* loaderName) override;
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
	virtual ::javax::management::MBeanServer* getMBeanServer() override;
	virtual ::javax::management::ObjectInstance* getObjectInstance(::javax::management::ObjectName* name) override;
	virtual $Object* instantiate($String* className) override;
	virtual $Object* instantiate($String* className, $ObjectArray* params, $StringArray* signature) override;
	virtual $Object* instantiate($String* className, ::javax::management::ObjectName* loaderName) override;
	virtual $Object* instantiate($String* className, ::javax::management::ObjectName* loaderName, $ObjectArray* params, $StringArray* signature) override;
	virtual $Object* invoke(::javax::management::ObjectName* name, $String* operationName, $ObjectArray* params, $StringArray* signature) override;
	virtual bool isInstanceOf(::javax::management::ObjectName* name, $String* className) override;
	virtual bool isRegistered(::javax::management::ObjectName* name) override;
	virtual ::java::util::Set* queryMBeans(::javax::management::ObjectName* name, ::javax::management::QueryExp* query) override;
	virtual ::java::util::Set* queryNames(::javax::management::ObjectName* name, ::javax::management::QueryExp* query) override;
	virtual ::javax::management::ObjectInstance* registerMBean(Object$* object, ::javax::management::ObjectName* name) override;
	virtual void removeNotificationListener(::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener) override;
	virtual void removeNotificationListener(::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override;
	virtual void removeNotificationListener(::javax::management::ObjectName* name, ::javax::management::ObjectName* listener) override;
	virtual void removeNotificationListener(::javax::management::ObjectName* name, ::javax::management::ObjectName* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override;
	virtual void setAttribute(::javax::management::ObjectName* name, ::javax::management::Attribute* attribute) override;
	virtual ::javax::management::AttributeList* setAttributes(::javax::management::ObjectName* name, ::javax::management::AttributeList* attributes) override;
	virtual void setMBeanServer(::javax::management::MBeanServer* mbs) override;
	virtual void unregisterMBean(::javax::management::ObjectName* name) override;
	::javax::management::MBeanServer* mbs = nullptr;
};

				} // security
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_security_MBeanServerAccessController_h_