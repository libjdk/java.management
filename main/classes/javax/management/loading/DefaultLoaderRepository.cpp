#include <javax/management/loading/DefaultLoaderRepository.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/MBeanServerFactory.h>
#include <javax/management/loading/ClassLoaderRepository.h>
#include <jcpp.h>

#undef MBEANSERVER_LOGGER
#undef TRACE

using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $MBeanServer = ::javax::management::MBeanServer;
using $MBeanServerFactory = ::javax::management::MBeanServerFactory;
using $ClassLoaderRepository = ::javax::management::loading::ClassLoaderRepository;

namespace javax {
	namespace management {
		namespace loading {

$CompoundAttribute _DefaultLoaderRepository_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$MethodInfo _DefaultLoaderRepository_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultLoaderRepository::*)()>(&DefaultLoaderRepository::init$))},
	{"load", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $method(static_cast<$Class*(*)($ClassLoader*,$String*)>(&DefaultLoaderRepository::load)), "java.lang.ClassNotFoundException"},
	{"loadClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $method(static_cast<$Class*(*)($String*)>(&DefaultLoaderRepository::loadClass)), "java.lang.ClassNotFoundException"},
	{"loadClassWithout", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $STATIC, $method(static_cast<$Class*(*)($ClassLoader*,$String*)>(&DefaultLoaderRepository::loadClassWithout)), "java.lang.ClassNotFoundException"},
	{}
};

$ClassInfo _DefaultLoaderRepository_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.loading.DefaultLoaderRepository",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DefaultLoaderRepository_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_DefaultLoaderRepository_Annotations_
};

$Object* allocate$DefaultLoaderRepository($Class* clazz) {
	return $of($alloc(DefaultLoaderRepository));
}

void DefaultLoaderRepository::init$() {
}

$Class* DefaultLoaderRepository::loadClass($String* className) {
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, className);
	return load(nullptr, className);
}

$Class* DefaultLoaderRepository::loadClassWithout($ClassLoader* loader, $String* className) {
	$init($JmxProperties);
	$init($System$Logger$Level);
	$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, className);
	return load(loader, className);
}

$Class* DefaultLoaderRepository::load($ClassLoader* without, $String* className) {
	$useLocalCurrentObjectStackCache();
	$var($List, mbsList, $MBeanServerFactory::findMBeanServer(nullptr));
	{
		$var($Iterator, i$, $nc(mbsList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($MBeanServer, mbs, $cast($MBeanServer, i$->next()));
			{
				$var($ClassLoaderRepository, clr, $nc(mbs)->getClassLoaderRepository());
				try {
					return $nc(clr)->loadClassWithout(without, className);
				} catch ($ClassNotFoundException& e) {
				}
			}
		}
	}
	$throwNew($ClassNotFoundException, className);
	$shouldNotReachHere();
}

DefaultLoaderRepository::DefaultLoaderRepository() {
}

$Class* DefaultLoaderRepository::load$($String* name, bool initialize) {
	$loadClass(DefaultLoaderRepository, name, initialize, &_DefaultLoaderRepository_ClassInfo_, allocate$DefaultLoaderRepository);
	return class$;
}

$Class* DefaultLoaderRepository::class$ = nullptr;

		} // loading
	} // management
} // javax