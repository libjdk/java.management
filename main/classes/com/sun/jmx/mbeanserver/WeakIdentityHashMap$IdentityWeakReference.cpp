#include <com/sun/jmx/mbeanserver/WeakIdentityHashMap$IdentityWeakReference.h>

#include <com/sun/jmx/mbeanserver/WeakIdentityHashMap.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <jcpp.h>

using $WeakIdentityHashMap = ::com::sun::jmx::mbeanserver::WeakIdentityHashMap;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _WeakIdentityHashMap$IdentityWeakReference_FieldInfo_[] = {
	{"hashCode", "I", nullptr, $PRIVATE | $FINAL, $field(WeakIdentityHashMap$IdentityWeakReference, hashCode$)},
	{}
};

$MethodInfo _WeakIdentityHashMap$IdentityWeakReference_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;)V", "(TT;)V", 0, $method(static_cast<void(WeakIdentityHashMap$IdentityWeakReference::*)(Object$*)>(&WeakIdentityHashMap$IdentityWeakReference::init$))},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", "(TT;Ljava/lang/ref/ReferenceQueue<TT;>;)V", 0, $method(static_cast<void(WeakIdentityHashMap$IdentityWeakReference::*)(Object$*,$ReferenceQueue*)>(&WeakIdentityHashMap$IdentityWeakReference::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WeakIdentityHashMap$IdentityWeakReference_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.WeakIdentityHashMap$IdentityWeakReference", "com.sun.jmx.mbeanserver.WeakIdentityHashMap", "IdentityWeakReference", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WeakIdentityHashMap$IdentityWeakReference_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.mbeanserver.WeakIdentityHashMap$IdentityWeakReference",
	"java.lang.ref.WeakReference",
	nullptr,
	_WeakIdentityHashMap$IdentityWeakReference_FieldInfo_,
	_WeakIdentityHashMap$IdentityWeakReference_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/ref/WeakReference<TT;>;",
	nullptr,
	_WeakIdentityHashMap$IdentityWeakReference_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.WeakIdentityHashMap"
};

$Object* allocate$WeakIdentityHashMap$IdentityWeakReference($Class* clazz) {
	return $of($alloc(WeakIdentityHashMap$IdentityWeakReference));
}

void WeakIdentityHashMap$IdentityWeakReference::init$(Object$* o) {
	WeakIdentityHashMap$IdentityWeakReference::init$(o, nullptr);
}

void WeakIdentityHashMap$IdentityWeakReference::init$(Object$* o, $ReferenceQueue* q) {
	$WeakReference::init$(o, q);
	this->hashCode$ = (o == nullptr) ? 0 : $System::identityHashCode(o);
}

bool WeakIdentityHashMap$IdentityWeakReference::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, o)) {
		return true;
	}
	if (!($instanceOf(WeakIdentityHashMap$IdentityWeakReference, o))) {
		return false;
	}
	$var(WeakIdentityHashMap$IdentityWeakReference, wr, $cast(WeakIdentityHashMap$IdentityWeakReference, o));
	$var($Object, got, get());
	return got != nullptr && $nc(wr)->refersTo(got);
}

int32_t WeakIdentityHashMap$IdentityWeakReference::hashCode() {
	return this->hashCode$;
}

WeakIdentityHashMap$IdentityWeakReference::WeakIdentityHashMap$IdentityWeakReference() {
}

$Class* WeakIdentityHashMap$IdentityWeakReference::load$($String* name, bool initialize) {
	$loadClass(WeakIdentityHashMap$IdentityWeakReference, name, initialize, &_WeakIdentityHashMap$IdentityWeakReference_ClassInfo_, allocate$WeakIdentityHashMap$IdentityWeakReference);
	return class$;
}

$Class* WeakIdentityHashMap$IdentityWeakReference::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com