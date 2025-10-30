#include <sun/management/MappedMXBeanType$InProgress.h>

#include <javax/management/openmbean/OpenType.h>
#include <sun/management/MappedMXBeanType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenType = ::javax::management::openmbean::OpenType;
using $MappedMXBeanType = ::sun::management::MappedMXBeanType;

namespace sun {
	namespace management {

$FieldInfo _MappedMXBeanType$InProgress_FieldInfo_[] = {
	{"description", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MappedMXBeanType$InProgress, description)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MappedMXBeanType$InProgress, serialVersionUID)},
	{}
};

$MethodInfo _MappedMXBeanType$InProgress_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MappedMXBeanType$InProgress::*)()>(&MappedMXBeanType$InProgress::init$)), "javax.management.openmbean.OpenDataException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MappedMXBeanType$InProgress_InnerClassesInfo_[] = {
	{"sun.management.MappedMXBeanType$InProgress", "sun.management.MappedMXBeanType", "InProgress", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MappedMXBeanType$InProgress_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.MappedMXBeanType$InProgress",
	"javax.management.openmbean.OpenType",
	nullptr,
	_MappedMXBeanType$InProgress_FieldInfo_,
	_MappedMXBeanType$InProgress_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljavax/management/openmbean/OpenType<TT;>;",
	nullptr,
	_MappedMXBeanType$InProgress_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.MappedMXBeanType"
};

$Object* allocate$MappedMXBeanType$InProgress($Class* clazz) {
	return $of($alloc(MappedMXBeanType$InProgress));
}

$String* MappedMXBeanType$InProgress::description = nullptr;

void MappedMXBeanType$InProgress::init$() {
	$OpenType::init$("java.lang.String"_s, "java.lang.String"_s, MappedMXBeanType$InProgress::description);
}

$String* MappedMXBeanType$InProgress::toString() {
	return MappedMXBeanType$InProgress::description;
}

int32_t MappedMXBeanType$InProgress::hashCode() {
	return 0;
}

bool MappedMXBeanType$InProgress::equals(Object$* o) {
	return false;
}

bool MappedMXBeanType$InProgress::isValue(Object$* o) {
	return false;
}

MappedMXBeanType$InProgress::MappedMXBeanType$InProgress() {
}

void clinit$MappedMXBeanType$InProgress($Class* class$) {
	$assignStatic(MappedMXBeanType$InProgress::description, "Marker to detect recursive type use -- internal use only!"_s);
}

$Class* MappedMXBeanType$InProgress::load$($String* name, bool initialize) {
	$loadClass(MappedMXBeanType$InProgress, name, initialize, &_MappedMXBeanType$InProgress_ClassInfo_, clinit$MappedMXBeanType$InProgress, allocate$MappedMXBeanType$InProgress);
	return class$;
}

$Class* MappedMXBeanType$InProgress::class$ = nullptr;

	} // management
} // sun