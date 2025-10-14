#ifndef _com_sun_jmx_mbeanserver_MBeanInstantiator_h_
#define _com_sun_jmx_mbeanserver_MBeanInstantiator_h_
//$ class com.sun.jmx.mbeanserver.MBeanInstantiator
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class ModifiableClassLoaderRepository;
			}
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
		}
	}
}
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

class MBeanInstantiator : public ::java::lang::Object {
	$class(MBeanInstantiator, 0, ::java::lang::Object)
public:
	MBeanInstantiator();
	void init$(::com::sun::jmx::mbeanserver::ModifiableClassLoaderRepository* clr);
	static void checkMBeanPermission($Class* clazz, $String* member, ::javax::management::ObjectName* objectName, $String* actions);
	static void checkMBeanPermission($String* classname, $String* member, ::javax::management::ObjectName* objectName, $String* actions);
	virtual ::java::io::ObjectInputStream* deserialize(::java::lang::ClassLoader* loader, $bytes* data);
	virtual ::java::io::ObjectInputStream* deserialize($String* className, ::javax::management::ObjectName* loaderName, $bytes* data, ::java::lang::ClassLoader* loader);
	static void ensureClassAccess($Class* clazz);
	virtual $Class* findClass($String* className, ::java::lang::ClassLoader* loader);
	virtual $Class* findClass($String* className, ::javax::management::ObjectName* aLoader);
	virtual $Class* findClassWithDefaultLoaderRepository($String* className);
	::java::lang::reflect::Constructor* findConstructor($Class* c, $ClassArray* params);
	virtual $ClassArray* findSignatureClasses($StringArray* signature, ::java::lang::ClassLoader* loader);
	::java::lang::ClassLoader* getClassLoader(::javax::management::ObjectName* name);
	virtual ::com::sun::jmx::mbeanserver::ModifiableClassLoaderRepository* getClassLoaderRepository();
	virtual $Object* instantiate($Class* theClass);
	virtual $Object* instantiate($Class* theClass, $ObjectArray* params, $StringArray* signature, ::java::lang::ClassLoader* loader);
	virtual $Object* instantiate($String* className);
	virtual $Object* instantiate($String* className, ::javax::management::ObjectName* loaderName, ::java::lang::ClassLoader* loader);
	virtual $Object* instantiate($String* className, $ObjectArray* params, $StringArray* signature, ::java::lang::ClassLoader* loader);
	virtual $Object* instantiate($String* className, ::javax::management::ObjectName* loaderName, $ObjectArray* params, $StringArray* signature, ::java::lang::ClassLoader* loader);
	static $Class* loadClass($String* className, ::java::lang::ClassLoader* loader);
	static $ClassArray* loadSignatureClasses($StringArray* signature, ::java::lang::ClassLoader* loader);
	virtual void testCreation($Class* c);
	::com::sun::jmx::mbeanserver::ModifiableClassLoaderRepository* clr = nullptr;
	static ::java::util::Map* primitiveClasses;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#endif // _com_sun_jmx_mbeanserver_MBeanInstantiator_h_