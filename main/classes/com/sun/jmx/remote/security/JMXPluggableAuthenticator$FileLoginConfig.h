#ifndef _com_sun_jmx_remote_security_JMXPluggableAuthenticator$FileLoginConfig_h_
#define _com_sun_jmx_remote_security_JMXPluggableAuthenticator$FileLoginConfig_h_
//$ class com.sun.jmx.remote.security.JMXPluggableAuthenticator$FileLoginConfig
//$ extends javax.security.auth.login.Configuration

#include <java/lang/Array.h>
#include <javax/security/auth/login/Configuration.h>

#pragma push_macro("FILE_LOGIN_MODULE")
#undef FILE_LOGIN_MODULE
#pragma push_macro("HASH_PASSWORDS")
#undef HASH_PASSWORDS
#pragma push_macro("PASSWORD_FILE_OPTION")
#undef PASSWORD_FILE_OPTION

namespace javax {
	namespace security {
		namespace auth {
			namespace login {
				class AppConfigurationEntry;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

class JMXPluggableAuthenticator$FileLoginConfig : public ::javax::security::auth::login::Configuration {
	$class(JMXPluggableAuthenticator$FileLoginConfig, 0, ::javax::security::auth::login::Configuration)
public:
	JMXPluggableAuthenticator$FileLoginConfig();
	void init$($String* passwordFile, $String* hashPasswords);
	virtual $Array<::javax::security::auth::login::AppConfigurationEntry>* getAppConfigurationEntry($String* name) override;
	virtual void refresh() override;
	$Array<::javax::security::auth::login::AppConfigurationEntry>* entries = nullptr;
	static $String* FILE_LOGIN_MODULE;
	static $String* PASSWORD_FILE_OPTION;
	static $String* HASH_PASSWORDS;
};

				} // security
			} // remote
		} // jmx
	} // sun
} // com

#pragma pop_macro("FILE_LOGIN_MODULE")
#pragma pop_macro("HASH_PASSWORDS")
#pragma pop_macro("PASSWORD_FILE_OPTION")

#endif // _com_sun_jmx_remote_security_JMXPluggableAuthenticator$FileLoginConfig_h_