#ifndef _com_sun_jmx_mbeanserver_ObjectInputStreamWithLoader_h_
#define _com_sun_jmx_mbeanserver_ObjectInputStreamWithLoader_h_
//$ class com.sun.jmx.mbeanserver.ObjectInputStreamWithLoader
//$ extends java.io.ObjectInputStream

#include <java/io/ObjectInputStream.h>

namespace java {
	namespace io {
		class InputStream;
		class ObjectStreamClass;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class ObjectInputStreamWithLoader : public ::java::io::ObjectInputStream {
	$class(ObjectInputStreamWithLoader, $NO_CLASS_INIT, ::java::io::ObjectInputStream)
public:
	ObjectInputStreamWithLoader();
	void init$(::java::io::InputStream* in, ::java::lang::ClassLoader* theLoader);
	using ::java::io::ObjectInputStream::read;
	virtual $Class* resolveClass(::java::io::ObjectStreamClass* aClass) override;
	::java::lang::ClassLoader* loader = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_ObjectInputStreamWithLoader_h_