#ifndef _com_sun_jmx_mbeanserver_Repository$RegistrationContext_h_
#define _com_sun_jmx_mbeanserver_Repository$RegistrationContext_h_
//$ interface com.sun.jmx.mbeanserver.Repository$RegistrationContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class Repository$RegistrationContext : public ::java::lang::Object {
	$interface(Repository$RegistrationContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void registering() {}
	virtual void unregistered() {}
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_Repository$RegistrationContext_h_