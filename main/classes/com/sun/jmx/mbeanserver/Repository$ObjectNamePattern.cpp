#include <com/sun/jmx/mbeanserver/Repository$ObjectNamePattern.h>

#include <com/sun/jmx/mbeanserver/Repository.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $Repository = ::com::sun::jmx::mbeanserver::Repository;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _Repository$ObjectNamePattern_FieldInfo_[] = {
	{"keys", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Repository$ObjectNamePattern, keys)},
	{"values", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Repository$ObjectNamePattern, values)},
	{"properties", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Repository$ObjectNamePattern, properties)},
	{"isPropertyListPattern", "Z", nullptr, $PRIVATE | $FINAL, $field(Repository$ObjectNamePattern, isPropertyListPattern)},
	{"isPropertyValuePattern", "Z", nullptr, $PRIVATE | $FINAL, $field(Repository$ObjectNamePattern, isPropertyValuePattern)},
	{"pattern", "Ljavax/management/ObjectName;", nullptr, $PUBLIC | $FINAL, $field(Repository$ObjectNamePattern, pattern)},
	{}
};

$MethodInfo _Repository$ObjectNamePattern_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC, $method(static_cast<void(Repository$ObjectNamePattern::*)($ObjectName*)>(&Repository$ObjectNamePattern::init$))},
	{"<init>", "(ZZLjava/lang/String;Ljava/util/Map;Ljavax/management/ObjectName;)V", "(ZZLjava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;Ljavax/management/ObjectName;)V", 0, $method(static_cast<void(Repository$ObjectNamePattern::*)(bool,bool,$String*,$Map*,$ObjectName*)>(&Repository$ObjectNamePattern::init$))},
	{"matchKeys", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC, $method(static_cast<bool(Repository$ObjectNamePattern::*)($ObjectName*)>(&Repository$ObjectNamePattern::matchKeys))},
	{}
};

$InnerClassInfo _Repository$ObjectNamePattern_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.Repository$ObjectNamePattern", "com.sun.jmx.mbeanserver.Repository", "ObjectNamePattern", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Repository$ObjectNamePattern_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.Repository$ObjectNamePattern",
	"java.lang.Object",
	nullptr,
	_Repository$ObjectNamePattern_FieldInfo_,
	_Repository$ObjectNamePattern_MethodInfo_,
	nullptr,
	nullptr,
	_Repository$ObjectNamePattern_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.Repository"
};

$Object* allocate$Repository$ObjectNamePattern($Class* clazz) {
	return $of($alloc(Repository$ObjectNamePattern));
}

void Repository$ObjectNamePattern::init$($ObjectName* pattern) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(pattern)->isPropertyListPattern();
	bool var$1 = pattern->isPropertyValuePattern();
	$var($String, var$2, pattern->getCanonicalKeyPropertyListString());
	Repository$ObjectNamePattern::init$(var$0, var$1, var$2, $(pattern->getKeyPropertyList()), pattern);
}

void Repository$ObjectNamePattern::init$(bool propertyListPattern, bool propertyValuePattern, $String* canonicalProps, $Map* keyPropertyList, $ObjectName* pattern) {
	$useLocalCurrentObjectStackCache();
	this->isPropertyListPattern = propertyListPattern;
	this->isPropertyValuePattern = propertyValuePattern;
	$set(this, properties, canonicalProps);
	int32_t len = $nc(keyPropertyList)->size();
	$set(this, keys, $new($StringArray, len));
	$set(this, values, $new($StringArray, len));
	int32_t i = 0;
	{
		$var($Iterator, i$, $nc($(keyPropertyList->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$nc(this->keys)->set(i, $cast($String, $($nc(entry)->getKey())));
				$nc(this->values)->set(i, $cast($String, $(entry->getValue())));
				++i;
			}
		}
	}
	$set(this, pattern, pattern);
}

bool Repository$ObjectNamePattern::matchKeys($ObjectName* name) {
	$useLocalCurrentObjectStackCache();
	if (this->isPropertyValuePattern && !this->isPropertyListPattern && ($nc($($nc(name)->getKeyPropertyList()))->size() != $nc(this->keys)->length)) {
		return false;
	}
	if (this->isPropertyValuePattern || this->isPropertyListPattern) {
		for (int32_t i = $nc(this->keys)->length - 1; i >= 0; --i) {
			$var($String, v, $nc(name)->getKeyProperty($nc(this->keys)->get(i)));
			if (v == nullptr) {
				return false;
			}
			if (this->isPropertyValuePattern && $nc(this->pattern)->isPropertyValuePattern($nc(this->keys)->get(i))) {
				if ($Util::wildmatch(v, $nc(this->values)->get(i))) {
					continue;
				} else {
					return false;
				}
			}
			if ($nc(v)->equals($nc(this->values)->get(i))) {
				continue;
			}
			return false;
		}
		return true;
	}
	$var($String, p1, $nc(name)->getCanonicalKeyPropertyListString());
	$var($String, p2, this->properties);
	return ($nc(p1)->equals(p2));
}

Repository$ObjectNamePattern::Repository$ObjectNamePattern() {
}

$Class* Repository$ObjectNamePattern::load$($String* name, bool initialize) {
	$loadClass(Repository$ObjectNamePattern, name, initialize, &_Repository$ObjectNamePattern_ClassInfo_, allocate$Repository$ObjectNamePattern);
	return class$;
}

$Class* Repository$ObjectNamePattern::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com