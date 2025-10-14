#ifndef _java_lang_management_ManagementFactory$PlatformMBeanFinder$1_h_
#define _java_lang_management_ManagementFactory$PlatformMBeanFinder$1_h_
//$ class java.lang.management.ManagementFactory$PlatformMBeanFinder$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		namespace management {

class ManagementFactory$PlatformMBeanFinder$1 : public ::java::security::PrivilegedAction {
	$class(ManagementFactory$PlatformMBeanFinder$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ManagementFactory$PlatformMBeanFinder$1();
	void init$();
	virtual $Object* run() override;
};

		} // management
	} // lang
} // java

#endif // _java_lang_management_ManagementFactory$PlatformMBeanFinder$1_h_