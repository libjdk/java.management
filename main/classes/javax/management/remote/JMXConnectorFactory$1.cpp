#include <javax/management/remote/JMXConnectorFactory$1.h>

#include <javax/management/remote/JMXConnectorFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $JMXConnectorFactory = ::javax::management::remote::JMXConnectorFactory;

namespace javax {
	namespace management {
		namespace remote {

$MethodInfo _JMXConnectorFactory$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JMXConnectorFactory$1::*)()>(&JMXConnectorFactory$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JMXConnectorFactory$1_EnclosingMethodInfo_ = {
	"javax.management.remote.JMXConnectorFactory",
	"resolvePkgs",
	"(Ljava/util/Map;)Ljava/lang/String;"
};

$InnerClassInfo _JMXConnectorFactory$1_InnerClassesInfo_[] = {
	{"javax.management.remote.JMXConnectorFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JMXConnectorFactory$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.remote.JMXConnectorFactory$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_JMXConnectorFactory$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_JMXConnectorFactory$1_EnclosingMethodInfo_,
	_JMXConnectorFactory$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.remote.JMXConnectorFactory"
};

$Object* allocate$JMXConnectorFactory$1($Class* clazz) {
	return $of($alloc(JMXConnectorFactory$1));
}

void JMXConnectorFactory$1::init$() {
}

$Object* JMXConnectorFactory$1::run() {
	return $of($System::getProperty("jmx.remote.protocol.provider.pkgs"_s));
}

JMXConnectorFactory$1::JMXConnectorFactory$1() {
}

$Class* JMXConnectorFactory$1::load$($String* name, bool initialize) {
	$loadClass(JMXConnectorFactory$1, name, initialize, &_JMXConnectorFactory$1_ClassInfo_, allocate$JMXConnectorFactory$1);
	return class$;
}

$Class* JMXConnectorFactory$1::class$ = nullptr;

		} // remote
	} // management
} // javax