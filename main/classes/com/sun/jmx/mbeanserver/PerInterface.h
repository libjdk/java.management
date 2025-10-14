#ifndef _com_sun_jmx_mbeanserver_PerInterface_h_
#define _com_sun_jmx_mbeanserver_PerInterface_h_
//$ class com.sun.jmx.mbeanserver.PerInterface
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class MBeanAnalyzer;
				class MBeanIntrospector;
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace management {
		class MBeanInfo;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class PerInterface : public ::java::lang::Object {
	$class(PerInterface, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PerInterface();
	void init$($Class* mbeanInterface, ::com::sun::jmx::mbeanserver::MBeanIntrospector* introspector, ::com::sun::jmx::mbeanserver::MBeanAnalyzer* analyzer, ::javax::management::MBeanInfo* mbeanInfo);
	$Object* getAttribute(Object$* resource, $String* attribute, Object$* cookie);
	::javax::management::MBeanInfo* getMBeanInfo();
	$Class* getMBeanInterface();
	$Object* invoke(Object$* resource, $String* operation, $ObjectArray* params, $StringArray* signature, Object$* cookie);
	bool isMXBean();
	$Object* noSuchMethod($String* msg, Object$* resource, $String* operation, $ObjectArray* params, $StringArray* signature, Object$* cookie);
	void setAttribute(Object$* resource, $String* attribute, Object$* value, Object$* cookie);
	$String* sigString($StringArray* signature);
	$Class* mbeanInterface = nullptr;
	::com::sun::jmx::mbeanserver::MBeanIntrospector* introspector = nullptr;
	::javax::management::MBeanInfo* mbeanInfo = nullptr;
	::java::util::Map* getters = nullptr;
	::java::util::Map* setters = nullptr;
	::java::util::Map* ops = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_PerInterface_h_