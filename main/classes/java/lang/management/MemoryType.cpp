#include <java/lang/management/MemoryType.h>

#include <java/lang/Enum.h>
#include <jcpp.h>

#undef HEAP
#undef NON_HEAP

using $MemoryTypeArray = $Array<::java::lang::management::MemoryType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace management {

$FieldInfo _MemoryType_FieldInfo_[] = {
	{"HEAP", "Ljava/lang/management/MemoryType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemoryType, HEAP)},
	{"NON_HEAP", "Ljava/lang/management/MemoryType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(MemoryType, NON_HEAP)},
	{"$VALUES", "[Ljava/lang/management/MemoryType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(MemoryType, $VALUES)},
	{"description", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MemoryType, description)},
	{}
};

$MethodInfo _MemoryType_MethodInfo_[] = {
	{"$values", "()[Ljava/lang/management/MemoryType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$MemoryTypeArray*(*)()>(&MemoryType::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;)V", "(Ljava/lang/String;)V", $PRIVATE, $method(static_cast<void(MemoryType::*)($String*,int32_t,$String*)>(&MemoryType::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Ljava/lang/management/MemoryType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MemoryType*(*)($String*)>(&MemoryType::valueOf))},
	{"values", "()[Ljava/lang/management/MemoryType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MemoryTypeArray*(*)()>(&MemoryType::values))},
	{}
};

$ClassInfo _MemoryType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.lang.management.MemoryType",
	"java.lang.Enum",
	nullptr,
	_MemoryType_FieldInfo_,
	_MemoryType_MethodInfo_,
	"Ljava/lang/Enum<Ljava/lang/management/MemoryType;>;"
};

$Object* allocate$MemoryType($Class* clazz) {
	return $of($alloc(MemoryType));
}

MemoryType* MemoryType::HEAP = nullptr;
MemoryType* MemoryType::NON_HEAP = nullptr;
$MemoryTypeArray* MemoryType::$VALUES = nullptr;

$MemoryTypeArray* MemoryType::$values() {
	$init(MemoryType);
	return $new($MemoryTypeArray, {
		MemoryType::HEAP,
		MemoryType::NON_HEAP
	});
}

$MemoryTypeArray* MemoryType::values() {
	$init(MemoryType);
	return $cast($MemoryTypeArray, MemoryType::$VALUES->clone());
}

MemoryType* MemoryType::valueOf($String* name) {
	$init(MemoryType);
	return $cast(MemoryType, $Enum::valueOf(MemoryType::class$, name));
}

void MemoryType::init$($String* $enum$name, int32_t $enum$ordinal, $String* s) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, description, s);
}

$String* MemoryType::toString() {
	return this->description;
}

void clinit$MemoryType($Class* class$) {
	$assignStatic(MemoryType::HEAP, $new(MemoryType, "HEAP"_s, 0, "Heap memory"_s));
	$assignStatic(MemoryType::NON_HEAP, $new(MemoryType, "NON_HEAP"_s, 1, "Non-heap memory"_s));
	$assignStatic(MemoryType::$VALUES, MemoryType::$values());
}

MemoryType::MemoryType() {
}

$Class* MemoryType::load$($String* name, bool initialize) {
	$loadClass(MemoryType, name, initialize, &_MemoryType_ClassInfo_, clinit$MemoryType, allocate$MemoryType);
	return class$;
}

$Class* MemoryType::class$ = nullptr;

		} // management
	} // lang
} // java