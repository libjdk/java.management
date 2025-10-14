#ifndef _sun_management_HotspotCompilation$CompilerThreadInfo_h_
#define _sun_management_HotspotCompilation$CompilerThreadInfo_h_
//$ class sun.management.HotspotCompilation$CompilerThreadInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace management {
		class CompilerThreadStat;
		class HotspotCompilation;
	}
}
namespace sun {
	namespace management {
		namespace counter {
			class LongCounter;
			class StringCounter;
		}
	}
}

namespace sun {
	namespace management {

class HotspotCompilation$CompilerThreadInfo : public ::java::lang::Object {
	$class(HotspotCompilation$CompilerThreadInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	HotspotCompilation$CompilerThreadInfo();
	void init$(::sun::management::HotspotCompilation* this$0, $String* bname, int32_t index);
	virtual ::sun::management::CompilerThreadStat* getCompilerThreadStat();
	::sun::management::HotspotCompilation* this$0 = nullptr;
	$String* name = nullptr;
	::sun::management::counter::StringCounter* method = nullptr;
	::sun::management::counter::LongCounter* type = nullptr;
	::sun::management::counter::LongCounter* compiles = nullptr;
	::sun::management::counter::LongCounter* time = nullptr;
};

	} // management
} // sun

#endif // _sun_management_HotspotCompilation$CompilerThreadInfo_h_