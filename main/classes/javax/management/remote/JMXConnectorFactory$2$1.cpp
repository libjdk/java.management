#include <javax/management/remote/JMXConnectorFactory$2$1.h>

#include <java/lang/ClassLoader.h>
#include <javax/management/remote/JMXConnectorFactory$2.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMXConnectorFactory$2 = ::javax::management::remote::JMXConnectorFactory$2;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace javax {
	namespace management {
		namespace remote {

$FieldInfo _JMXConnectorFactory$2$1_FieldInfo_[] = {
	{"this$0", "Ljavax/management/remote/JMXConnectorFactory$2;", nullptr, $FINAL | $SYNTHETIC, $field(JMXConnectorFactory$2$1, this$0)},
	{}
};

$MethodInfo _JMXConnectorFactory$2$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/remote/JMXConnectorFactory$2;Ljava/lang/ClassLoader;)V", nullptr, 0, $method(static_cast<void(JMXConnectorFactory$2$1::*)($JMXConnectorFactory$2*,$ClassLoader*)>(&JMXConnectorFactory$2$1::init$))},
	{"loadClass", "(Ljava/lang/String;Z)Ljava/lang/Class;", "(Ljava/lang/String;Z)Ljava/lang/Class<*>;", $PROTECTED, nullptr, "java.lang.ClassNotFoundException"},
	{}
};

$EnclosingMethodInfo _JMXConnectorFactory$2$1_EnclosingMethodInfo_ = {
	"javax.management.remote.JMXConnectorFactory$2",
	"run",
	"()Ljava/lang/ClassLoader;"
};

$InnerClassInfo _JMXConnectorFactory$2$1_InnerClassesInfo_[] = {
	{"javax.management.remote.JMXConnectorFactory$2", nullptr, nullptr, 0},
	{"javax.management.remote.JMXConnectorFactory$2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JMXConnectorFactory$2$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.remote.JMXConnectorFactory$2$1",
	"java.lang.ClassLoader",
	nullptr,
	_JMXConnectorFactory$2$1_FieldInfo_,
	_JMXConnectorFactory$2$1_MethodInfo_,
	nullptr,
	&_JMXConnectorFactory$2$1_EnclosingMethodInfo_,
	_JMXConnectorFactory$2$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.remote.JMXConnectorFactory"
};

$Object* allocate$JMXConnectorFactory$2$1($Class* clazz) {
	return $of($alloc(JMXConnectorFactory$2$1));
}

void JMXConnectorFactory$2$1::init$($JMXConnectorFactory$2* this$0, $ClassLoader* arg0) {
	$set(this, this$0, this$0);
	$ClassLoader::init$(arg0);
}

$Class* JMXConnectorFactory$2$1::loadClass($String* name, bool resolve) {
	$ReflectUtil::checkPackageAccess(name);
	return $ClassLoader::loadClass(name, resolve);
}

JMXConnectorFactory$2$1::JMXConnectorFactory$2$1() {
}

$Class* JMXConnectorFactory$2$1::load$($String* name, bool initialize) {
	$loadClass(JMXConnectorFactory$2$1, name, initialize, &_JMXConnectorFactory$2$1_ClassInfo_, allocate$JMXConnectorFactory$2$1);
	return class$;
}

$Class* JMXConnectorFactory$2$1::class$ = nullptr;

		} // remote
	} // management
} // javax