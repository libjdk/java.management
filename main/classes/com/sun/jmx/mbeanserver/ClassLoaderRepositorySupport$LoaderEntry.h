#ifndef _com_sun_jmx_mbeanserver_ClassLoaderRepositorySupport$LoaderEntry_h_
#define _com_sun_jmx_mbeanserver_ClassLoaderRepositorySupport$LoaderEntry_h_
//$ class com.sun.jmx.mbeanserver.ClassLoaderRepositorySupport$LoaderEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class ClassLoader;
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

class ClassLoaderRepositorySupport$LoaderEntry : public ::java::lang::Object {
	$class(ClassLoaderRepositorySupport$LoaderEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClassLoaderRepositorySupport$LoaderEntry();
	void init$(::javax::management::ObjectName* name, ::java::lang::ClassLoader* loader);
	::javax::management::ObjectName* name = nullptr;
	::java::lang::ClassLoader* loader = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_ClassLoaderRepositorySupport$LoaderEntry_h_