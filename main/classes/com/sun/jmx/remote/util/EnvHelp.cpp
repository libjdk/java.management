#include <com/sun/jmx/remote/util/EnvHelp.h>

#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <com/sun/jmx/remote/security/NotificationAccessController.h>
#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <com/sun/jmx/remote/util/EnvHelp$SinkOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Number.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/NavigableMap.h>
#include <java/util/NavigableSet.h>
#include <java/util/Set.h>
#include <java/util/SortedMap.h>
#include <java/util/SortedSet.h>
#include <java/util/StringTokenizer.h>
#include <java/util/TreeMap.h>
#include <java/util/TreeSet.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <javax/management/remote/JMXConnectorFactory.h>
#include <javax/management/remote/JMXConnectorServerFactory.h>
#include <jcpp.h>

#undef BUFFER_SIZE_PROPERTY
#undef CLIENT_CONNECTION_CHECK_PERIOD
#undef DEFAULT_CLASS_LOADER
#undef DEFAULT_CLASS_LOADER_NAME
#undef DEFAULT_HIDDEN_ATTRIBUTES
#undef DEFAULT_ORB
#undef FETCH_TIMEOUT
#undef HIDDEN_ATTRIBUTES
#undef JMX_SERVER_DAEMON
#undef MAX_FETCH_NOTIFS
#undef MAX_VALUE
#undef NOTIF_ACCESS_CONTROLLER
#undef SERVER_CONNECTION_TIMEOUT

