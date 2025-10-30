#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor$1.h>

#include <com/sun/jmx/interceptor/DefaultMBeanServerInterceptor.h>
#include <java/security/ProtectionDomain.h>
#include <jcpp.h>

using $DefaultMBeanServerInterceptor = ::com::sun::jmx::interceptor::DefaultMBeanServerInterceptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ProtectionDomain = ::java::security::ProtectionDomain;

namespace com {
	namespace sun {
		namespace jmx {
			namespace interceptor {

$FieldInfo _DefaultMBeanServerInterceptor$1_FieldInfo_[] = {
	{"val$theClass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultMBeanServerInterceptor$1, val$theClass)},
	{}
};

$MethodInfo _DefaultMBeanServerInterceptor$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", "()V", 0, $method(static_cast<void(DefaultMBeanServerInterceptor$1::*)($Class*)>(&DefaultMBeanServerInterceptor$1::init$))},
	{"run", "()Ljava/security/ProtectionDomain;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultMBeanServerInterceptor$1_EnclosingMethodInfo_ = {
	"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor",
	"checkMBeanTrustPermission",
	"(Ljava/lang/Class;)V"
};

$InnerClassInfo _DefaultMBeanServerInterceptor$1_InnerClassesInfo_[] = {
	{"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultMBeanServerInterceptor$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_DefaultMBeanServerInterceptor$1_FieldInfo_,
	_DefaultMBeanServerInterceptor$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/security/ProtectionDomain;>;",
	&_DefaultMBeanServerInterceptor$1_EnclosingMethodInfo_,
	_DefaultMBeanServerInterceptor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.interceptor.DefaultMBeanServerInterceptor"
};

$Object* allocate$DefaultMBeanServerInterceptor$1($Class* clazz) {
	return $of($alloc(DefaultMBeanServerInterceptor$1));
}

void DefaultMBeanServerInterceptor$1::init$($Class* val$theClass) {
	$set(this, val$theClass, val$theClass);
}

$Object* DefaultMBeanServerInterceptor$1::run() {
	return $of($nc(this->val$theClass)->getProtectionDomain());
}

DefaultMBeanServerInterceptor$1::DefaultMBeanServerInterceptor$1() {
}

$Class* DefaultMBeanServerInterceptor$1::load$($String* name, bool initialize) {
	$loadClass(DefaultMBeanServerInterceptor$1, name, initialize, &_DefaultMBeanServerInterceptor$1_ClassInfo_, allocate$DefaultMBeanServerInterceptor$1);
	return class$;
}

$Class* DefaultMBeanServerInterceptor$1::class$ = nullptr;

			} // interceptor
		} // jmx
	} // sun
} // com