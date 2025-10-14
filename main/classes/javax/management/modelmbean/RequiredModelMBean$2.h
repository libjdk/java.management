#ifndef _javax_management_modelmbean_RequiredModelMBean$2_h_
#define _javax_management_modelmbean_RequiredModelMBean$2_h_
//$ class javax.management.modelmbean.RequiredModelMBean$2
//$ extends java.security.PrivilegedAction

#include <java/lang/Array.h>
#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace javax {
	namespace management {
		class ReflectionException;
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

class RequiredModelMBean$2 : public ::java::security::PrivilegedAction {
	$class(RequiredModelMBean$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	RequiredModelMBean$2();
	void init$(::javax::management::modelmbean::RequiredModelMBean* this$0, $StringArray* val$sig, bool val$tracing, $ClassArray* val$argClasses, ::java::lang::ClassLoader* val$targetClassLoader, $Array<::javax::management::ReflectionException>* val$caughtException);
	virtual $Object* run() override;
	::javax::management::modelmbean::RequiredModelMBean* this$0 = nullptr;
	$Array<::javax::management::ReflectionException>* val$caughtException = nullptr;
	::java::lang::ClassLoader* val$targetClassLoader = nullptr;
	$ClassArray* val$argClasses = nullptr;
	bool val$tracing = false;
	$StringArray* val$sig = nullptr;
};

		} // modelmbean
	} // management
} // javax

#endif // _javax_management_modelmbean_RequiredModelMBean$2_h_