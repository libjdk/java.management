#ifndef _sun_management_ClassLoadingImpl_h_
#define _sun_management_ClassLoadingImpl_h_
//$ class sun.management.ClassLoadingImpl
//$ extends java.lang.management.ClassLoadingMXBean

#include <java/lang/management/ClassLoadingMXBean.h>

namespace javax {
	namespace management {
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

class ClassLoadingImpl : public ::java::lang::management::ClassLoadingMXBean {
	$class(ClassLoadingImpl, $NO_CLASS_INIT, ::java::lang::management::ClassLoadingMXBean)
public:
	ClassLoadingImpl();
	void init$(::sun::management::VMManagement* vm);
	virtual int32_t getLoadedClassCount() override;
	virtual ::javax::management::ObjectName* getObjectName() override;
	virtual int64_t getTotalLoadedClassCount() override;
	virtual int64_t getUnloadedClassCount() override;
	virtual bool isVerbose() override;
	virtual void setVerbose(bool value) override;
	static void setVerboseClass(bool value);
	::sun::management::VMManagement* jvm = nullptr;
};

	} // management
} // sun

#endif // _sun_management_ClassLoadingImpl_h_