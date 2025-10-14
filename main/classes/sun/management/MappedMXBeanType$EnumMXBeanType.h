#ifndef _sun_management_MappedMXBeanType$EnumMXBeanType_h_
#define _sun_management_MappedMXBeanType$EnumMXBeanType_h_
//$ class sun.management.MappedMXBeanType$EnumMXBeanType
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

class $export MappedMXBeanType$EnumMXBeanType : public ::sun::management::MappedMXBeanType {
	$class(MappedMXBeanType$EnumMXBeanType, $NO_CLASS_INIT, ::sun::management::MappedMXBeanType)
public:
	MappedMXBeanType$EnumMXBeanType();
	void init$($Class* c);
	virtual ::java::lang::reflect::Type* getJavaType() override;
	virtual $String* getName() override;
	virtual $Object* toJavaTypeData(Object$* data) override;
	virtual $Object* toOpenTypeData(Object$* data) override;
	$Class* enumClass = nullptr;
};

	} // management
} // sun

#endif // _sun_management_MappedMXBeanType$EnumMXBeanType_h_