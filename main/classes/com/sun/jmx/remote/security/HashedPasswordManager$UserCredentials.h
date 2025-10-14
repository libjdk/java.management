#ifndef _com_sun_jmx_remote_security_HashedPasswordManager$UserCredentials_h_
#define _com_sun_jmx_remote_security_HashedPasswordManager$UserCredentials_h_
//$ class com.sun.jmx.remote.security.HashedPasswordManager$UserCredentials
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

class HashedPasswordManager$UserCredentials : public ::java::lang::Object {
	$class(HashedPasswordManager$UserCredentials, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HashedPasswordManager$UserCredentials();
	void init$($String* userName, $String* hashAlgorithm, $String* b64Salt, $String* b64Hash);
	virtual $String* toString() override;
	$String* userName = nullptr;
	$String* hashAlgorithm = nullptr;
	$String* b64Salt = nullptr;
	$String* b64Hash = nullptr;
};

				} // security
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_security_HashedPasswordManager$UserCredentials_h_