#ifndef _javax_management_remote_JMXConnectorFactory$2_h_
#define _javax_management_remote_JMXConnectorFactory$2_h_
//$ class javax.management.remote.JMXConnectorFactory$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}

namespace javax {
	namespace management {
		namespace remote {

class JMXConnectorFactory$2 : public ::java::security::PrivilegedAction {
	$class(JMXConnectorFactory$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	JMXConnectorFactory$2();
	void init$(::java::lang::ClassLoader* val$parent);
	virtual $Object* run() override;
	::java::lang::ClassLoader* val$parent = nullptr;
};

		} // remote
	} // management
} // javax

#endif // _javax_management_remote_JMXConnectorFactory$2_h_