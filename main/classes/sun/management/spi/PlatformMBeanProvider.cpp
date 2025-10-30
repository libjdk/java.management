#include <sun/management/spi/PlatformMBeanProvider.h>

#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $List = ::java::util::List;

namespace sun {
	namespace management {
		namespace spi {

$MethodInfo _PlatformMBeanProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(PlatformMBeanProvider::*)()>(&PlatformMBeanProvider::init$))},
	{"<init>", "(Ljava/lang/Void;)V", nullptr, $PRIVATE, $method(static_cast<void(PlatformMBeanProvider::*)($Void*)>(&PlatformMBeanProvider::init$))},
	{"checkSubclassPermission", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Void*(*)()>(&PlatformMBeanProvider::checkSubclassPermission))},
	{"getPlatformComponentList", "()Ljava/util/List;", "()Ljava/util/List<Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<*>;>;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _PlatformMBeanProvider_InnerClassesInfo_[] = {
	{"sun.management.spi.PlatformMBeanProvider$PlatformComponent", "sun.management.spi.PlatformMBeanProvider", "PlatformComponent", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _PlatformMBeanProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.management.spi.PlatformMBeanProvider",
	"java.lang.Object",
	nullptr,
	nullptr,
	_PlatformMBeanProvider_MethodInfo_,
	nullptr,
	nullptr,
	_PlatformMBeanProvider_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.management.spi.PlatformMBeanProvider$PlatformComponent"
};

$Object* allocate$PlatformMBeanProvider($Class* clazz) {
	return $of($alloc(PlatformMBeanProvider));
}

void PlatformMBeanProvider::init$() {
	PlatformMBeanProvider::init$($(checkSubclassPermission()));
}

void PlatformMBeanProvider::init$($Void* unused) {
}

$Void* PlatformMBeanProvider::checkSubclassPermission() {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$load(PlatformMBeanProvider);
		sm->checkPermission($$new($RuntimePermission, $$str({$(PlatformMBeanProvider::class$->getName()), ".subclass"_s})));
	}
	return nullptr;
}

PlatformMBeanProvider::PlatformMBeanProvider() {
}

$Class* PlatformMBeanProvider::load$($String* name, bool initialize) {
	$loadClass(PlatformMBeanProvider, name, initialize, &_PlatformMBeanProvider_ClassInfo_, allocate$PlatformMBeanProvider);
	return class$;
}

$Class* PlatformMBeanProvider::class$ = nullptr;

		} // spi
	} // management
} // sun