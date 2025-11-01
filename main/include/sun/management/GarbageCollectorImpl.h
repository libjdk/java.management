#ifndef _sun_management_GarbageCollectorImpl_h_
#define _sun_management_GarbageCollectorImpl_h_
//$ class sun.management.GarbageCollectorImpl
//$ extends sun.management.MemoryManagerImpl
//$ implements java.lang.management.GarbageCollectorMXBean

#include <java/lang/Array.h>
#include <java/lang/management/GarbageCollectorMXBean.h>
#include <sun/management/MemoryManagerImpl.h>

namespace javax {
	namespace management {
		class MBeanNotificationInfo;
		class ObjectName;
	}
}

namespace sun {
	namespace management {

class $import GarbageCollectorImpl : public ::sun::management::MemoryManagerImpl, public ::java::lang::management::GarbageCollectorMXBean {
	$class(GarbageCollectorImpl, $NO_CLASS_INIT, ::sun::management::MemoryManagerImpl, ::java::lang::management::GarbageCollectorMXBean)
public:
	GarbageCollectorImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* name);
	virtual int64_t getCollectionCount() override;
	virtual int64_t getCollectionTime() override;
	virtual $StringArray* getMemoryPoolNames() override;
	virtual $String* getName() override;
	virtual $Array<::javax::management::MBeanNotificationInfo>* getNotificationInfo() override;
	virtual ::javax::management::ObjectName* getObjectName() override;
	virtual bool isValid() override;
	virtual $String* toString() override;
};

	} // management
} // sun

#endif // _sun_management_GarbageCollectorImpl_h_