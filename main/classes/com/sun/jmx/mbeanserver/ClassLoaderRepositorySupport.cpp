#include <com/sun/jmx/mbeanserver/ClassLoaderRepositorySupport.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <com/sun/jmx/mbeanserver/ClassLoaderRepositorySupport$LoaderEntry.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/security/Permission.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Hashtable.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/management/MBeanPermission.h>
#include <javax/management/ObjectName.h>
#include <javax/management/loading/PrivateClassLoader.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef EMPTY_LOADER_ARRAY
#undef MBEANSERVER_LOGGER
#undef TRACE

using $ClassLoaderRepositorySupport$LoaderEntryArray = $Array<::com::sun::jmx::mbeanserver::ClassLoaderRepositorySupport$LoaderEntry>;
using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $ClassLoaderRepositorySupport$LoaderEntry = ::com::sun::jmx::mbeanserver::ClassLoaderRepositorySupport$LoaderEntry;
using $ModifiableClassLoaderRepository = ::com::sun::jmx::mbeanserver::ModifiableClassLoaderRepository;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $Permission = ::java::security::Permission;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Hashtable = ::java::util::Hashtable;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $MBeanPermission = ::javax::management::MBeanPermission;
using $ObjectName = ::javax::management::ObjectName;
using $PrivateClassLoader = ::javax::management::loading::PrivateClassLoader;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _ClassLoaderRepositorySupport_FieldInfo_[] = {
	{"EMPTY_LOADER_ARRAY", "[Lcom/sun/jmx/mbeanserver/ClassLoaderRepositorySupport$LoaderEntry;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ClassLoaderRepositorySupport, EMPTY_LOADER_ARRAY)},
	{"loaders", "[Lcom/sun/jmx/mbeanserver/ClassLoaderRepositorySupport$LoaderEntry;", nullptr, $PRIVATE, $field(ClassLoaderRepositorySupport, loaders)},
	{"search", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/ClassLoader;>;>;", $PRIVATE | $FINAL, $field(ClassLoaderRepositorySupport, search)},
	{"loadersWithNames", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/management/ObjectName;Ljava/lang/ClassLoader;>;", $PRIVATE | $FINAL, $field(ClassLoaderRepositorySupport, loadersWithNames)},
	{}
};

$MethodInfo _ClassLoaderRepositorySupport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ClassLoaderRepositorySupport::*)()>(&ClassLoaderRepositorySupport::init$))},
	{"add", "(Ljavax/management/ObjectName;Ljava/lang/ClassLoader;)Z", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<bool(ClassLoaderRepositorySupport::*)($ObjectName*,$ClassLoader*)>(&ClassLoaderRepositorySupport::add))},
	{"addClassLoader", "(Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC | $FINAL},
	{"addClassLoader", "(Ljavax/management/ObjectName;Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED},
	{"getClassLoader", "(Ljavax/management/ObjectName;)Ljava/lang/ClassLoader;", nullptr, $PUBLIC | $FINAL},
	{"loadClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $FINAL, nullptr, "java.lang.ClassNotFoundException"},
	{"loadClass", "([Lcom/sun/jmx/mbeanserver/ClassLoaderRepositorySupport$LoaderEntry;Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/lang/ClassLoader;)Ljava/lang/Class;", "([Lcom/sun/jmx/mbeanserver/ClassLoaderRepositorySupport$LoaderEntry;Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/lang/ClassLoader;)Ljava/lang/Class<*>;", $PRIVATE, $method(static_cast<$Class*(ClassLoaderRepositorySupport::*)($ClassLoaderRepositorySupport$LoaderEntryArray*,$String*,$ClassLoader*,$ClassLoader*)>(&ClassLoaderRepositorySupport::loadClass)), "java.lang.ClassNotFoundException"},
	{"loadClassBefore", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $FINAL, nullptr, "java.lang.ClassNotFoundException"},
	{"loadClassWithout", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC | $FINAL, nullptr, "java.lang.ClassNotFoundException"},
	{"remove", "(Ljavax/management/ObjectName;Ljava/lang/ClassLoader;)Z", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<bool(ClassLoaderRepositorySupport::*)($ObjectName*,$ClassLoader*)>(&ClassLoaderRepositorySupport::remove))},
	{"removeClassLoader", "(Ljava/lang/ClassLoader;)V", nullptr, $PUBLIC | $FINAL},
	{"removeClassLoader", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED},
	{"startValidSearch", "(Ljava/lang/ClassLoader;Ljava/lang/String;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(ClassLoaderRepositorySupport::*)($ClassLoader*,$String*)>(&ClassLoaderRepositorySupport::startValidSearch)), "java.lang.ClassNotFoundException"},
	{"stopValidSearch", "(Ljava/lang/ClassLoader;Ljava/lang/String;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(ClassLoaderRepositorySupport::*)($ClassLoader*,$String*)>(&ClassLoaderRepositorySupport::stopValidSearch))},
	{}
};

$InnerClassInfo _ClassLoaderRepositorySupport_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.ClassLoaderRepositorySupport$LoaderEntry", "com.sun.jmx.mbeanserver.ClassLoaderRepositorySupport", "LoaderEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ClassLoaderRepositorySupport_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.ClassLoaderRepositorySupport",
	"java.lang.Object",
	"com.sun.jmx.mbeanserver.ModifiableClassLoaderRepository",
	_ClassLoaderRepositorySupport_FieldInfo_,
	_ClassLoaderRepositorySupport_MethodInfo_,
	nullptr,
	nullptr,
	_ClassLoaderRepositorySupport_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.ClassLoaderRepositorySupport$LoaderEntry"
};

$Object* allocate$ClassLoaderRepositorySupport($Class* clazz) {
	return $of($alloc(ClassLoaderRepositorySupport));
}

$ClassLoaderRepositorySupport$LoaderEntryArray* ClassLoaderRepositorySupport::EMPTY_LOADER_ARRAY = nullptr;

void ClassLoaderRepositorySupport::init$() {
	$set(this, loaders, ClassLoaderRepositorySupport::EMPTY_LOADER_ARRAY);
	$set(this, search, $new($Hashtable, 10));
	$set(this, loadersWithNames, $new($Hashtable, 10));
}

bool ClassLoaderRepositorySupport::add($ObjectName* name, $ClassLoader* cl) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($List, l, $new($ArrayList, $(static_cast<$Collection*>($Arrays::asList(this->loaders)))));
		l->add($$new($ClassLoaderRepositorySupport$LoaderEntry, name, cl));
		$set(this, loaders, $fcast($ClassLoaderRepositorySupport$LoaderEntryArray, l->toArray(ClassLoaderRepositorySupport::EMPTY_LOADER_ARRAY)));
		return true;
	}
}

