#ifndef _javax_management_PersistentMBean_h_
#define _javax_management_PersistentMBean_h_
//$ interface javax.management.PersistentMBean
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace management {

class $import PersistentMBean : public ::java::lang::Object {
	$interface(PersistentMBean, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void load() {}
	virtual void store() {}
};

	} // management
} // javax

#endif // _javax_management_PersistentMBean_h_