#include <com/sun/jmx/mbeanserver/Repository.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <com/sun/jmx/defaults/ServiceName.h>
#include <com/sun/jmx/mbeanserver/NamedObject.h>
#include <com/sun/jmx/mbeanserver/Repository$ObjectNamePattern.h>
#include <com/sun/jmx/mbeanserver/Repository$RegistrationContext.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock$ReadLock.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock$WriteLock.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock.h>
#include <javax/management/DynamicMBean.h>
#include <javax/management/InstanceAlreadyExistsException.h>
#include <javax/management/InstanceNotFoundException.h>
#include <javax/management/ObjectName.h>
#include <javax/management/QueryExp.h>
#include <javax/management/RuntimeOperationsException.h>
#include <jcpp.h>

#undef DEBUG
#undef DOMAIN
#undef MBEANSERVER_LOGGER
#undef TRACE
#undef WILDCARD

using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $ServiceName = ::com::sun::jmx::defaults::ServiceName;
using $NamedObject = ::com::sun::jmx::mbeanserver::NamedObject;
using $Repository$ObjectNamePattern = ::com::sun::jmx::mbeanserver::Repository$ObjectNamePattern;
using $Repository$RegistrationContext = ::com::sun::jmx::mbeanserver::Repository$RegistrationContext;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $ReentrantReadWriteLock = ::java::util::concurrent::locks::ReentrantReadWriteLock;
using $ReentrantReadWriteLock$ReadLock = ::java::util::concurrent::locks::ReentrantReadWriteLock$ReadLock;
using $ReentrantReadWriteLock$WriteLock = ::java::util::concurrent::locks::ReentrantReadWriteLock$WriteLock;
using $DynamicMBean = ::javax::management::DynamicMBean;
using $InstanceAlreadyExistsException = ::javax::management::InstanceAlreadyExistsException;
using $InstanceNotFoundException = ::javax::management::InstanceNotFoundException;
using $ObjectName = ::javax::management::ObjectName;
using $QueryExp = ::javax::management::QueryExp;
using $RuntimeOperationsException = ::javax::management::RuntimeOperationsException;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _Repository_FieldInfo_[] = {
	{"domainTb", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Lcom/sun/jmx/mbeanserver/NamedObject;>;>;", $PRIVATE | $FINAL, $field(Repository, domainTb)},
	{"nbElements", "I", nullptr, $PRIVATE | $VOLATILE, $field(Repository, nbElements)},
	{"domain", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Repository, domain)},
	{"lock", "Ljava/util/concurrent/locks/ReentrantReadWriteLock;", nullptr, $PRIVATE | $FINAL, $field(Repository, lock)},
	{}
};

$MethodInfo _Repository_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Repository::*)($String*)>(&Repository::init$))},
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Repository::*)($String*,bool)>(&Repository::init$))},
	{"addAllMatching", "(Ljava/util/Map;Ljava/util/Set;Lcom/sun/jmx/mbeanserver/Repository$ObjectNamePattern;)V", "(Ljava/util/Map<Ljava/lang/String;Lcom/sun/jmx/mbeanserver/NamedObject;>;Ljava/util/Set<Lcom/sun/jmx/mbeanserver/NamedObject;>;Lcom/sun/jmx/mbeanserver/Repository$ObjectNamePattern;)V", $PRIVATE, $method(static_cast<void(Repository::*)($Map*,$Set*,$Repository$ObjectNamePattern*)>(&Repository::addAllMatching))},
	{"addMBean", "(Ljavax/management/DynamicMBean;Ljavax/management/ObjectName;Lcom/sun/jmx/mbeanserver/Repository$RegistrationContext;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceAlreadyExistsException"},
	{"addMoiToTb", "(Ljavax/management/DynamicMBean;Ljavax/management/ObjectName;Ljava/lang/String;Ljava/util/Map;Lcom/sun/jmx/mbeanserver/Repository$RegistrationContext;)V", "(Ljavax/management/DynamicMBean;Ljavax/management/ObjectName;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Lcom/sun/jmx/mbeanserver/NamedObject;>;Lcom/sun/jmx/mbeanserver/Repository$RegistrationContext;)V", $PRIVATE, $method(static_cast<void(Repository::*)($DynamicMBean*,$ObjectName*,$String*,$Map*,$Repository$RegistrationContext*)>(&Repository::addMoiToTb))},
	{"addNewDomMoi", "(Ljavax/management/DynamicMBean;Ljava/lang/String;Ljavax/management/ObjectName;Lcom/sun/jmx/mbeanserver/Repository$RegistrationContext;)V", nullptr, $PRIVATE, $method(static_cast<void(Repository::*)($DynamicMBean*,$String*,$ObjectName*,$Repository$RegistrationContext*)>(&Repository::addNewDomMoi))},
	{"contains", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC},
	{"getCount", "()Ljava/lang/Integer;", nullptr, $PUBLIC},
	{"getDefaultDomain", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDomains", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"query", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set;", "(Ljavax/management/ObjectName;Ljavax/management/QueryExp;)Ljava/util/Set<Lcom/sun/jmx/mbeanserver/NamedObject;>;", $PUBLIC},
	{"registering", "(Lcom/sun/jmx/mbeanserver/Repository$RegistrationContext;)V", nullptr, $PRIVATE, $method(static_cast<void(Repository::*)($Repository$RegistrationContext*)>(&Repository::registering))},
	{"remove", "(Ljavax/management/ObjectName;Lcom/sun/jmx/mbeanserver/Repository$RegistrationContext;)V", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException"},
	{"retrieve", "(Ljavax/management/ObjectName;)Ljavax/management/DynamicMBean;", nullptr, $PUBLIC},
	{"retrieveNamedObject", "(Ljavax/management/ObjectName;)Lcom/sun/jmx/mbeanserver/NamedObject;", nullptr, $PRIVATE, $method(static_cast<$NamedObject*(Repository::*)($ObjectName*)>(&Repository::retrieveNamedObject))},
	{"unregistering", "(Lcom/sun/jmx/mbeanserver/Repository$RegistrationContext;Ljavax/management/ObjectName;)V", nullptr, $PRIVATE, $method(static_cast<void(Repository::*)($Repository$RegistrationContext*,$ObjectName*)>(&Repository::unregistering))},
	{}
};