using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $NotificationAccessController = ::com::sun::jmx::remote::security::NotificationAccessController;
using $ClassLogger = ::com::sun::jmx::remote::util::ClassLogger;
using $EnvHelp$SinkOutputStream = ::com::sun::jmx::remote::util::EnvHelp$SinkOutputStream;
using $IOException = ::java::io::IOException;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $NavigableMap = ::java::util::NavigableMap;
using $NavigableSet = ::java::util::NavigableSet;
using $Set = ::java::util::Set;
using $SortedMap = ::java::util::SortedMap;
using $SortedSet = ::java::util::SortedSet;
using $StringTokenizer = ::java::util::StringTokenizer;
using $TreeMap = ::java::util::TreeMap;
using $TreeSet = ::java::util::TreeSet;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;
using $JMXConnectorFactory = ::javax::management::remote::JMXConnectorFactory;
using $JMXConnectorServerFactory = ::javax::management::remote::JMXConnectorServerFactory;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace util {

$FieldInfo _EnvHelp_FieldInfo_[] = {
	{"DEFAULT_CLASS_LOADER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EnvHelp, DEFAULT_CLASS_LOADER)},
	{"DEFAULT_CLASS_LOADER_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EnvHelp, DEFAULT_CLASS_LOADER_NAME)},
	{"BUFFER_SIZE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EnvHelp, BUFFER_SIZE_PROPERTY)},
	{"MAX_FETCH_NOTIFS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EnvHelp, MAX_FETCH_NOTIFS)},
	{"FETCH_TIMEOUT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EnvHelp, FETCH_TIMEOUT)},
	{"NOTIF_ACCESS_CONTROLLER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EnvHelp, NOTIF_ACCESS_CONTROLLER)},
	{"DEFAULT_ORB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EnvHelp, DEFAULT_ORB)},
	{"HIDDEN_ATTRIBUTES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EnvHelp, HIDDEN_ATTRIBUTES)},
	{"DEFAULT_HIDDEN_ATTRIBUTES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EnvHelp, DEFAULT_HIDDEN_ATTRIBUTES)},
	{"defaultHiddenStrings", "Ljava/util/SortedSet;", "Ljava/util/SortedSet<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(EnvHelp, defaultHiddenStrings)},
	{"defaultHiddenPrefixes", "Ljava/util/SortedSet;", "Ljava/util/SortedSet<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(EnvHelp, defaultHiddenPrefixes)},
	{"SERVER_CONNECTION_TIMEOUT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EnvHelp, SERVER_CONNECTION_TIMEOUT)},
	{"CLIENT_CONNECTION_CHECK_PERIOD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EnvHelp, CLIENT_CONNECTION_CHECK_PERIOD)},
	{"JMX_SERVER_DAEMON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EnvHelp, JMX_SERVER_DAEMON)},
	{"logger", "Lcom/sun/jmx/remote/util/ClassLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(EnvHelp, logger)},
	{}
};

$MethodInfo _EnvHelp_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EnvHelp::*)()>(&EnvHelp::init$))},
	{"checkAttributes", "(Ljava/util/Map;)V", "(Ljava/util/Map<**>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Map*)>(&EnvHelp::checkAttributes))},
	{"computeBooleanFromString", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&EnvHelp::computeBooleanFromString))},
	{"computeBooleanFromString", "(Ljava/lang/String;Z)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*,bool)>(&EnvHelp::computeBooleanFromString))},
	{"filterAttributes", "(Ljava/util/Map;)Ljava/util/Map;", "<V:Ljava/lang/Object;>(Ljava/util/Map<Ljava/lang/String;TV;>;)Ljava/util/Map<Ljava/lang/String;TV;>;", $PUBLIC | $STATIC, $method(static_cast<$Map*(*)($Map*)>(&EnvHelp::filterAttributes))},
	{"getCause", "(Ljava/lang/Throwable;)Ljava/lang/Throwable;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Throwable*(*)($Throwable*)>(&EnvHelp::getCause))},
	{"getConnectionCheckPeriod", "(Ljava/util/Map;)J", "(Ljava/util/Map<Ljava/lang/String;*>;)J", $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($Map*)>(&EnvHelp::getConnectionCheckPeriod))},
	{"getFetchTimeout", "(Ljava/util/Map;)J", "(Ljava/util/Map<Ljava/lang/String;*>;)J", $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($Map*)>(&EnvHelp::getFetchTimeout))},
	{"getIntegerAttribute", "(Ljava/util/Map;Ljava/lang/String;JJJ)J", "(Ljava/util/Map<Ljava/lang/String;*>;Ljava/lang/String;JJJ)J", $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($Map*,$String*,int64_t,int64_t,int64_t)>(&EnvHelp::getIntegerAttribute))},
	{"getMaxFetchNotifNumber", "(Ljava/util/Map;)I", "(Ljava/util/Map<Ljava/lang/String;*>;)I", $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Map*)>(&EnvHelp::getMaxFetchNotifNumber))},
	{"getNotifBufferSize", "(Ljava/util/Map;)I", "(Ljava/util/Map<Ljava/lang/String;*>;)I", $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Map*)>(&EnvHelp::getNotifBufferSize))},
	{"getNotificationAccessController", "(Ljava/util/Map;)Lcom/sun/jmx/remote/security/NotificationAccessController;", "(Ljava/util/Map<Ljava/lang/String;*>;)Lcom/sun/jmx/remote/security/NotificationAccessController;", $PUBLIC | $STATIC, $method(static_cast<$NotificationAccessController*(*)($Map*)>(&EnvHelp::getNotificationAccessController))},
	{"getServerConnectionTimeout", "(Ljava/util/Map;)J", "(Ljava/util/Map<Ljava/lang/String;*>;)J", $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($Map*)>(&EnvHelp::getServerConnectionTimeout))},
	{"hideAttributes", "(Ljava/util/SortedMap;)V", "(Ljava/util/SortedMap<Ljava/lang/String;*>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($SortedMap*)>(&EnvHelp::hideAttributes))},
	{"initCause", "(Ljava/lang/Throwable;Ljava/lang/Throwable;)Ljava/lang/Throwable;", "<T:Ljava/lang/Throwable;>(TT;Ljava/lang/Throwable;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Throwable*(*)($Throwable*,$Throwable*)>(&EnvHelp::initCause))},
	{"isServerDaemon", "(Ljava/util/Map;)Z", "(Ljava/util/Map<Ljava/lang/String;*>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($Map*)>(&EnvHelp::isServerDaemon))},
	{"mapToHashtable", "(Ljava/util/Map;)Ljava/util/Hashtable;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/Map<TK;TV;>;)Ljava/util/Hashtable<TK;TV;>;", $PUBLIC | $STATIC, $method(static_cast<$Hashtable*(*)($Map*)>(&EnvHelp::mapToHashtable))},
	{"parseHiddenAttributes", "(Ljava/lang/String;Ljava/util/SortedSet;Ljava/util/SortedSet;)V", "(Ljava/lang/String;Ljava/util/SortedSet<Ljava/lang/String;>;Ljava/util/SortedSet<Ljava/lang/String;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$SortedSet*,$SortedSet*)>(&EnvHelp::parseHiddenAttributes))},
	{"purgeUnserializable", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<*>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Collection*)>(&EnvHelp::purgeUnserializable))},
	{"resolveClientClassLoader", "(Ljava/util/Map;)Ljava/lang/ClassLoader;", "(Ljava/util/Map<Ljava/lang/String;*>;)Ljava/lang/ClassLoader;", $PUBLIC | $STATIC, $method(static_cast<$ClassLoader*(*)($Map*)>(&EnvHelp::resolveClientClassLoader))},
	{"resolveServerClassLoader", "(Ljava/util/Map;Ljavax/management/MBeanServer;)Ljava/lang/ClassLoader;", "(Ljava/util/Map<Ljava/lang/String;*>;Ljavax/management/MBeanServer;)Ljava/lang/ClassLoader;", $PUBLIC | $STATIC, $method(static_cast<$ClassLoader*(*)($Map*,$MBeanServer*)>(&EnvHelp::resolveServerClassLoader)), "javax.management.InstanceNotFoundException"},
	{}
};

$InnerClassInfo _EnvHelp_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.util.EnvHelp$SinkOutputStream", "com.sun.jmx.remote.util.EnvHelp", "SinkOutputStream", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _EnvHelp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.remote.util.EnvHelp",
	"java.lang.Object",
	nullptr,
	_EnvHelp_FieldInfo_,
	_EnvHelp_MethodInfo_,
	nullptr,
	nullptr,
	_EnvHelp_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.util.EnvHelp$SinkOutputStream"
};

$Object* allocate$EnvHelp($Class* clazz) {
	return $of($alloc(EnvHelp));
}

$String* EnvHelp::DEFAULT_CLASS_LOADER = nullptr;
$String* EnvHelp::DEFAULT_CLASS_LOADER_NAME = nullptr;
$String* EnvHelp::BUFFER_SIZE_PROPERTY = nullptr;
$String* EnvHelp::MAX_FETCH_NOTIFS = nullptr;
$String* EnvHelp::FETCH_TIMEOUT = nullptr;
$String* EnvHelp::NOTIF_ACCESS_CONTROLLER = nullptr;
$String* EnvHelp::DEFAULT_ORB = nullptr;
$String* EnvHelp::HIDDEN_ATTRIBUTES = nullptr;
$String* EnvHelp::DEFAULT_HIDDEN_ATTRIBUTES = nullptr;
$SortedSet* EnvHelp::defaultHiddenStrings = nullptr;
$SortedSet* EnvHelp::defaultHiddenPrefixes = nullptr;
$String* EnvHelp::SERVER_CONNECTION_TIMEOUT = nullptr;
$String* EnvHelp::CLIENT_CONNECTION_CHECK_PERIOD = nullptr;
$String* EnvHelp::JMX_SERVER_DAEMON = nullptr;
$ClassLogger* EnvHelp::logger = nullptr;

void EnvHelp::init$() {
}

$ClassLoader* EnvHelp::resolveServerClassLoader($Map* env, $MBeanServer* mbs) {
	$init(EnvHelp);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (env == nullptr) {
		return $($Thread::currentThread())->getContextClassLoader();
	}
	$var($Object, loader, $nc(env)->get(EnvHelp::DEFAULT_CLASS_LOADER));
	$var($Object, name, env->get(EnvHelp::DEFAULT_CLASS_LOADER_NAME));
	if (loader != nullptr && name != nullptr) {
		$var($String, msg, $str({"Only one of "_s, EnvHelp::DEFAULT_CLASS_LOADER, " or "_s, EnvHelp::DEFAULT_CLASS_LOADER_NAME, " should be specified."_s}));
		$throwNew($IllegalArgumentException, msg);
	}
	if (loader == nullptr && name == nullptr) {
		return $($Thread::currentThread())->getContextClassLoader();
	}
	if (loader != nullptr) {
		if ($instanceOf($ClassLoader, loader)) {
			return $cast($ClassLoader, loader);
		} else {
			$load($ClassLoader);
			$var($String, var$0, $$str({"ClassLoader object is not an instance of "_s, $($ClassLoader::class$->getName()), " : "_s}));
			$var($String, msg, $concat(var$0, $($of(loader)->getClass()->getName())));
			$throwNew($IllegalArgumentException, msg);
		}
	}
	$var($ObjectName, on, nullptr);
	if ($instanceOf($ObjectName, name)) {
		$assign(on, $cast($ObjectName, name));
	} else {
		$load($ObjectName);
		$var($String, var$1, $$str({"ClassLoader name is not an instance of "_s, $($ObjectName::class$->getName()), " : "_s}));
		$var($String, msg, $concat(var$1, $($nc($of(name))->getClass()->getName())));
		$throwNew($IllegalArgumentException, msg);
	}
	if (mbs == nullptr) {
		$throwNew($IllegalArgumentException, "Null MBeanServer object"_s);
	}
	return $nc(mbs)->getClassLoader(on);
}

$ClassLoader* EnvHelp::resolveClientClassLoader($Map* env) {
	$init(EnvHelp);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (env == nullptr) {
		return $($Thread::currentThread())->getContextClassLoader();
	}
	$var($Object, loader, $nc(env)->get(EnvHelp::DEFAULT_CLASS_LOADER));
	if (loader == nullptr) {
		return $($Thread::currentThread())->getContextClassLoader();
	}
	if ($instanceOf($ClassLoader, loader)) {
		return $cast($ClassLoader, loader);
	} else {
		$load($ClassLoader);
		$var($String, var$0, $$str({"ClassLoader object is not an instance of "_s, $($ClassLoader::class$->getName()), " : "_s}));
		$var($String, msg, $concat(var$0, $($nc($of(loader))->getClass()->getName())));
		$throwNew($IllegalArgumentException, msg);
	}
}

$Throwable* EnvHelp::initCause($Throwable* throwable, $Throwable* cause) {
	$init(EnvHelp);
	$nc(throwable)->initCause(cause);
	return throwable;
}

$Throwable* EnvHelp::getCause($Throwable* t) {
	$init(EnvHelp);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Throwable, ret, t);
	try {
		$var($Method, getCause, $nc($of(t))->getClass()->getMethod("getCause"_s, ($ClassArray*)nullptr));
		$assign(ret, $cast($Throwable, $nc(getCause)->invoke(t, ($ObjectArray*)nullptr)));
	} catch ($Exception& e) {
	}
	return (ret != nullptr) ? ret : t;
}

int32_t EnvHelp::getNotifBufferSize($Map* env) {
	$init(EnvHelp);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	int32_t defaultQueueSize = 1000;
	$var($String, oldP, "jmx.remote.x.buffer.size"_s);
	try {
		$var($GetPropertyAction, act, $new($GetPropertyAction, EnvHelp::BUFFER_SIZE_PROPERTY));
		$var($String, s, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(act))));
		if (s != nullptr) {
			defaultQueueSize = $Integer::parseInt(s);
		} else {
			$assign(act, $new($GetPropertyAction, oldP));
			$assign(s, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(act))));
			if (s != nullptr) {
				defaultQueueSize = $Integer::parseInt(s);
			}
		}
	} catch ($RuntimeException& e) {
		$nc(EnvHelp::logger)->warning("getNotifBufferSize"_s, $$str({"Can\'t use System property "_s, EnvHelp::BUFFER_SIZE_PROPERTY, ": "_s, e}));
		$nc(EnvHelp::logger)->debug("getNotifBufferSize"_s, static_cast<$Throwable*>(e));
	}
	int32_t queueSize = defaultQueueSize;
	try {
		if ($nc(env)->containsKey(EnvHelp::BUFFER_SIZE_PROPERTY)) {
			queueSize = (int32_t)EnvHelp::getIntegerAttribute(env, EnvHelp::BUFFER_SIZE_PROPERTY, defaultQueueSize, 0, $Integer::MAX_VALUE);
		} else {
			queueSize = (int32_t)EnvHelp::getIntegerAttribute(env, oldP, defaultQueueSize, 0, $Integer::MAX_VALUE);
		}
	} catch ($RuntimeException& e) {
		$nc(EnvHelp::logger)->warning("getNotifBufferSize"_s, $$str({"Can\'t determine queuesize (using default): "_s, e}));
		$nc(EnvHelp::logger)->debug("getNotifBufferSize"_s, static_cast<$Throwable*>(e));
	}
	return queueSize;
}

int32_t EnvHelp::getMaxFetchNotifNumber($Map* env) {
	$init(EnvHelp);
	return (int32_t)getIntegerAttribute(env, EnvHelp::MAX_FETCH_NOTIFS, 1000, 1, $Integer::MAX_VALUE);
}

int64_t EnvHelp::getFetchTimeout($Map* env) {
	$init(EnvHelp);
	return getIntegerAttribute(env, EnvHelp::FETCH_TIMEOUT, 60000, 0, $Long::MAX_VALUE);
}

$NotificationAccessController* EnvHelp::getNotificationAccessController($Map* env) {
	$init(EnvHelp);
	return (env == nullptr) ? ($NotificationAccessController*)nullptr : $cast($NotificationAccessController, $nc(env)->get(EnvHelp::NOTIF_ACCESS_CONTROLLER));
}

int64_t EnvHelp::getIntegerAttribute($Map* env, $String* name, int64_t defaultValue, int64_t minValue, int64_t maxValue) {
	$init(EnvHelp);
	$useLocalCurrentObjectStackCache();
	$var($Object, o, nullptr);
	if (env == nullptr || ($assign(o, $nc(env)->get(name))) == nullptr) {
		return defaultValue;
	}
	int64_t result = 0;
	if ($instanceOf($Number, o)) {
		result = $nc(($cast($Number, o)))->longValue();
	} else if ($instanceOf($String, o)) {
		result = $Long::parseLong($cast($String, o));
	} else {
		$var($String, msg, $str({"Attribute "_s, name, " value must be Integer or String: "_s, o}));
		$throwNew($IllegalArgumentException, msg);
	}
	if (result < minValue) {
		$var($String, msg, $str({"Attribute "_s, name, " value must be at least "_s, $$str(minValue), ": "_s, $$str(result)}));
		$throwNew($IllegalArgumentException, msg);
	}
	if (result > maxValue) {
		$var($String, msg, $str({"Attribute "_s, name, " value must be at most "_s, $$str(maxValue), ": "_s, $$str(result)}));
		$throwNew($IllegalArgumentException, msg);
	}
	return result;
}

void EnvHelp::checkAttributes($Map* attributes) {
	$init(EnvHelp);
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc($($nc(attributes)->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, key, i$->next());
			{
				if (!($instanceOf($String, key))) {
					$var($String, msg, $str({"Attributes contain key that is not a string: "_s, key}));
					$throwNew($IllegalArgumentException, msg);
				}
			}
		}
	}
}

