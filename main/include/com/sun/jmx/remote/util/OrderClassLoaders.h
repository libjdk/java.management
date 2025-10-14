#ifndef _com_sun_jmx_remote_util_OrderClassLoaders_h_
#define _com_sun_jmx_remote_util_OrderClassLoaders_h_
//$ class com.sun.jmx.remote.util.OrderClassLoaders
//$ extends java.lang.ClassLoader

#include <java/lang/ClassLoader.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace util {

class $import OrderClassLoaders : public ::java::lang::ClassLoader {
	$class(OrderClassLoaders, $NO_CLASS_INIT, ::java::lang::ClassLoader)
public:
	OrderClassLoaders();
	void init$(::java::lang::ClassLoader* cl1, ::java::lang::ClassLoader* cl2);
	using ::java::lang::ClassLoader::loadClass;
	virtual $Class* loadClass($String* name, bool resolve) override;
	::java::lang::ClassLoader* cl2 = nullptr;
};

				} // util
			} // remote
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_remote_util_OrderClassLoaders_h_