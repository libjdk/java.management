#ifndef _sun_management_ManagementFactoryHelper$3_h_
#define _sun_management_ManagementFactoryHelper$3_h_
//$ class sun.management.ManagementFactoryHelper$3
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace javax {
	namespace management {
		class MBeanServer;
		class ObjectName;
	}
}

namespace sun {
	namespace management {

class ManagementFactoryHelper$3 : public ::java::security::PrivilegedExceptionAction {
	$class(ManagementFactoryHelper$3, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	ManagementFactoryHelper$3();
	void init$(::javax::management::MBeanServer* val$mbs0, ::javax::management::ObjectName* val$objName);
	virtual $Object* run() override;
	::javax::management::ObjectName* val$objName = nullptr;
	::javax::management::MBeanServer* val$mbs0 = nullptr;
};

	} // management
} // sun

#endif // _sun_management_ManagementFactoryHelper$3_h_