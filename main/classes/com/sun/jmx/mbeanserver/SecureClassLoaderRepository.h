#ifndef _com_sun_jmx_mbeanserver_SecureClassLoaderRepository_h_
#define _com_sun_jmx_mbeanserver_SecureClassLoaderRepository_h_
//$ class com.sun.jmx.mbeanserver.SecureClassLoaderRepository
//$ extends javax.management.loading.ClassLoaderRepository

#include <javax/management/loading/ClassLoaderRepository.h>

namespace java {
	namespace lang {
		class ClassLoader;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

class SecureClassLoaderRepository : public ::javax::management::loading::ClassLoaderRepository {
	$class(SecureClassLoaderRepository, $NO_CLASS_INIT, ::javax::management::loading::ClassLoaderRepository)
public:
	SecureClassLoaderRepository();
	void init$(::javax::management::loading::ClassLoaderRepository* clr);
	virtual $Class* loadClass($String* className) override;
	virtual $Class* loadClassBefore(::java::lang::ClassLoader* loader, $String* className) override;
	virtual $Class* loadClassWithout(::java::lang::ClassLoader* loader, $String* className) override;
	::javax::management::loading::ClassLoaderRepository* clr = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_SecureClassLoaderRepository_h_