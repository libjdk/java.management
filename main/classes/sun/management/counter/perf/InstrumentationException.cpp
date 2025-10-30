#include <sun/management/counter/perf/InstrumentationException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace sun {
	namespace management {
		namespace counter {
			namespace perf {

$FieldInfo _InstrumentationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InstrumentationException, serialVersionUID)},
	{}
};

$MethodInfo _InstrumentationException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InstrumentationException::*)()>(&InstrumentationException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InstrumentationException::*)($String*)>(&InstrumentationException::init$))},
	{}
};

$ClassInfo _InstrumentationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.management.counter.perf.InstrumentationException",
	"java.lang.RuntimeException",
	nullptr,
	_InstrumentationException_FieldInfo_,
	_InstrumentationException_MethodInfo_
};

$Object* allocate$InstrumentationException($Class* clazz) {
	return $of($alloc(InstrumentationException));
}

void InstrumentationException::init$() {
	$RuntimeException::init$();
}

void InstrumentationException::init$($String* message) {
	$RuntimeException::init$(message);
}

InstrumentationException::InstrumentationException() {
}

InstrumentationException::InstrumentationException(const InstrumentationException& e) : $RuntimeException(e) {
}

void InstrumentationException::throw$() {
	throw *this;
}

$Class* InstrumentationException::load$($String* name, bool initialize) {
	$loadClass(InstrumentationException, name, initialize, &_InstrumentationException_ClassInfo_, allocate$InstrumentationException);
	return class$;
}

$Class* InstrumentationException::class$ = nullptr;

			} // perf
		} // counter
	} // management
} // sun