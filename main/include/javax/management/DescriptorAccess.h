#ifndef _javax_management_DescriptorAccess_h_
#define _javax_management_DescriptorAccess_h_
//$ interface javax.management.DescriptorAccess
//$ extends javax.management.DescriptorRead

#include <javax/management/DescriptorRead.h>

namespace javax {
	namespace management {
		class Descriptor;
	}
}

namespace javax {
	namespace management {

class $import DescriptorAccess : public ::javax::management::DescriptorRead {
	$interface(DescriptorAccess, $NO_CLASS_INIT, ::javax::management::DescriptorRead)
public:
	virtual void setDescriptor(::javax::management::Descriptor* inDescriptor) {}
};

	} // management
} // javax

#endif // _javax_management_DescriptorAccess_h_