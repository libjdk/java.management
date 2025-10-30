#include <com/sun/jmx/mbeanserver/WeakIdentityHashMap.h>

#include <com/sun/jmx/mbeanserver/Util.h>
#include <com/sun/jmx/mbeanserver/WeakIdentityHashMap$IdentityWeakReference.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $Util = ::com::sun::jmx::mbeanserver::Util;
using $WeakIdentityHashMap$IdentityWeakReference = ::com::sun::jmx::mbeanserver::WeakIdentityHashMap$IdentityWeakReference;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _WeakIdentityHashMap_FieldInfo_[] = {
	{"map", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/ref/WeakReference<TK;>;TV;>;", $PRIVATE, $field(WeakIdentityHashMap, map)},
	{"refQueue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<TK;>;", $PRIVATE, $field(WeakIdentityHashMap, refQueue)},
	{}
};

$MethodInfo _WeakIdentityHashMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WeakIdentityHashMap::*)()>(&WeakIdentityHashMap::init$))},
	{"expunge", "()V", nullptr, $PRIVATE, $method(static_cast<void(WeakIdentityHashMap::*)()>(&WeakIdentityHashMap::expunge))},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TV;", 0},
	{"make", "()Lcom/sun/jmx/mbeanserver/WeakIdentityHashMap;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>()Lcom/sun/jmx/mbeanserver/WeakIdentityHashMap<TK;TV;>;", $STATIC, $method(static_cast<WeakIdentityHashMap*(*)()>(&WeakIdentityHashMap::make))},
	{"makeReference", "(Ljava/lang/Object;)Ljava/lang/ref/WeakReference;", "(TK;)Ljava/lang/ref/WeakReference<TK;>;", $PRIVATE, $method(static_cast<$WeakReference*(WeakIdentityHashMap::*)(Object$*)>(&WeakIdentityHashMap::makeReference))},
	{"makeReference", "(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)Ljava/lang/ref/WeakReference;", "(TK;Ljava/lang/ref/ReferenceQueue<TK;>;)Ljava/lang/ref/WeakReference<TK;>;", $PRIVATE, $method(static_cast<$WeakReference*(WeakIdentityHashMap::*)(Object$*,$ReferenceQueue*)>(&WeakIdentityHashMap::makeReference))},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "(TK;TV;)TV;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Ljava/lang/Object;", "(TK;)TV;", $PUBLIC},
	{}
};

$InnerClassInfo _WeakIdentityHashMap_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.WeakIdentityHashMap$IdentityWeakReference", "com.sun.jmx.mbeanserver.WeakIdentityHashMap", "IdentityWeakReference", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WeakIdentityHashMap_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.mbeanserver.WeakIdentityHashMap",
	"java.lang.Object",
	nullptr,
	_WeakIdentityHashMap_FieldInfo_,
	_WeakIdentityHashMap_MethodInfo_,
	"<K:Ljava/lang/Object;V:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_WeakIdentityHashMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.WeakIdentityHashMap$IdentityWeakReference"
};

$Object* allocate$WeakIdentityHashMap($Class* clazz) {
	return $of($alloc(WeakIdentityHashMap));
}

void WeakIdentityHashMap::init$() {
	$set(this, map, $Util::newMap());
	$set(this, refQueue, $new($ReferenceQueue));
}

WeakIdentityHashMap* WeakIdentityHashMap::make() {
	return $new(WeakIdentityHashMap);
}

$Object* WeakIdentityHashMap::get(Object$* key) {
	expunge();
	$var($WeakReference, keyref, makeReference(key));
	return $of($nc(this->map)->get(keyref));
}

$Object* WeakIdentityHashMap::put(Object$* key, Object$* value) {
	expunge();
	if (key == nullptr) {
		$throwNew($IllegalArgumentException, "Null key"_s);
	}
	$var($WeakReference, keyref, makeReference(key, this->refQueue));
	return $of($nc(this->map)->put(keyref, value));
}

$Object* WeakIdentityHashMap::remove(Object$* key) {
	expunge();
	$var($WeakReference, keyref, makeReference(key));
	return $of($nc(this->map)->remove(keyref));
}

void WeakIdentityHashMap::expunge() {
	$var($Reference, ref, nullptr);
	while (($assign(ref, $nc(this->refQueue)->poll())) != nullptr) {
		$nc(this->map)->remove(ref);
	}
}

$WeakReference* WeakIdentityHashMap::makeReference(Object$* referent) {
	return $new($WeakIdentityHashMap$IdentityWeakReference, referent);
}

$WeakReference* WeakIdentityHashMap::makeReference(Object$* referent, $ReferenceQueue* q) {
	return $new($WeakIdentityHashMap$IdentityWeakReference, referent, q);
}

WeakIdentityHashMap::WeakIdentityHashMap() {
}

$Class* WeakIdentityHashMap::load$($String* name, bool initialize) {
	$loadClass(WeakIdentityHashMap, name, initialize, &_WeakIdentityHashMap_ClassInfo_, allocate$WeakIdentityHashMap);
	return class$;
}

$Class* WeakIdentityHashMap::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com