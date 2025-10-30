#include <sun/management/ManagementFactoryHelper$2.h>

#include <javax/management/InstanceAlreadyExistsException.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectInstance.h>
#include <javax/management/ObjectName.h>
#include <sun/management/ManagementFactoryHelper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $InstanceAlreadyExistsException = ::javax::management::InstanceAlreadyExistsException;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectInstance = ::javax::management::ObjectInstance;
using $ObjectName = ::javax::management::ObjectName;
using $ManagementFactoryHelper = ::sun::management::ManagementFactoryHelper;

namespace sun {
	namespace management {

$FieldInfo _ManagementFactoryHelper$2_FieldInfo_[] = {
	{"val$objName", "Ljavax/management/ObjectName;", nullptr, $FINAL | $SYNTHETIC, $field(ManagementFactoryHelper$2, val$objName)},
	{"val$mbean0", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(ManagementFactoryHelper$2, val$mbean0)},
	{"val$mbs0", "Ljavax/management/MBeanServer;", nullptr, $FINAL | $SYNTHETIC, $field(ManagementFactoryHelper$2, val$mbs0)},
	{}
};

$MethodInfo _ManagementFactoryHelper$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/MBeanServer;Ljava/lang/Object;Ljavax/management/ObjectName;)V", "()V", 0, $method(static_cast<void(ManagementFactoryHelper$2::*)($MBeanServer*,Object$*,$ObjectName*)>(&ManagementFactoryHelper$2::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "javax.management.MBeanRegistrationException,javax.management.NotCompliantMBeanException"},
	{}
};

$EnclosingMethodInfo _ManagementFactoryHelper$2_EnclosingMethodInfo_ = {
	"sun.management.ManagementFactoryHelper",
	"addMBean",
	"(Ljavax/management/MBeanServer;Ljava/lang/Object;Ljava/lang/String;)V"
};

$InnerClassInfo _ManagementFactoryHelper$2_InnerClassesInfo_[] = {
	{"sun.management.ManagementFactoryHelper$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ManagementFactoryHelper$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.ManagementFactoryHelper$2",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_ManagementFactoryHelper$2_FieldInfo_,
	_ManagementFactoryHelper$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
	&_ManagementFactoryHelper$2_EnclosingMethodInfo_,
	_ManagementFactoryHelper$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.ManagementFactoryHelper"
};

$Object* allocate$ManagementFactoryHelper$2($Class* clazz) {
	return $of($alloc(ManagementFactoryHelper$2));
}

void ManagementFactoryHelper$2::init$($MBeanServer* val$mbs0, Object$* val$mbean0, $ObjectName* val$objName) {
	$set(this, val$mbs0, val$mbs0);
	$set(this, val$mbean0, val$mbean0);
	$set(this, val$objName, val$objName);
}

$Object* ManagementFactoryHelper$2::run() {
	try {
		$nc(this->val$mbs0)->registerMBean(this->val$mbean0, this->val$objName);
		return $of(nullptr);
	} catch ($InstanceAlreadyExistsException& e) {
	}
	return $of(nullptr);
}

ManagementFactoryHelper$2::ManagementFactoryHelper$2() {
}

$Class* ManagementFactoryHelper$2::load$($String* name, bool initialize) {
	$loadClass(ManagementFactoryHelper$2, name, initialize, &_ManagementFactoryHelper$2_ClassInfo_, allocate$ManagementFactoryHelper$2);
	return class$;
}

$Class* ManagementFactoryHelper$2::class$ = nullptr;

	} // management
} // sun