#ifndef _com_sun_jmx_remote_security_JMXPluggableAuthenticator$1_h_
#define _com_sun_jmx_remote_security_JMXPluggableAuthenticator$1_h_
//$ class com.sun.jmx.remote.security.JMXPluggableAuthenticator$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {
					class JMXPluggableAuthenticator;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

class JMXPluggableAuthenticator$1 : public ::java::security::PrivilegedExceptionAction {
	$class(JMXPluggableAuthenticator$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	JMXPluggableAuthenticator$1();
	void init$(::com::sun::jmx::remote::security::JMXPluggableAuthenticator* this$0, $String* val$pf, $String* val$hashPass);
	virtual $Object* run() override;
	::com::sun::jmx::remote::security::JMXPluggableAuthenticator* this$0 = nullptr;
	$String* val$hashPass = nullptr;
	$String* val$pf = nullptr;
};

				} // security
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_security_JMXPluggableAuthenticator$1_h_