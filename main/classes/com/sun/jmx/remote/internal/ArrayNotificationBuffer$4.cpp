#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$4.h>

#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ArrayNotificationBuffer = ::com::sun::jmx::remote::internal::ArrayNotificationBuffer;
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

$FieldInfo _ArrayNotificationBuffer$4_FieldInfo_[] = {
	{"val$className", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayNotificationBuffer$4, val$className)},
	{"val$name", "Ljavax/management/ObjectName;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayNotificationBuffer$4, val$name)},
	{"val$mbs", "Ljavax/management/MBeanServer;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayNotificationBuffer$4, val$mbs)},
	{}
};

$MethodInfo _ArrayNotificationBuffer$4_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(ArrayNotificationBuffer$4::*)($MBeanServer*,$ObjectName*,$String*)>(&ArrayNotificationBuffer$4::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException"},
	{}
};

$EnclosingMethodInfo _ArrayNotificationBuffer$4_EnclosingMethodInfo_ = {
	"com.sun.jmx.remote.internal.ArrayNotificationBuffer",
	"isInstanceOf",
	"(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;Ljava/lang/String;)Z"
};

$InnerClassInfo _ArrayNotificationBuffer$4_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.internal.ArrayNotificationBuffer$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ArrayNotificationBuffer$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.remote.internal.ArrayNotificationBuffer$4",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_ArrayNotificationBuffer$4_FieldInfo_,
	_ArrayNotificationBuffer$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Boolean;>;",
	&_ArrayNotificationBuffer$4_EnclosingMethodInfo_,
	_ArrayNotificationBuffer$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.internal.ArrayNotificationBuffer"
};

$Object* allocate$ArrayNotificationBuffer$4($Class* clazz) {
	return $of($alloc(ArrayNotificationBuffer$4));
}

void ArrayNotificationBuffer$4::init$($MBeanServer* val$mbs, $ObjectName* val$name, $String* val$className) {
	$set(this, val$mbs, val$mbs);
	$set(this, val$name, val$name);
	$set(this, val$className, val$className);
}

$Object* ArrayNotificationBuffer$4::run() {
	return $of($Boolean::valueOf($nc(this->val$mbs)->isInstanceOf(this->val$name, this->val$className)));
}

ArrayNotificationBuffer$4::ArrayNotificationBuffer$4() {
}

$Class* ArrayNotificationBuffer$4::load$($String* name, bool initialize) {
	$loadClass(ArrayNotificationBuffer$4, name, initialize, &_ArrayNotificationBuffer$4_ClassInfo_, allocate$ArrayNotificationBuffer$4);
	return class$;
}

$Class* ArrayNotificationBuffer$4::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com