$Map* EnvHelp::filterAttributes($Map* attributes) {
	$init(EnvHelp);
	$useLocalCurrentObjectStackCache();
	if ($nc(EnvHelp::logger)->traceOn()) {
		$nc(EnvHelp::logger)->trace("filterAttributes"_s, "starts"_s);
	}
	$var($SortedMap, map, $new($TreeMap, attributes));
	purgeUnserializable($(map->values()));
	hideAttributes(map);
	return map;
}

void EnvHelp::purgeUnserializable($Collection* objects) {
	$init(EnvHelp);
	$useLocalCurrentObjectStackCache();
	$nc(EnvHelp::logger)->trace("purgeUnserializable"_s, "starts"_s);
	$var($ObjectOutputStream, oos, nullptr);
	int32_t i = 0;
	{
		$var($Iterator, it, $nc(objects)->iterator());
		for (; $nc(it)->hasNext(); ++i) {
			$var($Object, v, it->next());
			if (v == nullptr || $instanceOf($String, v)) {
				if ($nc(EnvHelp::logger)->traceOn()) {
					$nc(EnvHelp::logger)->trace("purgeUnserializable"_s, $$str({"Value trivially serializable: "_s, v}));
				}
				continue;
			}
			try {
				if (oos == nullptr) {
					$assign(oos, $new($ObjectOutputStream, $$new($EnvHelp$SinkOutputStream)));
				}
				$nc(oos)->writeObject(v);
				if ($nc(EnvHelp::logger)->traceOn()) {
					$nc(EnvHelp::logger)->trace("purgeUnserializable"_s, $$str({"Value serializable: "_s, v}));
				}
			} catch ($IOException& e) {
				if ($nc(EnvHelp::logger)->traceOn()) {
					$nc(EnvHelp::logger)->trace("purgeUnserializable"_s, $$str({"Value not serializable: "_s, v, ": "_s, e}));
				}
				it->remove();
				$assign(oos, nullptr);
			}
		}
	}
}

