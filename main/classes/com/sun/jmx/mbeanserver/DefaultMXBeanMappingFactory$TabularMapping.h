#ifndef _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$TabularMapping_h_
#define _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$TabularMapping_h_
//$ class com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$TabularMapping
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
			class TabularType;
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class DefaultMXBeanMappingFactory$TabularMapping : public ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$NonNullMXBeanMapping {
	$class(DefaultMXBeanMappingFactory$TabularMapping, $NO_CLASS_INIT, ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$NonNullMXBeanMapping)
public:
	DefaultMXBeanMappingFactory$TabularMapping();
	void init$(::java::lang::reflect::Type* targetType, bool sortedMap, ::javax::management::openmbean::TabularType* tabularType, ::com::sun::jmx::mbeanserver::MXBeanMapping* keyConverter, ::com::sun::jmx::mbeanserver::MXBeanMapping* valueConverter);
	virtual void checkReconstructible() override;
	virtual $Object* fromNonNullOpenValue(Object$* openValue) override;
	virtual $Object* toNonNullOpenValue(Object$* value) override;
	bool sortedMap = false;
	::com::sun::jmx::mbeanserver::MXBeanMapping* keyMapping = nullptr;
	::com::sun::jmx::mbeanserver::MXBeanMapping* valueMapping = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$TabularMapping_h_