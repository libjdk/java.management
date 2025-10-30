#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor$3.h>

#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor.h>
#include <com/sun/jmx/mbeanserver/MBeanInstantiator.h>
#include <com/sun/jmx/mbeanserver/ModifiableClassLoaderRepository.h>
#include <jcpp.h>

using $DefaultMBeanServerInterceptor = ::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor;
using $MBeanInstantiator = ::com::sun::jmx::mbeanserver::MBeanInstantiator;
using $ModifiableClassLoaderRepository = ::com::sun::jmx::mbeanserver::ModifiableClassLoaderRepository;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {

$FieldInfo _DefaultMBeanServerInterceptor$3_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jmx/interceptor/DefaultMBeanServerInterceptor;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultMBeanServerInterceptor$3, this$0)},
	{}
};

$MethodInfo _DefaultMBeanServerInterceptor$3_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jmx/interceptor/DefaultMBeanServerInterceptor;)V", nullptr, 0, $method(static_cast<void(DefaultMBeanServerInterceptor$3::*)($DefaultMBeanServerInterceptor*)>(&DefaultMBeanServerInterceptor$3::init$))},
	{"run", "()Lcom/sun/jmx/mbeanserver/ModifiableClassLoaderRepository;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultMBeanServerInterceptor$3_EnclosingMethodInfo_ = {
	"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor",
	"getInstantiatorCLR",
	"()Lcom/sun/jmx/mbeanserver/ModifiableClassLoaderRepository;"
};

$InnerClassInfo _DefaultMBeanServerInterceptor$3_InnerClassesInfo_[] = {
	{"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultMBeanServerInterceptor$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_DefaultMBeanServerInterceptor$3_FieldInfo_,
	_DefaultMBeanServerInterceptor$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Lcom/sun/jmx/mbeanserver/ModifiableClassLoaderRepository;>;",
	&_DefaultMBeanServerInterceptor$3_EnclosingMethodInfo_,
	_DefaultMBeanServerInterceptor$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor"
};

$Object* allocate$DefaultMBeanServerInterceptor$3($Class* clazz) {
	return $of($alloc(DefaultMBeanServerInterceptor$3));
}

void DefaultMBeanServerInterceptor$3::init$($DefaultMBeanServerInterceptor* this$0) {
	$set(this, this$0, this$0);
}

$Object* DefaultMBeanServerInterceptor$3::run() {
	return $of(this->this$0->instantiator != nullptr ? $nc(this->this$0->instantiator)->getClassLoaderRepository() : ($ModifiableClassLoaderRepository*)nullptr);
}

DefaultMBeanServerInterceptor$3::DefaultMBeanServerInterceptor$3() {
}

$Class* DefaultMBeanServerInterceptor$3::load$($String* name, bool initialize) {
	$loadClass(DefaultMBeanServerInterceptor$3, name, initialize, &_DefaultMBeanServerInterceptor$3_ClassInfo_, allocate$DefaultMBeanServerInterceptor$3);
	return class$;
}

$Class* DefaultMBeanServerInterceptor$3::class$ = nullptr;

			} // interceptor
		} // jmx
	} // sun
} // com