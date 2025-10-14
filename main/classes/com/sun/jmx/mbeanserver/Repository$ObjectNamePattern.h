#ifndef _com_sun_jmx_mbeanserver_Repository$ObjectNamePattern_h_
#define _com_sun_jmx_mbeanserver_Repository$ObjectNamePattern_h_
//$ class com.sun.jmx.mbeanserver.Repository$ObjectNamePattern
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace management {
		class ObjectName;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class Repository$ObjectNamePattern : public ::java::lang::Object {
	$class(Repository$ObjectNamePattern, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Repository$ObjectNamePattern();
	void init$(::javax::management::ObjectName* pattern);
	void init$(bool propertyListPattern, bool propertyValuePattern, $String* canonicalProps, ::java::util::Map* keyPropertyList, ::javax::management::ObjectName* pattern);
	bool matchKeys(::javax::management::ObjectName* name);
	$StringArray* keys = nullptr;
	$StringArray* values = nullptr;
	$String* properties = nullptr;
	bool isPropertyListPattern = false;
	bool isPropertyValuePattern = false;
	::javax::management::ObjectName* pattern = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_Repository$ObjectNamePattern_h_