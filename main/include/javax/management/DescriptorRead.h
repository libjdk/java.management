#ifndef _javax_management_DescriptorRead_h_
#define _javax_management_DescriptorRead_h_
//$ interface javax.management.DescriptorRead
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace management {
		class Descriptor;
	}
}

namespace javax {
	namespace management {

class $import DescriptorRead : public ::java::lang::Object {
	$interface(DescriptorRead, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::management::Descriptor* getDescriptor() {return nullptr;}
};

	} // management
} // javax

#endif // _javax_management_DescriptorRead_h_