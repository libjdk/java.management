#include <com/sun/jmx/mbeanserver/Introspector$SimpleIntrospector.h>

#include <com/sun/jmx/mbeanserver/Introspector.h>
#include <com/sun/jmx/mbeanserver/MBeanAnalyzer.h>
#include <com/sun/jmx/mbeanserver/StandardMBeanIntrospector.h>
#include <java/lang/ref/SoftReference.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <jcpp.h>

#undef ENGLISH
#undef GET_METHOD_PREFIX
#undef IS_METHOD_PREFIX
#undef TYPE

using $Introspector = ::com::sun::jmx::mbeanserver::Introspector;
using $MBeanAnalyzer = ::com::sun::jmx::mbeanserver::MBeanAnalyzer;
using $MBeanIntrospector = ::com::sun::jmx::mbeanserver::MBeanIntrospector;
using $StandardMBeanIntrospector = ::com::sun::jmx::mbeanserver::StandardMBeanIntrospector;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $SoftReference = ::java::lang::ref::SoftReference;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $WeakHashMap = ::java::util::WeakHashMap;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _Introspector$SimpleIntrospector_FieldInfo_[] = {
	{"GET_METHOD_PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Introspector$SimpleIntrospector, GET_METHOD_PREFIX)},
	{"IS_METHOD_PREFIX", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Introspector$SimpleIntrospector, IS_METHOD_PREFIX)},
	{"cache", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/lang/ref/SoftReference<Ljava/util/List<Ljava/lang/reflect/Method;>;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Introspector$SimpleIntrospector, cache)},
	{}
};

$MethodInfo _Introspector$SimpleIntrospector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Introspector$SimpleIntrospector::*)()>(&Introspector$SimpleIntrospector::init$))},
	{"getCachedMethods", "(Ljava/lang/Class;)Ljava/util/List;", "(Ljava/lang/Class<*>;)Ljava/util/List<Ljava/lang/reflect/Method;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($Class*)>(&Introspector$SimpleIntrospector::getCachedMethods))},
	{"getReadMethod", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/lang/reflect/Method;", $STATIC, $method(static_cast<$Method*(*)($Class*,$String*)>(&Introspector$SimpleIntrospector::getReadMethod))},
	{"getReadMethods", "(Ljava/lang/Class;)Ljava/util/List;", "(Ljava/lang/Class<*>;)Ljava/util/List<Ljava/lang/reflect/Method;>;", $STATIC, $method(static_cast<$List*(*)($Class*)>(&Introspector$SimpleIntrospector::getReadMethods))},
	{"isReadMethod", "(Ljava/lang/reflect/Method;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Method*)>(&Introspector$SimpleIntrospector::isReadMethod))},
	{}
};

$InnerClassInfo _Introspector$SimpleIntrospector_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.Introspector$SimpleIntrospector", "com.sun.jmx.mbeanserver.Introspector", "SimpleIntrospector", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Introspector$SimpleIntrospector_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.mbeanserver.Introspector$SimpleIntrospector",
	"java.lang.Object",
	nullptr,
	_Introspector$SimpleIntrospector_FieldInfo_,
	_Introspector$SimpleIntrospector_MethodInfo_,
	nullptr,
	nullptr,
	_Introspector$SimpleIntrospector_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.Introspector"
};

$Object* allocate$Introspector$SimpleIntrospector($Class* clazz) {
	return $of($alloc(Introspector$SimpleIntrospector));
}

$String* Introspector$SimpleIntrospector::GET_METHOD_PREFIX = nullptr;
$String* Introspector$SimpleIntrospector::IS_METHOD_PREFIX = nullptr;
$Map* Introspector$SimpleIntrospector::cache = nullptr;

void Introspector$SimpleIntrospector::init$() {
}

$List* Introspector$SimpleIntrospector::getCachedMethods($Class* clazz) {
	$init(Introspector$SimpleIntrospector);
	$useLocalCurrentObjectStackCache();
	$var($SoftReference, ref, $cast($SoftReference, $nc(Introspector$SimpleIntrospector::cache)->get(clazz)));
	if (ref != nullptr) {
		$var($List, cached, $cast($List, ref->get()));
		if (cached != nullptr) {
			return cached;
		}
	}
	return nullptr;
}

bool Introspector$SimpleIntrospector::isReadMethod($Method* method) {
	$init(Introspector$SimpleIntrospector);
	$useLocalCurrentObjectStackCache();
	int32_t modifiers = $nc(method)->getModifiers();
	if ($Modifier::isStatic(modifiers)) {
		return false;
	}
	$var($String, name, method->getName());
	$var($ClassArray, paramTypes, method->getParameterTypes());
	int32_t paramCount = $nc(paramTypes)->length;
	if (paramCount == 0 && $nc(name)->length() > 2) {
		if (name->startsWith(Introspector$SimpleIntrospector::IS_METHOD_PREFIX)) {
			$init($Boolean);
			return (method->getReturnType() == $Boolean::TYPE);
		}
		bool var$0 = name->length() > 3;
		if (var$0 && name->startsWith(Introspector$SimpleIntrospector::GET_METHOD_PREFIX)) {
			$init($Void);
			return (method->getReturnType() != $Void::TYPE);
		}
	}
	return false;
}

$List* Introspector$SimpleIntrospector::getReadMethods($Class* clazz) {
	$init(Introspector$SimpleIntrospector);
	$useLocalCurrentObjectStackCache();
	$var($List, cachedResult, getCachedMethods(clazz));
	if (cachedResult != nullptr) {
		return cachedResult;
	}
	$var($List, methods, $nc($($StandardMBeanIntrospector::getInstance()))->getMethods(clazz));
	$assign(methods, $MBeanAnalyzer::eliminateCovariantMethods(methods));
	$var($List, result, $new($LinkedList));
	{
		$var($Iterator, i$, $nc(methods)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Method, m, $cast($Method, i$->next()));
			{
				if (isReadMethod(m)) {
					if ($nc($($nc(m)->getName()))->startsWith(Introspector$SimpleIntrospector::IS_METHOD_PREFIX)) {
						result->add(0, m);
					} else {
						result->add(m);
					}
				}
			}
		}
	}
	$nc(Introspector$SimpleIntrospector::cache)->put(clazz, $$new($SoftReference, result));
	return result;
}

