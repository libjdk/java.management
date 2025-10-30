#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$3.h>

#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer.h>
#include <java/util/Set.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <javax/management/QueryExp.h>
#include <jcpp.h>

using $ArrayNotificationBuffer = ::com::sun::jmx::remote::internal::ArrayNotificationBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Set = ::java::util::Set;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;
using $QueryExp = ::javax::management::QueryExp;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

$FieldInfo _ArrayNotificationBuffer$3_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jmx/remote/internal/ArrayNotificationBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayNotificationBuffer$3, this$0)},
	{"val$query", "Ljavax/management/QueryExp;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayNotificationBuffer$3, val$query)},
	{"val$name", "Ljavax/management/ObjectName;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayNotificationBuffer$3, val$name)},
	{}
};

$MethodInfo _ArrayNotificationBuffer$3_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jmx/remote/internal/ArrayNotificationBuffer;Ljavax/management/ObjectName;Ljavax/management/QueryExp;)V", "()V", 0, $method(static_cast<void(ArrayNotificationBuffer$3::*)($ArrayNotificationBuffer*,$ObjectName*,$QueryExp*)>(&ArrayNotificationBuffer$3::init$))},
	{"run", "()Ljava/util/Set;", "()Ljava/util/Set<Ljavax/management/ObjectName;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _ArrayNotificationBuffer$3_EnclosingMethodInfo_ = {
	"com.sun.jmx.remote.internal.ArrayNotificationBuffer",
	"queryNames",
	"(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set;"
};

$InnerClassInfo _ArrayNotificationBuffer$3_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.internal.ArrayNotificationBuffer$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ArrayNotificationBuffer$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.remote.internal.ArrayNotificationBuffer$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ArrayNotificationBuffer$3_FieldInfo_,
	_ArrayNotificationBuffer$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/Set<Ljavax/management/ObjectName;>;>;",
	&_ArrayNotificationBuffer$3_EnclosingMethodInfo_,
	_ArrayNotificationBuffer$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.internal.ArrayNotificationBuffer"
};

$Object* allocate$ArrayNotificationBuffer$3($Class* clazz) {
	return $of($alloc(ArrayNotificationBuffer$3));
}

void ArrayNotificationBuffer$3::init$($ArrayNotificationBuffer* this$0, $ObjectName* val$name, $QueryExp* val$query) {
	$set(this, this$0, this$0);
	$set(this, val$name, val$name);
	$set(this, val$query, val$query);
}

$Object* ArrayNotificationBuffer$3::run() {
	return $of($nc(this->this$0->mBeanServer)->queryNames(this->val$name, this->val$query));
}

ArrayNotificationBuffer$3::ArrayNotificationBuffer$3() {
}

$Class* ArrayNotificationBuffer$3::load$($String* name, bool initialize) {
	$loadClass(ArrayNotificationBuffer$3, name, initialize, &_ArrayNotificationBuffer$3_ClassInfo_, allocate$ArrayNotificationBuffer$3);
	return class$;
}

$Class* ArrayNotificationBuffer$3::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com