#ifndef _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$CollectionMapping_h_
#define _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$CollectionMapping_h_
//$ class com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CollectionMapping
//$ extends com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$NonNullMXBeanMapping.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class MXBeanMapping;
			}
		}
	}
}
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
			class ArrayType;
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class DefaultMXBeanMappingFactory$CollectionMapping : public ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$NonNullMXBeanMapping {
	$class(DefaultMXBeanMappingFactory$CollectionMapping, 0, ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$NonNullMXBeanMapping)
public:
	DefaultMXBeanMappingFactory$CollectionMapping();
	void init$(::java::lang::reflect::Type* targetType, ::javax::management::openmbean::ArrayType* openArrayType, $Class* openArrayClass, ::com::sun::jmx::mbeanserver::MXBeanMapping* elementMapping);
	virtual void checkReconstructible() override;
	virtual $Object* fromNonNullOpenValue(Object$* openValue) override;
	virtual $Object* toNonNullOpenValue(Object$* value) override;
	static bool $assertionsDisabled;
	$Class* collectionClass = nullptr;
	::com::sun::jmx::mbeanserver::MXBeanMapping* elementMapping = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$CollectionMapping_h_