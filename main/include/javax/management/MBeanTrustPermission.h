#ifndef _javax_management_MBeanTrustPermission_h_
#define _javax_management_MBeanTrustPermission_h_
//$ class javax.management.MBeanTrustPermission
//$ extends java.security.BasicPermission

#include <java/security/BasicPermission.h>

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}

namespace javax {
	namespace management {

class $import MBeanTrustPermission : public ::java::security::BasicPermission {
	$class(MBeanTrustPermission, $NO_CLASS_INIT, ::java::security::BasicPermission)
public:
	MBeanTrustPermission();
	void init$($String* name);
	void init$($String* name, $String* actions);
	void readObject(::java::io::ObjectInputStream* in);
	static void validate($String* name, $String* actions);
	static const int64_t serialVersionUID = (int64_t)0xD707C1AE24FD55E4;
};

	} // management
} // javax

#endif // _javax_management_MBeanTrustPermission_h_