void EnvHelp::hideAttributes($SortedMap* map) {
	$init(EnvHelp);
	$useLocalCurrentObjectStackCache();
	if ($nc(map)->isEmpty()) {
		return;
	}
	$var($SortedSet, hiddenStrings, nullptr);
	$var($SortedSet, hiddenPrefixes, nullptr);
	$var($String, hide, $cast($String, $nc(map)->get(EnvHelp::HIDDEN_ATTRIBUTES)));
	if (hide != nullptr) {
		if (hide->startsWith("="_s)) {
			$assign(hide, hide->substring(1));
		} else {
			$plusAssign(hide, $$str({" "_s, EnvHelp::DEFAULT_HIDDEN_ATTRIBUTES}));
		}
		$assign(hiddenStrings, $new($TreeSet));
		$assign(hiddenPrefixes, $new($TreeSet));
		parseHiddenAttributes(hide, hiddenStrings, hiddenPrefixes);
	} else {
		$assign(hide, EnvHelp::DEFAULT_HIDDEN_ATTRIBUTES);
		$synchronized(EnvHelp::defaultHiddenStrings) {
			if ($nc(EnvHelp::defaultHiddenStrings)->isEmpty()) {
				parseHiddenAttributes(hide, EnvHelp::defaultHiddenStrings, EnvHelp::defaultHiddenPrefixes);
			}
			$assign(hiddenStrings, EnvHelp::defaultHiddenStrings);
			$assign(hiddenPrefixes, EnvHelp::defaultHiddenPrefixes);
		}
	}
	$var($String, sentinelKey, $str({$cast($String, $(map->lastKey())), "X"_s}));
	$var($Iterator, keyIterator, $nc($(map->keySet()))->iterator());
	$var($Iterator, stringIterator, $nc(hiddenStrings)->iterator());
	$var($Iterator, prefixIterator, $nc(hiddenPrefixes)->iterator());
	$var($String, nextString, nullptr);
	if ($nc(stringIterator)->hasNext()) {
		$assign(nextString, $cast($String, stringIterator->next()));
	} else {
		$assign(nextString, sentinelKey);
	}
	$var($String, nextPrefix, nullptr);
	if ($nc(prefixIterator)->hasNext()) {
		$assign(nextPrefix, $cast($String, prefixIterator->next()));
	} else {
		$assign(nextPrefix, sentinelKey);
	}
	bool keys$continue = false;
	while ($nc(keyIterator)->hasNext()) {
		$var($String, key, $cast($String, keyIterator->next()));
		int32_t cmp = +1;
		while ((cmp = $nc(nextString)->compareTo(key)) < 0) {
			if ($nc(stringIterator)->hasNext()) {
				$assign(nextString, $cast($String, stringIterator->next()));
			} else {
				$assign(nextString, sentinelKey);
			}
		}
		if (cmp == 0) {
			keyIterator->remove();
			continue;
		}
		while ($nc(nextPrefix)->compareTo(key) <= 0) {
			if ($nc(key)->startsWith(nextPrefix)) {
				keyIterator->remove();
				keys$continue = true;
				break;
			}
			if ($nc(prefixIterator)->hasNext()) {
				$assign(nextPrefix, $cast($String, prefixIterator->next()));
			} else {
				$assign(nextPrefix, sentinelKey);
			}
		}
		if (keys$continue) {
			keys$continue = false;
			continue;
		}
	}
}

