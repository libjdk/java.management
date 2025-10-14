#ifndef _java_lang_management_MonitorInfo_h_
#define _java_lang_management_MonitorInfo_h_
//$ class java.lang.management.MonitorInfo
//$ extends java.lang.management.LockInfo

#include <java/lang/management/LockInfo.h>

namespace java {
	namespace lang {
		class StackTraceElement;
	}
}
namespace javax {
	namespace management {
		namespace openmbean {
			class CompositeData;
		}
	}
}

namespace java {
	namespace lang {
		namespace management {

class $export MonitorInfo : public ::java::lang::management::LockInfo {
	$class(MonitorInfo, $NO_CLASS_INIT, ::java::lang::management::LockInfo)
public:
	MonitorInfo();
	void init$($String* className, int32_t identityHashCode, int32_t stackDepth, ::java::lang::StackTraceElement* stackFrame);
	static ::java::lang::management::MonitorInfo* from(::javax::management::openmbean::CompositeData* cd);
	virtual int32_t getLockedStackDepth();
	virtual ::java::lang::StackTraceElement* getLockedStackFrame();
	int32_t stackDepth = 0;
	::java::lang::StackTraceElement* stackFrame = nullptr;
};

		} // management
	} // lang
} // java

#endif // _java_lang_management_MonitorInfo_h_