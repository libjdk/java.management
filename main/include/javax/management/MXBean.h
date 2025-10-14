#ifndef _javax_management_MXBean_h_
#define _javax_management_MXBean_h_
//$ interface javax.management.MXBean
//$ extends java.lang.annotation.Annotation

#include <java/lang/annotation/Annotation.h>

namespace javax {
	namespace management {

class $import MXBean : public ::java::lang::annotation::Annotation {
	$interface(MXBean, $NO_CLASS_INIT, ::java::lang::annotation::Annotation)
public:
	virtual bool value() {return false;}
};

	} // management
} // javax

#endif // _javax_management_MXBean_h_