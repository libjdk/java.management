#ifndef _sun_management_MappedMXBeanType$ListMXBeanType_h_
#define _sun_management_MappedMXBeanType$ListMXBeanType_h_
//$ class sun.management.MappedMXBeanType$ListMXBeanType
//$ extends sun.management.MappedMXBeanType

#include <sun/management/MappedMXBeanType.h>

namespace java {
	namespace lang {
		namespace reflect {
			class ParameterizedType;
			class Type;
		}
	}
}

namespace sun {
	namespace management {

class $import MappedMXBeanType$ListMXBeanType : public ::sun::management::MappedMXBeanType {
	$class(MappedMXBeanType$ListMXBeanType, 0, ::sun::management::MappedMXBeanType)
public:
	MappedMXBeanType$ListMXBeanType();
	void init$(::java::lang::reflect::ParameterizedType* pt);
	virtual ::java::lang::reflect::Type* getJavaType() override;
	virtual $String* getName() override;
	virtual $Object* toJavaTypeData(Object$* data) override;
	virtual $Object* toOpenTypeData(Object$* data) override;
	static bool $assertionsDisabled;
	::java::lang::reflect::ParameterizedType* javaType = nullptr;
	::sun::management::MappedMXBeanType* paramType = nullptr;
	$String* typeName = nullptr;
};

	} // management
} // sun

#endif // _sun_management_MappedMXBeanType$ListMXBeanType_h_