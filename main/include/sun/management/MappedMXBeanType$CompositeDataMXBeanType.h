#ifndef _sun_management_MappedMXBeanType$CompositeDataMXBeanType_h_
#define _sun_management_MappedMXBeanType$CompositeDataMXBeanType_h_
//$ class sun.management.MappedMXBeanType$CompositeDataMXBeanType
//$ extends sun.management.MappedMXBeanType

#include <sun/management/MappedMXBeanType.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
			class Type;
		}
	}
}

namespace sun {
	namespace management {

class $import MappedMXBeanType$CompositeDataMXBeanType : public ::sun::management::MappedMXBeanType {
	$class(MappedMXBeanType$CompositeDataMXBeanType, $NO_CLASS_INIT, ::sun::management::MappedMXBeanType)
public:
	MappedMXBeanType$CompositeDataMXBeanType();
	void init$($Class* c);
	virtual ::java::lang::reflect::Type* getJavaType() override;
	virtual $String* getName() override;
	virtual $Object* toJavaTypeData(Object$* data) override;
	virtual $Object* toOpenTypeData(Object$* data) override;
	$Class* javaClass = nullptr;
	bool isCompositeData = false;
	::java::lang::reflect::Method* fromMethod = nullptr;
	::java::lang::reflect::Method* toMethod = nullptr;
};

	} // management
} // sun

#endif // _sun_management_MappedMXBeanType$CompositeDataMXBeanType_h_