#ifndef _com_sun_jmx_interceptor_DefaultMBeanServerInterceptor$ResourceContext_h_
#define _com_sun_jmx_interceptor_DefaultMBeanServerInterceptor$ResourceContext_h_
//$ interface com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext
//$ extends com.sun.jmx.mbeanserver.Repository$RegistrationContext

#include <com/sun/jmx/mbeanserver/Repository$RegistrationContext.h>

#pragma push_macro("NONE")
#undef NONE

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {

class DefaultMBeanServerInterceptor$ResourceContext : public ::com::sun::jmx::mbeanserver::Repository$RegistrationContext {
	$interface(DefaultMBeanServerInterceptor$ResourceContext, 0, ::com::sun::jmx::mbeanserver::Repository$RegistrationContext)
public:
	virtual void done() {}
	static ::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor$ResourceContext* NONE;
};

			} // interceptor
		} // jmx
	} // sun
} // com

#pragma pop_macro("NONE")

#endif // _com_sun_jmx_interceptor_DefaultMBeanServerInterceptor$ResourceContext_h_