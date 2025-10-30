#include <javax/management/ListenerNotFoundException.h>

#include <javax/management/OperationsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OperationsException = ::javax::management::OperationsException;

namespace javax {
	namespace management {

$FieldInfo _ListenerNotFoundException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ListenerNotFoundException, serialVersionUID)},
	{}
};

$MethodInfo _ListenerNotFoundException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ListenerNotFoundException::*)()>(&ListenerNotFoundException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ListenerNotFoundException::*)($String*)>(&ListenerNotFoundException::init$))},
	{}
};

$ClassInfo _ListenerNotFoundException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.ListenerNotFoundException",
	"javax.management.OperationsException",
	nullptr,
	_ListenerNotFoundException_FieldInfo_,
	_ListenerNotFoundException_MethodInfo_
};

$Object* allocate$ListenerNotFoundException($Class* clazz) {
	return $of($alloc(ListenerNotFoundException));
}

void ListenerNotFoundException::init$() {
	$OperationsException::init$();
}

void ListenerNotFoundException::init$($String* message) {
	$OperationsException::init$(message);
}

ListenerNotFoundException::ListenerNotFoundException() {
}

ListenerNotFoundException::ListenerNotFoundException(const ListenerNotFoundException& e) : $OperationsException(e) {
}

void ListenerNotFoundException::throw$() {
	throw *this;
}

$Class* ListenerNotFoundException::load$($String* name, bool initialize) {
	$loadClass(ListenerNotFoundException, name, initialize, &_ListenerNotFoundException_ClassInfo_, allocate$ListenerNotFoundException);
	return class$;
}

$Class* ListenerNotFoundException::class$ = nullptr;

	} // management
} // javax