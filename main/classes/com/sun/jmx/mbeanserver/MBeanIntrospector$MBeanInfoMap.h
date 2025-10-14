#ifndef _com_sun_jmx_mbeanserver_MBeanIntrospector$MBeanInfoMap_h_
#define _com_sun_jmx_mbeanserver_MBeanIntrospector$MBeanInfoMap_h_
//$ class com.sun.jmx.mbeanserver.MBeanIntrospector$MBeanInfoMap
//$ extends java.util.WeakHashMap

#include <java/util/WeakHashMap.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class MBeanIntrospector$MBeanInfoMap : public ::java::util::WeakHashMap {
	$class(MBeanIntrospector$MBeanInfoMap, $NO_CLASS_INIT, ::java::util::WeakHashMap)
public:
	MBeanIntrospector$MBeanInfoMap();
	void init$();
	using ::java::util::WeakHashMap::remove;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_MBeanIntrospector$MBeanInfoMap_h_