#ifndef _com_sun_jmx_interceptor_DefaultMBeanServerInterceptor$2_h_
#define _com_sun_jmx_interceptor_DefaultMBeanServerInterceptor$2_h_
//$ class com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$2
//$ extends com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext

#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor$ResourceContext.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {
				class DefaultMBeanServerInterceptor;
			}
		}
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace javax {
	namespace management {
		class ObjectName;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {

class DefaultMBeanServerInterceptor$2 : public ::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor$ResourceContext {
	$class(DefaultMBeanServerInterceptor$2, $NO_CLASS_INIT, ::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor$ResourceContext)
public:
	DefaultMBeanServerInterceptor$2();
	void init$(::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor* this$0, ::java::lang::ClassLoader* val$loader, ::javax::management::ObjectName* val$logicalName);
	virtual void done() override;
	virtual void registering() override;
	virtual void unregistered() override;
	::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor* this$0 = nullptr;
	::javax::management::ObjectName* val$logicalName = nullptr;
	::java::lang::ClassLoader* val$loader = nullptr;
};

			} // interceptor
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_interceptor_DefaultMBeanServerInterceptor$2_h_