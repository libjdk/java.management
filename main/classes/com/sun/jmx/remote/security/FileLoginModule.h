#ifndef _com_sun_jmx_remote_security_FileLoginModule_h_
#define _com_sun_jmx_remote_security_FileLoginModule_h_
//$ class com.sun.jmx.remote.security.FileLoginModule
//$ extends javax.security.auth.spi.LoginModule

#include <java/lang/Array.h>
#include <javax/security/auth/spi/LoginModule.h>

#pragma push_macro("DEFAULT_PASSWORD_FILE_NAME")
#undef DEFAULT_PASSWORD_FILE_NAME
#pragma push_macro("PASSWORD_FILE_NAME")
#undef PASSWORD_FILE_NAME
#pragma push_macro("PASSWORD_KEY")
#undef PASSWORD_KEY
#pragma push_macro("USERNAME_KEY")
#undef USERNAME_KEY

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {
					class HashedPasswordManager;
				}
			}
		}
	}
}
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
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace management {
		namespace remote {
			class JMXPrincipal;
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
namespace javax {
	namespace security {
		namespace auth {
			namespace callback {
				class CallbackHandler;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

class $export FileLoginModule : public ::javax::security::auth::spi::LoginModule {
	$class(FileLoginModule, 0, ::javax::security::auth::spi::LoginModule)
public:
	FileLoginModule();
	void init$();
	virtual bool abort() override;
	void attemptAuthentication(bool usePasswdFromSharedState);
	void cleanState();
	virtual bool commit() override;
	void getUsernamePassword(bool usePasswdFromSharedState);
	virtual void initialize(::javax::security::auth::Subject* subject, ::javax::security::auth::callback::CallbackHandler* callbackHandler, ::java::util::Map* sharedState, ::java::util::Map* options) override;
	virtual bool login() override;
	virtual bool logout() override;
	static $String* PASSWORD_FILE_NAME;
	static $String* DEFAULT_PASSWORD_FILE_NAME;
	static $String* USERNAME_KEY;
	static $String* PASSWORD_KEY;
	static ::com::sun::jmx::remote::util::ClassLogger* logger;
	bool useFirstPass = false;
	bool tryFirstPass = false;
	bool storePass = false;
	bool clearPass = false;
	bool hashPasswords = false;
	bool succeeded = false;
	bool commitSucceeded = false;
	$String* username = nullptr;
	$chars* password = nullptr;
	::javax::management::remote::JMXPrincipal* user = nullptr;
	::javax::security::auth::Subject* subject = nullptr;
	::javax::security::auth::callback::CallbackHandler* callbackHandler = nullptr;
	::java::util::Map* sharedState = nullptr;
	::java::util::Map* options = nullptr;
	$String* passwordFile = nullptr;
	$String* passwordFileDisplayName = nullptr;
	bool userSuppliedPasswordFile = false;
	bool hasJavaHomePermission = false;
	::com::sun::jmx::remote::security::HashedPasswordManager* hashPwdMgr = nullptr;
};

				} // security
			} // remote
		} // jmx
	} // sun
} // com

#pragma pop_macro("DEFAULT_PASSWORD_FILE_NAME")
#pragma pop_macro("PASSWORD_FILE_NAME")
#pragma pop_macro("PASSWORD_KEY")
#pragma pop_macro("USERNAME_KEY")

#endif // _com_sun_jmx_remote_security_FileLoginModule_h_