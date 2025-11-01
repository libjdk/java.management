#ifndef _sun_management_MemoryManagerImpl_h_
#define _sun_management_MemoryManagerImpl_h_
//$ class sun.management.MemoryManagerImpl
//$ extends sun.management.NotificationEmitterSupport
//$ implements java.lang.management.MemoryManagerMXBean

#include <java/lang/Array.h>
#include <java/lang/management/MemoryManagerMXBean.h>
#include <sun/management/NotificationEmitterSupport.h>

namespace java {
	namespace lang {
		namespace management {
			class MemoryPoolMXBean;
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

class $import MemoryManagerImpl : public ::sun::management::NotificationEmitterSupport, public ::java::lang::management::MemoryManagerMXBean {
	$class(MemoryManagerImpl, $NO_CLASS_INIT, ::sun::management::NotificationEmitterSupport, ::java::lang::management::MemoryManagerMXBean)
public:
	MemoryManagerImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* name);
	virtual $StringArray* getMemoryPoolNames() override;
	virtual $Array<::java::lang::management::MemoryPoolMXBean>* getMemoryPools();
	$Array<::java::lang::management::MemoryPoolMXBean>* getMemoryPools0();
	virtual $String* getName() override;
	virtual $Array<::javax::management::MBeanNotificationInfo>* getNotificationInfo() override;
	virtual ::javax::management::ObjectName* getObjectName() override;
	virtual bool isValid() override;
	virtual $String* toString() override;
	$String* name = nullptr;
	bool isValid$ = false;
	$Array<::java::lang::management::MemoryPoolMXBean>* pools = nullptr;
	$Array<::javax::management::MBeanNotificationInfo>* notifInfo = nullptr;
};

	} // management
} // sun

#endif // _sun_management_MemoryManagerImpl_h_