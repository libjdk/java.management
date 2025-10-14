#ifndef _sun_management_ManagementFactoryHelper$LoggingMXBeanAccess$1_h_
#define _sun_management_ManagementFactoryHelper$LoggingMXBeanAccess$1_h_
//$ class sun.management.ManagementFactoryHelper$LoggingMXBeanAccess$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace management {

class ManagementFactoryHelper$LoggingMXBeanAccess$1 : public ::java::security::PrivilegedAction {
	$class(ManagementFactoryHelper$LoggingMXBeanAccess$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ManagementFactoryHelper$LoggingMXBeanAccess$1();
	void init$($String* val$className);
	virtual $Object* run() override;
	$String* val$className = nullptr;
};

	} // management
} // sun

#endif // _sun_management_ManagementFactoryHelper$LoggingMXBeanAccess$1_h_