#ifndef _java_lang_management_MemoryUsage_h_
#define _java_lang_management_MemoryUsage_h_
//$ class java.lang.management.MemoryUsage
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class $import MemoryUsage : public ::java::lang::Object {
	$class(MemoryUsage, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MemoryUsage();
	void init$(int64_t init, int64_t used, int64_t committed, int64_t max);
	void init$(::javax::management::openmbean::CompositeData* cd);
	static ::java::lang::management::MemoryUsage* from(::javax::management::openmbean::CompositeData* cd);
	virtual int64_t getCommitted();
	virtual int64_t getInit();
	virtual int64_t getMax();
	virtual int64_t getUsed();
	virtual $String* toString() override;
	int64_t init = 0;
	int64_t used = 0;
	int64_t committed = 0;
	int64_t max = 0;
};

		} // management
	} // lang
} // java

#endif // _java_lang_management_MemoryUsage_h_