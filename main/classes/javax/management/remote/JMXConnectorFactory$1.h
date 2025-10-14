#ifndef _javax_management_remote_JMXConnectorFactory$1_h_
#define _javax_management_remote_JMXConnectorFactory$1_h_
//$ class javax.management.remote.JMXConnectorFactory$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace javax {
	namespace management {
		namespace remote {

class JMXConnectorFactory$1 : public ::java::security::PrivilegedAction {
	$class(JMXConnectorFactory$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	JMXConnectorFactory$1();
	void init$();
	virtual $Object* run() override;
};

		} // remote
	} // management
} // javax

#endif // _javax_management_remote_JMXConnectorFactory$1_h_