void EnvHelp::parseHiddenAttributes($String* hide, $SortedSet* hiddenStrings, $SortedSet* hiddenPrefixes) {
	$init(EnvHelp);
	$useLocalCurrentObjectStackCache();
	$var($StringTokenizer, tok, $new($StringTokenizer, hide));
	while (tok->hasMoreTokens()) {
		$var($String, s, tok->nextToken());
		if ($nc(s)->endsWith("*"_s)) {
			$nc(hiddenPrefixes)->add($(s->substring(0, s->length() - 1)));
		} else {
			$nc(hiddenStrings)->add(s);
		}
	}
}

int64_t EnvHelp::getServerConnectionTimeout($Map* env) {
	$init(EnvHelp);
	return getIntegerAttribute(env, EnvHelp::SERVER_CONNECTION_TIMEOUT, 120000, 0, $Long::MAX_VALUE);
}

int64_t EnvHelp::getConnectionCheckPeriod($Map* env) {
	$init(EnvHelp);
	return getIntegerAttribute(env, EnvHelp::CLIENT_CONNECTION_CHECK_PERIOD, 60000, 0, $Long::MAX_VALUE);
}

bool EnvHelp::computeBooleanFromString($String* stringBoolean) {
	$init(EnvHelp);
	return computeBooleanFromString(stringBoolean, false);
}

