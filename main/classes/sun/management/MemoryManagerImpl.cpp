#include <sun/management/MemoryManagerImpl.h>

#include <java/lang/management/ManagementFactory.h>
#include <java/lang/management/MemoryPoolMXBean.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/ObjectName.h>
#include <sun/management/NotificationEmitterSupport.h>
#include <sun/management/Util.h>
#include <jcpp.h>

#undef MEMORY_MANAGER_MXBEAN_DOMAIN_TYPE

using $MemoryPoolMXBeanArray = $Array<::java::lang::management::MemoryPoolMXBean>;
using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ManagementFactory = ::java::lang::management::ManagementFactory;
using $MemoryManagerMXBean = ::java::lang::management::MemoryManagerMXBean;
using $MemoryPoolMXBean = ::java::lang::management::MemoryPoolMXBean;
using $MBeanNotificationInfo = ::javax::management::MBeanNotificationInfo;
using $ObjectName = ::javax::management::ObjectName;
using $NotificationEmitterSupport = ::sun::management::NotificationEmitterSupport;
using $Util = ::sun::management::Util;

namespace sun {
	namespace management {

$FieldInfo _MemoryManagerImpl_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MemoryManagerImpl, name)},
	{"isValid", "Z", nullptr, $PRIVATE | $FINAL, $field(MemoryManagerImpl, isValid$)},
	{"pools", "[Ljava/lang/management/MemoryPoolMXBean;", nullptr, $PRIVATE, $field(MemoryManagerImpl, pools)},
	{"notifInfo", "[Ljavax/management/MBeanNotificationInfo;", nullptr, $PRIVATE, $field(MemoryManagerImpl, notifInfo)},
	{}
};

$MethodInfo _MemoryManagerImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(MemoryManagerImpl::*)($String*)>(&MemoryManagerImpl::init$))},
	{"getMemoryPoolNames", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMemoryPools", "()[Ljava/lang/management/MemoryPoolMXBean;", nullptr, $SYNCHRONIZED},
	{"getMemoryPools0", "()[Ljava/lang/management/MemoryPoolMXBean;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$MemoryPoolMXBeanArray*(MemoryManagerImpl::*)()>(&MemoryManagerImpl::getMemoryPools0))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNotificationInfo", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PUBLIC},
	{"getObjectName", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC},
	{"isValid", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_getMemoryPools0 7

$ClassInfo _MemoryManagerImpl_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.MemoryManagerImpl",
	"sun.management.NotificationEmitterSupport",
	"java.lang.management.MemoryManagerMXBean",
	_MemoryManagerImpl_FieldInfo_,
	_MemoryManagerImpl_MethodInfo_
};

$Object* allocate$MemoryManagerImpl($Class* clazz) {
	return $of($alloc(MemoryManagerImpl));
}

int32_t MemoryManagerImpl::hashCode() {
	 return this->$NotificationEmitterSupport::hashCode();
}

bool MemoryManagerImpl::equals(Object$* arg0) {
	 return this->$NotificationEmitterSupport::equals(arg0);
}

$Object* MemoryManagerImpl::clone() {
	 return this->$NotificationEmitterSupport::clone();
}

$String* MemoryManagerImpl::toString() {
	 return this->$NotificationEmitterSupport::toString();
}

void MemoryManagerImpl::finalize() {
	this->$NotificationEmitterSupport::finalize();
}

void MemoryManagerImpl::init$($String* name) {
	$NotificationEmitterSupport::init$();
	$set(this, notifInfo, nullptr);
	$set(this, name, name);
	this->isValid$ = true;
	$set(this, pools, nullptr);
}

$String* MemoryManagerImpl::getName() {
	return this->name;
}

bool MemoryManagerImpl::isValid() {
	return this->isValid$;
}

$StringArray* MemoryManagerImpl::getMemoryPoolNames() {
	$useLocalCurrentObjectStackCache();
	$var($MemoryPoolMXBeanArray, ps, getMemoryPools());
	$var($StringArray, names, $new($StringArray, $nc(ps)->length));
	for (int32_t i = 0; i < ps->length; ++i) {
		names->set(i, $($nc(ps->get(i))->getName()));
	}
	return names;
}

$MemoryPoolMXBeanArray* MemoryManagerImpl::getMemoryPools() {
	$synchronized(this) {
		if (this->pools == nullptr) {
			$set(this, pools, getMemoryPools0());
		}
		return this->pools;
	}
}

$MemoryPoolMXBeanArray* MemoryManagerImpl::getMemoryPools0() {
	$var($MemoryPoolMXBeanArray, $ret, nullptr);
	$prepareNative(MemoryManagerImpl, getMemoryPools0, $MemoryPoolMXBeanArray*);
	$assign($ret, $invokeNative(MemoryManagerImpl, getMemoryPools0));
	$finishNative();
	return $ret;
}

$MBeanNotificationInfoArray* MemoryManagerImpl::getNotificationInfo() {
	$synchronized(this) {
		if (this->notifInfo == nullptr) {
			$set(this, notifInfo, $new($MBeanNotificationInfoArray, 0));
		}
	}
	return this->notifInfo;
}

$ObjectName* MemoryManagerImpl::getObjectName() {
	$init($ManagementFactory);
	return $Util::newObjectName($ManagementFactory::MEMORY_MANAGER_MXBEAN_DOMAIN_TYPE, $(getName()));
}

MemoryManagerImpl::MemoryManagerImpl() {
}

$Class* MemoryManagerImpl::load$($String* name, bool initialize) {
	$loadClass(MemoryManagerImpl, name, initialize, &_MemoryManagerImpl_ClassInfo_, allocate$MemoryManagerImpl);
	return class$;
}

$Class* MemoryManagerImpl::class$ = nullptr;

	} // management
} // sun