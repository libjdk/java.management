#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor$ResourceContext.h>

#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor$ResourceContext$1.h>
#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor.h>
#include <jcpp.h>

#undef NONE

using $DefaultMBeanServerInterceptor = ::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor;
using $DefaultMBeanServerInterceptor$ResourceContext$1 = ::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor$ResourceContext$1;
using $Repository$RegistrationContext = ::com::sun::jmx::mbeanserver::Repository$RegistrationContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {

$FieldInfo _DefaultMBeanServerInterceptor$ResourceContext_FieldInfo_[] = {
	{"NONE", "Lcom/sun/jmx/interceptor/DefaultMBeanServerInterceptor$ResourceContext;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DefaultMBeanServerInterceptor$ResourceContext, NONE)},
	{}
};

$MethodInfo _DefaultMBeanServerInterceptor$ResourceContext_MethodInfo_[] = {
	{"done", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _DefaultMBeanServerInterceptor$ResourceContext_InnerClassesInfo_[] = {
	{"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext", "com.sun.jmx.interceptor.DefaultMBeanServerInterceptor", "ResourceContext", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.jmx.mbeanserver.Repository$RegistrationContext", "com.sun.jmx.mbeanserver.Repository", "RegistrationContext", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultMBeanServerInterceptor$ResourceContext_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext",
	nullptr,
	"com.sun.jmx.mbeanserver.Repository$RegistrationContext",
	_DefaultMBeanServerInterceptor$ResourceContext_FieldInfo_,
	_DefaultMBeanServerInterceptor$ResourceContext_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultMBeanServerInterceptor$ResourceContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor"
};

$Object* allocate$DefaultMBeanServerInterceptor$ResourceContext($Class* clazz) {
	return $of($alloc(DefaultMBeanServerInterceptor$ResourceContext));
}

DefaultMBeanServerInterceptor$ResourceContext* DefaultMBeanServerInterceptor$ResourceContext::NONE = nullptr;

void clinit$DefaultMBeanServerInterceptor$ResourceContext($Class* class$) {
	$assignStatic(DefaultMBeanServerInterceptor$ResourceContext::NONE, $new($DefaultMBeanServerInterceptor$ResourceContext$1));
}

$Class* DefaultMBeanServerInterceptor$ResourceContext::load$($String* name, bool initialize) {
	$loadClass(DefaultMBeanServerInterceptor$ResourceContext, name, initialize, &_DefaultMBeanServerInterceptor$ResourceContext_ClassInfo_, clinit$DefaultMBeanServerInterceptor$ResourceContext, allocate$DefaultMBeanServerInterceptor$ResourceContext);
	return class$;
}

$Class* DefaultMBeanServerInterceptor$ResourceContext::class$ = nullptr;

			} // interceptor
		} // jmx
	} // sun
} // com