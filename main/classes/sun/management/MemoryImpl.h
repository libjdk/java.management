#ifndef _sun_management_MemoryImpl_h_
#define _sun_management_MemoryImpl_h_
//$ class sun.management.MemoryImpl
//$ extends sun.management.NotificationEmitterSupport
//$ implements java.lang.management.MemoryMXBean

#include <java/lang/Array.h>
#include <java/lang/management/MemoryMXBean.h>
#include <sun/management/NotificationEmitterSupport.h>

namespace java {
	namespace lang {
		namespace management {
			class MemoryManagerMXBean;
			class MemoryPoolMXBean;
			class MemoryUsage;
		}
	}
}
namespace javax {
	namespace management {
		class MBeanNotificationInfo;
		class ObjectName;
	}
}
namespace sun {
	namespace management {
		class VMManagement;
	}
}

namespace sun {
	namespace management {

class MemoryImpl : public ::sun::management::NotificationEmitterSupport, public ::java::lang::management::MemoryMXBean {
	$class(MemoryImpl, 0, ::sun::management::NotificationEmitterSupport, ::java::lang::management::MemoryMXBean)
public:
	MemoryImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::management::VMManagement* vm);
	static void createNotification($String* notifType, $String* poolName, ::java::lang::management::MemoryUsage* usage, int64_t count);
	virtual void gc() override;
	virtual ::java::lang::management::MemoryUsage* getHeapMemoryUsage() override;
	static $Array<::java::lang::management::MemoryManagerMXBean>* getMemoryManagers();
	static $Array<::java::lang::management::MemoryManagerMXBean>* getMemoryManagers0();
	static $Array<::java::lang::management::MemoryPoolMXBean>* getMemoryPools();
	static $Array<::java::lang::management::MemoryPoolMXBean>* getMemoryPools0();
	::java::lang::management::MemoryUsage* getMemoryUsage0(bool heap);
	static int64_t getNextSeqNumber();
	virtual ::java::lang::management::MemoryUsage* getNonHeapMemoryUsage() override;
	static $String* getNotifMsg($String* notifType);
	virtual $Array<::javax::management::MBeanNotificationInfo>* getNotificationInfo() override;
	virtual ::javax::management::ObjectName* getObjectName() override;
	virtual int32_t getObjectPendingFinalizationCount() override;
	virtual bool isVerbose() override;
	virtual void setVerbose(bool value) override;
	void setVerboseGC(bool value);
	virtual $String* toString() override;
	::sun::management::VMManagement* jvm = nullptr;
	static $Array<::java::lang::management::MemoryPoolMXBean>* pools;
	static $Array<::java::lang::management::MemoryManagerMXBean>* mgrs;
	static $String* notifName;
	static $StringArray* notifTypes;
	static $StringArray* notifMsgs;
	static int64_t seqNumber;
};

	} // management
} // sun

#endif // _sun_management_MemoryImpl_h_