#ifndef _javax_management_modelmbean_RequiredModelMBean_h_
#define _javax_management_modelmbean_RequiredModelMBean_h_
//$ class javax.management.modelmbean.RequiredModelMBean
//$ extends javax.management.modelmbean.ModelMBean
//$ implements javax.management.MBeanRegistration,javax.management.NotificationEmitter

#include <java/lang/Array.h>
#include <javax/management/MBeanRegistration.h>
#include <javax/management/NotificationEmitter.h>
#include <javax/management/modelmbean/ModelMBean.h>

namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}
namespace javax {
	namespace management {
		class Attribute;
		class AttributeChangeNotification;
		class AttributeList;
		class Descriptor;
		class MBeanInfo;
		class MBeanNotificationInfo;
		class MBeanServer;
		class Notification;
		class NotificationBroadcasterSupport;
		class NotificationFilter;
		class NotificationListener;
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
		namespace modelmbean {
			class ModelMBeanInfo;
			class ModelMBeanNotificationInfo;
			class ModelMBeanOperationInfo;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaSecurityAccess;
		}
	}
}

namespace javax {
	namespace management {
		namespace modelmbean {

class $export RequiredModelMBean : public ::javax::management::modelmbean::ModelMBean, public ::javax::management::MBeanRegistration, public ::javax::management::NotificationEmitter {
	$class(RequiredModelMBean, 0, ::javax::management::modelmbean::ModelMBean, ::javax::management::MBeanRegistration, ::javax::management::NotificationEmitter)
public:
	RequiredModelMBean();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::javax::management::modelmbean::ModelMBeanInfo* mbi);
	virtual void addAttributeChangeNotificationListener(::javax::management::NotificationListener* inlistener, $String* inAttributeName, Object$* inhandback) override;
	virtual void addNotificationListener(::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override;
	void cacheResult(::javax::management::modelmbean::ModelMBeanOperationInfo* opInfo, ::javax::management::Descriptor* opDescr, Object$* result);
	::javax::management::modelmbean::ModelMBeanInfo* createDefaultModelMBeanInfo();
	::java::lang::reflect::Method* findRMMBMethod($String* opMethodName, Object$* targetObjectField, $String* opClassName, $StringArray* sig);
	virtual $Object* getAttribute($String* attrName) override;
	virtual ::javax::management::AttributeList* getAttributes($StringArray* attrNames) override;
	virtual ::javax::management::loading::ClassLoaderRepository* getClassLoaderRepository();
	virtual ::javax::management::MBeanInfo* getMBeanInfo() override;
	virtual $Array<::javax::management::MBeanNotificationInfo>* getNotificationInfo() override;
	static bool hasNotification(::javax::management::modelmbean::ModelMBeanInfo* info, $String* notifName);
	virtual $Object* invoke($String* opName, $ObjectArray* opArgs, $StringArray* sig) override;
	$Object* invokeMethod($String* opName, ::java::lang::reflect::Method* method, Object$* targetObject, $ObjectArray* opArgs);
	static bool isRMMBMethodName($String* name);
	virtual void load() override;
	$Class* loadClass($String* className);
	static ::javax::management::modelmbean::ModelMBeanNotificationInfo* makeAttributeChangeInfo();
	static ::javax::management::modelmbean::ModelMBeanNotificationInfo* makeGenericInfo();
	virtual void postDeregister() override;
	virtual void postRegister(::java::lang::Boolean* registrationDone) override;
	virtual void preDeregister() override;
	virtual ::javax::management::ObjectName* preRegister(::javax::management::MBeanServer* server, ::javax::management::ObjectName* name) override;
	$String* printModelMBeanInfo(::javax::management::modelmbean::ModelMBeanInfo* info);
	virtual void removeAttributeChangeNotificationListener(::javax::management::NotificationListener* inlistener, $String* inAttributeName) override;
	virtual void removeNotificationListener(::javax::management::NotificationListener* listener) override;
	virtual void removeNotificationListener(::javax::management::NotificationListener* listener, ::javax::management::NotificationFilter* filter, Object$* handback) override;
	$Object* resolveForCacheValue(::javax::management::Descriptor* descr);
	::java::lang::reflect::Method* resolveMethod($Class* targetClass, $String* opMethodName, $StringArray* sig);
	virtual void sendAttributeChangeNotification(::javax::management::AttributeChangeNotification* ntfyObj) override;
	virtual void sendAttributeChangeNotification(::javax::management::Attribute* inOldVal, ::javax::management::Attribute* inNewVal) override;
	virtual void sendNotification(::javax::management::Notification* ntfyObj) override;
	virtual void sendNotification($String* ntfyText) override;
	virtual void setAttribute(::javax::management::Attribute* attribute) override;
	virtual ::javax::management::AttributeList* setAttributes(::javax::management::AttributeList* attributes) override;
	virtual void setManagedResource(Object$* mr, $String* mr_type) override;
	virtual void setModelMBeanInfo(::javax::management::modelmbean::ModelMBeanInfo* mbi) override;
	virtual void store() override;
	virtual $String* toString() override;
	void writeToLog($String* logFileName, $String* logEntry);
	::javax::management::modelmbean::ModelMBeanInfo* modelMBeanInfo = nullptr;
	::javax::management::NotificationBroadcasterSupport* generalBroadcaster = nullptr;
	::javax::management::NotificationBroadcasterSupport* attributeBroadcaster = nullptr;
	$Object* managedResource = nullptr;
	bool registered = false;
	::javax::management::MBeanServer* server = nullptr;
	static ::jdk::internal::access::JavaSecurityAccess* javaSecurityAccess;
	::java::security::AccessControlContext* acc = nullptr;
	static $ClassArray* primitiveClasses;
	static ::java::util::Map* primitiveClassMap;
	static ::java::util::Set* rmmbMethodNames;
	static $StringArray* primitiveTypes;
	static $StringArray* primitiveWrappers;
};

		} // modelmbean
	} // management
} // javax

#endif // _javax_management_modelmbean_RequiredModelMBean_h_