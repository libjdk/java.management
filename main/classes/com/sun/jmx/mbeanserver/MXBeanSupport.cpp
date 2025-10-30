#include <com/sun/jmx/mbeanserver/MXBeanSupport.h>

#include <com/sun/jmx/mbeanserver/MBeanIntrospector.h>
#include <com/sun/jmx/mbeanserver/MBeanSupport.h>
#include <com/sun/jmx/mbeanserver/MXBeanIntrospector.h>
#include <com/sun/jmx/mbeanserver/MXBeanLookup.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <javax/management/JMX.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/MBeanServerConnection.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $MBeanIntrospector = ::com::sun::jmx::mbeanserver::MBeanIntrospector;
using $MBeanSupport = ::com::sun::jmx::mbeanserver::MBeanSupport;
using $MXBeanIntrospector = ::com::sun::jmx::mbeanserver::MXBeanIntrospector;
using $MXBeanLookup = ::com::sun::jmx::mbeanserver::MXBeanLookup;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $JMX = ::javax::management::JMX;
using $MBeanServer = ::javax::management::MBeanServer;
using $MBeanServerConnection = ::javax::management::MBeanServerConnection;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _MXBeanSupport_FieldInfo_[] = {
	{"lock", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(MXBeanSupport, lock)},
	{"mxbeanLookup", "Lcom/sun/jmx/mbeanserver/MXBeanLookup;", nullptr, $PRIVATE, $field(MXBeanSupport, mxbeanLookup)},
	{"objectName", "Ljavax/management/ObjectName;", nullptr, $PRIVATE, $field(MXBeanSupport, objectName)},
	{}
};

