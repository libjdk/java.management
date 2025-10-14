#ifndef _java_lang_management_LockInfo_h_
#define _java_lang_management_LockInfo_h_
//$ class java.lang.management.LockInfo
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

class $export LockInfo : public ::java::lang::Object {
	$class(LockInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LockInfo();
	void init$($String* className, int32_t identityHashCode);
	void init$(Object$* lock);
	static ::java::lang::management::LockInfo* from(::javax::management::openmbean::CompositeData* cd);
	virtual $String* getClassName();
	virtual int32_t getIdentityHashCode();
	virtual $String* toString() override;
	$String* className = nullptr;
	int32_t identityHashCode = 0;
};

		} // management
	} // lang
} // java

#endif // _java_lang_management_LockInfo_h_