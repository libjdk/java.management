#ifndef _javax_management_modelmbean_RequiredModelMBean$4_h_
#define _javax_management_modelmbean_RequiredModelMBean$4_h_
//$ class javax.management.modelmbean.RequiredModelMBean$4
//$ extends java.security.PrivilegedAction

#include <java/lang/Array.h>
#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
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

class RequiredModelMBean$4 : public ::java::security::PrivilegedAction {
	$class(RequiredModelMBean$4, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	RequiredModelMBean$4();
	void init$(::javax::management::modelmbean::RequiredModelMBean* this$0, ::java::lang::reflect::Method* val$method, Object$* val$targetObject, $ObjectArray* val$opArgs, $Array<::java::lang::Throwable>* val$caughtException);
	virtual $Object* run() override;
	::javax::management::modelmbean::RequiredModelMBean* this$0 = nullptr;
	$Array<::java::lang::Throwable>* val$caughtException = nullptr;
	$ObjectArray* val$opArgs = nullptr;
	$Object* val$targetObject = nullptr;
	::java::lang::reflect::Method* val$method = nullptr;
};

		} // modelmbean
	} // management
} // javax

#endif // _javax_management_modelmbean_RequiredModelMBean$4_h_