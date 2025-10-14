#ifndef _java_lang_management_ManagementPermission_h_
#define _java_lang_management_ManagementPermission_h_
//$ class java.lang.management.ManagementPermission
//$ extends java.security.BasicPermission

#include <java/security/BasicPermission.h>

namespace java {
	namespace lang {
		namespace management {

class $export ManagementPermission : public ::java::security::BasicPermission {
	$class(ManagementPermission, $NO_CLASS_INIT, ::java::security::BasicPermission)
public:
	ManagementPermission();
	void init$($String* name);
	void init$($String* name, $String* actions);
	static const int64_t serialVersionUID = (int64_t)0x1A554318911C9931;
};

		} // management
	} // lang
} // java

#endif // _java_lang_management_ManagementPermission_h_