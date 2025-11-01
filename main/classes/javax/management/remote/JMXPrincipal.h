#ifndef _javax_management_remote_JMXPrincipal_h_
#define _javax_management_remote_JMXPrincipal_h_
//$ class javax.management.remote.JMXPrincipal
//$ extends java.security.Principal
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/security/Principal.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}

namespace javax {
	namespace management {
		namespace remote {

class $export JMXPrincipal : public ::java::security::Principal, public ::java::io::Serializable {
	$class(JMXPrincipal, $NO_CLASS_INIT, ::java::security::Principal, ::java::io::Serializable)
public:
	JMXPrincipal();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$($String* name);
	virtual bool equals(Object$* o) override;
	virtual $String* getName() override;
	virtual int32_t hashCode() override;
	void readObject(::java::io::ObjectInputStream* ois);
	virtual $String* toString() override;
	static void validate($String* name);
	static const int64_t serialVersionUID = (int64_t)0xC5EDBD84E904E6FD;
	$String* name = nullptr;
};

		} // remote
	} // management
} // javax

#endif // _javax_management_remote_JMXPrincipal_h_