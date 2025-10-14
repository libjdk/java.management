#ifndef _com_sun_jmx_mbeanserver_ModifiableClassLoaderRepository_h_
#define _com_sun_jmx_mbeanserver_ModifiableClassLoaderRepository_h_
//$ interface com.sun.jmx.mbeanserver.ModifiableClassLoaderRepository
//$ extends javax.management.loading.ClassLoaderRepository

#include <javax/management/loading/ClassLoaderRepository.h>

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

class ModifiableClassLoaderRepository : public ::javax::management::loading::ClassLoaderRepository {
	$interface(ModifiableClassLoaderRepository, $NO_CLASS_INIT, ::javax::management::loading::ClassLoaderRepository)
public:
	virtual void addClassLoader(::java::lang::ClassLoader* loader) {}
	virtual void addClassLoader(::javax::management::ObjectName* name, ::java::lang::ClassLoader* loader) {}
	virtual ::java::lang::ClassLoader* getClassLoader(::javax::management::ObjectName* name) {return nullptr;}
	virtual void removeClassLoader(::java::lang::ClassLoader* loader) {}
	virtual void removeClassLoader(::javax::management::ObjectName* name) {}
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_ModifiableClassLoaderRepository_h_