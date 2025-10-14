#ifndef _javax_management_MBeanServer_h_
#define _javax_management_MBeanServer_h_
//$ interface javax.management.MBeanServer
//$ extends javax.management.MBeanServerConnection

#include <java/lang/Array.h>
#include <javax/management/MBeanServerConnection.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace javax {
	namespace management {
		class ObjectInstance;
		class ObjectName;
	}
}
namespace javax {
	namespace management {
		namespace loading {
			class ClassLoaderRepository;
		}
	}
}

namespace javax {
	namespace management {

class $export MBeanServer : public ::javax::management::MBeanServerConnection {
	$interface(MBeanServer, $NO_CLASS_INIT, ::javax::management::MBeanServerConnection)
public:
	virtual void addNotificationListener(::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override {}
	virtual void addNotificationListener(::javax::management::ObjectName* name, ::javax::management::ObjectName* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override {}
	virtual ::javax::management::ObjectInstance* createMBean($String* className, ::javax::management::ObjectName* name) override {return nullptr;}
	virtual ::javax::management::ObjectInstance* createMBean($String* className, ::javax::management::ObjectName* name, ::javax::management::ObjectName* loaderName) override {return nullptr;}
	virtual ::javax::management::ObjectInstance* createMBean($String* className, ::javax::management::ObjectName* name, $ObjectArray* params, $StringArray* signature) override {return nullptr;}
	virtual ::javax::management::ObjectInstance* createMBean($String* className, ::javax::management::ObjectName* name, ::javax::management::ObjectName* loaderName, $ObjectArray* params, $StringArray* signature) override {return nullptr;}
	virtual ::java::io::ObjectInputStream* deserialize(::javax::management::ObjectName* name, $bytes* data);
	virtual ::java::io::ObjectInputStream* deserialize($String* className, $bytes* data);
	virtual ::java::io::ObjectInputStream* deserialize($String* className, ::javax::management::ObjectName* loaderName, $bytes* data);
	virtual $Object* getAttribute(::javax::management::ObjectName* name, $String* attribute) override {return nullptr;}
	virtual ::javax::management::AttributeList* getAttributes(::javax::management::ObjectName* name, $StringArray* attributes) override {return nullptr;}
	virtual ::java::lang::ClassLoader* getClassLoader(::javax::management::ObjectName* loaderName) {return nullptr;}
	virtual ::java::lang::ClassLoader* getClassLoaderFor(::javax::management::ObjectName* mbeanName) {return nullptr;}
	virtual ::javax::management::loading::ClassLoaderRepository* getClassLoaderRepository() {return nullptr;}
	virtual $String* getDefaultDomain() override {return nullptr;}
	virtual $StringArray* getDomains() override {return nullptr;}
	virtual ::java::lang::Integer* getMBeanCount() override {return nullptr;}
	virtual ::javax::management::MBeanInfo* getMBeanInfo(::javax::management::ObjectName* name) override {return nullptr;}
	virtual ::javax::management::ObjectInstance* getObjectInstance(::javax::management::ObjectName* name) override {return nullptr;}
	virtual $Object* instantiate($String* className) {return nullptr;}
	virtual $Object* instantiate($String* className, ::javax::management::ObjectName* loaderName) {return nullptr;}
	virtual $Object* instantiate($String* className, $ObjectArray* params, $StringArray* signature) {return nullptr;}
	virtual $Object* instantiate($String* className, ::javax::management::ObjectName* loaderName, $ObjectArray* params, $StringArray* signature) {return nullptr;}
	virtual $Object* invoke(::javax::management::ObjectName* name, $String* operationName, $ObjectArray* params, $StringArray* signature) override {return nullptr;}
	virtual bool isInstanceOf(::javax::management::ObjectName* name, $String* className) override {return false;}
	virtual bool isRegistered(::javax::management::ObjectName* name) override {return false;}
	virtual ::java::util::Set* queryMBeans(::javax::management::ObjectName* name, ::javax::management::QueryExp* query) override {return nullptr;}
	virtual ::java::util::Set* queryNames(::javax::management::ObjectName* name, ::javax::management::QueryExp* query) override {return nullptr;}
	virtual ::javax::management::ObjectInstance* registerMBean(Object$* object, ::javax::management::ObjectName* name) {return nullptr;}
	virtual void removeNotificationListener(::javax::management::ObjectName* name, ::javax::management::ObjectName* listener) override {}
	virtual void removeNotificationListener(::javax::management::ObjectName* name, ::javax::management::ObjectName* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override {}
	virtual void removeNotificationListener(::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener) override {}
	virtual void removeNotificationListener(::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override {}
	virtual void setAttribute(::javax::management::ObjectName* name, ::javax::management::Attribute* attribute) override {}
	virtual ::javax::management::AttributeList* setAttributes(::javax::management::ObjectName* name, ::javax::management::AttributeList* attributes) override {return nullptr;}
	virtual void unregisterMBean(::javax::management::ObjectName* name) override {}
};

	} // management
} // javax

#endif // _javax_management_MBeanServer_h_