$Method* Introspector$SimpleIntrospector::getReadMethod($Class* clazz, $String* property$renamed) {
	$init(Introspector$SimpleIntrospector);
	$useLocalCurrentObjectStackCache();
	$var($String, property, property$renamed);
	if ($Character::isUpperCase($nc(property)->charAt(0))) {
		return nullptr;
	}
	$init($Locale);
	$var($String, var$0, $($($nc(property)->substring(0, 1))->toUpperCase($Locale::ENGLISH)));
	$assign(property, $concat(var$0, $(property->substring(1))));
	$var($String, getMethod, $str({Introspector$SimpleIntrospector::GET_METHOD_PREFIX, property}));
	$var($String, isMethod, $str({Introspector$SimpleIntrospector::IS_METHOD_PREFIX, property}));
	{
		$var($Iterator, i$, $nc($(getReadMethods(clazz)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Method, m, $cast($Method, i$->next()));
			{
				$var($String, name, $nc(m)->getName());
				bool var$1 = $nc(name)->equals(isMethod);
				if (var$1 || $nc(name)->equals(getMethod)) {
					return m;
				}
			}
		}
	}
	return nullptr;
}

void clinit$Introspector$SimpleIntrospector($Class* class$) {
	$assignStatic(Introspector$SimpleIntrospector::GET_METHOD_PREFIX, "get"_s);
	$assignStatic(Introspector$SimpleIntrospector::IS_METHOD_PREFIX, "is"_s);
	$assignStatic(Introspector$SimpleIntrospector::cache, $Collections::synchronizedMap($$new($WeakHashMap)));
}

Introspector$SimpleIntrospector::Introspector$SimpleIntrospector() {
}

$Class* Introspector$SimpleIntrospector::load$($String* name, bool initialize) {
	$loadClass(Introspector$SimpleIntrospector, name, initialize, &_Introspector$SimpleIntrospector_ClassInfo_, clinit$Introspector$SimpleIntrospector, allocate$Introspector$SimpleIntrospector);
	return class$;
}

$Class* Introspector$SimpleIntrospector::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com