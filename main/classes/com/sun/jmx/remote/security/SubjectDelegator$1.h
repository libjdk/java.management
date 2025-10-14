#ifndef _com_sun_jmx_remote_security_SubjectDelegator$1_h_
#define _com_sun_jmx_remote_security_SubjectDelegator$1_h_
//$ class com.sun.jmx.remote.security.SubjectDelegator$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {
					class SubjectDelegator;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Collection;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

class SubjectDelegator$1 : public ::java::security::PrivilegedAction {
	$class(SubjectDelegator$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SubjectDelegator$1();
	void init$(::com::sun::jmx::remote::security::SubjectDelegator* this$0, ::java::util::Collection* val$permissions);
	virtual $Object* run() override;
	::com::sun::jmx::remote::security::SubjectDelegator* this$0 = nullptr;
	::java::util::Collection* val$permissions = nullptr;
};

				} // security
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_security_SubjectDelegator$1_h_