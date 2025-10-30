#include <java/lang/management/PlatformManagedObject.h>

#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ObjectName = ::javax::management::ObjectName;

namespace java {
	namespace lang {
		namespace management {

$MethodInfo _PlatformManagedObject_MethodInfo_[] = {
	{"getObjectName", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PlatformManagedObject_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.management.PlatformManagedObject",
	nullptr,
	nullptr,
	nullptr,
	_PlatformManagedObject_MethodInfo_
};

$Object* allocate$PlatformManagedObject($Class* clazz) {
	return $of($alloc(PlatformManagedObject));
}

$Class* PlatformManagedObject::load$($String* name, bool initialize) {
	$loadClass(PlatformManagedObject, name, initialize, &_PlatformManagedObject_ClassInfo_, allocate$PlatformManagedObject);
	return class$;
}

$Class* PlatformManagedObject::class$ = nullptr;

		} // management
	} // lang
} // java