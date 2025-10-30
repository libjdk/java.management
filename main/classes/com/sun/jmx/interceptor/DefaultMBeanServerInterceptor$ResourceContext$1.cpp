#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor$ResourceContext$1.h>

#include <jcpp.h>

using $DefaultMBeanServerInterceptor$ResourceContext = ::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor$ResourceContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {

$MethodInfo _DefaultMBeanServerInterceptor$ResourceContext$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultMBeanServerInterceptor$ResourceContext$1::*)()>(&DefaultMBeanServerInterceptor$ResourceContext$1::init$))},
	{"done", "()V", nullptr, $PUBLIC},
	{"registering", "()V", nullptr, $PUBLIC},
	{"unregistered", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultMBeanServerInterceptor$ResourceContext$1_EnclosingMethodInfo_ = {
	"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext",
	nullptr,
	nullptr
};

$InnerClassInfo _DefaultMBeanServerInterceptor$ResourceContext$1_InnerClassesInfo_[] = {
	{"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext", "com.sun.jmx.interceptor.DefaultMBeanServerInterceptor", "ResourceContext", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultMBeanServerInterceptor$ResourceContext$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext$1",
	"java.lang.Object",
	"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$ResourceContext",
	nullptr,
	_DefaultMBeanServerInterceptor$ResourceContext$1_MethodInfo_,
	nullptr,
	&_DefaultMBeanServerInterceptor$ResourceContext$1_EnclosingMethodInfo_,
	_DefaultMBeanServerInterceptor$ResourceContext$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor"
};

$Object* allocate$DefaultMBeanServerInterceptor$ResourceContext$1($Class* clazz) {
	return $of($alloc(DefaultMBeanServerInterceptor$ResourceContext$1));
}

void DefaultMBeanServerInterceptor$ResourceContext$1::init$() {
}

void DefaultMBeanServerInterceptor$ResourceContext$1::done() {
}

void DefaultMBeanServerInterceptor$ResourceContext$1::registering() {
}

void DefaultMBeanServerInterceptor$ResourceContext$1::unregistered() {
}

DefaultMBeanServerInterceptor$ResourceContext$1::DefaultMBeanServerInterceptor$ResourceContext$1() {
}

$Class* DefaultMBeanServerInterceptor$ResourceContext$1::load$($String* name, bool initialize) {
	$loadClass(DefaultMBeanServerInterceptor$ResourceContext$1, name, initialize, &_DefaultMBeanServerInterceptor$ResourceContext$1_ClassInfo_, allocate$DefaultMBeanServerInterceptor$ResourceContext$1);
	return class$;
}

$Class* DefaultMBeanServerInterceptor$ResourceContext$1::class$ = nullptr;

			} // interceptor
		} // jmx
	} // sun
} // com