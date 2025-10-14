#ifndef _java_lang_management_MemoryNotificationInfo_h_
#define _java_lang_management_MemoryNotificationInfo_h_
//$ class java.lang.management.MemoryNotificationInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("MEMORY_COLLECTION_THRESHOLD_EXCEEDED")
#undef MEMORY_COLLECTION_THRESHOLD_EXCEEDED
#pragma push_macro("MEMORY_THRESHOLD_EXCEEDED")
#undef MEMORY_THRESHOLD_EXCEEDED

namespace java {
	namespace lang {
		namespace management {
			class MemoryUsage;
		}
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

class $import MemoryNotificationInfo : public ::java::lang::Object {
	$class(MemoryNotificationInfo, 0, ::java::lang::Object)
public:
	MemoryNotificationInfo();
	void init$($String* poolName, ::java::lang::management::MemoryUsage* usage, int64_t count);
	void init$(::javax::management::openmbean::CompositeData* cd);
	static ::java::lang::management::MemoryNotificationInfo* from(::javax::management::openmbean::CompositeData* cd);
	virtual int64_t getCount();
	virtual $String* getPoolName();
	virtual ::java::lang::management::MemoryUsage* getUsage();
	$String* poolName = nullptr;
	::java::lang::management::MemoryUsage* usage = nullptr;
	int64_t count = 0;
	static $String* MEMORY_THRESHOLD_EXCEEDED;
	static $String* MEMORY_COLLECTION_THRESHOLD_EXCEEDED;
};

		} // management
	} // lang
} // java

#pragma pop_macro("MEMORY_COLLECTION_THRESHOLD_EXCEEDED")
#pragma pop_macro("MEMORY_THRESHOLD_EXCEEDED")

#endif // _java_lang_management_MemoryNotificationInfo_h_