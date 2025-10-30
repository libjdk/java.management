#include <com/sun/jmx/mbeanserver/DescriptorCache.h>

#include <java/lang/ref/WeakReference.h>
#include <java/util/WeakHashMap.h>
#include <javax/management/Descriptor.h>
#include <javax/management/ImmutableDescriptor.h>
#include <javax/management/JMX.h>
#include <jcpp.h>

using $DescriptorArray = $Array<::javax::management::Descriptor>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $WeakHashMap = ::java::util::WeakHashMap;
using $ImmutableDescriptor = ::javax::management::ImmutableDescriptor;
using $JMX = ::javax::management::JMX;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _DescriptorCache_FieldInfo_[] = {
	{"instance", "Lcom/sun/jmx/mbeanserver/DescriptorCache;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DescriptorCache, instance)},
	{"map", "Ljava/util/WeakHashMap;", "Ljava/util/WeakHashMap<Ljavax/management/ImmutableDescriptor;Ljava/lang/ref/WeakReference<Ljavax/management/ImmutableDescriptor;>;>;", $PRIVATE | $FINAL, $field(DescriptorCache, map)},
	{}
};

$MethodInfo _DescriptorCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DescriptorCache::*)()>(&DescriptorCache::init$))},
	{"get", "(Ljavax/management/ImmutableDescriptor;)Ljavax/management/ImmutableDescriptor;", nullptr, $PUBLIC},
	{"getInstance", "()Lcom/sun/jmx/mbeanserver/DescriptorCache;", nullptr, $STATIC, $method(static_cast<DescriptorCache*(*)()>(&DescriptorCache::getInstance))},
	{"getInstance", "(Ljavax/management/JMX;)Lcom/sun/jmx/mbeanserver/DescriptorCache;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DescriptorCache*(*)($JMX*)>(&DescriptorCache::getInstance))},
	{"union", "([Ljavax/management/Descriptor;)Ljavax/management/ImmutableDescriptor;", nullptr, $PUBLIC | $TRANSIENT},
	{}
};

$ClassInfo _DescriptorCache_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.DescriptorCache",
	"java.lang.Object",
	nullptr,
	_DescriptorCache_FieldInfo_,
	_DescriptorCache_MethodInfo_
};

$Object* allocate$DescriptorCache($Class* clazz) {
	return $of($alloc(DescriptorCache));
}

DescriptorCache* DescriptorCache::instance = nullptr;

void DescriptorCache::init$() {
	$set(this, map, $new($WeakHashMap));
}

DescriptorCache* DescriptorCache::getInstance() {
	$init(DescriptorCache);
	return DescriptorCache::instance;
}

DescriptorCache* DescriptorCache::getInstance($JMX* proof) {
	$init(DescriptorCache);
	if (proof != nullptr) {
		return DescriptorCache::instance;
	} else {
		return nullptr;
	}
}

$ImmutableDescriptor* DescriptorCache::get($ImmutableDescriptor* descriptor) {
	$useLocalCurrentObjectStackCache();
	$var($WeakReference, wr, $cast($WeakReference, $nc(this->map)->get(descriptor)));
	$var($ImmutableDescriptor, got, (wr == nullptr) ? ($ImmutableDescriptor*)nullptr : $cast($ImmutableDescriptor, $nc(wr)->get()));
	if (got != nullptr) {
		return got;
	}
	$nc(this->map)->put(descriptor, $$new($WeakReference, descriptor));
	return descriptor;
}

$ImmutableDescriptor* DescriptorCache::union$($DescriptorArray* descriptors) {
	return get($($ImmutableDescriptor::union$(descriptors)));
}

void clinit$DescriptorCache($Class* class$) {
	$assignStatic(DescriptorCache::instance, $new(DescriptorCache));
}

DescriptorCache::DescriptorCache() {
}

$Class* DescriptorCache::load$($String* name, bool initialize) {
	$loadClass(DescriptorCache, name, initialize, &_DescriptorCache_ClassInfo_, clinit$DescriptorCache, allocate$DescriptorCache);
	return class$;
}

$Class* DescriptorCache::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com