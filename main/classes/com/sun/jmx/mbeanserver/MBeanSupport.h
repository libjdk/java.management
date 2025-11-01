#ifndef _com_sun_jmx_mbeanserver_MBeanSupport_h_
#define _com_sun_jmx_mbeanserver_MBeanSupport_h_
//$ class com.sun.jmx.mbeanserver.MBeanSupport
//$ extends com.sun.jmx.mbeanserver.DynamicMBean2
//$ implements javax.management.MBeanRegistration

#include <com/sun/jmx/mbeanserver/DynamicMBean2.h>
#include <java/lang/Array.h>
#include <javax/management/MBeanRegistration.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class MBeanIntrospector;
				class PerInterface;
			}
		}
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace javax {
	namespace management {
		class Attribute;
		class AttributeList;
		class MBeanInfo;
		class MBeanServer;
		class ObjectName;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class MBeanSupport : public ::com::sun::jmx::mbeanserver::DynamicMBean2, public ::javax::management::MBeanRegistration {
	$class(MBeanSupport, $NO_CLASS_INIT, ::com::sun::jmx::mbeanserver::DynamicMBean2, ::javax::management::MBeanRegistration)
public:
	MBeanSupport();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(Object$* resource, $Class* mbeanInterfaceType);
	virtual $Object* getAttribute($String* attribute) override;
	virtual ::javax::management::AttributeList* getAttributes($StringArray* attributes) override;
	virtual $String* getClassName() override;
	virtual $Object* getCookie() {return nullptr;}
	virtual ::javax::management::MBeanInfo* getMBeanInfo() override;
	$Class* getMBeanInterface();
	virtual ::com::sun::jmx::mbeanserver::MBeanIntrospector* getMBeanIntrospector() {return nullptr;}
	virtual $Object* getResource() override;
	virtual $Object* invoke($String* operation, $ObjectArray* params, $StringArray* signature) override;
	bool isMXBean();
	virtual void postDeregister() override;
	virtual void postRegister(::java::lang::Boolean* registrationDone) override;
	virtual void preDeregister() override;
	virtual ::javax::management::ObjectName* preRegister(::javax::management::MBeanServer* server, ::javax::management::ObjectName* name) override;
	virtual void preRegister2(::javax::management::MBeanServer* server, ::javax::management::ObjectName* name) override;
	virtual void register$(::javax::management::MBeanServer* mbs, ::javax::management::ObjectName* name) {}
	virtual void registerFailed() override;
	virtual void setAttribute(::javax::management::Attribute* attribute) override;
	virtual ::javax::management::AttributeList* setAttributes(::javax::management::AttributeList* attributes) override;
	virtual $String* toString() override;
	virtual void unregister() {}
	::javax::management::MBeanInfo* mbeanInfo = nullptr;
	$Object* resource = nullptr;
	::com::sun::jmx::mbeanserver::PerInterface* perInterface = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_MBeanSupport_h_