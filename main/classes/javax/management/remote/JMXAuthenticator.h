#ifndef _javax_management_remote_JMXAuthenticator_h_
#define _javax_management_remote_JMXAuthenticator_h_
//$ interface javax.management.remote.JMXAuthenticator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace security {
		namespace auth {
			class Subject;
		}
	}
}

namespace javax {
	namespace management {
		namespace remote {

class $export JMXAuthenticator : public ::java::lang::Object {
	$interface(JMXAuthenticator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::security::auth::Subject* authenticate(Object$* credentials) {return nullptr;}
};

		} // remote
	} // management
} // javax

#endif // _javax_management_remote_JMXAuthenticator_h_