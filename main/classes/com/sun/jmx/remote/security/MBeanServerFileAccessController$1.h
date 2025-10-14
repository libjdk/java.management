#ifndef _com_sun_jmx_remote_security_MBeanServerFileAccessController$1_h_
#define _com_sun_jmx_remote_security_MBeanServerFileAccessController$1_h_
//$ class com.sun.jmx.remote.security.MBeanServerFileAccessController$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {
					class MBeanServerFileAccessController;
				}
			}
		}
	}
}
namespace java {
	namespace security {
		class AccessControlContext;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

class MBeanServerFileAccessController$1 : public ::java::security::PrivilegedAction {
	$class(MBeanServerFileAccessController$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	MBeanServerFileAccessController$1();
	void init$(::com::sun::jmx::remote::security::MBeanServerFileAccessController* this$0, ::java::security::AccessControlContext* val$acc);
	virtual $Object* run() override;
	::com::sun::jmx::remote::security::MBeanServerFileAccessController* this$0 = nullptr;
	::java::security::AccessControlContext* val$acc = nullptr;
};

				} // security
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_security_MBeanServerFileAccessController$1_h_