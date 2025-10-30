#include <com/sun/jmx/remote/security/JMXPluggableAuthenticator$2.h>

#include <com/sun/jmx/remote/security/JMXPluggableAuthenticator.h>
#include <javax/security/auth/Subject.h>
#include <jcpp.h>

using $JMXPluggableAuthenticator = ::com::sun::jmx::remote::security::JMXPluggableAuthenticator;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Subject = ::javax::security::auth::Subject;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

$FieldInfo _JMXPluggableAuthenticator$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jmx/remote/security/JMXPluggableAuthenticator;", nullptr, $FINAL | $SYNTHETIC, $field(JMXPluggableAuthenticator$2, this$0)},
	{"val$subject", "Ljavax/security/auth/Subject;", nullptr, $FINAL | $SYNTHETIC, $field(JMXPluggableAuthenticator$2, val$subject)},
	{}
};

$MethodInfo _JMXPluggableAuthenticator$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jmx/remote/security/JMXPluggableAuthenticator;Ljavax/security/auth/Subject;)V", "()V", 0, $method(static_cast<void(JMXPluggableAuthenticator$2::*)($JMXPluggableAuthenticator*,$Subject*)>(&JMXPluggableAuthenticator$2::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JMXPluggableAuthenticator$2_EnclosingMethodInfo_ = {
	"com.sun.jmx.remote.security.JMXPluggableAuthenticator",
	"authenticate",
	"(Ljava/lang/Object;)Ljavax/security/auth/Subject;"
};

$InnerClassInfo _JMXPluggableAuthenticator$2_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.security.JMXPluggableAuthenticator$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JMXPluggableAuthenticator$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.remote.security.JMXPluggableAuthenticator$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_JMXPluggableAuthenticator$2_FieldInfo_,
	_JMXPluggableAuthenticator$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_JMXPluggableAuthenticator$2_EnclosingMethodInfo_,
	_JMXPluggableAuthenticator$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.security.JMXPluggableAuthenticator"
};

$Object* allocate$JMXPluggableAuthenticator$2($Class* clazz) {
	return $of($alloc(JMXPluggableAuthenticator$2));
}

void JMXPluggableAuthenticator$2::init$($JMXPluggableAuthenticator* this$0, $Subject* val$subject) {
	$set(this, this$0, this$0);
	$set(this, val$subject, val$subject);
}

$Object* JMXPluggableAuthenticator$2::run() {
	$nc(this->val$subject)->setReadOnly();
	return $of(nullptr);
}

JMXPluggableAuthenticator$2::JMXPluggableAuthenticator$2() {
}

$Class* JMXPluggableAuthenticator$2::load$($String* name, bool initialize) {
	$loadClass(JMXPluggableAuthenticator$2, name, initialize, &_JMXPluggableAuthenticator$2_ClassInfo_, allocate$JMXPluggableAuthenticator$2);
	return class$;
}

$Class* JMXPluggableAuthenticator$2::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com