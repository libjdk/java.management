#ifndef _com_sun_jmx_remote_security_MBeanServerFileAccessController$Parser_h_
#define _com_sun_jmx_remote_security_MBeanServerFileAccessController$Parser_h_
//$ class com.sun.jmx.remote.security.MBeanServerFileAccessController$Parser
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("EOS")
#undef EOS

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {
					class MBeanServerFileAccessController$Access;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class IllegalArgumentException;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

class MBeanServerFileAccessController$Parser : public ::java::lang::Object {
	$class(MBeanServerFileAccessController$Parser, 0, ::java::lang::Object)
public:
	MBeanServerFileAccessController$Parser();
	void init$($String* identity, $String* s);
	void next();
	static ::com::sun::jmx::remote::security::MBeanServerFileAccessController$Access* parseAccess($String* identity, $String* s);
	::com::sun::jmx::remote::security::MBeanServerFileAccessController$Access* parseAccess();
	$String* parseClassName();
	void parseCreate(::java::util::List* createClasses);
	::com::sun::jmx::remote::security::MBeanServerFileAccessController$Access* parseReadWrite();
	$String* parseWord();
	void skipSpace();
	::java::lang::IllegalArgumentException* syntax($String* msg);
	static bool $assertionsDisabled;
	static const int32_t EOS = (-1);
	$String* identity = nullptr;
	$String* s = nullptr;
	int32_t len = 0;
	int32_t i = 0;
	int32_t c = 0;
};

				} // security
			} // remote
		} // jmx
	} // sun
} // com

#pragma pop_macro("EOS")

#endif // _com_sun_jmx_remote_security_MBeanServerFileAccessController$Parser_h_