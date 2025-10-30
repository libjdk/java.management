#include <javax/management/remote/JMXConnectorFactory$2.h>

#include <java/lang/ClassLoader.h>
#include <javax/management/remote/JMXConnectorFactory$2$1.h>
#include <javax/management/remote/JMXConnectorFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $JMXConnectorFactory = ::javax::management::remote::JMXConnectorFactory;
using $JMXConnectorFactory$2$1 = ::javax::management::remote::JMXConnectorFactory$2$1;

namespace javax {
	namespace management {
		namespace remote {

$FieldInfo _JMXConnectorFactory$2_FieldInfo_[] = {
	{"val$parent", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(JMXConnectorFactory$2, val$parent)},
	{}
};

$MethodInfo _JMXConnectorFactory$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ClassLoader;)V", "()V", 0, $method(static_cast<void(JMXConnectorFactory$2::*)($ClassLoader*)>(&JMXConnectorFactory$2::init$))},
	{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JMXConnectorFactory$2_EnclosingMethodInfo_ = {
	"javax.management.remote.JMXConnectorFactory",
	"wrap",
	"(Ljava/lang/ClassLoader;)Ljava/lang/ClassLoader;"
};

$InnerClassInfo _JMXConnectorFactory$2_InnerClassesInfo_[] = {
	{"javax.management.remote.JMXConnectorFactory$2", nullptr, nullptr, 0},
	{"javax.management.remote.JMXConnectorFactory$2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JMXConnectorFactory$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.remote.JMXConnectorFactory$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_JMXConnectorFactory$2_FieldInfo_,
	_JMXConnectorFactory$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ClassLoader;>;",
	&_JMXConnectorFactory$2_EnclosingMethodInfo_,
	_JMXConnectorFactory$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.remote.JMXConnectorFactory"
};

$Object* allocate$JMXConnectorFactory$2($Class* clazz) {
	return $of($alloc(JMXConnectorFactory$2));
}

void JMXConnectorFactory$2::init$($ClassLoader* val$parent) {
	$set(this, val$parent, val$parent);
}

$Object* JMXConnectorFactory$2::run() {
	return $of($new($JMXConnectorFactory$2$1, this, this->val$parent));
}

JMXConnectorFactory$2::JMXConnectorFactory$2() {
}

$Class* JMXConnectorFactory$2::load$($String* name, bool initialize) {
	$loadClass(JMXConnectorFactory$2, name, initialize, &_JMXConnectorFactory$2_ClassInfo_, allocate$JMXConnectorFactory$2);
	return class$;
}

$Class* JMXConnectorFactory$2::class$ = nullptr;

		} // remote
	} // management
} // javax