bool EnvHelp::computeBooleanFromString($String* stringBoolean, bool defaultValue) {
	$init(EnvHelp);
	if (stringBoolean == nullptr) {
		return defaultValue;
	} else if ($nc(stringBoolean)->equalsIgnoreCase("true"_s)) {
		return true;
	} else if (stringBoolean->equalsIgnoreCase("false"_s)) {
		return false;
	} else {
		$throwNew($IllegalArgumentException, $$str({"Property value must be \"true\" or \"false\" instead of \""_s, stringBoolean, "\""_s}));
	}
}

$Hashtable* EnvHelp::mapToHashtable($Map* map) {
	$init(EnvHelp);
	$useLocalCurrentObjectStackCache();
	$var($HashMap, m, $new($HashMap, map));
	if (m->containsKey(nullptr)) {
		m->remove(nullptr);
	}
	{
		$var($Iterator, i, $nc($(m->values()))->iterator());
		for (; $nc(i)->hasNext();) {
			if (i->next() == nullptr) {
				i->remove();
			}
		}
	}
	return $new($Hashtable, static_cast<$Map*>(m));
}

bool EnvHelp::isServerDaemon($Map* env) {
	$init(EnvHelp);
	return (env != nullptr) && ("true"_s->equalsIgnoreCase($cast($String, $(env->get(EnvHelp::JMX_SERVER_DAEMON)))));
}

