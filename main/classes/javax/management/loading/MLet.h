#ifndef _javax_management_loading_MLet_h_
#define _javax_management_loading_MLet_h_
//$ class javax.management.loading.MLet
//$ extends java.net.URLClassLoader
//$ implements javax.management.loading.MLetMBean,javax.management.MBeanRegistration,java.io.Externalizable

#include <java/io/Externalizable.h>
#include <java/lang/Array.h>
#include <java/net/URLClassLoader.h>
#include <javax/management/MBeanRegistration.h>
#include <javax/management/loading/MLetMBean.h>

namespace java {
	namespace io {
		class ObjectInput;
		class ObjectOutput;
	}
}
namespace java {
	namespace lang {
		class Boolean;
		class ClassLoader;
	}
}
namespace java {
	namespace net {
		class URL;
		class URLStreamHandlerFactory;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class Set;
	}
}
namespace javax {
	namespace management {
		class MBeanServer;
		class ObjectName;
	}
}
namespace javax {
	namespace management {
		namespace loading {
			class ClassLoaderRepository;
			class MLetContent;
		}
	}
}

namespace javax {
	namespace management {
		namespace loading {

class $export MLet : public ::java::net::URLClassLoader, public ::javax::management::loading::MLetMBean, public ::javax::management::MBeanRegistration, public ::java::io::Externalizable {
	$class(MLet, $NO_CLASS_INIT, ::java::net::URLClassLoader, ::javax::management::loading::MLetMBean, ::javax::management::MBeanRegistration, ::java::io::Externalizable)
public:
	MLet();
	using ::java::net::URLClassLoader::definePackage;
	using ::java::net::URLClassLoader::findResource;
	using ::java::net::URLClassLoader::defineClass;
	using ::java::net::URLClassLoader::findClass;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::net::URL* getResource($String* arg0) override;
	virtual ::java::io::InputStream* getResourceAsStream($String* arg0) override;
	virtual ::java::util::Enumeration* getResources($String* arg0) override;
	virtual int32_t hashCode() override;
	void init$();
	void init$($Array<::java::net::URL>* urls);
	void init$($Array<::java::net::URL>* urls, ::java::lang::ClassLoader* parent);
	void init$($Array<::java::net::URL>* urls, ::java::lang::ClassLoader* parent, ::java::net::URLStreamHandlerFactory* factory);
	void init$($Array<::java::net::URL>* urls, bool delegateToCLR);
	void init$($Array<::java::net::URL>* urls, ::java::lang::ClassLoader* parent, bool delegateToCLR);
	void init$($Array<::java::net::URL>* urls, ::java::lang::ClassLoader* parent, ::java::net::URLStreamHandlerFactory* factory, bool delegateToCLR);
	virtual void addURL(::java::net::URL* url) override;
	virtual void addURL($String* url) override;
	virtual ::java::net::URL* check($String* version, ::java::net::URL* codebase, $String* jarfile, ::javax::management::loading::MLetContent* mlet);
	$Object* constructParameter($String* param, $String* type);
	virtual $Class* findClass($String* name) override;
	virtual $Class* findClass($String* name, ::javax::management::loading::ClassLoaderRepository* clr);
	virtual $String* findLibrary($String* libname) override;
	virtual $String* getLibraryDirectory() override;
	virtual ::java::util::Set* getMBeansFromURL(::java::net::URL* url) override;
	virtual ::java::util::Set* getMBeansFromURL($String* url) override;
	$String* getTmpDir();
	virtual $Array<::java::net::URL>* getURLs() override;
	void init(bool delegateToCLR);
	using ::java::net::URLClassLoader::loadClass;
	virtual $Class* loadClass($String* name, ::javax::management::loading::ClassLoaderRepository* clr);
	$String* loadLibraryAsResource($String* libname);
	$Object* loadSerializedObject(::java::net::URL* codebase, $String* filename);
	virtual void postDeregister() override;
	virtual void postRegister(::java::lang::Boolean* registrationDone) override;
	virtual void preDeregister() override;
	virtual ::javax::management::ObjectName* preRegister(::javax::management::MBeanServer* server, ::javax::management::ObjectName* name) override;
	virtual void readExternal(::java::io::ObjectInput* in) override;
	static $String* removeSpace($String* s);
	virtual void setLibraryDirectory($String* libdir) override;
	void setMBeanServer(::javax::management::MBeanServer* server);
	virtual $String* toString() override;
	virtual void writeExternal(::java::io::ObjectOutput* out) override;
	static const int64_t serialVersionUID = (int64_t)0x327631A3952B5792;
	::javax::management::MBeanServer* server = nullptr;
	::java::util::List* mletList = nullptr;
	$String* libraryDirectory = nullptr;
	::javax::management::ObjectName* mletObjectName = nullptr;
	$Array<::java::net::URL>* myUrls = nullptr;
	::javax::management::loading::ClassLoaderRepository* currentClr = nullptr;
	bool delegateToCLR = false;
	::java::util::Map* primitiveClasses = nullptr;
};

		} // loading
	} // management
} // javax

#endif // _javax_management_loading_MLet_h_