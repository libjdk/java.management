#include <sun/management/counter/LongArrayCounter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Counter = ::sun::management::counter::Counter;

namespace sun {
	namespace management {
		namespace counter {

$MethodInfo _LongArrayCounter_MethodInfo_[] = {
	{"longArrayValue", "()[J", nullptr, $PUBLIC | $ABSTRACT},
	{"longAt", "(I)J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LongArrayCounter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.management.counter.LongArrayCounter",
	nullptr,
	"sun.management.counter.Counter",
	nullptr,
	_LongArrayCounter_MethodInfo_
};

$Object* allocate$LongArrayCounter($Class* clazz) {
	return $of($alloc(LongArrayCounter));
}

$Class* LongArrayCounter::load$($String* name, bool initialize) {
	$loadClass(LongArrayCounter, name, initialize, &_LongArrayCounter_ClassInfo_, allocate$LongArrayCounter);
	return class$;
}

$Class* LongArrayCounter::class$ = nullptr;

		} // counter
	} // management
} // sun