void clinit$EnvHelp($Class* class$) {
	$init($JMXConnectorFactory);
	$assignStatic(EnvHelp::DEFAULT_CLASS_LOADER, $JMXConnectorFactory::DEFAULT_CLASS_LOADER);
	$init($JMXConnectorServerFactory);
	$assignStatic(EnvHelp::DEFAULT_CLASS_LOADER_NAME, $JMXConnectorServerFactory::DEFAULT_CLASS_LOADER_NAME);
	$assignStatic(EnvHelp::BUFFER_SIZE_PROPERTY, "jmx.remote.x.notification.buffer.size"_s);
	$assignStatic(EnvHelp::MAX_FETCH_NOTIFS, "jmx.remote.x.notification.fetch.max"_s);
	$assignStatic(EnvHelp::FETCH_TIMEOUT, "jmx.remote.x.notification.fetch.timeout"_s);
	$assignStatic(EnvHelp::NOTIF_ACCESS_CONTROLLER, "com.sun.jmx.remote.notification.access.controller"_s);
	$assignStatic(EnvHelp::DEFAULT_ORB, "java.naming.corba.orb"_s);
	$assignStatic(EnvHelp::HIDDEN_ATTRIBUTES, "jmx.remote.x.hidden.attributes"_s);
	$assignStatic(EnvHelp::DEFAULT_HIDDEN_ATTRIBUTES, "java.naming.security.* jmx.remote.authenticator jmx.remote.context jmx.remote.default.class.loader jmx.remote.message.connection.server jmx.remote.object.wrapping jmx.remote.rmi.client.socket.factory jmx.remote.rmi.server.socket.factory jmx.remote.sasl.callback.handler jmx.remote.tls.socket.factory jmx.remote.x.access.file jmx.remote.x.password.file "_s);
	$assignStatic(EnvHelp::SERVER_CONNECTION_TIMEOUT, "jmx.remote.x.server.connection.timeout"_s);
	$assignStatic(EnvHelp::CLIENT_CONNECTION_CHECK_PERIOD, "jmx.remote.x.client.connection.check.period"_s);
	$assignStatic(EnvHelp::JMX_SERVER_DAEMON, "jmx.remote.x.daemon"_s);
	$assignStatic(EnvHelp::defaultHiddenStrings, $new($TreeSet));
	$assignStatic(EnvHelp::defaultHiddenPrefixes, $new($TreeSet));
	$assignStatic(EnvHelp::logger, $new($ClassLogger, "javax.management.remote.misc"_s, "EnvHelp"_s));
}

EnvHelp::EnvHelp() {
}

$Class* EnvHelp::load$($String* name, bool initialize) {
	$loadClass(EnvHelp, name, initialize, &_EnvHelp_ClassInfo_, clinit$EnvHelp, allocate$EnvHelp);
	return class$;
}

$Class* EnvHelp::class$ = nullptr;

				} // util
			} // remote
		} // jmx
	} // sun
} // com