$MethodInfo _MXBeanSupport_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/Class;)V", "<T:Ljava/lang/Object;>(TT;Ljava/lang/Class<TT;>;)V", $PUBLIC, $method(static_cast<void(MXBeanSupport::*)(Object$*,$Class*)>(&MXBeanSupport::init$)), "javax.management.NotCompliantMBeanException"},
	{"findMXBeanInterface", "(Ljava/lang/Class;)Ljava/lang/Class;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)Ljava/lang/Class<-TT;>;", $STATIC, $method(static_cast<$Class*(*)($Class*)>(&MXBeanSupport::findMXBeanInterface))},
	{"getCookie", "()Ljava/lang/Object;", nullptr, 0},
	{"getMBeanIntrospector", "()Lcom/sun/jmx/mbeanserver/MBeanIntrospector;", "()Lcom/sun/jmx/mbeanserver/MBeanIntrospector<Lcom/sun/jmx/mbeanserver/ConvertingMethod;>;", 0},
	{"register", "(Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceAlreadyExistsException"},
	{"transitiveInterfaces", "(Ljava/lang/Class;)Ljava/util/Set;", "(Ljava/lang/Class<*>;)Ljava/util/Set<Ljava/lang/Class<*>;>;", $PRIVATE | $STATIC, $method(static_cast<$Set*(*)($Class*)>(&MXBeanSupport::transitiveInterfaces))},
	{"transitiveInterfaces", "(Ljava/lang/Class;Ljava/util/Set;)V", "(Ljava/lang/Class<*>;Ljava/util/Set<Ljava/lang/Class<*>;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Class*,$Set*)>(&MXBeanSupport::transitiveInterfaces))},
	{"unregister", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MXBeanSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.MXBeanSupport",
	"com.sun.jmx.mbeanserver.MBeanSupport",
	nullptr,
	_MXBeanSupport_FieldInfo_,
	_MXBeanSupport_MethodInfo_,
	"Lcom/sun/jmx/mbeanserver/MBeanSupport<Lcom/sun/jmx/mbeanserver/ConvertingMethod;>;"
};

$Object* allocate$MXBeanSupport($Class* clazz) {
	return $of($alloc(MXBeanSupport));
}

void MXBeanSupport::init$(Object$* resource, $Class* mxbeanInterface) {
	$MBeanSupport::init$(resource, mxbeanInterface);
	$set(this, lock, $new($Object));
}

$MBeanIntrospector* MXBeanSupport::getMBeanIntrospector() {
	return $MXBeanIntrospector::getInstance();
}

$Object* MXBeanSupport::getCookie() {
	return $of(this->mxbeanLookup);
}

$Class* MXBeanSupport::findMXBeanInterface($Class* resourceClass) {
	$init(MXBeanSupport);
	$useLocalCurrentObjectStackCache();
	if (resourceClass == nullptr) {
		$throwNew($IllegalArgumentException, "Null resource class"_s);
	}
	$var($Set, intfs, transitiveInterfaces(resourceClass));
	$var($Set, candidates, $Util::newSet());
	{
		$var($Iterator, i$, $nc(intfs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$Class* intf = $cast($Class, i$->next());
			{
				if ($JMX::isMXBeanInterface(intf)) {
					$nc(candidates)->add(intf);
				}
			}
		}
	}
	bool reduce$continue = false;
	while ($nc(candidates)->size() > 1) {
		{
			$var($Iterator, i$, candidates->iterator());
			for (; $nc(i$)->hasNext();) {
				$Class* intf = $cast($Class, i$->next());
				{
					{
						$var($Iterator, it, candidates->iterator());
						for (; $nc(it)->hasNext();) {
							$Class* intf2 = $cast($Class, it->next());
							if (intf != intf2 && $nc(intf2)->isAssignableFrom(intf)) {
								it->remove();
								reduce$continue = true;
								break;
							}
						}
						if (reduce$continue) {
							break;
						}
					}
				}
			}
			if (reduce$continue) {
				reduce$continue = false;
				continue;
			}
		}
		$var($String, msg, $str({"Class "_s, $($nc(resourceClass)->getName()), " implements more than one MXBean interface: "_s, candidates}));
		$throwNew($IllegalArgumentException, msg);
	}
	if ($nc($($nc(candidates)->iterator()))->hasNext()) {
		return $cast($Class, $Util::cast($($nc($(candidates->iterator()))->next())));
	} else {
		$var($String, msg, $str({"Class "_s, $($nc(resourceClass)->getName()), " is not a JMX compliant MXBean"_s}));
		$throwNew($IllegalArgumentException, msg);
	}
}

$Set* MXBeanSupport::transitiveInterfaces($Class* c) {
	$init(MXBeanSupport);
	$var($Set, set, $Util::newSet());
	transitiveInterfaces(c, set);
	return set;
}

void MXBeanSupport::transitiveInterfaces($Class* c, $Set* intfs) {
	$init(MXBeanSupport);
	if (c == nullptr) {
		return;
	}
	if ($nc(c)->isInterface()) {
		$nc(intfs)->add(c);
	}
	transitiveInterfaces($nc(c)->getSuperclass(), intfs);
	{
		$var($ClassArray, arr$, $nc(c)->getInterfaces());
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$Class* sup = arr$->get(i$);
			transitiveInterfaces(sup, intfs);
		}
	}
}

void MXBeanSupport::register$($MBeanServer* server, $ObjectName* name) {
	if (name == nullptr) {
		$throwNew($IllegalArgumentException, "Null object name"_s);
	}
	$synchronized(this->lock) {
		$set(this, mxbeanLookup, $MXBeanLookup::lookupFor(server));
		$nc(this->mxbeanLookup)->addReference(name, $(getResource()));
		$set(this, objectName, name);
	}
}

void MXBeanSupport::unregister() {
	$synchronized(this->lock) {
		if (this->mxbeanLookup != nullptr) {
			if ($nc(this->mxbeanLookup)->removeReference(this->objectName, $(getResource()))) {
				$set(this, objectName, nullptr);
			}
		}
	}
}

MXBeanSupport::MXBeanSupport() {
}

$Class* MXBeanSupport::load$($String* name, bool initialize) {
	$loadClass(MXBeanSupport, name, initialize, &_MXBeanSupport_ClassInfo_, allocate$MXBeanSupport);
	return class$;
}

$Class* MXBeanSupport::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com