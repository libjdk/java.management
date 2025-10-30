#include <sun/management/counter/LongCounter.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Counter = ::sun::management::counter::Counter;

namespace sun {
	namespace management {
		namespace counter {

$MethodInfo _LongCounter_MethodInfo_[] = {
	{"longValue", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LongCounter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.management.counter.LongCounter",
	nullptr,
	"sun.management.counter.Counter",
	nullptr,
	_LongCounter_MethodInfo_
};

$Object* allocate$LongCounter($Class* clazz) {
	return $of($alloc(LongCounter));
}

$Class* LongCounter::load$($String* name, bool initialize) {
	$loadClass(LongCounter, name, initialize, &_LongCounter_ClassInfo_, allocate$LongCounter);
	return class$;
}

$Class* LongCounter::class$ = nullptr;

		} // counter
	} // management
} // sun