#include <com/sun/jmx/remote/security/MBeanServerFileAccessController$1.h>

#include <com/sun/jmx/remote/security/MBeanServerFileAccessController.h>
#include <java/security/AccessControlContext.h>
#include <javax/security/auth/Subject.h>
#include <jcpp.h>

using $MBeanServerFileAccessController = ::com::sun::jmx::remote::security::MBeanServerFileAccessController;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Subject = ::javax::security::auth::Subject;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

$FieldInfo _MBeanServerFileAccessController$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jmx/remote/security/MBeanServerFileAccessController;", nullptr, $FINAL | $SYNTHETIC, $field(MBeanServerFileAccessController$1, this$0)},
	{"val$acc", "Ljava/security/AccessControlContext;", nullptr, $FINAL | $SYNTHETIC, $field(MBeanServerFileAccessController$1, val$acc)},
	{}
};

$MethodInfo _MBeanServerFileAccessController$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jmx/remote/security/MBeanServerFileAccessController;Ljava/security/AccessControlContext;)V", "()V", 0, $method(static_cast<void(MBeanServerFileAccessController$1::*)($MBeanServerFileAccessController*,$AccessControlContext*)>(&MBeanServerFileAccessController$1::init$))},
	{"run", "()Ljavax/security/auth/Subject;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MBeanServerFileAccessController$1_EnclosingMethodInfo_ = {
	"com.sun.jmx.remote.security.MBeanServerFileAccessController",
	"checkAccess",
	"(Lcom/sun/jmx/remote/security/MBeanServerFileAccessController$AccessType;Ljava/lang/String;)V"
};

$InnerClassInfo _MBeanServerFileAccessController$1_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.security.MBeanServerFileAccessController$1", nullptr, nullptr, 0},
	{"com.sun.jmx.remote.security.MBeanServerFileAccessController$AccessType", "com.sun.jmx.remote.security.MBeanServerFileAccessController", "AccessType", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _MBeanServerFileAccessController$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.remote.security.MBeanServerFileAccessController$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_MBeanServerFileAccessController$1_FieldInfo_,
	_MBeanServerFileAccessController$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljavax/security/auth/Subject;>;",
	&_MBeanServerFileAccessController$1_EnclosingMethodInfo_,
	_MBeanServerFileAccessController$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.security.MBeanServerFileAccessController"
};

$Object* allocate$MBeanServerFileAccessController$1($Class* clazz) {
	return $of($alloc(MBeanServerFileAccessController$1));
}

void MBeanServerFileAccessController$1::init$($MBeanServerFileAccessController* this$0, $AccessControlContext* val$acc) {
	$set(this, this$0, this$0);
	$set(this, val$acc, val$acc);
}

$Object* MBeanServerFileAccessController$1::run() {
	return $of($Subject::getSubject(this->val$acc));
}

MBeanServerFileAccessController$1::MBeanServerFileAccessController$1() {
}

$Class* MBeanServerFileAccessController$1::load$($String* name, bool initialize) {
	$loadClass(MBeanServerFileAccessController$1, name, initialize, &_MBeanServerFileAccessController$1_ClassInfo_, allocate$MBeanServerFileAccessController$1);
	return class$;
}

$Class* MBeanServerFileAccessController$1::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com