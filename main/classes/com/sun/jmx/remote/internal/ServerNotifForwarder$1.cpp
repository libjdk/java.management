#include <com/sun/jmx/remote/internal/ServerNotifForwarder$1.h>

#include <com/sun/jmx/remote/internal/ServerNotifForwarder.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ServerNotifForwarder = ::com::sun::jmx::remote::internal::ServerNotifForwarder;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

$FieldInfo _ServerNotifForwarder$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jmx/remote/internal/ServerNotifForwarder;", nullptr, $FINAL | $SYNTHETIC, $field(ServerNotifForwarder$1, this$0)},
	{"val$name", "Ljavax/management/ObjectName;", nullptr, $FINAL | $SYNTHETIC, $field(ServerNotifForwarder$1, val$name)},
	{}
};

$MethodInfo _ServerNotifForwarder$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jmx/remote/internal/ServerNotifForwarder;Ljavax/management/ObjectName;)V", "()V", 0, $method(static_cast<void(ServerNotifForwarder$1::*)($ServerNotifForwarder*,$ObjectName*)>(&ServerNotifForwarder$1::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException"},
	{}
};

$EnclosingMethodInfo _ServerNotifForwarder$1_EnclosingMethodInfo_ = {
	"com.sun.jmx.remote.internal.ServerNotifForwarder",
	"addNotificationListener",
	"(Ljavax/management/ObjectName;Ljavax/management/NotificationFilter;)Ljava/lang/Integer;"
};

$InnerClassInfo _ServerNotifForwarder$1_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.internal.ServerNotifForwarder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ServerNotifForwarder$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.remote.internal.ServerNotifForwarder$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_ServerNotifForwarder$1_FieldInfo_,
	_ServerNotifForwarder$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Boolean;>;",
	&_ServerNotifForwarder$1_EnclosingMethodInfo_,
	_ServerNotifForwarder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.internal.ServerNotifForwarder"
};

$Object* allocate$ServerNotifForwarder$1($Class* clazz) {
	return $of($alloc(ServerNotifForwarder$1));
}

void ServerNotifForwarder$1::init$($ServerNotifForwarder* this$0, $ObjectName* val$name) {
	$set(this, this$0, this$0);
	$set(this, val$name, val$name);
}

$Object* ServerNotifForwarder$1::run() {
	$init($ServerNotifForwarder);
	return $of($Boolean::valueOf($nc(this->this$0->mbeanServer)->isInstanceOf(this->val$name, $ServerNotifForwarder::broadcasterClass)));
}

ServerNotifForwarder$1::ServerNotifForwarder$1() {
}

$Class* ServerNotifForwarder$1::load$($String* name, bool initialize) {
	$loadClass(ServerNotifForwarder$1, name, initialize, &_ServerNotifForwarder$1_ClassInfo_, allocate$ServerNotifForwarder$1);
	return class$;
}

$Class* ServerNotifForwarder$1::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com