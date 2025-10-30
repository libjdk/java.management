#include <com/sun/jmx/mbeanserver/JmxMBeanServer$1.h>

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

$FieldInfo _JmxMBeanServer$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jmx/mbeanserver/JmxMBeanServer;", nullptr, $FINAL | $SYNTHETIC, $field(JmxMBeanServer$1, this$0)},
	{"val$fInstantiator", "Lcom/sun/jmx/mbeanserver/MBeanInstantiator;", nullptr, $FINAL | $SYNTHETIC, $field(JmxMBeanServer$1, val$fInstantiator)},
	{}
};

$MethodInfo _JmxMBeanServer$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jmx/mbeanserver/JmxMBeanServer;Lcom/sun/jmx/mbeanserver/MBeanInstantiator;)V", "()V", 0, $method(static_cast<void(JmxMBeanServer$1::*)($JmxMBeanServer*,$MBeanInstantiator*)>(&JmxMBeanServer$1::init$))},
	{"run", "()Ljavax/management/loading/ClassLoaderRepository;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JmxMBeanServer$1_EnclosingMethodInfo_ = {
	"com.sun.jmx.mbeanserver.JmxMBeanServer",
	"<init>",
	"(Ljava/lang/String;Ljavax/management/MBeanServer;Ljavax/management/MBeanServerDelegate;Lcom/sun/jmx/mbeanserver/MBeanInstantiator;ZZ)V"
};

$InnerClassInfo _JmxMBeanServer$1_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.JmxMBeanServer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JmxMBeanServer$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.mbeanserver.JmxMBeanServer$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_JmxMBeanServer$1_FieldInfo_,
	_JmxMBeanServer$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljavax/management/loading/ClassLoaderRepository;>;",
	&_JmxMBeanServer$1_EnclosingMethodInfo_,
	_JmxMBeanServer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.JmxMBeanServer"
};

$Object* allocate$JmxMBeanServer$1($Class* clazz) {
	return $of($alloc(JmxMBeanServer$1));
}

void JmxMBeanServer$1::init$($JmxMBeanServer* this$0, $MBeanInstantiator* val$fInstantiator) {
	$set(this, this$0, this$0);
	$set(this, val$fInstantiator, val$fInstantiator);
}

$Object* JmxMBeanServer$1::run() {
	return $of($nc(this->val$fInstantiator)->getClassLoaderRepository());
}

JmxMBeanServer$1::JmxMBeanServer$1() {
}

$Class* JmxMBeanServer$1::load$($String* name, bool initialize) {
	$loadClass(JmxMBeanServer$1, name, initialize, &_JmxMBeanServer$1_ClassInfo_, allocate$JmxMBeanServer$1);
	return class$;
}

$Class* JmxMBeanServer$1::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com