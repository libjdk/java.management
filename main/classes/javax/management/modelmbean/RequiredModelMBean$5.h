#ifndef _javax_management_modelmbean_RequiredModelMBean$5_h_
#define _javax_management_modelmbean_RequiredModelMBean$5_h_
//$ class javax.management.modelmbean.RequiredModelMBean$5
//$ extends java.security.PrivilegedAction

#include <java/lang/Array.h>
#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class Exception;
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

class RequiredModelMBean$5 : public ::java::security::PrivilegedAction {
	$class(RequiredModelMBean$5, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	RequiredModelMBean$5();
	void init$(::javax::management::modelmbean::RequiredModelMBean* this$0, $String* val$respType, $Class* val$respClass, $Array<::java::lang::Exception>* val$caughException);
	virtual $Object* run() override;
	::javax::management::modelmbean::RequiredModelMBean* this$0 = nullptr;
	$Array<::java::lang::Exception>* val$caughException = nullptr;
	$Class* val$respClass = nullptr;
	$String* val$respType = nullptr;
};

		} // modelmbean
	} // management
} // javax

#endif // _javax_management_modelmbean_RequiredModelMBean$5_h_