#include <javax/management/MBeanServerFactory.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/function/Supplier.h>
#include <javax/management/JMException.h>
#include <javax/management/JMRuntimeException.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/MBeanServerBuilder.h>
#include <javax/management/MBeanServerDelegate.h>
#include <javax/management/MBeanServerPermission.h>
#include <javax/management/ObjectName.h>
#include <javax/management/loading/ClassLoaderRepository.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef DEBUG
#undef DELEGATE_NAME
#undef MBEANSERVER_LOGGER
#undef MISC_LOGGER
#undef TRACE

using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Supplier = ::java::util::function::Supplier;
using $JMException = ::javax::management::JMException;
using $JMRuntimeException = ::javax::management::JMRuntimeException;
using $MBeanServer = ::javax::management::MBeanServer;
using $MBeanServerBuilder = ::javax::management::MBeanServerBuilder;
using $MBeanServerDelegate = ::javax::management::MBeanServerDelegate;
using $MBeanServerPermission = ::javax::management::MBeanServerPermission;
using $ObjectName = ::javax::management::ObjectName;
using $ClassLoaderRepository = ::javax::management::loading::ClassLoaderRepository;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace javax {
	namespace management {

class MBeanServerFactory$$Lambda$toString : public $Supplier {
	$class(MBeanServerFactory$$Lambda$toString, $NO_CLASS_INIT, $Supplier)
public:
	void init$($StringBuilder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* get() override {
		 return $of($nc(inst$)->toString());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MBeanServerFactory$$Lambda$toString>());
	}
	$StringBuilder* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo MBeanServerFactory$$Lambda$toString::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(MBeanServerFactory$$Lambda$toString, inst$)},
	{}
};
$MethodInfo MBeanServerFactory$$Lambda$toString::methodInfos[3] = {
	{"<init>", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanServerFactory$$Lambda$toString::*)($StringBuilder*)>(&MBeanServerFactory$$Lambda$toString::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MBeanServerFactory$$Lambda$toString::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.management.MBeanServerFactory$$Lambda$toString",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* MBeanServerFactory$$Lambda$toString::load$($String* name, bool initialize) {
	$loadClass(MBeanServerFactory$$Lambda$toString, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MBeanServerFactory$$Lambda$toString::class$ = nullptr;

$FieldInfo _MBeanServerFactory_FieldInfo_[] = {
	{"builder", "Ljavax/management/MBeanServerBuilder;", nullptr, $PRIVATE | $STATIC, $staticField(MBeanServerFactory, builder)},
	{"mBeanServerList", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljavax/management/MBeanServer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(MBeanServerFactory, mBeanServerList)},
	{}
};

$MethodInfo _MBeanServerFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MBeanServerFactory::*)()>(&MBeanServerFactory::init$))},
	{"addMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($MBeanServer*)>(&MBeanServerFactory::addMBeanServer))},
	{"checkMBeanServerBuilder", "()V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)()>(&MBeanServerFactory::checkMBeanServerBuilder))},
	{"checkPermission", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*)>(&MBeanServerFactory::checkPermission)), "java.lang.SecurityException"},
	{"createMBeanServer", "()Ljavax/management/MBeanServer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MBeanServer*(*)()>(&MBeanServerFactory::createMBeanServer))},
	{"createMBeanServer", "(Ljava/lang/String;)Ljavax/management/MBeanServer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MBeanServer*(*)($String*)>(&MBeanServerFactory::createMBeanServer))},
	{"findMBeanServer", "(Ljava/lang/String;)Ljava/util/ArrayList;", "(Ljava/lang/String;)Ljava/util/ArrayList<Ljavax/management/MBeanServer;>;", $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$ArrayList*(*)($String*)>(&MBeanServerFactory::findMBeanServer))},
	{"getClassLoaderRepository", "(Ljavax/management/MBeanServer;)Ljavax/management/loading/ClassLoaderRepository;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ClassLoaderRepository*(*)($MBeanServer*)>(&MBeanServerFactory::getClassLoaderRepository))},
	{"getNewMBeanServerBuilder", "()Ljavax/management/MBeanServerBuilder;", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<$MBeanServerBuilder*(*)()>(&MBeanServerFactory::getNewMBeanServerBuilder))},
	{"loadBuilderClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $method(static_cast<$Class*(*)($String*)>(&MBeanServerFactory::loadBuilderClass)), "java.lang.ClassNotFoundException"},
	{"mBeanServerId", "(Ljavax/management/MBeanServer;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($MBeanServer*)>(&MBeanServerFactory::mBeanServerId))},
	{"newBuilder", "(Ljava/lang/Class;)Ljavax/management/MBeanServerBuilder;", "(Ljava/lang/Class<*>;)Ljavax/management/MBeanServerBuilder;", $PRIVATE | $STATIC, $method(static_cast<$MBeanServerBuilder*(*)($Class*)>(&MBeanServerFactory::newBuilder))},
	{"newMBeanServer", "()Ljavax/management/MBeanServer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MBeanServer*(*)()>(&MBeanServerFactory::newMBeanServer))},
	{"newMBeanServer", "(Ljava/lang/String;)Ljavax/management/MBeanServer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MBeanServer*(*)($String*)>(&MBeanServerFactory::newMBeanServer))},
	{"releaseMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($MBeanServer*)>(&MBeanServerFactory::releaseMBeanServer))},
	{"removeMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($MBeanServer*)>(&MBeanServerFactory::removeMBeanServer))},
	{}
};

$ClassInfo _MBeanServerFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.MBeanServerFactory",
	"java.lang.Object",
	nullptr,
	_MBeanServerFactory_FieldInfo_,
	_MBeanServerFactory_MethodInfo_
};

$Object* allocate$MBeanServerFactory($Class* clazz) {
	return $of($alloc(MBeanServerFactory));
}

$MBeanServerBuilder* MBeanServerFactory::builder = nullptr;
$ArrayList* MBeanServerFactory::mBeanServerList = nullptr;

void MBeanServerFactory::init$() {
}

void MBeanServerFactory::releaseMBeanServer($MBeanServer* mbeanServer) {
	$init(MBeanServerFactory);
	checkPermission("releaseMBeanServer"_s);
	removeMBeanServer(mbeanServer);
}

$MBeanServer* MBeanServerFactory::createMBeanServer() {
	$init(MBeanServerFactory);
	return createMBeanServer(nullptr);
}

$MBeanServer* MBeanServerFactory::createMBeanServer($String* domain) {
	$init(MBeanServerFactory);
	checkPermission("createMBeanServer"_s);
	$var($MBeanServer, mBeanServer, newMBeanServer(domain));
	addMBeanServer(mBeanServer);
	return mBeanServer;
}

$MBeanServer* MBeanServerFactory::newMBeanServer() {
	$init(MBeanServerFactory);
	return newMBeanServer(nullptr);
}

$MBeanServer* MBeanServerFactory::newMBeanServer($String* domain) {
	$init(MBeanServerFactory);
	$useLocalCurrentObjectStackCache();
	checkPermission("newMBeanServer"_s);
	$var($MBeanServerBuilder, mbsBuilder, getNewMBeanServerBuilder());
	$synchronized(mbsBuilder) {
		$var($MBeanServerDelegate, delegate, $nc(mbsBuilder)->newMBeanServerDelegate());
		if (delegate == nullptr) {
			$var($String, msg, "MBeanServerBuilder.newMBeanServerDelegate() returned null"_s);
			$throwNew($JMRuntimeException, msg);
		}
		$var($MBeanServer, mbeanServer, mbsBuilder->newMBeanServer(domain, nullptr, delegate));
		if (mbeanServer == nullptr) {
			$var($String, msg, "MBeanServerBuilder.newMBeanServer() returned null"_s);
			$throwNew($JMRuntimeException, msg);
		}
		return mbeanServer;
	}
}

$ArrayList* MBeanServerFactory::findMBeanServer($String* agentId) {
	$load(MBeanServerFactory);
	$synchronized(class$) {
		$init(MBeanServerFactory);
		$useLocalCurrentObjectStackCache();
		checkPermission("findMBeanServer"_s);
		if (agentId == nullptr) {
			return $new($ArrayList, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(MBeanServerFactory::mBeanServerList))));
		}
		$var($ArrayList, result, $new($ArrayList));
		{
			$var($Iterator, i$, $nc(MBeanServerFactory::mBeanServerList)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($MBeanServer, mbs, $cast($MBeanServer, i$->next()));
				{
					$var($String, name, mBeanServerId(mbs));
					if ($nc(agentId)->equals(name)) {
						result->add(mbs);
					}
				}
			}
		}
		return result;
	}
}

$ClassLoaderRepository* MBeanServerFactory::getClassLoaderRepository($MBeanServer* server) {
	$init(MBeanServerFactory);
	return $nc(server)->getClassLoaderRepository();
}

$String* MBeanServerFactory::mBeanServerId($MBeanServer* mbs) {
	$init(MBeanServerFactory);
	try {
		$init($MBeanServerDelegate);
		return $cast($String, $nc(mbs)->getAttribute($MBeanServerDelegate::DELEGATE_NAME, "MBeanServerId"_s));
	} catch ($JMException& e) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MISC_LOGGER)->log($System$Logger$Level::TRACE, $$str({"Ignoring exception while getting MBeanServerId: "_s, e}));
		return nullptr;
	}
	$shouldNotReachHere();
}

void MBeanServerFactory::checkPermission($String* action) {
	$init(MBeanServerFactory);
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$var($Permission, perm, $new($MBeanServerPermission, action));
		sm->checkPermission(perm);
	}
}

void MBeanServerFactory::addMBeanServer($MBeanServer* mbs) {
	$load(MBeanServerFactory);
	$synchronized(class$) {
		$init(MBeanServerFactory);
		$nc(MBeanServerFactory::mBeanServerList)->add(mbs);
	}
}

void MBeanServerFactory::removeMBeanServer($MBeanServer* mbs) {
	$load(MBeanServerFactory);
	$synchronized(class$) {
		$init(MBeanServerFactory);
		bool removed = $nc(MBeanServerFactory::mBeanServerList)->remove($of(mbs));
		if (!removed) {
			$init($JmxProperties);
			$init($System$Logger$Level);
			$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, "MBeanServer was not in list!"_s);
			$throwNew($IllegalArgumentException, "MBeanServer was not in list!"_s);
		}
	}
}

