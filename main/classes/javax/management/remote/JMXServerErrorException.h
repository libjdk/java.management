#ifndef _javax_management_remote_JMXServerErrorException_h_
#define _javax_management_remote_JMXServerErrorException_h_
//$ class javax.management.remote.JMXServerErrorException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace lang {
		class Error;
		class Throwable;
	}
}

namespace javax {
	namespace management {
		namespace remote {

class $export JMXServerErrorException : public ::java::io::IOException {
	$class(JMXServerErrorException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	JMXServerErrorException();
	void init$($String* s, ::java::lang::Error* err);
	virtual $Throwable* getCause() override;
	static const int64_t serialVersionUID = (int64_t)0x37773ECBD9401A5A;
	::java::lang::Error* cause = nullptr;
	JMXServerErrorException(const JMXServerErrorException& e);
	virtual void throw$() override;
	inline JMXServerErrorException* operator ->() {
		return (JMXServerErrorException*)throwing$;
	}
};

		} // remote
	} // management
} // javax

#endif // _javax_management_remote_JMXServerErrorException_h_