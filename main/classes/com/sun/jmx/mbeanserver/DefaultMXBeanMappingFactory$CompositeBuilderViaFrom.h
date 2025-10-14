#ifndef _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$CompositeBuilderViaFrom_h_
#define _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$CompositeBuilderViaFrom_h_
//$ class com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaFrom
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

class DefaultMXBeanMappingFactory$CompositeBuilderViaFrom : public ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilder {
	$class(DefaultMXBeanMappingFactory$CompositeBuilderViaFrom, $NO_CLASS_INIT, ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilder)
public:
	DefaultMXBeanMappingFactory$CompositeBuilderViaFrom();
	void init$($Class* targetClass, $StringArray* itemNames);
	virtual $String* applicable($Array<::java::lang::reflect::Method>* getters) override;
	virtual $Object* fromCompositeData(::javax::management::openmbean::CompositeData* cd, $StringArray* itemNames, $Array<::com::sun::jmx::mbeanserver::MXBeanMapping>* converters) override;
	::java::lang::reflect::Method* fromMethod = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$CompositeBuilderViaFrom_h_