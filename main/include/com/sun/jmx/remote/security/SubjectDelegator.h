#ifndef _com_sun_jmx_remote_security_SubjectDelegator_h_
#define _com_sun_jmx_remote_security_SubjectDelegator_h_
//$ class com.sun.jmx.remote.security.SubjectDelegator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class AccessControlContext;
	}
}
namespace java {
	namespace util {
		class Collection;
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

class $import SubjectDelegator : public ::java::lang::Object {
	$class(SubjectDelegator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SubjectDelegator();
	void init$();
	static bool checkRemoveCallerContext(::javax::security::auth::Subject* subject);
	virtual ::java::security::AccessControlContext* delegatedContext(::java::security::AccessControlContext* authenticatedACC, ::javax::security::auth::Subject* delegatedSubject, bool removeCallerContext);
	::java::security::AccessControlContext* getDelegatedAcc(::javax::security::auth::Subject* delegatedSubject, bool removeCallerContext);
	static ::java::util::Collection* getSubjectPrincipals(::javax::security::auth::Subject* subject);
};

				} // security
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_security_SubjectDelegator_h_