$Class* MBeanServerFactory::loadBuilderClass($String* builderClassName) {
	$init(MBeanServerFactory);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassLoader, loader, $($Thread::currentThread())->getContextClassLoader());
	if (loader != nullptr) {
		return loader->loadClass(builderClassName);
	}
	return $ReflectUtil::forName(builderClassName);
}

$MBeanServerBuilder* MBeanServerFactory::newBuilder($Class* builderClass) {
	$init(MBeanServerFactory);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($Object, abuilder, $nc(builderClass)->newInstance());
		return $cast($MBeanServerBuilder, abuilder);
	} catch ($RuntimeException& x) {
		$throw(x);
	} catch ($Exception& x) {
		$var($String, msg, $str({"Failed to instantiate a MBeanServerBuilder from "_s, builderClass, ": "_s, x}));
		$throwNew($JMRuntimeException, msg, x);
	}
	$shouldNotReachHere();
}

void MBeanServerFactory::checkMBeanServerBuilder() {
	$load(MBeanServerFactory);
	$synchronized(class$) {
		$init(MBeanServerFactory);
		$useLocalCurrentObjectStackCache();
		$beforeCallerSensitive();
		try {
			$var($GetPropertyAction, act, $new($GetPropertyAction, "javax.management.builder.initial"_s));
			$var($String, builderClassName, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(act))));
			try {
				$Class* newBuilderClass = nullptr;
				if (builderClassName == nullptr || $nc(builderClassName)->length() == 0) {
					$load($MBeanServerBuilder);
					newBuilderClass = $MBeanServerBuilder::class$;
				} else {
					newBuilderClass = loadBuilderClass(builderClassName);
				}
				if (MBeanServerFactory::builder != nullptr) {
					$Class* builderClass = $nc($of(MBeanServerFactory::builder))->getClass();
					if (newBuilderClass == builderClass) {
						return;
					}
				}
				$assignStatic(MBeanServerFactory::builder, newBuilder(newBuilderClass));
			} catch ($ClassNotFoundException& x) {
				$var($String, msg, $str({"Failed to load MBeanServerBuilder class "_s, builderClassName, ": "_s, x}));
				$throwNew($JMRuntimeException, msg, x);
			}
		} catch ($RuntimeException& x) {
			$init($JmxProperties);
			$init($System$Logger$Level);
			if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::DEBUG)) {
				$var($StringBuilder, strb, $$new($StringBuilder)->append("Failed to instantiate MBeanServerBuilder: "_s)->append($of(x))->append("\n\t\tCheck the value of the "_s)->append("javax.management.builder.initial"_s)->append(" property."_s));
				$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::DEBUG, static_cast<$Supplier*>($$new(MBeanServerFactory$$Lambda$toString, static_cast<$StringBuilder*>(strb))));
			}
			$throw(x);
		}
	}
}

$MBeanServerBuilder* MBeanServerFactory::getNewMBeanServerBuilder() {
	$load(MBeanServerFactory);
	$synchronized(class$) {
		$init(MBeanServerFactory);
		checkMBeanServerBuilder();
		return MBeanServerFactory::builder;
	}
}

void clinit$MBeanServerFactory($Class* class$) {
	$assignStatic(MBeanServerFactory::builder, nullptr);
	$assignStatic(MBeanServerFactory::mBeanServerList, $new($ArrayList));
}

MBeanServerFactory::MBeanServerFactory() {
}

$Class* MBeanServerFactory::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MBeanServerFactory$$Lambda$toString::classInfo$.name)) {
			return MBeanServerFactory$$Lambda$toString::load$(name, initialize);
		}
	}
	$loadClass(MBeanServerFactory, name, initialize, &_MBeanServerFactory_ClassInfo_, clinit$MBeanServerFactory, allocate$MBeanServerFactory);
	return class$;
}

$Class* MBeanServerFactory::class$ = nullptr;

	} // management
} // javax