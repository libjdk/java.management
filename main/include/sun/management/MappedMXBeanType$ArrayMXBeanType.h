#ifndef _sun_management_MappedMXBeanType$ArrayMXBeanType_h_
#define _sun_management_MappedMXBeanType$ArrayMXBeanType_h_
//$ class sun.management.MappedMXBeanType$ArrayMXBeanType
//$ extends sun.management.MappedMXBeanType

#include <sun/management/MappedMXBeanType.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Type;
		}
	}
}

namespace sun {
	namespace management {

class $import MappedMXBeanType$ArrayMXBeanType : public ::sun::management::MappedMXBeanType {
	$class(MappedMXBeanType$ArrayMXBeanType, $NO_CLASS_INIT, ::sun::management::MappedMXBeanType)
public:
	MappedMXBeanType$ArrayMXBeanType();
	void init$($Class* c);
	void init$();
	virtual ::java::lang::reflect::Type* getJavaType() override;
	virtual $String* getName() override;
	virtual $Object* toJavaTypeData(Object$* data) override;
	virtual $Object* toOpenTypeData(Object$* data) override;
	$Class* arrayClass = nullptr;
	::sun::management::MappedMXBeanType* componentType = nullptr;
	::sun::management::MappedMXBeanType* baseElementType = nullptr;
};

	} // management
} // sun

#endif // _sun_management_MappedMXBeanType$ArrayMXBeanType_h_