#ifndef _com_sun_jmx_mbeanserver_GetPropertyAction_h_
#define _com_sun_jmx_mbeanserver_GetPropertyAction_h_
//$ class com.sun.jmx.mbeanserver.GetPropertyAction
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class GetPropertyAction : public ::java::security::PrivilegedAction {
	$class(GetPropertyAction, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	GetPropertyAction();
	void init$($String* key);
	virtual $Object* run() override;
	$String* key = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_GetPropertyAction_h_