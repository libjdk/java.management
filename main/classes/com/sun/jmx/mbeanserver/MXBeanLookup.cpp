#include <com/sun/jmx/mbeanserver/MXBeanLookup.h>

#include <com/sun/jmx/mbeanserver/GetPropertyAction.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <com/sun/jmx/mbeanserver/WeakIdentityHashMap.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/InvocationHandler.h>
#include <java/lang/reflect/Proxy.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Map.h>
#include <javax/management/InstanceAlreadyExistsException.h>
#include <javax/management/JMX.h>
#include <javax/management/MBeanServerConnection.h>
#include <javax/management/MBeanServerInvocationHandler.h>
#include <javax/management/ObjectName.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <jcpp.h>

using $GetPropertyAction = ::com::sun::jmx::mbeanserver::GetPropertyAction;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $WeakIdentityHashMap = ::com::sun::jmx::mbeanserver::WeakIdentityHashMap;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $InvocationHandler = ::java::lang::reflect::InvocationHandler;
using $Proxy = ::java::lang::reflect::Proxy;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Map = ::java::util::Map;
using $InstanceAlreadyExistsException = ::javax::management::InstanceAlreadyExistsException;
using $JMX = ::javax::management::JMX;
using $MBeanServerConnection = ::javax::management::MBeanServerConnection;
using $MBeanServerInvocationHandler = ::javax::management::MBeanServerInvocationHandler;
using $ObjectName = ::javax::management::ObjectName;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _MXBeanLookup_FieldInfo_[] = {
	{"currentLookup", "Ljava/lang/ThreadLocal;", "Ljava/lang/ThreadLocal<Lcom/sun/jmx/mbeanserver/MXBeanLookup;>;", $PRIVATE | $STATIC | $FINAL, $staticField(MXBeanLookup, currentLookup)},
	{"mbsc", "Ljavax/management/MBeanServerConnection;", nullptr, $PRIVATE | $FINAL, $field(MXBeanLookup, mbsc)},
	{"mxbeanToObjectName", "Lcom/sun/jmx/mbeanserver/WeakIdentityHashMap;", "Lcom/sun/jmx/mbeanserver/WeakIdentityHashMap<Ljava/lang/Object;Ljavax/management/ObjectName;>;", $PRIVATE | $FINAL, $field(MXBeanLookup, mxbeanToObjectName$)},
	{"objectNameToProxy", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/management/ObjectName;Ljava/lang/ref/WeakReference<Ljava/lang/Object;>;>;", $PRIVATE | $FINAL, $field(MXBeanLookup, objectNameToProxy)},
	{"mbscToLookup", "Lcom/sun/jmx/mbeanserver/WeakIdentityHashMap;", "Lcom/sun/jmx/mbeanserver/WeakIdentityHashMap<Ljavax/management/MBeanServerConnection;Ljava/lang/ref/WeakReference<Lcom/sun/jmx/mbeanserver/MXBeanLookup;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(MXBeanLookup, mbscToLookup)},
	{}
};

$MethodInfo _MXBeanLookup_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/MBeanServerConnection;)V", nullptr, $PRIVATE, $method(static_cast<void(MXBeanLookup::*)($MBeanServerConnection*)>(&MXBeanLookup::init$))},
	{"addReference", "(Ljavax/management/ObjectName;Ljava/lang/Object;)V", nullptr, $SYNCHRONIZED, nullptr, "javax.management.InstanceAlreadyExistsException"},
	{"getLookup", "()Lcom/sun/jmx/mbeanserver/MXBeanLookup;", nullptr, $STATIC, $method(static_cast<MXBeanLookup*(*)()>(&MXBeanLookup::getLookup))},
	{"lookupFor", "(Ljavax/management/MBeanServerConnection;)Lcom/sun/jmx/mbeanserver/MXBeanLookup;", nullptr, $STATIC, $method(static_cast<MXBeanLookup*(*)($MBeanServerConnection*)>(&MXBeanLookup::lookupFor))},
	{"mxbeanToObjectName", "(Ljava/lang/Object;)Ljavax/management/ObjectName;", nullptr, $SYNCHRONIZED, nullptr, "javax.management.openmbean.OpenDataException"},
	{"objectNameToMXBean", "(Ljavax/management/ObjectName;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljavax/management/ObjectName;Ljava/lang/Class<TT;>;)TT;", $SYNCHRONIZED},
	{"removeReference", "(Ljavax/management/ObjectName;Ljava/lang/Object;)Z", nullptr, $SYNCHRONIZED},
	{"setLookup", "(Lcom/sun/jmx/mbeanserver/MXBeanLookup;)V", nullptr, $STATIC, $method(static_cast<void(*)(MXBeanLookup*)>(&MXBeanLookup::setLookup))},
	{}
};

$ClassInfo _MXBeanLookup_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.MXBeanLookup",
	"java.lang.Object",
	nullptr,
	_MXBeanLookup_FieldInfo_,
	_MXBeanLookup_MethodInfo_
};

$Object* allocate$MXBeanLookup($Class* clazz) {
	return $of($alloc(MXBeanLookup));
}

