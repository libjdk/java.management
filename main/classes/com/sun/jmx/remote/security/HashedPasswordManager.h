#ifndef _com_sun_jmx_remote_security_HashedPasswordManager_h_
#define _com_sun_jmx_remote_security_HashedPasswordManager_h_
//$ class com.sun.jmx.remote.security.HashedPasswordManager
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
		class StringBuilder;
	}
}
namespace java {
	namespace security {
		class SecureRandom;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

class $export HashedPasswordManager : public ::java::lang::Object {
	$class(HashedPasswordManager, 0, ::java::lang::Object)
public:
	HashedPasswordManager();
	void init$($String* filename, bool shouldHashPasswords);
	bool authenticate($String* userName, $chars* inputPassword);
	$StringArray* getHash($String* algorithm, $String* password);
	void lambda$loadPasswords$0(::java::lang::StringBuilder* sbuf, ::java::util::concurrent::atomic::AtomicBoolean* hasClearPasswords, $String* line);
	void loadPasswords();
	$StringArray* readPasswordFile();
	void writePasswordFile($String* input);
	static $String* DefaultHashAlgorithm;
	static const int32_t DefaultSaltLength = 64;
	::java::security::SecureRandom* random = nullptr;
	::java::util::Map* userCredentialsMap = nullptr;
	$String* passwordFile = nullptr;
	bool shouldHashPasswords = false;
	bool isLogged = false;
	static ::com::sun::jmx::remote::util::ClassLogger* logger;
};

				} // security
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_security_HashedPasswordManager_h_