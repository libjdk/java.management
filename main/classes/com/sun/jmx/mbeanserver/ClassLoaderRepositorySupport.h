#ifndef _com_sun_jmx_mbeanserver_ClassLoaderRepositorySupport_h_
#define _com_sun_jmx_mbeanserver_ClassLoaderRepositorySupport_h_
//$ class com.sun.jmx.mbeanserver.ClassLoaderRepositorySupport
//$ extends com.sun.jmx.mbeanserver.ModifiableClassLoaderRepository

#include <com/sun/jmx/mbeanserver/ModifiableClassLoaderRepository.h>
#include <java/lang/Array.h>

#pragma push_macro("EMPTY_LOADER_ARRAY")
#undef EMPTY_LOADER_ARRAY

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {
				class ClassLoaderRepositorySupport$LoaderEntry;
			}
		}
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
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

class ClassLoaderRepositorySupport : public ::com::sun::jmx::mbeanserver::ModifiableClassLoaderRepository {
	$class(ClassLoaderRepositorySupport, 0, ::com::sun::jmx::mbeanserver::ModifiableClassLoaderRepository)
public:
	ClassLoaderRepositorySupport();
	void init$();
	bool add(::javax::management::ObjectName* name, ::java::lang::ClassLoader* cl);
	virtual void addClassLoader(::java::lang::ClassLoader* loader) override;
	virtual void addClassLoader(::javax::management::ObjectName* name, ::java::lang::ClassLoader* loader) override;
	virtual ::java::lang::ClassLoader* getClassLoader(::javax::management::ObjectName* name) override;
	virtual $Class* loadClass($String* className) override;
	$Class* loadClass($Array<::com::sun::jmx::mbeanserver::ClassLoaderRepositorySupport$LoaderEntry>* list, $String* className, ::java::lang::ClassLoader* without, ::java::lang::ClassLoader* stop);
	virtual $Class* loadClassBefore(::java::lang::ClassLoader* stop, $String* className) override;
	virtual $Class* loadClassWithout(::java::lang::ClassLoader* without, $String* className) override;
	bool remove(::javax::management::ObjectName* name, ::java::lang::ClassLoader* cl);
	virtual void removeClassLoader(::java::lang::ClassLoader* loader) override;
	virtual void removeClassLoader(::javax::management::ObjectName* name) override;
	void startValidSearch(::java::lang::ClassLoader* aloader, $String* className);
	void stopValidSearch(::java::lang::ClassLoader* aloader, $String* className);
	static $Array<::com::sun::jmx::mbeanserver::ClassLoaderRepositorySupport$LoaderEntry>* EMPTY_LOADER_ARRAY;
	$Array<::com::sun::jmx::mbeanserver::ClassLoaderRepositorySupport$LoaderEntry>* loaders = nullptr;
	::java::util::Map* search = nullptr;
	::java::util::Map* loadersWithNames = nullptr;
};

			} // mbeanserver
		} // jmx
	} // sun
} // com

#pragma pop_macro("EMPTY_LOADER_ARRAY")

#endif // _com_sun_jmx_mbeanserver_ClassLoaderRepositorySupport_h_