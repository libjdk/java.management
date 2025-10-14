#ifndef _javax_management_MBeanServerConnection_h_
#define _javax_management_MBeanServerConnection_h_
//$ interface javax.management.MBeanServerConnection
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
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
		class NotificationFilter;
		class NotificationListener;
		class ObjectInstance;
		class ObjectName;
		class QueryExp;
	}
}

namespace javax {
	namespace management {

class $import MBeanServerConnection : public ::java::lang::Object {
	$interface(MBeanServerConnection, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addNotificationListener(::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback) {}
	virtual void addNotificationListener(::javax::management::ObjectName* name, ::javax::management::ObjectName* listener, ::javax::management::NotificationFilter* filter, Object$* handback) {}
	virtual ::javax::management::ObjectInstance* createMBean($String* className, ::javax::management::ObjectName* name) {return nullptr;}
	virtual ::javax::management::ObjectInstance* createMBean($String* className, ::javax::management::ObjectName* name, ::javax::management::ObjectName* loaderName) {return nullptr;}
	virtual ::javax::management::ObjectInstance* createMBean($String* className, ::javax::management::ObjectName* name, $ObjectArray* params, $StringArray* signature) {return nullptr;}
	virtual ::javax::management::ObjectInstance* createMBean($String* className, ::javax::management::ObjectName* name, ::javax::management::ObjectName* loaderName, $ObjectArray* params, $StringArray* signature) {return nullptr;}
	virtual $Object* getAttribute(::javax::management::ObjectName* name, $String* attribute) {return nullptr;}
	virtual ::javax::management::AttributeList* getAttributes(::javax::management::ObjectName* name, $StringArray* attributes) {return nullptr;}
	virtual $String* getDefaultDomain() {return nullptr;}
	virtual $StringArray* getDomains() {return nullptr;}
	virtual ::java::lang::Integer* getMBeanCount() {return nullptr;}
	virtual ::javax::management::MBeanInfo* getMBeanInfo(::javax::management::ObjectName* name) {return nullptr;}
	virtual ::javax::management::ObjectInstance* getObjectInstance(::javax::management::ObjectName* name) {return nullptr;}
	virtual $Object* invoke(::javax::management::ObjectName* name, $String* operationName, $ObjectArray* params, $StringArray* signature) {return nullptr;}
	virtual bool isInstanceOf(::javax::management::ObjectName* name, $String* className) {return false;}
	virtual bool isRegistered(::javax::management::ObjectName* name) {return false;}
	virtual ::java::util::Set* queryMBeans(::javax::management::ObjectName* name, ::javax::management::QueryExp* query) {return nullptr;}
	virtual ::java::util::Set* queryNames(::javax::management::ObjectName* name, ::javax::management::QueryExp* query) {return nullptr;}
	virtual void removeNotificationListener(::javax::management::ObjectName* name, ::javax::management::ObjectName* listener) {}
	virtual void removeNotificationListener(::javax::management::ObjectName* name, ::javax::management::ObjectName* listener, ::javax::management::NotificationFilter* filter, Object$* handback) {}
	virtual void removeNotificationListener(::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener) {}
	virtual void removeNotificationListener(::javax::management::ObjectName* name, ::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback) {}
	virtual void setAttribute(::javax::management::ObjectName* name, ::javax::management::Attribute* attribute) {}
	virtual ::javax::management::AttributeList* setAttributes(::javax::management::ObjectName* name, ::javax::management::AttributeList* attributes) {return nullptr;}
	virtual void unregisterMBean(::javax::management::ObjectName* name) {}
};

	} // management
} // javax

#endif // _javax_management_MBeanServerConnection_h_