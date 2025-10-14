#ifndef _javax_management_loading_MLetObjectInputStream_h_
#define _javax_management_loading_MLetObjectInputStream_h_
//$ class javax.management.loading.MLetObjectInputStream
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
namespace javax {
	namespace management {
		namespace loading {
			class MLet;
		}
	}
}

namespace javax {
	namespace management {
		namespace loading {

class MLetObjectInputStream : public ::java::io::ObjectInputStream {
	$class(MLetObjectInputStream, $NO_CLASS_INIT, ::java::io::ObjectInputStream)
public:
	MLetObjectInputStream();
	void init$(::java::io::InputStream* in, ::javax::management::loading::MLet* loader);
	virtual ::java::lang::ClassLoader* getClassLoader();
	$Class* primitiveType(char16_t c);
	using ::java::io::ObjectInputStream::read;
	virtual $Class* resolveClass(::java::io::ObjectStreamClass* objectstreamclass) override;
	::javax::management::loading::MLet* loader = nullptr;
};

		} // loading
	} // management
} // javax

#endif // _javax_management_loading_MLetObjectInputStream_h_