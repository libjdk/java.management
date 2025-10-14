#ifndef _sun_management_MonitorInfoCompositeData_h_
#define _sun_management_MonitorInfoCompositeData_h_
//$ class sun.management.MonitorInfoCompositeData
//$ extends sun.management.LazyCompositeData

#include <java/lang/Array.h>
#include <sun/management/LazyCompositeData.h>

#pragma push_macro("CLASS_NAME")
#undef CLASS_NAME
#pragma push_macro("IDENTITY_HASH_CODE")
#undef IDENTITY_HASH_CODE
#pragma push_macro("LOCKED_STACK_DEPTH")
#undef LOCKED_STACK_DEPTH
#pragma push_macro("LOCKED_STACK_FRAME")
#undef LOCKED_STACK_FRAME
#pragma push_macro("MONITOR_INFO_ATTRIBUTES")
#undef MONITOR_INFO_ATTRIBUTES
#pragma push_macro("MONITOR_INFO_COMPOSITE_TYPE")
#undef MONITOR_INFO_COMPOSITE_TYPE
#pragma push_macro("V6_COMPOSITE_TYPE")
#undef V6_COMPOSITE_TYPE

namespace java {
	namespace lang {
		class StackTraceElement;
	}
}
namespace java {
	namespace lang {
		namespace management {
			class MonitorInfo;
		}
	}
}
namespace javax {
	namespace management {
		namespace openmbean {
			class CompositeData;
			class CompositeType;
		}
	}
}

namespace sun {
	namespace management {

class $import MonitorInfoCompositeData : public ::sun::management::LazyCompositeData {
	$class(MonitorInfoCompositeData, 0, ::sun::management::LazyCompositeData)
public:
	MonitorInfoCompositeData();
	void init$(::java::lang::management::MonitorInfo* mi);
	static $String* getClassName(::javax::management::openmbean::CompositeData* cd);
	virtual ::javax::management::openmbean::CompositeData* getCompositeData() override;
	static int32_t getIdentityHashCode(::javax::management::openmbean::CompositeData* cd);
	static int32_t getLockedStackDepth(::javax::management::openmbean::CompositeData* cd);
	static ::java::lang::StackTraceElement* getLockedStackFrame(::javax::management::openmbean::CompositeData* cd);
	virtual ::java::lang::management::MonitorInfo* getMonitorInfo();
	static ::javax::management::openmbean::CompositeData* toCompositeData(::java::lang::management::MonitorInfo* mi);
	static ::javax::management::openmbean::CompositeType* v6CompositeType();
	static void validateCompositeData(::javax::management::openmbean::CompositeData* cd);
	::java::lang::management::MonitorInfo* lock = nullptr;
	static $String* CLASS_NAME;
	static $String* IDENTITY_HASH_CODE;
	static $String* LOCKED_STACK_FRAME;
	static $String* LOCKED_STACK_DEPTH;
	static $StringArray* MONITOR_INFO_ATTRIBUTES;
	static ::javax::management::openmbean::CompositeType* MONITOR_INFO_COMPOSITE_TYPE;
	static ::javax::management::openmbean::CompositeType* V6_COMPOSITE_TYPE;
	static const int64_t serialVersionUID = (int64_t)0xAF28AD485554238F;
};

	} // management
} // sun

#pragma pop_macro("CLASS_NAME")
#pragma pop_macro("IDENTITY_HASH_CODE")
#pragma pop_macro("LOCKED_STACK_DEPTH")
#pragma pop_macro("LOCKED_STACK_FRAME")
#pragma pop_macro("MONITOR_INFO_ATTRIBUTES")
#pragma pop_macro("MONITOR_INFO_COMPOSITE_TYPE")
#pragma pop_macro("V6_COMPOSITE_TYPE")

#endif // _sun_management_MonitorInfoCompositeData_h_