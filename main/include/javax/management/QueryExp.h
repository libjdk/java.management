#ifndef _javax_management_QueryExp_h_
#define _javax_management_QueryExp_h_
//$ interface javax.management.QueryExp
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

class $import QueryExp : public ::java::io::Serializable {
	$interface(QueryExp, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	virtual bool apply(::javax::management::ObjectName* name) {return false;}
	virtual void setMBeanServer(::javax::management::MBeanServer* s) {}
};

	} // management
} // javax

#endif // _javax_management_QueryExp_h_