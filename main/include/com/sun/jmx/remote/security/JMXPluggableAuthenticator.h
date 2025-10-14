#ifndef _com_sun_jmx_remote_security_JMXPluggableAuthenticator_h_
#define _com_sun_jmx_remote_security_JMXPluggableAuthenticator_h_
//$ class com.sun.jmx.remote.security.JMXPluggableAuthenticator
//$ extends javax.management.remote.JMXAuthenticator

#include <javax/management/remote/JMXAuthenticator.h>

#pragma push_macro("HASH_PASSWORDS")
#undef HASH_PASSWORDS
#pragma push_macro("LOGIN_CONFIG_NAME")
#undef LOGIN_CONFIG_NAME
#pragma push_macro("LOGIN_CONFIG_PROP")
#undef LOGIN_CONFIG_PROP
#pragma push_macro("PASSWORD_FILE_PROP")
#undef PASSWORD_FILE_PROP

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace util {
					class ClassLogger;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Exception;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			class Subject;
		}
	}
}
namespace javax {
	namespace security {
		namespace auth {
			namespace login {
				class LoginContext;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

class $import JMXPluggableAuthenticator : public ::javax::management::remote::JMXAuthenticator {
	$class(JMXPluggableAuthenticator, 0, ::javax::management::remote::JMXAuthenticator)
public:
	JMXPluggableAuthenticator();
	void init$(::java::util::Map* env);
	virtual ::javax::security::auth::Subject* authenticate(Object$* credentials) override;
	static void authenticationFailure($String* method, $String* message);
	static void authenticationFailure($String* method, ::java::lang::Exception* exception);
	static void logException($String* method, $String* message, ::java::lang::Exception* e);
	::javax::security::auth::login::LoginContext* loginContext = nullptr;
	$String* username = nullptr;
	$String* password = nullptr;
	static $String* LOGIN_CONFIG_PROP;
	static $String* LOGIN_CONFIG_NAME;
	static $String* PASSWORD_FILE_PROP;
	static $String* HASH_PASSWORDS;
	static ::com::sun::jmx::remote::util::ClassLogger* logger;
};

				} // security
			} // remote
		} // jmx
	} // sun
} // com

#pragma pop_macro("HASH_PASSWORDS")
#pragma pop_macro("LOGIN_CONFIG_NAME")
#pragma pop_macro("LOGIN_CONFIG_PROP")
#pragma pop_macro("PASSWORD_FILE_PROP")

#endif // _com_sun_jmx_remote_security_JMXPluggableAuthenticator_h_