#ifndef _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$CompositeBuilderViaProxy_h_
#define _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$CompositeBuilderViaProxy_h_
//$ class com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaProxy
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

class DefaultMXBeanMappingFactory$CompositeBuilderViaProxy : public ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilder {
	$class(DefaultMXBeanMappingFactory$CompositeBuilderViaProxy, $NO_CLASS_INIT, ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilder)
public:
	DefaultMXBeanMappingFactory$CompositeBuilderViaProxy();
	void init$($Class* targetClass, $StringArray* itemNames);
	virtual $String* applicable($Array<::java::lang::reflect::Method>* getters) override;
	virtual $Object* fromCompositeData(::javax::management::openmbean::CompositeData* cd, $StringArray* itemNames, $Array<::com::sun::jmx::mbeanserver::MXBeanMapping>* converters) override;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$CompositeBuilderViaProxy_h_