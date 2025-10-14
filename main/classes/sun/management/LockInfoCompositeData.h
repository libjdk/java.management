#ifndef _sun_management_LockInfoCompositeData_h_
#define _sun_management_LockInfoCompositeData_h_
//$ class sun.management.LockInfoCompositeData
//$ extends sun.management.LazyCompositeData

#include <sun/management/LazyCompositeData.h>

#pragma push_macro("CLASS_NAME")
#undef CLASS_NAME
#pragma push_macro("IDENTITY_HASH_CODE")
#undef IDENTITY_HASH_CODE
#pragma push_macro("LOCK_INFO_COMPOSITE_TYPE")
#undef LOCK_INFO_COMPOSITE_TYPE

namespace java {
	namespace lang {
		namespace management {
			class LockInfo;
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

class $export LockInfoCompositeData : public ::sun::management::LazyCompositeData {
	$class(LockInfoCompositeData, 0, ::sun::management::LazyCompositeData)
public:
	LockInfoCompositeData();
	void init$(::java::lang::management::LockInfo* li);
	static ::javax::management::openmbean::CompositeType* compositeType();
	virtual ::javax::management::openmbean::CompositeData* getCompositeData() override;
	virtual ::java::lang::management::LockInfo* getLockInfo();
	static ::javax::management::openmbean::CompositeData* toCompositeData(::java::lang::management::LockInfo* li);
	static ::java::lang::management::LockInfo* toLockInfo(::javax::management::openmbean::CompositeData* cd);
	::java::lang::management::LockInfo* lock = nullptr;
	static ::javax::management::openmbean::CompositeType* LOCK_INFO_COMPOSITE_TYPE;
	static $String* CLASS_NAME;
	static $String* IDENTITY_HASH_CODE;
	static const int64_t serialVersionUID = (int64_t)0xA7884E51B27E0DDC;
};

	} // management
} // sun

#pragma pop_macro("CLASS_NAME")
#pragma pop_macro("IDENTITY_HASH_CODE")
#pragma pop_macro("LOCK_INFO_COMPOSITE_TYPE")

#endif // _sun_management_LockInfoCompositeData_h_