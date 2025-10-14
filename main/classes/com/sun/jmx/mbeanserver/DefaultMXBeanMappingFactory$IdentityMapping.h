#ifndef _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$IdentityMapping_h_
#define _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$IdentityMapping_h_
//$ class com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$IdentityMapping
//$ extends com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$NonNullMXBeanMapping.h>

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

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class DefaultMXBeanMappingFactory$IdentityMapping : public ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$NonNullMXBeanMapping {
	$class(DefaultMXBeanMappingFactory$IdentityMapping, $NO_CLASS_INIT, ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$NonNullMXBeanMapping)
public:
	DefaultMXBeanMappingFactory$IdentityMapping();
	void init$(::java::lang::reflect::Type* targetType, ::javax::management::openmbean::OpenType* openType);
	virtual $Object* fromNonNullOpenValue(Object$* openValue) override;
	virtual bool isIdentity() override;
	virtual $Object* toNonNullOpenValue(Object$* javaValue) override;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$IdentityMapping_h_