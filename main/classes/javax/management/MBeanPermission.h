#ifndef _javax_management_MBeanPermission_h_
#define _javax_management_MBeanPermission_h_
//$ class javax.management.MBeanPermission
//$ extends java.security.Permission

#include <java/security/Permission.h>

#pragma push_macro("ALL")
#undef ALL
#pragma push_macro("NONE")
#undef NONE

namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace javax {
	namespace management {
		class ObjectName;
	}
}

namespace javax {
	namespace management {

class $export MBeanPermission : public ::java::security::Permission {
	$class(MBeanPermission, $NO_CLASS_INIT, ::java::security::Permission)
public:
	MBeanPermission();
	void init$($String* name, $String* actions);
	void init$($String* className, $String* member, ::javax::management::ObjectName* objectName, $String* actions);
	virtual bool equals(Object$* obj) override;
	virtual $String* getActions() override;
	static $String* getActions(int32_t mask);
	static int32_t getMask($String* action);
	virtual int32_t hashCode() override;
	virtual bool implies(::java::security::Permission* p) override;
	void initName($String* className, $String* member, ::javax::management::ObjectName* objectName);
	static $String* makeName($String* className, $String* member, ::javax::management::ObjectName* objectName);
	void parseActions();
	void parseName();
	void readObject(::java::io::ObjectInputStream* in);
	void setClassName($String* className);
	void setMember($String* member);
	static const int64_t serialVersionUID = (int64_t)0xDE755825E2A117AB;
	static const int32_t AddNotificationListener = 1;
	static const int32_t GetAttribute = 2;
	static const int32_t GetClassLoader = 4;
	static const int32_t GetClassLoaderFor = 8;
	static const int32_t GetClassLoaderRepository = 16;
	static const int32_t GetDomains = 32;
	static const int32_t GetMBeanInfo = 64;
	static const int32_t GetObjectInstance = 128;
	static const int32_t Instantiate = 256;
	static const int32_t Invoke = 512;
	static const int32_t IsInstanceOf = 1024;
	static const int32_t QueryMBeans = 2048;
	static const int32_t QueryNames = 4096;
	static const int32_t RegisterMBean = 8192;
	static const int32_t RemoveNotificationListener = 16384;
	static const int32_t SetAttribute = 32768;
	static const int32_t UnregisterMBean = 0x00010000;
	static const int32_t NONE = 0;
	static const int32_t ALL = 131071; // AddNotificationListener | GetAttribute | GetClassLoader | GetClassLoaderFor | GetClassLoaderRepository | GetDomains | GetMBeanInfo | GetObjectInstance | Instantiate | Invoke | IsInstanceOf | QueryMBeans | QueryNames | RegisterMBean | RemoveNotificationListener | SetAttribute | UnregisterMBean
	$String* actions = nullptr;
	int32_t mask = 0;
	$String* classNamePrefix = nullptr;
	bool classNameExactMatch = false;
	$String* member = nullptr;
	::javax::management::ObjectName* objectName = nullptr;
};

	} // management
} // javax

#pragma pop_macro("ALL")
#pragma pop_macro("NONE")

#endif // _javax_management_MBeanPermission_h_