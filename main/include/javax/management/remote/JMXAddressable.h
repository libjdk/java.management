#ifndef _javax_management_remote_JMXAddressable_h_
#define _javax_management_remote_JMXAddressable_h_
//$ interface javax.management.remote.JMXAddressable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace management {
		namespace remote {
			class JMXServiceURL;
		}
	}
}

namespace javax {
	namespace management {
		namespace remote {

class $import JMXAddressable : public ::java::lang::Object {
	$interface(JMXAddressable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::management::remote::JMXServiceURL* getAddress() {return nullptr;}
};

		} // remote
	} // management
} // javax

#endif // _javax_management_remote_JMXAddressable_h_