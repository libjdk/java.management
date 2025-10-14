#ifndef _com_sun_jmx_interceptor_DefaultMBeanServerInterceptor$1_h_
#define _com_sun_jmx_interceptor_DefaultMBeanServerInterceptor$1_h_
//$ class com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {

class DefaultMBeanServerInterceptor$1 : public ::java::security::PrivilegedAction {
	$class(DefaultMBeanServerInterceptor$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	DefaultMBeanServerInterceptor$1();
	void init$($Class* val$theClass);
	virtual $Object* run() override;
	$Class* val$theClass = nullptr;
};

			} // interceptor
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_interceptor_DefaultMBeanServerInterceptor$1_h_