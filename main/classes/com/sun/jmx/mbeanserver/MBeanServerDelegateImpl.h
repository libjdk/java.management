#ifndef _com_sun_jmx_mbeanserver_MBeanServerDelegateImpl_h_
#define _com_sun_jmx_mbeanserver_MBeanServerDelegateImpl_h_
//$ class com.sun.jmx.mbeanserver.MBeanServerDelegateImpl
//$ extends javax.management.MBeanServerDelegate
//$ implements javax.management.DynamicMBean,javax.management.MBeanRegistration

#include <java/lang/Array.h>
#include <javax/management/DynamicMBean.h>
#include <javax/management/MBeanRegistration.h>
#include <javax/management/MBeanServerDelegate.h>

namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace javax {
	namespace management {
		class Attribute;
		class AttributeList;
		class MBeanAttributeInfo;
		class MBeanInfo;
		class MBeanServer;
		class ObjectName;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class MBeanServerDelegateImpl : public ::javax::management::MBeanServerDelegate, public ::javax::management::DynamicMBean, public ::javax::management::MBeanRegistration {
	$class(MBeanServerDelegateImpl, 0, ::javax::management::MBeanServerDelegate, ::javax::management::DynamicMBean, ::javax::management::MBeanRegistration)
public:
	MBeanServerDelegateImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Object* getAttribute($String* attribute) override;
	virtual ::javax::management::AttributeList* getAttributes($StringArray* attributes) override;
	virtual ::javax::management::MBeanInfo* getMBeanInfo() override;
	virtual $Object* invoke($String* actionName, $ObjectArray* params, $StringArray* signature) override;
	virtual void postDeregister() override;
	virtual void postRegister(::java::lang::Boolean* registrationDone) override;
	virtual void preDeregister() override;
	virtual ::javax::management::ObjectName* preRegister(::javax::management::MBeanServer* server, ::javax::management::ObjectName* name) override;
	virtual void setAttribute(::javax::management::Attribute* attribute) override;
	virtual ::javax::management::AttributeList* setAttributes(::javax::management::AttributeList* attributes) override;
	virtual $String* toString() override;
	static $StringArray* attributeNames;
	static $Array<::javax::management::MBeanAttributeInfo>* attributeInfos;
	::javax::management::MBeanInfo* delegateInfo = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_MBeanServerDelegateImpl_h_