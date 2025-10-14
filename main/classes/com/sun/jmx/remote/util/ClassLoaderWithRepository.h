#ifndef _com_sun_jmx_remote_util_ClassLoaderWithRepository_h_
#define _com_sun_jmx_remote_util_ClassLoaderWithRepository_h_
//$ class com.sun.jmx.remote.util.ClassLoaderWithRepository
//$ extends java.lang.ClassLoader

#include <java/lang/ClassLoader.h>

namespace javax {
	namespace management {
		namespace loading {
			class ClassLoaderRepository;
		}
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace util {

class $export ClassLoaderWithRepository : public ::java::lang::ClassLoader {
	$class(ClassLoaderWithRepository, $NO_CLASS_INIT, ::java::lang::ClassLoader)
public:
	ClassLoaderWithRepository();
	using ::java::lang::ClassLoader::findClass;
	void init$(::javax::management::loading::ClassLoaderRepository* clr, ::java::lang::ClassLoader* cl2);
	virtual $Class* findClass($String* name) override;
	::javax::management::loading::ClassLoaderRepository* repository = nullptr;
	::java::lang::ClassLoader* cl2 = nullptr;
};

				} // util
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_util_ClassLoaderWithRepository_h_