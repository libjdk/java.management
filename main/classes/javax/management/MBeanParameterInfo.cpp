#include <javax/management/MBeanParameterInfo.h>

#include <java/lang/CloneNotSupportedException.h>
#include <java/util/Objects.h>
#include <javax/management/Descriptor.h>
#include <javax/management/MBeanFeatureInfo.h>
#include <jcpp.h>

#undef NO_PARAMS

using $MBeanParameterInfoArray = $Array<::javax::management::MBeanParameterInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Descriptor = ::javax::management::Descriptor;
using $MBeanFeatureInfo = ::javax::management::MBeanFeatureInfo;

namespace javax {
	namespace management {

$FieldInfo _MBeanParameterInfo_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(MBeanParameterInfo, serialVersionUID)},
	{"NO_PARAMS", "[Ljavax/management/MBeanParameterInfo;", nullptr, $STATIC | $FINAL, $staticField(MBeanParameterInfo, NO_PARAMS)},
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MBeanParameterInfo, type)},
	{}
};

$MethodInfo _MBeanParameterInfo_MethodInfo_[] = {
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanParameterInfo::*)($String*,$String*,$String*)>(&MBeanParameterInfo::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljavax/management/Descriptor;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanParameterInfo::*)($String*,$String*,$String*,$Descriptor*)>(&MBeanParameterInfo::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MBeanParameterInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.MBeanParameterInfo",
	"javax.management.MBeanFeatureInfo",
	"java.lang.Cloneable",
	_MBeanParameterInfo_FieldInfo_,
	_MBeanParameterInfo_MethodInfo_
};

$Object* allocate$MBeanParameterInfo($Class* clazz) {
	return $of($alloc(MBeanParameterInfo));
}

void MBeanParameterInfo::finalize() {
	this->$MBeanFeatureInfo::finalize();
}

$MBeanParameterInfoArray* MBeanParameterInfo::NO_PARAMS = nullptr;

void MBeanParameterInfo::init$($String* name, $String* type, $String* description) {
	MBeanParameterInfo::init$(name, type, description, ($Descriptor*)nullptr);
}

void MBeanParameterInfo::init$($String* name, $String* type, $String* description, $Descriptor* descriptor) {
	$MBeanFeatureInfo::init$(name, description, descriptor);
	$set(this, type, type);
}

$Object* MBeanParameterInfo::clone() {
	try {
		return $of($MBeanFeatureInfo::clone());
	} catch ($CloneNotSupportedException& e) {
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

$String* MBeanParameterInfo::getType() {
	return this->type;
}

$String* MBeanParameterInfo::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$7, $$str({$($of(this)->getClass()->getName()), "[description="_s}));
	$var($String, var$6, $$concat(var$7, $(getDescription())));
	$var($String, var$5, $$concat(var$6, ", name="));
	$var($String, var$4, $$concat(var$5, $(getName())));
	$var($String, var$3, $$concat(var$4, ", type="));
	$var($String, var$2, $$concat(var$3, $(getType())));
	$var($String, var$1, $$concat(var$2, ", descriptor="));
	$var($String, var$0, $$concat(var$1, $(getDescriptor())));
	return $concat(var$0, "]");
}

bool MBeanParameterInfo::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(o, this)) {
		return true;
	}
	if (!($instanceOf(MBeanParameterInfo, o))) {
		return false;
	}
	$var(MBeanParameterInfo, p, $cast(MBeanParameterInfo, o));
	$var($Object, var$3, $of($nc(p)->getName()));
	bool var$2 = $Objects::equals(var$3, $(getName()));
	if (var$2) {
		$var($Object, var$4, $of($nc(p)->getType()));
		var$2 = $Objects::equals(var$4, $(getType()));
	}
	bool var$1 = var$2;
	if (var$1) {
		$var($Object, var$5, $of($nc(p)->getDescription()));
		var$1 = $Objects::equals(var$5, $(getDescription()));
	}
	bool var$0 = var$1;
	if (var$0) {
		$var($Object, var$6, $of($nc(p)->getDescriptor()));
		var$0 = $Objects::equals(var$6, $(getDescriptor()));
	}
	return (var$0);
}

int32_t MBeanParameterInfo::hashCode() {
	$useLocalCurrentObjectStackCache();
	return $Objects::hash($$new($ObjectArray, {
		$($of(getName())),
		$($of(getType()))
	}));
}

void clinit$MBeanParameterInfo($Class* class$) {
	$assignStatic(MBeanParameterInfo::NO_PARAMS, $new($MBeanParameterInfoArray, 0));
}

MBeanParameterInfo::MBeanParameterInfo() {
}

$Class* MBeanParameterInfo::load$($String* name, bool initialize) {
	$loadClass(MBeanParameterInfo, name, initialize, &_MBeanParameterInfo_ClassInfo_, clinit$MBeanParameterInfo, allocate$MBeanParameterInfo);
	return class$;
}

$Class* MBeanParameterInfo::class$ = nullptr;

	} // management
} // javax