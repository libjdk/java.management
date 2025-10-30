#include <com/sun/jmx/mbeanserver/JmxMBeanServer$3.h>

#include <com/sun/jmx/mbeanserver/JmxMBeanServer.h>
#include <com/sun/jmx/mbeanserver/MBeanInstantiator.h>
#include <com/sun/jmx/mbeanserver/ModifiableClassLoaderRepository.h>
#include <jcpp.h>

using $JmxMBeanServer = ::com::sun::jmx::mbeanserver::JmxMBeanServer;
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
			namespace mbeanserver {

$FieldInfo _JmxMBeanServer$3_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jmx/mbeanserver/JmxMBeanServer;", nullptr, $FINAL | $SYNTHETIC, $field(JmxMBeanServer$3, this$0)},
	{}
};

$MethodInfo _JmxMBeanServer$3_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jmx/mbeanserver/JmxMBeanServer;)V", nullptr, 0, $method(static_cast<void(JmxMBeanServer$3::*)($JmxMBeanServer*)>(&JmxMBeanServer$3::init$))},
	{"run", "()Lcom/sun/jmx/mbeanserver/ModifiableClassLoaderRepository;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JmxMBeanServer$3_EnclosingMethodInfo_ = {
	"com.sun.jmx.mbeanserver.JmxMBeanServer",
	"initialize",
	"()V"
};

$InnerClassInfo _JmxMBeanServer$3_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.JmxMBeanServer$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JmxMBeanServer$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.mbeanserver.JmxMBeanServer$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_JmxMBeanServer$3_FieldInfo_,
	_JmxMBeanServer$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Lcom/sun/jmx/mbeanserver/ModifiableClassLoaderRepository;>;",
	&_JmxMBeanServer$3_EnclosingMethodInfo_,
	_JmxMBeanServer$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.JmxMBeanServer"
};

$Object* allocate$JmxMBeanServer$3($Class* clazz) {
	return $of($alloc(JmxMBeanServer$3));
}

void JmxMBeanServer$3::init$($JmxMBeanServer* this$0) {
	$set(this, this$0, this$0);
}

$Object* JmxMBeanServer$3::run() {
	return $of($nc(this->this$0->instantiator)->getClassLoaderRepository());
}

JmxMBeanServer$3::JmxMBeanServer$3() {
}

$Class* JmxMBeanServer$3::load$($String* name, bool initialize) {
	$loadClass(JmxMBeanServer$3, name, initialize, &_JmxMBeanServer$3_ClassInfo_, allocate$JmxMBeanServer$3);
	return class$;
}

$Class* JmxMBeanServer$3::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com