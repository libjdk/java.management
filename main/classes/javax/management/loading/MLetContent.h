#ifndef _javax_management_loading_MLetContent_h_
#define _javax_management_loading_MLetContent_h_
//$ class javax.management.loading.MLetContent
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}

namespace javax {
	namespace management {
		namespace loading {

class $export MLetContent : public ::java::lang::Object {
	$class(MLetContent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MLetContent();
	void init$(::java::net::URL* url, ::java::util::Map* attributes, ::java::util::List* types, ::java::util::List* values);
	virtual ::java::util::Map* getAttributes();
	virtual $String* getCode();
	virtual ::java::net::URL* getCodeBase();
	virtual ::java::net::URL* getDocumentBase();
	virtual $String* getJarFiles();
	virtual $String* getName();
	$String* getParameter($String* name);
	virtual ::java::util::List* getParameterTypes();
	virtual ::java::util::List* getParameterValues();
	virtual $String* getSerializedObject();
	virtual $String* getVersion();
	::java::util::Map* attributes = nullptr;
	::java::util::List* types = nullptr;
	::java::util::List* values = nullptr;
	::java::net::URL* documentURL = nullptr;
	::java::net::URL* baseURL = nullptr;
};

		} // loading
	} // management
} // javax

#endif // _javax_management_loading_MLetContent_h_