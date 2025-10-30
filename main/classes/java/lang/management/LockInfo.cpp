#include <java/lang/management/LockInfo.h>

#include <javax/management/openmbean/CompositeData.h>
#include <sun/management/LockInfoCompositeData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $LockInfoCompositeData = ::sun::management::LockInfoCompositeData;

namespace java {
	namespace lang {
		namespace management {

$FieldInfo _LockInfo_FieldInfo_[] = {
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LockInfo, className)},
	{"identityHashCode", "I", nullptr, $PRIVATE, $field(LockInfo, identityHashCode)},
	{}
};

$MethodInfo _LockInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(LockInfo::*)($String*,int32_t)>(&LockInfo::init$))},
	{"<init>", "(Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(LockInfo::*)(Object$*)>(&LockInfo::init$))},
	{"from", "(Ljavax/management/openmbean/CompositeData;)Ljava/lang/management/LockInfo;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LockInfo*(*)($CompositeData*)>(&LockInfo::from))},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getIdentityHashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LockInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.management.LockInfo",
	"java.lang.Object",
	nullptr,
	_LockInfo_FieldInfo_,
	_LockInfo_MethodInfo_
};

$Object* allocate$LockInfo($Class* clazz) {
	return $of($alloc(LockInfo));
}

void LockInfo::init$($String* className, int32_t identityHashCode) {
	if (className == nullptr) {
		$throwNew($NullPointerException, "Parameter className cannot be null"_s);
	}
	$set(this, className, className);
	this->identityHashCode = identityHashCode;
}

void LockInfo::init$(Object$* lock) {
	$set(this, className, $nc($of(lock))->getClass()->getName());
	this->identityHashCode = $System::identityHashCode(lock);
}

$String* LockInfo::getClassName() {
	return this->className;
}

int32_t LockInfo::getIdentityHashCode() {
	return this->identityHashCode;
}

LockInfo* LockInfo::from($CompositeData* cd) {
	if (cd == nullptr) {
		return nullptr;
	}
	if ($instanceOf($LockInfoCompositeData, cd)) {
		return $nc(($cast($LockInfoCompositeData, cd)))->getLockInfo();
	} else {
		return $LockInfoCompositeData::toLockInfo(cd);
	}
}

$String* LockInfo::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({this->className, $$str(u'@'), $($Integer::toHexString(this->identityHashCode))});
}

LockInfo::LockInfo() {
}

$Class* LockInfo::load$($String* name, bool initialize) {
	$loadClass(LockInfo, name, initialize, &_LockInfo_ClassInfo_, allocate$LockInfo);
	return class$;
}

$Class* LockInfo::class$ = nullptr;

		} // management
	} // lang
} // java