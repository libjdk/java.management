#ifndef _sun_management_ThreadInfoCompositeData$ThreadInfoCompositeTypes_h_
#define _sun_management_ThreadInfoCompositeData$ThreadInfoCompositeTypes_h_
//$ class sun.management.ThreadInfoCompositeData$ThreadInfoCompositeTypes
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace management {
		namespace openmbean {
			class CompositeType;
		}
	}
}

namespace sun {
	namespace management {

class $export ThreadInfoCompositeData$ThreadInfoCompositeTypes : public ::java::lang::Object {
	$class(ThreadInfoCompositeData$ThreadInfoCompositeTypes, 0, ::java::lang::Object)
public:
	ThreadInfoCompositeData$ThreadInfoCompositeTypes();
	void init$();
	static ::javax::management::openmbean::CompositeType* initCompositeType();
	static ::java::util::Map* initCompositeTypes();
	static ::javax::management::openmbean::CompositeType* initV5CompositeType(::javax::management::openmbean::CompositeType* threadInfoCompositeType);
	static ::javax::management::openmbean::CompositeType* initV6CompositeType(::javax::management::openmbean::CompositeType* threadInfoCompositeType);
	static $StringArray* lambda$initV6CompositeType$0(int32_t x$0);
	static ::javax::management::openmbean::CompositeType* ofVersion(int32_t version);
	static ::java::util::Map* compositeTypes;
};

	} // management
} // sun

#endif // _sun_management_ThreadInfoCompositeData$ThreadInfoCompositeTypes_h_