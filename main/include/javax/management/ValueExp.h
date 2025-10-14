#ifndef _javax_management_ValueExp_h_
#define _javax_management_ValueExp_h_
//$ interface javax.management.ValueExp
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace javax {
	namespace management {
		class MBeanServer;
		class ObjectName;
	}
}

namespace javax {
	namespace management {

class $import ValueExp : public ::java::io::Serializable {
	$interface(ValueExp, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	virtual ::javax::management::ValueExp* apply(::javax::management::ObjectName* name) {return nullptr;}
	virtual void setMBeanServer(::javax::management::MBeanServer* s) {}
};

	} // management
} // javax

#endif // _javax_management_ValueExp_h_