$InnerClassInfo _Repository_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.Repository$ObjectNamePattern", "com.sun.jmx.mbeanserver.Repository", "ObjectNamePattern", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.jmx.mbeanserver.Repository$RegistrationContext", "com.sun.jmx.mbeanserver.Repository", "RegistrationContext", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Repository_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.Repository",
	"java.lang.Object",
	nullptr,
	_Repository_FieldInfo_,
	_Repository_MethodInfo_,
	nullptr,
	nullptr,
	_Repository_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.Repository$ObjectNamePattern,com.sun.jmx.mbeanserver.Repository$RegistrationContext"
};

$Object* allocate$Repository($Class* clazz) {
	return $of($alloc(Repository));
}

void Repository::addAllMatching($Map* moiTb, $Set* result, $Repository$ObjectNamePattern* pattern) {
	$useLocalCurrentObjectStackCache();
	$synchronized(moiTb) {
		{
			$var($Iterator, i$, $nc($($nc(moiTb)->values()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($NamedObject, no, $cast($NamedObject, i$->next()));
				{
					$var($ObjectName, on, $nc(no)->getName());
					if ($nc(pattern)->matchKeys(on)) {
						$nc(result)->add(no);
					}
				}
			}
		}
	}
}

void Repository::addNewDomMoi($DynamicMBean* object, $String* dom, $ObjectName* name, $Repository$RegistrationContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($Map, moiTb, $new($HashMap));
	$var($String, key, $nc(name)->getCanonicalKeyPropertyListString());
	addMoiToTb(object, name, key, moiTb, context);
	$nc(this->domainTb)->put(dom, moiTb);
	++this->nbElements;
}

void Repository::registering($Repository$RegistrationContext* context) {
	if (context == nullptr) {
		return;
	}
	try {
		$nc(context)->registering();
	} catch ($RuntimeOperationsException& x) {
		$throw(x);
	} catch ($RuntimeException& x) {
		$throwNew($RuntimeOperationsException, x);
	}
}

void Repository::unregistering($Repository$RegistrationContext* context, $ObjectName* name) {
	if (context == nullptr) {
		return;
	}
	try {
		$nc(context)->unregistered();
	} catch ($Exception& x) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::DEBUG, $$str({"Unexpected exception while unregistering "_s, name}), static_cast<$Throwable*>(x));
	}
}

void Repository::addMoiToTb($DynamicMBean* object, $ObjectName* name, $String* key, $Map* moiTb, $Repository$RegistrationContext* context) {
	registering(context);
	$nc(moiTb)->put(key, $$new($NamedObject, name, object));
}

$NamedObject* Repository::retrieveNamedObject($ObjectName* name) {
	$useLocalCurrentObjectStackCache();
	if ($nc(name)->isPattern()) {
		return nullptr;
	}
	$var($String, dom, $nc($($nc(name)->getDomain()))->intern());
	if (dom->length() == 0) {
		$assign(dom, this->domain);
	}
	$var($Map, moiTb, $cast($Map, $nc(this->domainTb)->get(dom)));
	if (moiTb == nullptr) {
		return nullptr;
	}
	return $cast($NamedObject, $nc(moiTb)->get($(name->getCanonicalKeyPropertyListString())));
}

void Repository::init$($String* domain) {
	Repository::init$(domain, true);
}

