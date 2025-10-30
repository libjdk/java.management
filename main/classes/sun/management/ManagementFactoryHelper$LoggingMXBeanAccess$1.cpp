#include <sun/management/ManagementFactoryHelper$LoggingMXBeanAccess$1.h>

#include <java/lang/Module.h>
#include <java/lang/ModuleLayer.h>
#include <java/util/Optional.h>
#include <sun/management/ManagementFactoryHelper$LoggingMXBeanAccess.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $ModuleLayer = ::java::lang::ModuleLayer;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Optional = ::java::util::Optional;
using $ManagementFactoryHelper$LoggingMXBeanAccess = ::sun::management::ManagementFactoryHelper$LoggingMXBeanAccess;

namespace sun {
	namespace management {

$FieldInfo _ManagementFactoryHelper$LoggingMXBeanAccess$1_FieldInfo_[] = {
	{"val$className", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ManagementFactoryHelper$LoggingMXBeanAccess$1, val$className)},
	{}
};

$MethodInfo _ManagementFactoryHelper$LoggingMXBeanAccess$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(ManagementFactoryHelper$LoggingMXBeanAccess$1::*)($String*)>(&ManagementFactoryHelper$LoggingMXBeanAccess$1::init$))},
	{"run", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _ManagementFactoryHelper$LoggingMXBeanAccess$1_EnclosingMethodInfo_ = {
	"sun.management.ManagementFactoryHelper$LoggingMXBeanAccess",
	"loadLoggingClass",
	"(Ljava/lang/String;)Ljava/lang/Class;"
};

$InnerClassInfo _ManagementFactoryHelper$LoggingMXBeanAccess$1_InnerClassesInfo_[] = {
	{"sun.management.ManagementFactoryHelper$LoggingMXBeanAccess", "sun.management.ManagementFactoryHelper", "LoggingMXBeanAccess", $STATIC | $FINAL},
	{"sun.management.ManagementFactoryHelper$LoggingMXBeanAccess$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ManagementFactoryHelper$LoggingMXBeanAccess$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.ManagementFactoryHelper$LoggingMXBeanAccess$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ManagementFactoryHelper$LoggingMXBeanAccess$1_FieldInfo_,
	_ManagementFactoryHelper$LoggingMXBeanAccess$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Class<*>;>;",
	&_ManagementFactoryHelper$LoggingMXBeanAccess$1_EnclosingMethodInfo_,
	_ManagementFactoryHelper$LoggingMXBeanAccess$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.ManagementFactoryHelper"
};

$Object* allocate$ManagementFactoryHelper$LoggingMXBeanAccess$1($Class* clazz) {
	return $of($alloc(ManagementFactoryHelper$LoggingMXBeanAccess$1));
}

void ManagementFactoryHelper$LoggingMXBeanAccess$1::init$($String* val$className) {
	$set(this, val$className, val$className);
}

$Object* ManagementFactoryHelper$LoggingMXBeanAccess$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Optional, logging, $nc($($ModuleLayer::boot()))->findModule("java.logging"_s));
	if ($nc(logging)->isPresent()) {
		return $of($Class::forName($cast($Module, $(logging->get())), this->val$className));
	}
	return $of(nullptr);
}

ManagementFactoryHelper$LoggingMXBeanAccess$1::ManagementFactoryHelper$LoggingMXBeanAccess$1() {
}

$Class* ManagementFactoryHelper$LoggingMXBeanAccess$1::load$($String* name, bool initialize) {
	$loadClass(ManagementFactoryHelper$LoggingMXBeanAccess$1, name, initialize, &_ManagementFactoryHelper$LoggingMXBeanAccess$1_ClassInfo_, allocate$ManagementFactoryHelper$LoggingMXBeanAccess$1);
	return class$;
}

$Class* ManagementFactoryHelper$LoggingMXBeanAccess$1::class$ = nullptr;

	} // management
} // sun