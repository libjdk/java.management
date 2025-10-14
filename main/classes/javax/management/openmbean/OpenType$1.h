#ifndef _javax_management_openmbean_OpenType$1_h_
#define _javax_management_openmbean_OpenType$1_h_
//$ class javax.management.openmbean.OpenType$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace management {
		namespace openmbean {

class OpenType$1 : public ::java::security::PrivilegedAction {
	$class(OpenType$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	OpenType$1();
	void init$($Class* val$c);
	virtual $Object* run() override;
	$Class* val$c = nullptr;
};

		} // openmbean
	} // management
} // javax

#endif // _javax_management_openmbean_OpenType$1_h_