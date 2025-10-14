#ifndef _javax_management_QueryEval_h_
#define _javax_management_QueryEval_h_
//$ class javax.management.QueryEval
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace lang {
		class ThreadLocal;
	}
}
namespace javax {
	namespace management {
		class MBeanServer;
	}
}

namespace javax {
	namespace management {

class $export QueryEval : public ::java::io::Serializable {
	$class(QueryEval, 0, ::java::io::Serializable)
public:
	QueryEval();
	void init$();
	static ::javax::management::MBeanServer* getMBeanServer();
	virtual void setMBeanServer(::javax::management::MBeanServer* s);
	static const int64_t serialVersionUID = (int64_t)0x2522B4345F40C32C;
	static ::java::lang::ThreadLocal* server;
};

	} // management
} // javax

#endif // _javax_management_QueryEval_h_