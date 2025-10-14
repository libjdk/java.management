#ifndef _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters_h_
#define _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters_h_
//$ class com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters
//$ extends com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilder

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilder.h>
#include <java/lang/Array.h>

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
		class Throwable;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}
namespace javax {
	namespace management {
		namespace openmbean {
			class CompositeData;
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters : public ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilder {
	$class(DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters, $NO_CLASS_INIT, ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilder)
public:
	DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters();
	void init$($Class* targetClass, $StringArray* itemNames, $Array<::com::sun::jmx::mbeanserver::MXBeanMapping>* getterConverters);
	virtual $String* applicable($Array<::java::lang::reflect::Method>* getters) override;
	virtual $Object* fromCompositeData(::javax::management::openmbean::CompositeData* cd, $StringArray* itemNames, $Array<::com::sun::jmx::mbeanserver::MXBeanMapping>* converters) override;
	virtual $Throwable* possibleCause() override;
	$Array<::com::sun::jmx::mbeanserver::MXBeanMapping>* getterConverters = nullptr;
	$Throwable* possibleCause$ = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$CompositeBuilderCheckGetters_h_