#ifndef _javax_management_remote_SubjectDelegationPermission_h_
#define _javax_management_remote_SubjectDelegationPermission_h_
//$ class javax.management.remote.SubjectDelegationPermission
//$ extends java.security.BasicPermission

#include <java/security/BasicPermission.h>

namespace javax {
	namespace management {
		namespace remote {

class $export SubjectDelegationPermission : public ::java::security::BasicPermission {
	$class(SubjectDelegationPermission, $NO_CLASS_INIT, ::java::security::BasicPermission)
public:
	SubjectDelegationPermission();
	void init$($String* name);
	void init$($String* name, $String* actions);
	static const int64_t serialVersionUID = (int64_t)0x148FC3D2E6AAC567;
};

		} // remote
	} // management
} // javax

#endif // _javax_management_remote_SubjectDelegationPermission_h_