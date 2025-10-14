#ifndef _javax_management_modelmbean_RequiredModelMBean$1_h_
#define _javax_management_modelmbean_RequiredModelMBean$1_h_
//$ class javax.management.modelmbean.RequiredModelMBean$1
//$ extends java.security.PrivilegedAction

#include <java/lang/Array.h>
#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class ClassNotFoundException;
	}
}
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

class RequiredModelMBean$1 : public ::java::security::PrivilegedAction {
	$class(RequiredModelMBean$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	RequiredModelMBean$1();
	void init$(::javax::management::modelmbean::RequiredModelMBean* this$0, $String* val$className, Object$* val$obj, $Array<::java::lang::ClassNotFoundException>* val$caughtException);
	virtual $Object* run() override;
	::javax::management::modelmbean::RequiredModelMBean* this$0 = nullptr;
	$Array<::java::lang::ClassNotFoundException>* val$caughtException = nullptr;
	$Object* val$obj = nullptr;
	$String* val$className = nullptr;
};

		} // modelmbean
	} // management
} // javax

#endif // _javax_management_modelmbean_RequiredModelMBean$1_h_