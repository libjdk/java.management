#ifndef _com_sun_jmx_remote_security_MBeanServerFileAccessController$Access_h_
#define _com_sun_jmx_remote_security_MBeanServerFileAccessController$Access_h_
//$ class com.sun.jmx.remote.security.MBeanServerFileAccessController$Access
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NO_STRINGS")
#undef NO_STRINGS

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

class MBeanServerFileAccessController$Access : public ::java::lang::Object {
	$class(MBeanServerFileAccessController$Access, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MBeanServerFileAccessController$Access();
	void init$(bool write, bool unregister, ::java::util::List* createPatternList);
	bool write = false;
	$StringArray* createPatterns = nullptr;
	bool unregister = false;
	$StringArray* NO_STRINGS = nullptr;
};

				} // security
			} // remote
		} // jmx
	} // sun
} // com

#pragma pop_macro("NO_STRINGS")

#endif // _com_sun_jmx_remote_security_MBeanServerFileAccessController$Access_h_