#ifndef _sun_management_ManagementFactoryHelper$1_h_
#define _sun_management_ManagementFactoryHelper$1_h_
//$ class sun.management.ManagementFactoryHelper$1
//$ extends java.lang.management.BufferPoolMXBean

#include <java/lang/management/BufferPoolMXBean.h>

namespace javax {
	namespace management {
		class ObjectName;
	}
}
namespace jdk {
	namespace internal {
		namespace misc {
			class VM$BufferPool;
		}
	}
}

namespace sun {
	namespace management {

class ManagementFactoryHelper$1 : public ::java::lang::management::BufferPoolMXBean {
	$class(ManagementFactoryHelper$1, $NO_CLASS_INIT, ::java::lang::management::BufferPoolMXBean)
public:
	ManagementFactoryHelper$1();
	void init$(::jdk::internal::misc::VM$BufferPool* val$pool);
	virtual int64_t getCount() override;
	virtual int64_t getMemoryUsed() override;
	virtual $String* getName() override;
	virtual ::javax::management::ObjectName* getObjectName() override;
	virtual int64_t getTotalCapacity() override;
	::jdk::internal::misc::VM$BufferPool* val$pool = nullptr;
	$volatile(::javax::management::ObjectName*) objname = nullptr;
};

	} // management
} // sun

#endif // _sun_management_ManagementFactoryHelper$1_h_