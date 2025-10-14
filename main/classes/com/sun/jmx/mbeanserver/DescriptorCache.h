#ifndef _com_sun_jmx_mbeanserver_DescriptorCache_h_
#define _com_sun_jmx_mbeanserver_DescriptorCache_h_
//$ class com.sun.jmx.mbeanserver.DescriptorCache
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class WeakHashMap;
	}
}
namespace javax {
	namespace management {
		class Descriptor;
		class ImmutableDescriptor;
		class JMX;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class DescriptorCache : public ::java::lang::Object {
	$class(DescriptorCache, 0, ::java::lang::Object)
public:
	DescriptorCache();
	void init$();
	virtual ::javax::management::ImmutableDescriptor* get(::javax::management::ImmutableDescriptor* descriptor);
	static ::com::sun::jmx::mbeanserver::DescriptorCache* getInstance();
	static ::com::sun::jmx::mbeanserver::DescriptorCache* getInstance(::javax::management::JMX* proof);
	virtual ::javax::management::ImmutableDescriptor* union$($Array<::javax::management::Descriptor>* descriptors);
	static ::com::sun::jmx::mbeanserver::DescriptorCache* instance;
	::java::util::WeakHashMap* map = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_DescriptorCache_h_