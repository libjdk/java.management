#ifndef _sun_management_MappedMXBeanType$BasicMXBeanType_h_
#define _sun_management_MappedMXBeanType$BasicMXBeanType_h_
//$ class sun.management.MappedMXBeanType$BasicMXBeanType
//$ extends sun.management.MappedMXBeanType

#include <sun/management/MappedMXBeanType.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Type;
		}
	}
}
namespace javax {
	namespace management {
		namespace openmbean {
			class OpenType;
		}
	}
}

namespace sun {
	namespace management {

class $import MappedMXBeanType$BasicMXBeanType : public ::sun::management::MappedMXBeanType {
	$class(MappedMXBeanType$BasicMXBeanType, $NO_CLASS_INIT, ::sun::management::MappedMXBeanType)
public:
	MappedMXBeanType$BasicMXBeanType();
	void init$($Class* c, ::javax::management::openmbean::OpenType* openType);
	virtual ::java::lang::reflect::Type* getJavaType() override;
	virtual $String* getName() override;
	virtual $Object* toJavaTypeData(Object$* data) override;
	virtual $Object* toOpenTypeData(Object$* data) override;
	$Class* basicType = nullptr;
};

	} // management
} // sun

#endif // _sun_management_MappedMXBeanType$BasicMXBeanType_h_