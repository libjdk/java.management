#include <sun/management/GarbageCollectorImpl.h>

#include <java/lang/management/ManagementFactory.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/ObjectName.h>
#include <sun/management/MemoryManagerImpl.h>
#include <sun/management/Util.h>
#include <jcpp.h>

#undef GARBAGE_COLLECTOR_MXBEAN_DOMAIN_TYPE

using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GarbageCollectorMXBean = ::java::lang::management::GarbageCollectorMXBean;
using $ManagementFactory = ::java::lang::management::ManagementFactory;
using $ObjectName = ::javax::management::ObjectName;
using $MemoryManagerImpl = ::sun::management::MemoryManagerImpl;
using $Util = ::sun::management::Util;

namespace sun {
	namespace management {

$MethodInfo _GarbageCollectorImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(GarbageCollectorImpl::*)($String*)>(&GarbageCollectorImpl::init$))},
	{"getCollectionCount", "()J", nullptr, $PUBLIC | $NATIVE},
	{"getCollectionTime", "()J", nullptr, $PUBLIC | $NATIVE},
	{"getMemoryPoolNames", "()[Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getNotificationInfo", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getObjectName", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC},
	{"isValid", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_getCollectionCount 5
#define _METHOD_INDEX_getCollectionTime 6

$ClassInfo _GarbageCollectorImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.management.GarbageCollectorImpl",
	"sun.management.MemoryManagerImpl",
	"java.lang.management.GarbageCollectorMXBean",
	nullptr,
	_GarbageCollectorImpl_MethodInfo_
};

$Object* allocate$GarbageCollectorImpl($Class* clazz) {
	return $of($alloc(GarbageCollectorImpl));
}

int32_t GarbageCollectorImpl::hashCode() {
	 return this->$MemoryManagerImpl::hashCode();
}

bool GarbageCollectorImpl::equals(Object$* arg0) {
	 return this->$MemoryManagerImpl::equals(arg0);
}

$Object* GarbageCollectorImpl::clone() {
	 return this->$MemoryManagerImpl::clone();
}

$String* GarbageCollectorImpl::toString() {
	 return this->$MemoryManagerImpl::toString();
}

void GarbageCollectorImpl::finalize() {
	this->$MemoryManagerImpl::finalize();
}

void GarbageCollectorImpl::init$($String* name) {
	$MemoryManagerImpl::init$(name);
}

int64_t GarbageCollectorImpl::getCollectionCount() {
	int64_t $ret = 0;
	$prepareNative(GarbageCollectorImpl, getCollectionCount, int64_t);
	$ret = $invokeNative(GarbageCollectorImpl, getCollectionCount);
	$finishNative();
	return $ret;
}

int64_t GarbageCollectorImpl::getCollectionTime() {
	int64_t $ret = 0;
	$prepareNative(GarbageCollectorImpl, getCollectionTime, int64_t);
	$ret = $invokeNative(GarbageCollectorImpl, getCollectionTime);
	$finishNative();
	return $ret;
}

$ObjectName* GarbageCollectorImpl::getObjectName() {
	$init($ManagementFactory);
	return $Util::newObjectName($ManagementFactory::GARBAGE_COLLECTOR_MXBEAN_DOMAIN_TYPE, $(getName()));
}

$MBeanNotificationInfoArray* GarbageCollectorImpl::getNotificationInfo() {
	return $MemoryManagerImpl::getNotificationInfo();
}

$StringArray* GarbageCollectorImpl::getMemoryPoolNames() {
	return $MemoryManagerImpl::getMemoryPoolNames();
}

bool GarbageCollectorImpl::isValid() {
	return $MemoryManagerImpl::isValid();
}

$String* GarbageCollectorImpl::getName() {
	return $MemoryManagerImpl::getName();
}

GarbageCollectorImpl::GarbageCollectorImpl() {
}

$Class* GarbageCollectorImpl::load$($String* name, bool initialize) {
	$loadClass(GarbageCollectorImpl, name, initialize, &_GarbageCollectorImpl_ClassInfo_, allocate$GarbageCollectorImpl);
	return class$;
}

$Class* GarbageCollectorImpl::class$ = nullptr;

	} // management
} // sun