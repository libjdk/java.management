#ifndef _com_sun_jmx_remote_security_MBeanServerFileAccessController_h_
#define _com_sun_jmx_remote_security_MBeanServerFileAccessController_h_
//$ class com.sun.jmx.remote.security.MBeanServerFileAccessController
//$ extends com.sun.jmx.remote.security.MBeanServerAccessController

#include <com/sun/jmx/remote/security/MBeanServerAccessController.h>

#pragma push_macro("CREATE")
#undef CREATE
#pragma push_macro("READONLY")
#undef READONLY
#pragma push_macro("READWRITE")
#undef READWRITE
#pragma push_macro("UNREGISTER")
#undef UNREGISTER

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {
					class MBeanServerFileAccessController$Access;
					class MBeanServerFileAccessController$AccessType;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Properties;
	}
}
namespace javax {
	namespace management {
		class MBeanServer;
		class ObjectName;
	}
}

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

class $export MBeanServerFileAccessController : public ::com::sun::jmx::remote::security::MBeanServerAccessController {
	$class(MBeanServerFileAccessController, 0, ::com::sun::jmx::remote::security::MBeanServerAccessController)
public:
	MBeanServerFileAccessController();
	void init$($String* accessFileName);
	void init$($String* accessFileName, ::javax::management::MBeanServer* mbs);
	void init$(::java::util::Properties* accessFileProps);
	void init$(::java::util::Properties* accessFileProps, ::javax::management::MBeanServer* mbs);
	void checkAccess(::com::sun::jmx::remote::security::MBeanServerFileAccessController$AccessType* requiredAccess, $String* arg);
	virtual void checkCreate($String* className) override;
	static bool checkCreateAccess(::com::sun::jmx::remote::security::MBeanServerFileAccessController$Access* access, $String* className);
	virtual void checkRead() override;
	virtual void checkUnregister(::javax::management::ObjectName* name) override;
	virtual void checkWrite() override;
	static bool classNameMatch($String* pattern, $String* className);
	void parseProperties(::java::util::Properties* props);
	static ::java::util::Properties* propertiesFromFile($String* fname);
	virtual void refresh();
	static $String* READONLY;
	static $String* READWRITE;
	static $String* CREATE;
	static $String* UNREGISTER;
	::java::util::Map* accessMap = nullptr;
	::java::util::Properties* originalProps = nullptr;
	$String* accessFileName = nullptr;
};

				} // security
			} // remote
		} // jmx
	} // sun
} // com

#pragma pop_macro("CREATE")
#pragma pop_macro("READONLY")
#pragma pop_macro("READWRITE")
#pragma pop_macro("UNREGISTER")

#endif // _com_sun_jmx_remote_security_MBeanServerFileAccessController_h_