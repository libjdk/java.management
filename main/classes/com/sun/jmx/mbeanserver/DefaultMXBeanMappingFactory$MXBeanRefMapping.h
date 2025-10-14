#ifndef _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$MXBeanRefMapping_h_
#define _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$MXBeanRefMapping_h_
//$ class com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$MXBeanRefMapping
//$ extends com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$NonNullMXBeanMapping.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class MXBeanLookup;
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

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class DefaultMXBeanMappingFactory$MXBeanRefMapping : public ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$NonNullMXBeanMapping {
	$class(DefaultMXBeanMappingFactory$MXBeanRefMapping, $NO_CLASS_INIT, ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$NonNullMXBeanMapping)
public:
	DefaultMXBeanMappingFactory$MXBeanRefMapping();
	void init$(::java::lang::reflect::Type* intf);
	virtual $Object* fromNonNullOpenValue(Object$* openValue) override;
	::com::sun::jmx::mbeanserver::MXBeanLookup* lookupNotNull($Class* excClass);
	virtual $Object* toNonNullOpenValue(Object$* javaValue) override;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$MXBeanRefMapping_h_