#ifndef _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$NonNullMXBeanMapping_h_
#define _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$NonNullMXBeanMapping_h_
//$ class com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping
//$ extends com.sun.jmx.mbeanserver.MXBeanMapping

#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>

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

class DefaultMXBeanMappingFactory$NonNullMXBeanMapping : public ::com::sun::jmx::mbeanserver::MXBeanMapping {
	$class(DefaultMXBeanMappingFactory$NonNullMXBeanMapping, $NO_CLASS_INIT, ::com::sun::jmx::mbeanserver::MXBeanMapping)
public:
	DefaultMXBeanMappingFactory$NonNullMXBeanMapping();
	void init$(::java::lang::reflect::Type* javaType, ::javax::management::openmbean::OpenType* openType);
	virtual $Object* fromNonNullOpenValue(Object$* openValue) {return nullptr;}
	virtual $Object* fromOpenValue(Object$* openValue) override;
	virtual bool isIdentity();
	virtual $Object* toNonNullOpenValue(Object$* javaValue) {return nullptr;}
	virtual $Object* toOpenValue(Object$* javaValue) override;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$NonNullMXBeanMapping_h_