#include <java/lang/management/ManagementFactory$PlatformMBeanFinder$1.h>

#include <java/lang/management/DefaultPlatformMBeanProvider.h>
#include <java/lang/management/ManagementFactory$PlatformMBeanFinder.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ServiceLoader.h>
#include <sun/management/spi/PlatformMBeanProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultPlatformMBeanProvider = ::java::lang::management::DefaultPlatformMBeanProvider;
using $ManagementFactory$PlatformMBeanFinder = ::java::lang::management::ManagementFactory$PlatformMBeanFinder;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ServiceLoader = ::java::util::ServiceLoader;
using $PlatformMBeanProvider = ::sun::management::spi::PlatformMBeanProvider;

namespace java {
	namespace lang {
		namespace management {

$MethodInfo _ManagementFactory$PlatformMBeanFinder$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ManagementFactory$PlatformMBeanFinder$1::*)()>(&ManagementFactory$PlatformMBeanFinder$1::init$))},
	{"run", "()Ljava/util/List;", "()Ljava/util/List<Lsun/management/spi/PlatformMBeanProvider;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _ManagementFactory$PlatformMBeanFinder$1_EnclosingMethodInfo_ = {
	"java.lang.management.ManagementFactory$PlatformMBeanFinder",
	nullptr,
	nullptr
};

$InnerClassInfo _ManagementFactory$PlatformMBeanFinder$1_InnerClassesInfo_[] = {
	{"java.lang.management.ManagementFactory$PlatformMBeanFinder", "java.lang.management.ManagementFactory", "PlatformMBeanFinder", $PRIVATE | $STATIC},
	{"java.lang.management.ManagementFactory$PlatformMBeanFinder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ManagementFactory$PlatformMBeanFinder$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.management.ManagementFactory$PlatformMBeanFinder$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_ManagementFactory$PlatformMBeanFinder$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/List<Lsun/management/spi/PlatformMBeanProvider;>;>;",
	&_ManagementFactory$PlatformMBeanFinder$1_EnclosingMethodInfo_,
	_ManagementFactory$PlatformMBeanFinder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.management.ManagementFactory"
};

$Object* allocate$ManagementFactory$PlatformMBeanFinder$1($Class* clazz) {
	return $of($alloc(ManagementFactory$PlatformMBeanFinder$1));
}

void ManagementFactory$PlatformMBeanFinder$1::init$() {
}

$Object* ManagementFactory$PlatformMBeanFinder$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($List, all, $new($ArrayList));
	{
		$load($PlatformMBeanProvider);
		$var($Iterator, i$, $nc($($ServiceLoader::loadInstalled($PlatformMBeanProvider::class$)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($PlatformMBeanProvider, provider, $cast($PlatformMBeanProvider, i$->next()));
			{
				all->add(provider);
			}
		}
	}
	all->add($$new($DefaultPlatformMBeanProvider));
	return $of(all);
}

ManagementFactory$PlatformMBeanFinder$1::ManagementFactory$PlatformMBeanFinder$1() {
}

$Class* ManagementFactory$PlatformMBeanFinder$1::load$($String* name, bool initialize) {
	$loadClass(ManagementFactory$PlatformMBeanFinder$1, name, initialize, &_ManagementFactory$PlatformMBeanFinder$1_ClassInfo_, allocate$ManagementFactory$PlatformMBeanFinder$1);
	return class$;
}

$Class* ManagementFactory$PlatformMBeanFinder$1::class$ = nullptr;

		} // management
	} // lang
} // java