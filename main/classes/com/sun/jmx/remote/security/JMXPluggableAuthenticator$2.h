#ifndef _com_sun_jmx_remote_security_JMXPluggableAuthenticator$2_h_
#define _com_sun_jmx_remote_security_JMXPluggableAuthenticator$2_h_
//$ class com.sun.jmx.remote.security.JMXPluggableAuthenticator$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

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
namespace javax {
	namespace security {
		namespace auth {
			class Subject;
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

class JMXPluggableAuthenticator$2 : public ::java::security::PrivilegedAction {
	$class(JMXPluggableAuthenticator$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	JMXPluggableAuthenticator$2();
	void init$(::com::sun::jmx::remote::security::JMXPluggableAuthenticator* this$0, ::javax::security::auth::Subject* val$subject);
	virtual $Object* run() override;
	::com::sun::jmx::remote::security::JMXPluggableAuthenticator* this$0 = nullptr;
	::javax::security::auth::Subject* val$subject = nullptr;
};

				} // security
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_security_JMXPluggableAuthenticator$2_h_