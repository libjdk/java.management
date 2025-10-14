#ifndef _javax_management_StandardMBean$MBeanInfoSafeAction_h_
#define _javax_management_StandardMBean$MBeanInfoSafeAction_h_
//$ class javax.management.StandardMBean$MBeanInfoSafeAction
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace management {

class StandardMBean$MBeanInfoSafeAction : public ::java::security::PrivilegedAction {
	$class(StandardMBean$MBeanInfoSafeAction, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	StandardMBean$MBeanInfoSafeAction();
	void init$($Class* subclass);
	virtual $Object* run() override;
	$Class* subclass = nullptr;
};

	} // management
} // javax

#endif // _javax_management_StandardMBean$MBeanInfoSafeAction_h_