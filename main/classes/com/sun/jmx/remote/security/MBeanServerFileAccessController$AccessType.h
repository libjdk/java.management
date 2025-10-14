#ifndef _com_sun_jmx_remote_security_MBeanServerFileAccessController$AccessType_h_
#define _com_sun_jmx_remote_security_MBeanServerFileAccessController$AccessType_h_
//$ class com.sun.jmx.remote.security.MBeanServerFileAccessController$AccessType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CREATE")
#undef CREATE
#pragma push_macro("READ")
#undef READ
#pragma push_macro("UNREGISTER")
#undef UNREGISTER
#pragma push_macro("WRITE")
#undef WRITE

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

class MBeanServerFileAccessController$AccessType : public ::java::lang::Enum {
	$class(MBeanServerFileAccessController$AccessType, 0, ::java::lang::Enum)
public:
	MBeanServerFileAccessController$AccessType();
	static $Array<::com::sun::jmx::remote::security::MBeanServerFileAccessController$AccessType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::com::sun::jmx::remote::security::MBeanServerFileAccessController$AccessType* valueOf($String* name);
	static $Array<::com::sun::jmx::remote::security::MBeanServerFileAccessController$AccessType>* values();
	static ::com::sun::jmx::remote::security::MBeanServerFileAccessController$AccessType* READ;
	static ::com::sun::jmx::remote::security::MBeanServerFileAccessController$AccessType* WRITE;
	static ::com::sun::jmx::remote::security::MBeanServerFileAccessController$AccessType* CREATE;
	static ::com::sun::jmx::remote::security::MBeanServerFileAccessController$AccessType* UNREGISTER;
	static $Array<::com::sun::jmx::remote::security::MBeanServerFileAccessController$AccessType>* $VALUES;
};

				} // security
			} // remote
		} // jmx
	} // sun
} // com

#pragma pop_macro("CREATE")
#pragma pop_macro("READ")
#pragma pop_macro("UNREGISTER")
#pragma pop_macro("WRITE")

#endif // _com_sun_jmx_remote_security_MBeanServerFileAccessController$AccessType_h_