#include <sun/management/counter/Counter.h>

#include <sun/management/counter/Units.h>
#include <sun/management/counter/Variability.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Units = ::sun::management::counter::Units;
using $Variability = ::sun::management::counter::Variability;

namespace sun {
	namespace management {
		namespace counter {

$MethodInfo _Counter_MethodInfo_[] = {
	{"getFlags", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getUnits", "()Lsun/management/counter/Units;", nullptr, $PUBLIC | $ABSTRACT},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getVariability", "()Lsun/management/counter/Variability;", nullptr, $PUBLIC | $ABSTRACT},
	{"getVectorLength", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isInternal", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isVector", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Counter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.management.counter.Counter",
	nullptr,
	"java.io.Serializable",
	nullptr,
	_Counter_MethodInfo_
};

$Object* allocate$Counter($Class* clazz) {
	return $of($alloc(Counter));
}

$Class* Counter::load$($String* name, bool initialize) {
	$loadClass(Counter, name, initialize, &_Counter_ClassInfo_, allocate$Counter);
	return class$;
}

$Class* Counter::class$ = nullptr;

		} // counter
	} // management
} // sun