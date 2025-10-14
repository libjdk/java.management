#ifndef _com_sun_jmx_remote_security_JMXPluggableAuthenticator$JMXCallbackHandler_h_
#define _com_sun_jmx_remote_security_JMXPluggableAuthenticator$JMXCallbackHandler_h_
//$ class com.sun.jmx.remote.security.JMXPluggableAuthenticator$JMXCallbackHandler
//$ extends javax.security.auth.callback.CallbackHandler

#include <java/lang/Array.h>
#include <javax/security/auth/callback/CallbackHandler.h>

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
			namespace callback {
				class Callback;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

class JMXPluggableAuthenticator$JMXCallbackHandler : public ::javax::security::auth::callback::CallbackHandler {
	$class(JMXPluggableAuthenticator$JMXCallbackHandler, $NO_CLASS_INIT, ::javax::security::auth::callback::CallbackHandler)
public:
	JMXPluggableAuthenticator$JMXCallbackHandler();
	void init$(::com::sun::jmx::remote::security::JMXPluggableAuthenticator* this$0);
	virtual void handle($Array<::javax::security::auth::callback::Callback>* callbacks) override;
	::com::sun::jmx::remote::security::JMXPluggableAuthenticator* this$0 = nullptr;
};

				} // security
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_security_JMXPluggableAuthenticator$JMXCallbackHandler_h_