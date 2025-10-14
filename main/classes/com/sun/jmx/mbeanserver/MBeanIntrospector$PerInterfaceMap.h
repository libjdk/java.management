#ifndef _com_sun_jmx_mbeanserver_MBeanIntrospector$PerInterfaceMap_h_
#define _com_sun_jmx_mbeanserver_MBeanIntrospector$PerInterfaceMap_h_
//$ class com.sun.jmx.mbeanserver.MBeanIntrospector$PerInterfaceMap
//$ extends java.util.WeakHashMap

#include <java/util/WeakHashMap.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class MBeanIntrospector$PerInterfaceMap : public ::java::util::WeakHashMap {
	$class(MBeanIntrospector$PerInterfaceMap, $NO_CLASS_INIT, ::java::util::WeakHashMap)
public:
	MBeanIntrospector$PerInterfaceMap();
	void init$();
	using ::java::util::WeakHashMap::remove;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_MBeanIntrospector$PerInterfaceMap_h_