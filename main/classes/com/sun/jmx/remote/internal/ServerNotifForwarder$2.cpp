#include <com/sun/jmx/remote/internal/ServerNotifForwarder$2.h>

#include <com/sun/jmx/remote/internal/ServerNotifForwarder.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectInstance.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ServerNotifForwarder = ::com::sun::jmx::remote::internal::ServerNotifForwarder;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectInstance = ::javax::management::ObjectInstance;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

$FieldInfo _ServerNotifForwarder$2_FieldInfo_[] = {
	{"val$name", "Ljavax/management/ObjectName;", nullptr, $FINAL | $SYNTHETIC, $field(ServerNotifForwarder$2, val$name)},
	{"val$mbs", "Ljavax/management/MBeanServer;", nullptr, $FINAL | $SYNTHETIC, $field(ServerNotifForwarder$2, val$mbs)},
	{}
};

$MethodInfo _ServerNotifForwarder$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)V", "()V", 0, $method(static_cast<void(ServerNotifForwarder$2::*)($MBeanServer*,$ObjectName*)>(&ServerNotifForwarder$2::init$))},
	{"run", "()Ljavax/management/ObjectInstance;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException"},
	{}
};

$EnclosingMethodInfo _ServerNotifForwarder$2_EnclosingMethodInfo_ = {
	"com.sun.jmx.remote.internal.ServerNotifForwarder",
	"checkMBeanPermission",
	"(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;Ljava/lang/String;)V"
};

$InnerClassInfo _ServerNotifForwarder$2_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.internal.ServerNotifForwarder$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ServerNotifForwarder$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.remote.internal.ServerNotifForwarder$2",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_ServerNotifForwarder$2_FieldInfo_,
	_ServerNotifForwarder$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljavax/management/ObjectInstance;>;",
	&_ServerNotifForwarder$2_EnclosingMethodInfo_,
	_ServerNotifForwarder$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.internal.ServerNotifForwarder"
};

$Object* allocate$ServerNotifForwarder$2($Class* clazz) {
	return $of($alloc(ServerNotifForwarder$2));
}

void ServerNotifForwarder$2::init$($MBeanServer* val$mbs, $ObjectName* val$name) {
	$set(this, val$mbs, val$mbs);
	$set(this, val$name, val$name);
}

$Object* ServerNotifForwarder$2::run() {
	return $of($nc(this->val$mbs)->getObjectInstance(this->val$name));
}

ServerNotifForwarder$2::ServerNotifForwarder$2() {
}

$Class* ServerNotifForwarder$2::load$($String* name, bool initialize) {
	$loadClass(ServerNotifForwarder$2, name, initialize, &_ServerNotifForwarder$2_ClassInfo_, allocate$ServerNotifForwarder$2);
	return class$;
}

$Class* ServerNotifForwarder$2::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com