void Repository::init$($String* domain, bool fairLock) {
	this->nbElements = 0;
	$set(this, lock, $new($ReentrantReadWriteLock, fairLock));
	$set(this, domainTb, $new($HashMap, 5));
	if (domain != nullptr && domain->length() != 0) {
		$set(this, domain, domain->intern());
	} else {
		$init($ServiceName);
		$set(this, domain, $ServiceName::DOMAIN);
	}
	$nc(this->domainTb)->put(this->domain, $$new($HashMap));
}

$StringArray* Repository::getDomains() {
	$useLocalCurrentObjectStackCache();
	$nc($($cast($ReentrantReadWriteLock$ReadLock, $nc(this->lock)->readLock())))->lock();
	$var($List, result, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$assign(result, $new($ArrayList, $nc(this->domainTb)->size()));
			{
				$var($Iterator, i$, $nc($($nc(this->domainTb)->entrySet()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
					{
						$var($Map, t, $cast($Map, $nc(entry)->getValue()));
						if (t != nullptr && t->size() != 0) {
							result->add($cast($String, $(entry->getKey())));
						}
					}
				}
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc($($cast($ReentrantReadWriteLock$ReadLock, $nc(this->lock)->readLock())))->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return $fcast($StringArray, $nc(result)->toArray($$new($StringArray, result->size())));
}

void Repository::addMBean($DynamicMBean* object, $ObjectName* name$renamed, $Repository$RegistrationContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectName, name, name$renamed);
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({"name = "_s, name}));
	}
	$var($String, dom, $nc($($nc(name)->getDomain()))->intern());
	bool to_default_domain = false;
	if (dom->length() == 0) {
		$assign(name, $Util::newObjectName($$str({this->domain, $(name->toString())})));
	}
	if (dom == this->domain) {
		to_default_domain = true;
		$assign(dom, this->domain);
	} else {
		to_default_domain = false;
	}
	if (name->isPattern()) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, $$str({"Repository: cannot add mbean for pattern name "_s, $(name->toString())})));
	}
	$nc($($cast($ReentrantReadWriteLock$WriteLock, $nc(this->lock)->writeLock())))->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			bool var$2 = !to_default_domain && dom->equals("JMImplementation"_s);
			if (var$2 && $nc(this->domainTb)->containsKey("JMImplementation"_s)) {
				$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "Repository: domain name cannot be JMImplementation"_s));
			}
			$var($Map, moiTb, $cast($Map, $nc(this->domainTb)->get(dom)));
			if (moiTb == nullptr) {
				addNewDomMoi(object, dom, name, context);
				return$1 = true;
				goto $finally;
			} else {
				$var($String, cstr, name->getCanonicalKeyPropertyListString());
				$var($NamedObject, elmt, $cast($NamedObject, $nc(moiTb)->get(cstr)));
				if (elmt != nullptr) {
					$throwNew($InstanceAlreadyExistsException, $(name->toString()));
				} else {
					++this->nbElements;
					addMoiToTb(object, name, cstr, moiTb, context);
				}
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc($($cast($ReentrantReadWriteLock$WriteLock, $nc(this->lock)->writeLock())))->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
}

bool Repository::contains($ObjectName* name) {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({"name = "_s, name}));
	}
	$nc($($cast($ReentrantReadWriteLock$ReadLock, $nc(this->lock)->readLock())))->lock();
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = (retrieveNamedObject(name) != nullptr);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc($($cast($ReentrantReadWriteLock$ReadLock, $nc(this->lock)->readLock())))->unlock();
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

