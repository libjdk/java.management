#ifndef _sun_management_HotspotInternal_h_
#define _sun_management_HotspotInternal_h_
//$ class sun.management.HotspotInternal
//$ extends sun.management.HotspotInternalMBean
//$ implements javax.management.MBeanRegistration

#include <javax/management/MBeanRegistration.h>
#include <sun/management/HotspotInternalMBean.h>

#pragma push_macro("HOTSPOT_INTERNAL_MBEAN_NAME")
#undef HOTSPOT_INTERNAL_MBEAN_NAME

namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace javax {
	namespace management {
		class MBeanServer;
		class ObjectName;
	}
}

namespace sun {
	namespace management {

class $export HotspotInternal : public ::sun::management::HotspotInternalMBean, public ::javax::management::MBeanRegistration {
	$class(HotspotInternal, 0, ::sun::management::HotspotInternalMBean, ::javax::management::MBeanRegistration)
public:
	HotspotInternal();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void postDeregister() override;
	virtual void postRegister(::java::lang::Boolean* registrationDone) override;
	virtual void preDeregister() override;
	virtual ::javax::management::ObjectName* preRegister(::javax::management::MBeanServer* server, ::javax::management::ObjectName* name) override;
	virtual $String* toString() override;
	static $String* HOTSPOT_INTERNAL_MBEAN_NAME;
	static ::javax::management::ObjectName* objName;
	::javax::management::MBeanServer* server = nullptr;
};

	} // management
} // sun

#pragma pop_macro("HOTSPOT_INTERNAL_MBEAN_NAME")

#endif // _sun_management_HotspotInternal_h_