#include <sun/management/HotspotCompilation$CompilerThreadInfo.h>

#include <sun/management/CompilerThreadStat.h>
#include <sun/management/HotspotCompilation.h>
#include <sun/management/MethodInfo.h>
#include <sun/management/counter/Counter.h>
#include <sun/management/counter/LongCounter.h>
#include <sun/management/counter/StringCounter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $1MethodInfo = ::java::lang::MethodInfo;
using $CompilerThreadStat = ::sun::management::CompilerThreadStat;
using $HotspotCompilation = ::sun::management::HotspotCompilation;
using $MethodInfo = ::sun::management::MethodInfo;
using $Counter = ::sun::management::counter::Counter;
using $LongCounter = ::sun::management::counter::LongCounter;
using $StringCounter = ::sun::management::counter::StringCounter;

namespace sun {
	namespace management {

$FieldInfo _HotspotCompilation$CompilerThreadInfo_FieldInfo_[] = {
	{"this$0", "Lsun/management/HotspotCompilation;", nullptr, $FINAL | $SYNTHETIC, $field(HotspotCompilation$CompilerThreadInfo, this$0)},
	{"name", "Ljava/lang/String;", nullptr, 0, $field(HotspotCompilation$CompilerThreadInfo, name)},
	{"method", "Lsun/management/counter/StringCounter;", nullptr, 0, $field(HotspotCompilation$CompilerThreadInfo, method)},
	{"type", "Lsun/management/counter/LongCounter;", nullptr, 0, $field(HotspotCompilation$CompilerThreadInfo, type)},
	{"compiles", "Lsun/management/counter/LongCounter;", nullptr, 0, $field(HotspotCompilation$CompilerThreadInfo, compiles)},
	{"time", "Lsun/management/counter/LongCounter;", nullptr, 0, $field(HotspotCompilation$CompilerThreadInfo, time)},
	{}
};

$1MethodInfo _HotspotCompilation$CompilerThreadInfo_MethodInfo_[] = {
	{"<init>", "(Lsun/management/HotspotCompilation;Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(HotspotCompilation$CompilerThreadInfo::*)($HotspotCompilation*,$String*,int32_t)>(&HotspotCompilation$CompilerThreadInfo::init$))},
	{"getCompilerThreadStat", "()Lsun/management/CompilerThreadStat;", nullptr, 0},
	{}
};

$InnerClassInfo _HotspotCompilation$CompilerThreadInfo_InnerClassesInfo_[] = {
	{"sun.management.HotspotCompilation$CompilerThreadInfo", "sun.management.HotspotCompilation", "CompilerThreadInfo", $PRIVATE},
	{}
};

$ClassInfo _HotspotCompilation$CompilerThreadInfo_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.HotspotCompilation$CompilerThreadInfo",
	"java.lang.Object",
	nullptr,
	_HotspotCompilation$CompilerThreadInfo_FieldInfo_,
	_HotspotCompilation$CompilerThreadInfo_MethodInfo_,
	nullptr,
	nullptr,
	_HotspotCompilation$CompilerThreadInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.HotspotCompilation"
};

$Object* allocate$HotspotCompilation$CompilerThreadInfo($Class* clazz) {
	return $of($alloc(HotspotCompilation$CompilerThreadInfo));
}

void HotspotCompilation$CompilerThreadInfo::init$($HotspotCompilation* this$0, $String* bname, int32_t index) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$var($String, basename, $str({bname, "."_s, $$str(index), "."_s}));
	$set(this, name, $str({bname, "-"_s, $$str(index)}));
	$set(this, method, $cast($StringCounter, this$0->lookup($$str({basename, "method"_s}))));
	$set(this, type, $cast($LongCounter, this$0->lookup($$str({basename, "type"_s}))));
	$set(this, compiles, $cast($LongCounter, this$0->lookup($$str({basename, "compiles"_s}))));
	$set(this, time, $cast($LongCounter, this$0->lookup($$str({basename, "time"_s}))));
}

$CompilerThreadStat* HotspotCompilation$CompilerThreadInfo::getCompilerThreadStat() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $nc(this->method)->stringValue());
	$var($MethodInfo, minfo, $new($MethodInfo, var$0, (int32_t)$nc(this->type)->longValue(), -1));
	$var($String, var$1, this->name);
	int64_t var$2 = $nc(this->compiles)->longValue();
	return $new($CompilerThreadStat, var$1, var$2, $nc(this->time)->longValue(), minfo);
}

HotspotCompilation$CompilerThreadInfo::HotspotCompilation$CompilerThreadInfo() {
}

$Class* HotspotCompilation$CompilerThreadInfo::load$($String* name, bool initialize) {
	$loadClass(HotspotCompilation$CompilerThreadInfo, name, initialize, &_HotspotCompilation$CompilerThreadInfo_ClassInfo_, allocate$HotspotCompilation$CompilerThreadInfo);
	return class$;
}

$Class* HotspotCompilation$CompilerThreadInfo::class$ = nullptr;

	} // management
} // sun