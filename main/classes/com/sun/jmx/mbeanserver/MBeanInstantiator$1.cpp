#include <com/sun/jmx/mbeanserver/MBeanInstantiator$1.h>

#include <com/sun/jmx/mbeanserver/MBeanInstantiator.h>
#include <com/sun/jmx/mbeanserver/ModifiableClassLoaderRepository.h>
#include <java/lang/ClassLoader.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $MBeanInstantiator = ::com::sun::jmx::mbeanserver::MBeanInstantiator;
using $ModifiableClassLoaderRepository = ::com::sun::jmx::mbeanserver::ModifiableClassLoaderRepository;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _MBeanInstantiator$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jmx/mbeanserver/MBeanInstantiator;", nullptr, $FINAL | $SYNTHETIC, $field(MBeanInstantiator$1, this$0)},
	{"val$name", "Ljavax/management/ObjectName;", nullptr, $FINAL | $SYNTHETIC, $field(MBeanInstantiator$1, val$name)},
	{}
};

$MethodInfo _MBeanInstantiator$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jmx/mbeanserver/MBeanInstantiator;Ljavax/management/ObjectName;)V", "()V", 0, $method(static_cast<void(MBeanInstantiator$1::*)($MBeanInstantiator*,$ObjectName*)>(&MBeanInstantiator$1::init$))},
	{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MBeanInstantiator$1_EnclosingMethodInfo_ = {
	"com.sun.jmx.mbeanserver.MBeanInstantiator",
	"getClassLoader",
	"(Ljavax/management/ObjectName;)Ljava/lang/ClassLoader;"
};

$InnerClassInfo _MBeanInstantiator$1_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.MBeanInstantiator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MBeanInstantiator$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.mbeanserver.MBeanInstantiator$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_MBeanInstantiator$1_FieldInfo_,
	_MBeanInstantiator$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ClassLoader;>;",
	&_MBeanInstantiator$1_EnclosingMethodInfo_,
	_MBeanInstantiator$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.MBeanInstantiator"
};

$Object* allocate$MBeanInstantiator$1($Class* clazz) {
	return $of($alloc(MBeanInstantiator$1));
}

void MBeanInstantiator$1::init$($MBeanInstantiator* this$0, $ObjectName* val$name) {
	$set(this, this$0, this$0);
	$set(this, val$name, val$name);
}

$Object* MBeanInstantiator$1::run() {
	return $of($nc(this->this$0->clr)->getClassLoader(this->val$name));
}

MBeanInstantiator$1::MBeanInstantiator$1() {
}

$Class* MBeanInstantiator$1::load$($String* name, bool initialize) {
	$loadClass(MBeanInstantiator$1, name, initialize, &_MBeanInstantiator$1_ClassInfo_, allocate$MBeanInstantiator$1);
	return class$;
}

$Class* MBeanInstantiator$1::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com