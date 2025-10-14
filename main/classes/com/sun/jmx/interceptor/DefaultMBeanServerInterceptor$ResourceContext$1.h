#ifndef _com_sun_jmx_interceptor_DefaultMBeanServerInterceptor$ResourceContext$1_h_
#define _com_sun_jmx_interceptor_DefaultMBeanServerInterceptor$ResourceContext$1_h_
//$ class com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext$1
//$ extends com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext

#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor$ResourceContext.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {

class DefaultMBeanServerInterceptor$ResourceContext$1 : public ::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor$ResourceContext {
	$class(DefaultMBeanServerInterceptor$ResourceContext$1, $NO_CLASS_INIT, ::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor$ResourceContext)
public:
	DefaultMBeanServerInterceptor$ResourceContext$1();
	void init$();
	virtual void done() override;
	virtual void registering() override;
	virtual void unregistered() override;
};

			} // interceptor
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_interceptor_DefaultMBeanServerInterceptor$ResourceContext$1_h_