$DynamicMBean* Repository::retrieve($ObjectName* name) {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({"name = "_s, name}));
	}
	$nc($($cast($ReentrantReadWriteLock$ReadLock, $nc(this->lock)->readLock())))->lock();
	{
		$var($Throwable, var$0, nullptr);
		$var($DynamicMBean, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($NamedObject, no, retrieveNamedObject(name));
			if (no == nullptr) {
				$assign(var$2, nullptr);
				return$1 = true;
				goto $finally;
			} else {
				$assign(var$2, $nc(no)->getObject());
				return$1 = true;
				goto $finally;
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			$nc($($cast($ReentrantReadWriteLock$ReadLock, $nc(this->lock)->readLock())))->unlock();
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

$Set* Repository::query($ObjectName* pattern, $QueryExp* query) {
	$useLocalCurrentObjectStackCache();
	$var($Set, result, $new($HashSet));
	$var($ObjectName, name, nullptr);
	bool var$0 = pattern == nullptr || $nc($($nc(pattern)->getCanonicalName()))->length() == 0;
	if (var$0 || $nc(pattern)->equals($ObjectName::WILDCARD)) {
		$assign(name, $ObjectName::WILDCARD);
	} else {
		$assign(name, pattern);
	}
	$nc($($cast($ReentrantReadWriteLock$ReadLock, $nc(this->lock)->readLock())))->lock();
	{
		$var($Throwable, var$1, nullptr);
		$var($Set, var$3, nullptr);
		bool return$2 = false;
		try {
			if (!$nc(name)->isPattern()) {
				$var($NamedObject, no, retrieveNamedObject(name));
				if (no != nullptr) {
					result->add(no);
				}
				$assign(var$3, result);
				return$2 = true;
				goto $finally;
			}
			if (name == $ObjectName::WILDCARD) {
				{
					$var($Iterator, i$, $nc($($nc(this->domainTb)->values()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Map, moiTb, $cast($Map, i$->next()));
						{
							result->addAll($($nc(moiTb)->values()));
						}
					}
				}
				$assign(var$3, result);
				return$2 = true;
				goto $finally;
			}
			$var($String, canonical_key_property_list_string, $nc(name)->getCanonicalKeyPropertyListString());
			bool allNames = ($nc(canonical_key_property_list_string)->length() == 0);
			$var($Repository$ObjectNamePattern, namePattern, allNames ? ($Repository$ObjectNamePattern*)nullptr : $new($Repository$ObjectNamePattern, name));
			if ($nc($(name->getDomain()))->length() == 0) {
				$var($Map, moiTb, $cast($Map, $nc(this->domainTb)->get(this->domain)));
				if (allNames) {
					result->addAll($($nc(moiTb)->values()));
				} else {
					addAllMatching(moiTb, result, namePattern);
				}
				$assign(var$3, result);
				return$2 = true;
				goto $finally;
			}
			if (!name->isDomainPattern()) {
				$var($Map, moiTb, $cast($Map, $nc(this->domainTb)->get($(name->getDomain()))));
				if (moiTb == nullptr) {
					$assign(var$3, $Collections::emptySet());
					return$2 = true;
					goto $finally;
				}
				if (allNames) {
					result->addAll($($nc(moiTb)->values()));
				} else {
					addAllMatching(moiTb, result, namePattern);
				}
				$assign(var$3, result);
				return$2 = true;
				goto $finally;
			}
			$var($String, dom2Match, name->getDomain());
			{
				$var($Iterator, i$, $nc($($nc(this->domainTb)->keySet()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($String, dom, $cast($String, i$->next()));
					{
						if ($Util::wildmatch(dom, dom2Match)) {
							$var($Map, moiTb, $cast($Map, $nc(this->domainTb)->get(dom)));
							if (allNames) {
								result->addAll($($nc(moiTb)->values()));
							} else {
								addAllMatching(moiTb, result, namePattern);
							}
						}
					}
				}
			}
			$assign(var$3, result);
			return$2 = true;
			goto $finally;
		} catch ($Throwable& var$4) {
			$assign(var$1, var$4);
		} $finally: {
			$nc($($cast($ReentrantReadWriteLock$ReadLock, $nc(this->lock)->readLock())))->unlock();
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
		if (return$2) {
			return var$3;
		}
	}
	$shouldNotReachHere();
}

void Repository::remove($ObjectName* name, $Repository$RegistrationContext* context) {
	$useLocalCurrentObjectStackCache();
	$init($JmxProperties);
	$init($System$Logger$Level);
	if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::TRACE)) {
		$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::TRACE, $$str({"name = "_s, name}));
	}
	$var($String, dom, $nc($($nc(name)->getDomain()))->intern());
	if (dom->length() == 0) {
		$assign(dom, this->domain);
	}
	$nc($($cast($ReentrantReadWriteLock$WriteLock, $nc(this->lock)->writeLock())))->lock();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Map, moiTb, $cast($Map, $nc(this->domainTb)->get(dom)));
			if (moiTb == nullptr) {
				$throwNew($InstanceNotFoundException, $(name->toString()));
			}
			if ($nc(moiTb)->remove($(name->getCanonicalKeyPropertyListString())) == nullptr) {
				$throwNew($InstanceNotFoundException, $(name->toString()));
			}
			--this->nbElements;
			if ($nc(moiTb)->isEmpty()) {
				$nc(this->domainTb)->remove(dom);
				if (dom == this->domain) {
					$nc(this->domainTb)->put(this->domain, $$new($HashMap));
				}
			}
			unregistering(context, name);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc($($cast($ReentrantReadWriteLock$WriteLock, $nc(this->lock)->writeLock())))->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$Integer* Repository::getCount() {
	return $Integer::valueOf(this->nbElements);
}

$String* Repository::getDefaultDomain() {
	return this->domain;
}

Repository::Repository() {
}

$Class* Repository::load$($String* name, bool initialize) {
	$loadClass(Repository, name, initialize, &_Repository_ClassInfo_, allocate$Repository);
	return class$;
}

$Class* Repository::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com