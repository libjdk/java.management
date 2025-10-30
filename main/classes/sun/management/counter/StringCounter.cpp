#include <sun/management/counter/StringCounter.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Counter = ::sun::management::counter::Counter;

namespace sun {
	namespace management {
		namespace counter {

$MethodInfo _StringCounter_MethodInfo_[] = {
	{"stringValue", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _StringCounter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.management.counter.StringCounter",
	nullptr,
	"sun.management.counter.Counter",
	nullptr,
	_StringCounter_MethodInfo_
};

$Object* allocate$StringCounter($Class* clazz) {
	return $of($alloc(StringCounter));
}

$Class* StringCounter::load$($String* name, bool initialize) {
	$loadClass(StringCounter, name, initialize, &_StringCounter_ClassInfo_, allocate$StringCounter);
	return class$;
}

$Class* StringCounter::class$ = nullptr;

		} // counter
	} // management
} // sun