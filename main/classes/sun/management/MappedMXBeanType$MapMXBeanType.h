#ifndef _sun_management_MappedMXBeanType$MapMXBeanType_h_
#define _sun_management_MappedMXBeanType$MapMXBeanType_h_
//$ class sun.management.MappedMXBeanType$MapMXBeanType
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

class $export MappedMXBeanType$MapMXBeanType : public ::sun::management::MappedMXBeanType {
	$class(MappedMXBeanType$MapMXBeanType, 0, ::sun::management::MappedMXBeanType)
public:
	MappedMXBeanType$MapMXBeanType();
	void init$(::java::lang::reflect::ParameterizedType* pt);
	virtual ::java::lang::reflect::Type* getJavaType() override;
	virtual $String* getName() override;
	virtual $Object* toJavaTypeData(Object$* data) override;
	virtual $Object* toOpenTypeData(Object$* data) override;
	static bool $assertionsDisabled;
	::java::lang::reflect::ParameterizedType* javaType = nullptr;
	::sun::management::MappedMXBeanType* keyType = nullptr;
	::sun::management::MappedMXBeanType* valueType = nullptr;
	$String* typeName = nullptr;
};

	} // management
} // sun

#endif // _sun_management_MappedMXBeanType$MapMXBeanType_h_