bool ClassLoaderRepositorySupport::remove($ObjectName* name, $ClassLoader* cl) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		int32_t size = $nc(this->loaders)->length;
		for (int32_t i = 0; i < size; ++i) {
			$var($ClassLoaderRepositorySupport$LoaderEntry, entry, $nc(this->loaders)->get(i));
			bool match = (name == nullptr) ? cl == $nc(entry)->loader : $nc(name)->equals(entry->name);
			if (match) {
				$var($ClassLoaderRepositorySupport$LoaderEntryArray, newloaders, $new($ClassLoaderRepositorySupport$LoaderEntryArray, size - 1));
				$System::arraycopy(this->loaders, 0, newloaders, 0, i);
				$System::arraycopy(this->loaders, i + 1, newloaders, i, size - 1 - i);
				$set(this, loaders, newloaders);
				return true;
			}
		}
		return false;
	}
}

$Class* ClassLoaderRepositorySupport::loadClass($String* className) {
	return loadClass(this->loaders, className, nullptr, nullptr);
}

$Class* ClassLoaderRepositorySupport::loadClassWithout($ClassLoader* without, $String* className) {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({className, " without "_s, without}));
	}
	if (without == nullptr) {
		return loadClass(this->loaders, className, nullptr, nullptr);
	}
	startValidSearch(without, className);
	{
		$var($Throwable, var$0, nullptr);
		$var($Class, var$2, nullptr);
		bool return$1 = false;
		try {
			var$2 = loadClass(this->loaders, className, without, nullptr);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			stopValidSearch(without, className);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Class* ClassLoaderRepositorySupport::loadClassBefore($ClassLoader* stop, $String* className) {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({className, " before "_s, stop}));
	}
	if (stop == nullptr) {
		return loadClass(this->loaders, className, nullptr, nullptr);
	}
	startValidSearch(stop, className);
	{
		$var($Throwable, var$0, nullptr);
		$var($Class, var$2, nullptr);
		bool return$1 = false;
		try {
			var$2 = loadClass(this->loaders, className, nullptr, stop);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			stopValidSearch(stop, className);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Class* ClassLoaderRepositorySupport::loadClass($ClassLoaderRepositorySupport$LoaderEntryArray* list, $String* className, $ClassLoader* without, $ClassLoader* stop) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$ReflectUtil::checkPackageAccess(className);
	int32_t size = $nc(list)->length;
	for (int32_t i = 0; i < size; ++i) {
		try {
			$var($ClassLoader, cl, $nc(list->get(i))->loader);
			if (cl == nullptr) {
				return $Class::forName(className, false, nullptr);
			}
			if (cl == without) {
				continue;
			}
			if (cl == stop) {
				break;
			}
			$init($JmxProperties);
			$init($System$Logger$Level);
			if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
				$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Trying loader = "_s, cl}));
			}
			return $Class::forName(className, false, cl);
		} catch ($ClassNotFoundException& e) {
		}
	}
	$throwNew($ClassNotFoundException, className);
	$shouldNotReachHere();
}

void ClassLoaderRepositorySupport::startValidSearch($ClassLoader* aloader, $String* className) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($List, excluded, $cast($List, $nc(this->search)->get(className)));
		if ((excluded != nullptr) && (excluded->contains(aloader))) {
			$init($JmxProperties);
			$init($System$Logger$Level);
			if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
				$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Already requested loader = "_s, aloader, " class = "_s, className}));
			}
			$throwNew($ClassNotFoundException, className);
		}
		if (excluded == nullptr) {
			$assign(excluded, $new($ArrayList, 1));
			$nc(this->search)->put(className, excluded);
		}
		$nc(excluded)->add(aloader);
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
			$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({"loader = "_s, aloader, " class = "_s, className}));
		}
	}
}

