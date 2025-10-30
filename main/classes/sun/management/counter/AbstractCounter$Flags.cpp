#include <sun/management/counter/AbstractCounter$Flags.h>

#include <sun/management/counter/AbstractCounter.h>
#include <jcpp.h>

#undef SUPPORTED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCounter = ::sun::management::counter::AbstractCounter;

namespace sun {
	namespace management {
		namespace counter {

$FieldInfo _AbstractCounter$Flags_FieldInfo_[] = {
	{"this$0", "Lsun/management/counter/AbstractCounter;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractCounter$Flags, this$0)},
	{"SUPPORTED", "I", nullptr, $STATIC | $FINAL, $constField(AbstractCounter$Flags, SUPPORTED)},
	{}
};

$MethodInfo _AbstractCounter$Flags_MethodInfo_[] = {
	{"<init>", "(Lsun/management/counter/AbstractCounter;)V", nullptr, 0, $method(static_cast<void(AbstractCounter$Flags::*)($AbstractCounter*)>(&AbstractCounter$Flags::init$))},
	{}
};

$InnerClassInfo _AbstractCounter$Flags_InnerClassesInfo_[] = {
	{"sun.management.counter.AbstractCounter$Flags", "sun.management.counter.AbstractCounter", "Flags", 0},
	{}
};

$ClassInfo _AbstractCounter$Flags_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.counter.AbstractCounter$Flags",
	"java.lang.Object",
	nullptr,
	_AbstractCounter$Flags_FieldInfo_,
	_AbstractCounter$Flags_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractCounter$Flags_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.counter.AbstractCounter"
};

$Object* allocate$AbstractCounter$Flags($Class* clazz) {
	return $of($alloc(AbstractCounter$Flags));
}

void AbstractCounter$Flags::init$($AbstractCounter* this$0) {
	$set(this, this$0, this$0);
}

AbstractCounter$Flags::AbstractCounter$Flags() {
}

$Class* AbstractCounter$Flags::load$($String* name, bool initialize) {
	$loadClass(AbstractCounter$Flags, name, initialize, &_AbstractCounter$Flags_ClassInfo_, allocate$AbstractCounter$Flags);
	return class$;
}

$Class* AbstractCounter$Flags::class$ = nullptr;

		} // counter
	} // management
} // sun