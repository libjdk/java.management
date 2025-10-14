#ifndef _javax_management_modelmbean_RequiredModelMBean$3_h_
#define _javax_management_modelmbean_RequiredModelMBean$3_h_
//$ class javax.management.modelmbean.RequiredModelMBean$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace management {
		namespace modelmbean {
			class RequiredModelMBean;
		}
	}
}

namespace javax {
	namespace management {
		namespace modelmbean {

class RequiredModelMBean$3 : public ::java::security::PrivilegedAction {
	$class(RequiredModelMBean$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	RequiredModelMBean$3();
	void init$(::javax::management::modelmbean::RequiredModelMBean* this$0, $String* val$className, $Class* val$rmmbClass);
	virtual $Object* run() override;
	::javax::management::modelmbean::RequiredModelMBean* this$0 = nullptr;
	$Class* val$rmmbClass = nullptr;
	$String* val$className = nullptr;
};

		} // modelmbean
	} // management
} // javax

#endif // _javax_management_modelmbean_RequiredModelMBean$3_h_