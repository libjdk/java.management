#ifndef _javax_management_remote_JMXProviderException_h_
#define _javax_management_remote_JMXProviderException_h_
//$ class javax.management.remote.JMXProviderException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace javax {
	namespace management {
		namespace remote {

class $import JMXProviderException : public ::java::io::IOException {
	$class(JMXProviderException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	JMXProviderException();
	void init$();
	void init$($String* message);
	void init$($String* message, $Throwable* cause);
	virtual $Throwable* getCause() override;
	static const int64_t serialVersionUID = (int64_t)0xD40D9BD422EA29A2;
	$Throwable* cause = nullptr;
	JMXProviderException(const JMXProviderException& e);
	virtual void throw$() override;
	inline JMXProviderException* operator ->() {
		return (JMXProviderException*)throwing$;
	}
};

		} // remote
	} // management
} // javax

#endif // _javax_management_remote_JMXProviderException_h_