void ClassLoaderRepositorySupport::stopValidSearch($ClassLoader* aloader, $String* className) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($List, excluded, $cast($List, $nc(this->search)->get(className)));
		if (excluded != nullptr) {
			excluded->remove($of(aloader));
			$init($JmxProperties);
			$init($System$Logger$Level);
			if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
				$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({"loader = "_s, aloader, " class = "_s, className}));
			}
		}
	}
}

void ClassLoaderRepositorySupport::addClassLoader($ClassLoader* loader) {
	add(nullptr, loader);
}

void ClassLoaderRepositorySupport::removeClassLoader($ClassLoader* loader) {
	remove(nullptr, loader);
}

void ClassLoaderRepositorySupport::addClassLoader($ObjectName* name, $ClassLoader* loader) {
	$synchronized(this) {
		$nc(this->loadersWithNames)->put(name, loader);
		if (!($instanceOf($PrivateClassLoader, loader))) {
			add(name, loader);
		}
	}
}

void ClassLoaderRepositorySupport::removeClassLoader($ObjectName* name) {
	$synchronized(this) {
		$var($ClassLoader, loader, $cast($ClassLoader, $nc(this->loadersWithNames)->remove(name)));
		if (!($instanceOf($PrivateClassLoader, loader))) {
			remove(name, loader);
		}
	}
}

$ClassLoader* ClassLoaderRepositorySupport::getClassLoader($ObjectName* name) {
	$useLocalCurrentObjectStackCache();
	$var($ClassLoader, instance, $cast($ClassLoader, $nc(this->loadersWithNames)->get(name)));
	if (instance != nullptr) {
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			$var($Permission, perm, $new($MBeanPermission, $($of(instance)->getClass()->getName()), nullptr, name, "getClassLoader"_s));
			sm->checkPermission(perm);
		}
	}
	return instance;
}

void clinit$ClassLoaderRepositorySupport($Class* class$) {
	$assignStatic(ClassLoaderRepositorySupport::EMPTY_LOADER_ARRAY, $new($ClassLoaderRepositorySupport$LoaderEntryArray, 0));
}

ClassLoaderRepositorySupport::ClassLoaderRepositorySupport() {
}

$Class* ClassLoaderRepositorySupport::load$($String* name, bool initialize) {
	$loadClass(ClassLoaderRepositorySupport, name, initialize, &_ClassLoaderRepositorySupport_ClassInfo_, clinit$ClassLoaderRepositorySupport, allocate$ClassLoaderRepositorySupport);
	return class$;
}

$Class* ClassLoaderRepositorySupport::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com