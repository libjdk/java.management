#ifndef _javax_management_ConstructorParameters_h_
#define _javax_management_ConstructorParameters_h_
//$ interface javax.management.ConstructorParameters
//$ extends java.lang.annotation.Annotation

#include <java/lang/Array.h>
#include <java/lang/annotation/Annotation.h>

namespace javax {
	namespace management {

class $export ConstructorParameters : public ::java::lang::annotation::Annotation {
	$interface(ConstructorParameters, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual $StringArray* value() {return nullptr;}
};

	} // management
} // javax

#endif // _javax_management_ConstructorParameters_h_