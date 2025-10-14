#ifndef _javax_management_MBeanRegistration_h_
#define _javax_management_MBeanRegistration_h_
//$ interface javax.management.MBeanRegistration
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace javax {
	namespace management {
		class MBeanServer;
		class ObjectName;
	}
}

namespace javax {
	namespace management {

class $import MBeanRegistration : public ::java::lang::Object {
	$interface(MBeanRegistration, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void postDeregister() {}
	virtual void postRegister(::java::lang::Boolean* registrationDone) {}
	virtual void preDeregister() {}
	virtual ::javax::management::ObjectName* preRegister(::javax::management::MBeanServer* server, ::javax::management::ObjectName* name) {return nullptr;}
};

	} // management
} // javax

#endif // _javax_management_MBeanRegistration_h_