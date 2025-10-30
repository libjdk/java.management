#include <com/sun/jmx/remote/security/SubjectDelegator$1.h>

#include <com/sun/jmx/remote/security/SubjectDelegator.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $SubjectDelegator = ::com::sun::jmx::remote::security::SubjectDelegator;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

$FieldInfo _SubjectDelegator$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jmx/remote/security/SubjectDelegator;", nullptr, $FINAL | $SYNTHETIC, $field(SubjectDelegator$1, this$0)},
	{"val$permissions", "Ljava/util/Collection;", nullptr, $FINAL | $SYNTHETIC, $field(SubjectDelegator$1, val$permissions)},
	{}
};

$MethodInfo _SubjectDelegator$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jmx/remote/security/SubjectDelegator;Ljava/util/Collection;)V", "()V", 0, $method(static_cast<void(SubjectDelegator$1::*)($SubjectDelegator*,$Collection*)>(&SubjectDelegator$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SubjectDelegator$1_EnclosingMethodInfo_ = {
	"com.sun.jmx.remote.security.SubjectDelegator",
	"delegatedContext",
	"(Ljava/security/AccessControlContext;Ljavax/security/auth/Subject;Z)Ljava/security/AccessControlContext;"
};

$InnerClassInfo _SubjectDelegator$1_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.security.SubjectDelegator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SubjectDelegator$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.remote.security.SubjectDelegator$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SubjectDelegator$1_FieldInfo_,
	_SubjectDelegator$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_SubjectDelegator$1_EnclosingMethodInfo_,
	_SubjectDelegator$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.security.SubjectDelegator"
};

$Object* allocate$SubjectDelegator$1($Class* clazz) {
	return $of($alloc(SubjectDelegator$1));
}

void SubjectDelegator$1::init$($SubjectDelegator* this$0, $Collection* val$permissions) {
	$set(this, this$0, this$0);
	$set(this, val$permissions, val$permissions);
}

$Object* SubjectDelegator$1::run() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->val$permissions)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Permission, sdp, $cast($Permission, i$->next()));
			{
				$AccessController::checkPermission(sdp);
			}
		}
	}
	return $of(nullptr);
}

SubjectDelegator$1::SubjectDelegator$1() {
}

$Class* SubjectDelegator$1::load$($String* name, bool initialize) {
	$loadClass(SubjectDelegator$1, name, initialize, &_SubjectDelegator$1_ClassInfo_, allocate$SubjectDelegator$1);
	return class$;
}

$Class* SubjectDelegator$1::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com