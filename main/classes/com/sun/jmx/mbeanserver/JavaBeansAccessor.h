#ifndef _com_sun_jmx_mbeanserver_JavaBeansAccessor_h_
#define _com_sun_jmx_mbeanserver_JavaBeansAccessor_h_
//$ class com.sun.jmx.mbeanserver.JavaBeansAccessor
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
			class Method;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaBeansAccess;
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class JavaBeansAccessor : public ::java::lang::Object {
	$class(JavaBeansAccessor, 0, ::java::lang::Object)
public:
	JavaBeansAccessor();
	void init$();
	static $StringArray* getConstructorPropertiesValue(::java::lang::reflect::Constructor* ctr);
	static ::jdk::internal::access::JavaBeansAccess* getJavaBeansAccess();
	static ::java::lang::reflect::Method* getReadMethod($Class* clazz, $String* property);
	static bool isAvailable();
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_JavaBeansAccessor_h_