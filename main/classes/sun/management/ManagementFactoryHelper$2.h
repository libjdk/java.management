#ifndef _sun_management_ManagementFactoryHelper$2_h_
#define _sun_management_ManagementFactoryHelper$2_h_
//$ class sun.management.ManagementFactoryHelper$2
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

class ManagementFactoryHelper$2 : public ::java::security::PrivilegedExceptionAction {
	$class(ManagementFactoryHelper$2, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	ManagementFactoryHelper$2();
	void init$(::javax::management::MBeanServer* val$mbs0, Object$* val$mbean0, ::javax::management::ObjectName* val$objName);
	virtual $Object* run() override;
	::javax::management::ObjectName* val$objName = nullptr;
	$Object* val$mbean0 = nullptr;
	::javax::management::MBeanServer* val$mbs0 = nullptr;
};

	} // management
} // sun

#endif // _sun_management_ManagementFactoryHelper$2_h_