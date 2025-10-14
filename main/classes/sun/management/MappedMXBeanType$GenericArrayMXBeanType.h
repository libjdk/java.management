#ifndef _sun_management_MappedMXBeanType$GenericArrayMXBeanType_h_
#define _sun_management_MappedMXBeanType$GenericArrayMXBeanType_h_
//$ class sun.management.MappedMXBeanType$GenericArrayMXBeanType
//$ extends sun.management.MappedMXBeanType$ArrayMXBeanType

#include <sun/management/MappedMXBeanType$ArrayMXBeanType.h>

namespace java {
	namespace lang {
		namespace reflect {
			class GenericArrayType;
			class Type;
		}
	}
}

namespace sun {
	namespace management {

class $export MappedMXBeanType$GenericArrayMXBeanType : public ::sun::management::MappedMXBeanType$ArrayMXBeanType {
	$class(MappedMXBeanType$GenericArrayMXBeanType, $NO_CLASS_INIT, ::sun::management::MappedMXBeanType$ArrayMXBeanType)
public:
	MappedMXBeanType$GenericArrayMXBeanType();
	void init$(::java::lang::reflect::GenericArrayType* gat);
	virtual ::java::lang::reflect::Type* getJavaType() override;
	virtual $String* getName() override;
	::java::lang::reflect::GenericArrayType* gtype = nullptr;
};

	} // management
} // sun

#endif // _sun_management_MappedMXBeanType$GenericArrayMXBeanType_h_