$ThreadLocal* MXBeanLookup::currentLookup = nullptr;
$WeakIdentityHashMap* MXBeanLookup::mbscToLookup = nullptr;

void MXBeanLookup::init$($MBeanServerConnection* mbsc) {
	$set(this, mxbeanToObjectName$, $WeakIdentityHashMap::make());
	$set(this, objectNameToProxy, $Util::newMap());
	$set(this, mbsc, mbsc);
}

MXBeanLookup* MXBeanLookup::lookupFor($MBeanServerConnection* mbsc) {
	$init(MXBeanLookup);
	$useLocalCurrentObjectStackCache();
	$synchronized(MXBeanLookup::mbscToLookup) {
		$var($WeakReference, weakLookup, $cast($WeakReference, $nc(MXBeanLookup::mbscToLookup)->get(mbsc)));
		$var(MXBeanLookup, lookup, (weakLookup == nullptr) ? (MXBeanLookup*)nullptr : $cast(MXBeanLookup, $nc(weakLookup)->get()));
		if (lookup == nullptr) {
			$assign(lookup, $new(MXBeanLookup, mbsc));
			$nc(MXBeanLookup::mbscToLookup)->put(mbsc, $$new($WeakReference, lookup));
		}
		return lookup;
	}
}

$Object* MXBeanLookup::objectNameToMXBean($ObjectName* name, $Class* type) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($WeakReference, wr, $cast($WeakReference, $nc(this->objectNameToProxy)->get(name)));
		if (wr != nullptr) {
			$var($Object, proxy, wr->get());
			if ($nc(type)->isInstance(proxy)) {
				return $of(type->cast(proxy));
			}
		}
		$var($Object, proxy, $JMX::newMXBeanProxy(this->mbsc, name, type));
		$nc(this->objectNameToProxy)->put(name, $$new($WeakReference, proxy));
		return $of(proxy);
	}
}

$ObjectName* MXBeanLookup::mxbeanToObjectName(Object$* mxbean) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$beforeCallerSensitive();
		$var($String, wrong, nullptr);
		if ($instanceOf($Proxy, mxbean)) {
			$var($InvocationHandler, ih, $Proxy::getInvocationHandler(mxbean));
			if ($instanceOf($MBeanServerInvocationHandler, ih)) {
				$var($MBeanServerInvocationHandler, mbsih, $cast($MBeanServerInvocationHandler, ih));
				if ($nc($of($($nc(mbsih)->getMBeanServerConnection())))->equals(this->mbsc)) {
					return mbsih->getObjectName();
				} else {
					$assign(wrong, "proxy for a different MBeanServer"_s);
				}
			} else {
				$assign(wrong, "not a JMX proxy"_s);
			}
		} else {
			$var($ObjectName, name, $cast($ObjectName, $nc(this->mxbeanToObjectName$)->get(mxbean)));
			if (name != nullptr) {
				return name;
			}
			$assign(wrong, "not an MXBean registered in this MBeanServer"_s);
		}
		$var($String, s, (mxbean == nullptr) ? "null"_s : $str({"object of type "_s, $($nc($of(mxbean))->getClass()->getName())}));
		$throwNew($OpenDataException, $$str({"Could not convert "_s, s, " to an ObjectName: "_s, wrong}));
	}
}

void MXBeanLookup::addReference($ObjectName* name, Object$* mxbean) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$beforeCallerSensitive();
		$var($ObjectName, existing, $cast($ObjectName, $nc(this->mxbeanToObjectName$)->get(mxbean)));
		if (existing != nullptr) {
			$var($String, multiname, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "jmx.mxbean.multiname"_s)))));
			if (!"true"_s->equalsIgnoreCase(multiname)) {
				$throwNew($InstanceAlreadyExistsException, $$str({"MXBean already registered with name "_s, existing}));
			}
		}
		$nc(this->mxbeanToObjectName$)->put(mxbean, name);
	}
}

bool MXBeanLookup::removeReference($ObjectName* name, Object$* mxbean) {
	$synchronized(this) {
		if ($nc(name)->equals($($nc(this->mxbeanToObjectName$)->get(mxbean)))) {
			$nc(this->mxbeanToObjectName$)->remove(mxbean);
			return true;
		} else {
			return false;
		}
	}
}

MXBeanLookup* MXBeanLookup::getLookup() {
	$init(MXBeanLookup);
	return $cast(MXBeanLookup, $nc(MXBeanLookup::currentLookup)->get());
}

void MXBeanLookup::setLookup(MXBeanLookup* lookup) {
	$init(MXBeanLookup);
	$nc(MXBeanLookup::currentLookup)->set(lookup);
}

void clinit$MXBeanLookup($Class* class$) {
	$assignStatic(MXBeanLookup::currentLookup, $new($ThreadLocal));
	$assignStatic(MXBeanLookup::mbscToLookup, $WeakIdentityHashMap::make());
}

MXBeanLookup::MXBeanLookup() {
}

$Class* MXBeanLookup::load$($String* name, bool initialize) {
	$loadClass(MXBeanLookup, name, initialize, &_MXBeanLookup_ClassInfo_, clinit$MXBeanLookup, allocate$MXBeanLookup);
	return class$;
}

$Class* MXBeanLookup::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com