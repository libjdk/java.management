#ifndef _javax_management_MBeanInfo$ArrayGettersSafeAction_h_
#define _javax_management_MBeanInfo$ArrayGettersSafeAction_h_
//$ class javax.management.MBeanInfo$ArrayGettersSafeAction
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace management {

class MBeanInfo$ArrayGettersSafeAction : public ::java::security::PrivilegedAction {
	$class(MBeanInfo$ArrayGettersSafeAction, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	MBeanInfo$ArrayGettersSafeAction();
	void init$($Class* subclass, $Class* immutableClass);
	virtual $Object* run() override;
	$Class* subclass = nullptr;
	$Class* immutableClass = nullptr;
};

	} // management
} // javax

#endif // _javax_management_MBeanInfo$ArrayGettersSafeAction_h_