#include <sun/management/ManagementFactoryHelper$3.h>

#include <javax/management/InstanceNotFoundException.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <sun/management/ManagementFactoryHelper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $InstanceNotFoundException = ::javax::management::InstanceNotFoundException;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;
using $ManagementFactoryHelper = ::sun::management::ManagementFactoryHelper;

namespace sun {
	namespace management {

$FieldInfo _ManagementFactoryHelper$3_FieldInfo_[] = {
	{"val$objName", "Ljavax/management/ObjectName;", nullptr, $FINAL | $SYNTHETIC, $field(ManagementFactoryHelper$3, val$objName)},
	{"val$mbs0", "Ljavax/management/MBeanServer;", nullptr, $FINAL | $SYNTHETIC, $field(ManagementFactoryHelper$3, val$mbs0)},
	{}
};

$MethodInfo _ManagementFactoryHelper$3_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)V", "()V", 0, $method(static_cast<void(ManagementFactoryHelper$3::*)($MBeanServer*,$ObjectName*)>(&ManagementFactoryHelper$3::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "javax.management.MBeanRegistrationException,javax.management.RuntimeOperationsException"},
	{}
};

$EnclosingMethodInfo _ManagementFactoryHelper$3_EnclosingMethodInfo_ = {
	"sun.management.ManagementFactoryHelper",
	"unregisterMBean",
	"(Ljavax/management/MBeanServer;Ljava/lang/String;)V"
};

$InnerClassInfo _ManagementFactoryHelper$3_InnerClassesInfo_[] = {
	{"sun.management.ManagementFactoryHelper$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ManagementFactoryHelper$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.ManagementFactoryHelper$3",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_ManagementFactoryHelper$3_FieldInfo_,
	_ManagementFactoryHelper$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
	&_ManagementFactoryHelper$3_EnclosingMethodInfo_,
	_ManagementFactoryHelper$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.ManagementFactoryHelper"
};

$Object* allocate$ManagementFactoryHelper$3($Class* clazz) {
	return $of($alloc(ManagementFactoryHelper$3));
}

void ManagementFactoryHelper$3::init$($MBeanServer* val$mbs0, $ObjectName* val$objName) {
	$set(this, val$mbs0, val$mbs0);
	$set(this, val$objName, val$objName);
}

$Object* ManagementFactoryHelper$3::run() {
	try {
		$nc(this->val$mbs0)->unregisterMBean(this->val$objName);
	} catch ($InstanceNotFoundException& e) {
	}
	return $of(nullptr);
}

ManagementFactoryHelper$3::ManagementFactoryHelper$3() {
}

$Class* ManagementFactoryHelper$3::load$($String* name, bool initialize) {
	$loadClass(ManagementFactoryHelper$3, name, initialize, &_ManagementFactoryHelper$3_ClassInfo_, allocate$ManagementFactoryHelper$3);
	return class$;
}

$Class* ManagementFactoryHelper$3::class$ = nullptr;

	} // management
} // sun