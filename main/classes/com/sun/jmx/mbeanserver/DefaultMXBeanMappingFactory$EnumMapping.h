#ifndef _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$EnumMapping_h_
#define _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$EnumMapping_h_
//$ class com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$EnumMapping
//$ extends com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping

#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$NonNullMXBeanMapping.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class DefaultMXBeanMappingFactory$EnumMapping : public ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$NonNullMXBeanMapping {
	$class(DefaultMXBeanMappingFactory$EnumMapping, $NO_CLASS_INIT, ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$NonNullMXBeanMapping)
public:
	DefaultMXBeanMappingFactory$EnumMapping();
	void init$($Class* enumClass);
	virtual $Object* fromNonNullOpenValue(Object$* value) override;
	virtual $Object* toNonNullOpenValue(Object$* value) override;
	$Class* enumClass = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$EnumMapping_h_