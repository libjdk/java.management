#include <com/sun/jmx/mbeanserver/JmxMBeanServer$2.h>

#include <com/sun/jmx/mbeanserver/JmxMBeanServer.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/MBeanServerDelegate.h>
#include <javax/management/ObjectInstance.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

#undef DELEGATE_NAME

using $JmxMBeanServer = ::com::sun::jmx::mbeanserver::JmxMBeanServer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $MBeanServer = ::javax::management::MBeanServer;
using $MBeanServerDelegate = ::javax::management::MBeanServerDelegate;
using $ObjectInstance = ::javax::management::ObjectInstance;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _JmxMBeanServer$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jmx/mbeanserver/JmxMBeanServer;", nullptr, $FINAL | $SYNTHETIC, $field(JmxMBeanServer$2, this$0)},
	{}
};

$MethodInfo _JmxMBeanServer$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jmx/mbeanserver/JmxMBeanServer;)V", nullptr, 0, $method(static_cast<void(JmxMBeanServer$2::*)($JmxMBeanServer*)>(&JmxMBeanServer$2::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _JmxMBeanServer$2_EnclosingMethodInfo_ = {
	"com.sun.jmx.mbeanserver.JmxMBeanServer",
	"initialize",
	"()V"
};

$InnerClassInfo _JmxMBeanServer$2_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.JmxMBeanServer$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JmxMBeanServer$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.mbeanserver.JmxMBeanServer$2",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_JmxMBeanServer$2_FieldInfo_,
	_JmxMBeanServer$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Object;>;",
	&_JmxMBeanServer$2_EnclosingMethodInfo_,
	_JmxMBeanServer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.JmxMBeanServer"
};

$Object* allocate$JmxMBeanServer$2($Class* clazz) {
	return $of($alloc(JmxMBeanServer$2));
}

void JmxMBeanServer$2::init$($JmxMBeanServer* this$0) {
	$set(this, this$0, this$0);
}

$Object* JmxMBeanServer$2::run() {
	$init($MBeanServerDelegate);
	$nc(this->this$0->mbsInterceptor)->registerMBean(this->this$0->mBeanServerDelegateObject, $MBeanServerDelegate::DELEGATE_NAME);
	return $of(nullptr);
}

JmxMBeanServer$2::JmxMBeanServer$2() {
}

$Class* JmxMBeanServer$2::load$($String* name, bool initialize) {
	$loadClass(JmxMBeanServer$2, name, initialize, &_JmxMBeanServer$2_ClassInfo_, allocate$JmxMBeanServer$2);
	return class$;
}

$Class* JmxMBeanServer$2::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com