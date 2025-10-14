#ifndef _javax_management_loading_MLetParser_h_
#define _javax_management_loading_MLetParser_h_
//$ class javax.management.loading.MLetParser
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class Reader;
	}
}
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

class MLetParser : public ::java::lang::Object {
	$class(MLetParser, 0, ::java::lang::Object)
public:
	MLetParser();
	void init$();
	virtual ::java::util::List* parse(::java::net::URL* url);
	virtual ::java::util::List* parseURL($String* urlname);
	virtual $String* scanIdentifier(::java::io::Reader* in);
	virtual ::java::util::Map* scanTag(::java::io::Reader* in);
	virtual void skipSpace(::java::io::Reader* in);
	int32_t c = 0;
	static $String* tag;
};

		} // loading
	} // management
} // javax

#endif // _javax_management_loading_MLetParser_h_