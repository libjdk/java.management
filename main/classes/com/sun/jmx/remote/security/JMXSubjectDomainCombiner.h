#ifndef _com_sun_jmx_remote_security_JMXSubjectDomainCombiner_h_
#define _com_sun_jmx_remote_security_JMXSubjectDomainCombiner_h_
//$ class com.sun.jmx.remote.security.JMXSubjectDomainCombiner
//$ extends javax.security.auth.SubjectDomainCombiner

#include <java/lang/Array.h>
#include <javax/security/auth/SubjectDomainCombiner.h>

namespace java {
	namespace security {
		class AccessControlContext;
		class CodeSource;
		class ProtectionDomain;
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

class $export JMXSubjectDomainCombiner : public ::javax::security::auth::SubjectDomainCombiner {
	$class(JMXSubjectDomainCombiner, 0, ::javax::security::auth::SubjectDomainCombiner)
public:
	JMXSubjectDomainCombiner();
	void init$(::javax::security::auth::Subject* s);
	virtual $Array<::java::security::ProtectionDomain>* combine($Array<::java::security::ProtectionDomain>* current, $Array<::java::security::ProtectionDomain>* assigned) override;
	static ::java::security::AccessControlContext* getContext(::javax::security::auth::Subject* subject);
	static ::java::security::AccessControlContext* getDomainCombinerContext(::javax::security::auth::Subject* subject);
	static ::java::security::CodeSource* nullCodeSource;
	static ::java::security::ProtectionDomain* pdNoPerms;
};

				} // security
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_security_JMXSubjectDomainCombiner_h_