#ifndef _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$Mappings_h_
#define _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$Mappings_h_
//$ class com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$Mappings
//$ extends java.util.WeakHashMap

#include <java/util/WeakHashMap.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class DefaultMXBeanMappingFactory$Mappings : public ::java::util::WeakHashMap {
	$class(DefaultMXBeanMappingFactory$Mappings, $NO_CLASS_INIT, ::java::util::WeakHashMap)
public:
	DefaultMXBeanMappingFactory$Mappings();
	void init$();
	using ::java::util::WeakHashMap::remove;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_DefaultMXBeanMappingFactory$Mappings_h_