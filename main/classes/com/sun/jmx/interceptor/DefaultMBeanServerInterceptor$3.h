#ifndef _com_sun_jmx_interceptor_DefaultMBeanServerInterceptor$3_h_
#define _com_sun_jmx_interceptor_DefaultMBeanServerInterceptor$3_h_
//$ class com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$3
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {
				class DefaultMBeanServerInterceptor;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {

class DefaultMBeanServerInterceptor$3 : public ::java::security::PrivilegedAction {
	$class(DefaultMBeanServerInterceptor$3, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	DefaultMBeanServerInterceptor$3();
	void init$(::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor* this$0);
	virtual $Object* run() override;
	::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor* this$0 = nullptr;
};

			} // interceptor
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_interceptor_DefaultMBeanServerInterceptor$3_h_