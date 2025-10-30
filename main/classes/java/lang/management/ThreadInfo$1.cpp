#include <java/lang/management/ThreadInfo$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <java/lang/Thread$State.h>
#include <java/lang/management/ThreadInfo.h>
#include <jcpp.h>

#undef BLOCKED
#undef TIMED_WAITING
#undef WAITING

using $Thread$StateArray = $Array<::java::lang::Thread$State>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Thread$State = ::java::lang::Thread$State;
using $ThreadInfo = ::java::lang::management::ThreadInfo;

namespace java {
	namespace lang {
		namespace management {

$FieldInfo _ThreadInfo$1_FieldInfo_[] = {
	{"$SwitchMap$java$lang$Thread$State", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ThreadInfo$1, $SwitchMap$java$lang$Thread$State)},
	{}
};

$EnclosingMethodInfo _ThreadInfo$1_EnclosingMethodInfo_ = {
	"java.lang.management.ThreadInfo",
	nullptr,
	nullptr
};

$InnerClassInfo _ThreadInfo$1_InnerClassesInfo_[] = {
	{"java.lang.management.ThreadInfo$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ThreadInfo$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"java.lang.management.ThreadInfo$1",
	"java.lang.Object",
	nullptr,
	_ThreadInfo$1_FieldInfo_,
	nullptr,
	nullptr,
	&_ThreadInfo$1_EnclosingMethodInfo_,
	_ThreadInfo$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.management.ThreadInfo"
};

$Object* allocate$ThreadInfo$1($Class* clazz) {
	return $of($alloc(ThreadInfo$1));
}

$ints* ThreadInfo$1::$SwitchMap$java$lang$Thread$State = nullptr;

void clinit$ThreadInfo$1($Class* class$) {
	$assignStatic(ThreadInfo$1::$SwitchMap$java$lang$Thread$State, $new($ints, $($Thread$State::values())->length));
	{
		try {
			$nc(ThreadInfo$1::$SwitchMap$java$lang$Thread$State)->set($Thread$State::BLOCKED->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ThreadInfo$1::$SwitchMap$java$lang$Thread$State)->set($Thread$State::WAITING->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ThreadInfo$1::$SwitchMap$java$lang$Thread$State)->set($Thread$State::TIMED_WAITING->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ThreadInfo$1::ThreadInfo$1() {
}

$Class* ThreadInfo$1::load$($String* name, bool initialize) {
	$loadClass(ThreadInfo$1, name, initialize, &_ThreadInfo$1_ClassInfo_, clinit$ThreadInfo$1, allocate$ThreadInfo$1);
	return class$;
}

$Class* ThreadInfo$1::class$ = nullptr;

		} // management
	} // lang
} // java