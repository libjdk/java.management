#ifndef _javax_management_DescriptorKey_h_
#define _javax_management_DescriptorKey_h_
//$ interface javax.management.DescriptorKey
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace javax {
	namespace management {

class $export DescriptorKey : public ::java::lang::annotation::Annotation {
	$interface(DescriptorKey, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $String* value() {return nullptr;}
};

	} // management
} // javax

#endif // _javax_management_DescriptorKey_h_