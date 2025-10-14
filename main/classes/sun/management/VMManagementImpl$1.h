#ifndef _sun_management_VMManagementImpl$1_h_
#define _sun_management_VMManagementImpl$1_h_
//$ class sun.management.VMManagementImpl$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace management {
		class VMManagementImpl;
	}
}

namespace sun {
	namespace management {

class VMManagementImpl$1 : public ::java::security::PrivilegedAction {
	$class(VMManagementImpl$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	VMManagementImpl$1();
	void init$(::sun::management::VMManagementImpl* this$0);
	virtual $Object* run() override;
	::sun::management::VMManagementImpl* this$0 = nullptr;
};

	} // management
} // sun

#endif // _sun_management_VMManagementImpl$1_h_