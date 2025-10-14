#ifndef _com_sun_jmx_mbeanserver_Introspector$SimpleIntrospector_h_
#define _com_sun_jmx_mbeanserver_Introspector$SimpleIntrospector_h_
//$ class com.sun.jmx.mbeanserver.Introspector$SimpleIntrospector
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("GET_METHOD_PREFIX")
#undef GET_METHOD_PREFIX
#pragma push_macro("IS_METHOD_PREFIX")
#undef IS_METHOD_PREFIX

namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class Introspector$SimpleIntrospector : public ::java::lang::Object {
	$class(Introspector$SimpleIntrospector, 0, ::java::lang::Object)
public:
	Introspector$SimpleIntrospector();
	void init$();
	static ::java::util::List* getCachedMethods($Class* clazz);
	static ::java::lang::reflect::Method* getReadMethod($Class* clazz, $String* property);
	static ::java::util::List* getReadMethods($Class* clazz);
	static bool isReadMethod(::java::lang::reflect::Method* method);
	static $String* GET_METHOD_PREFIX;
	static $String* IS_METHOD_PREFIX;
	static ::java::util::Map* cache;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#pragma pop_macro("GET_METHOD_PREFIX")
#pragma pop_macro("IS_METHOD_PREFIX")

#endif // _com_sun_jmx_mbeanserver_Introspector$SimpleIntrospector_h_