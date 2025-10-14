#ifndef _javax_management_loading_MLetMBean_h_
#define _javax_management_loading_MLetMBean_h_
//$ interface javax.management.loading.MLetMBean
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class Set;
	}
}

namespace javax {
	namespace management {
		namespace loading {

class $export MLetMBean : public ::java::lang::Object {
	$interface(MLetMBean, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addURL(::java::net::URL* url) {}
	virtual void addURL($String* url) {}
	virtual $String* getLibraryDirectory() {return nullptr;}
	virtual ::java::util::Set* getMBeansFromURL($String* url) {return nullptr;}
	virtual ::java::util::Set* getMBeansFromURL(::java::net::URL* url) {return nullptr;}
	virtual ::java::net::URL* getResource($String* name) {return nullptr;}
	virtual ::java::io::InputStream* getResourceAsStream($String* name) {return nullptr;}
	virtual ::java::util::Enumeration* getResources($String* name) {return nullptr;}
	virtual $Array<::java::net::URL>* getURLs() {return nullptr;}
	virtual void setLibraryDirectory($String* libdir) {}
};

		} // loading
	} // management
} // javax

#endif // _javax_management_loading_MLetMBean_h_