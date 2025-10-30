#include <sun/management/counter/perf/PerfDataType.h>

#include <java/io/IOException.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/InternalError.h>
#include <jcpp.h>

#undef BOOLEAN
#undef BYTE
#undef CHAR
#undef DOUBLE
#undef FLOAT
#undef ILLEGAL
#undef INT
#undef LONG
#undef SHORT

using $PerfDataTypeArray = $Array<::sun::management::counter::perf::PerfDataType>;
using $IOException = ::java::io::IOException;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace management {
		namespace counter {
			namespace perf {

$FieldInfo _PerfDataType_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(PerfDataType, name)},
	{"value", "B", nullptr, $PRIVATE | $FINAL, $field(PerfDataType, value)},
	{"size", "I", nullptr, $PRIVATE | $FINAL, $field(PerfDataType, size$)},
	{"BOOLEAN", "Lsun/management/counter/perf/PerfDataType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PerfDataType, BOOLEAN)},
	{"CHAR", "Lsun/management/counter/perf/PerfDataType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PerfDataType, CHAR)},
	{"FLOAT", "Lsun/management/counter/perf/PerfDataType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PerfDataType, FLOAT)},
	{"DOUBLE", "Lsun/management/counter/perf/PerfDataType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PerfDataType, DOUBLE)},
	{"BYTE", "Lsun/management/counter/perf/PerfDataType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PerfDataType, BYTE)},
	{"SHORT", "Lsun/management/counter/perf/PerfDataType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PerfDataType, SHORT)},
	{"INT", "Lsun/management/counter/perf/PerfDataType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PerfDataType, INT)},
	{"LONG", "Lsun/management/counter/perf/PerfDataType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PerfDataType, LONG)},
	{"ILLEGAL", "Lsun/management/counter/perf/PerfDataType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PerfDataType, ILLEGAL)},
	{"basicTypes", "[Lsun/management/counter/perf/PerfDataType;", nullptr, $PRIVATE | $STATIC, $staticField(PerfDataType, basicTypes)},
	{}
};

$MethodInfo _PerfDataType_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(PerfDataType::*)($String*,$String*,int32_t)>(&PerfDataType::init$))},
	{"byteValue", "()B", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"toPerfDataType", "(B)Lsun/management/counter/perf/PerfDataType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<PerfDataType*(*)(int8_t)>(&PerfDataType::toPerfDataType))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PerfDataType_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.counter.perf.PerfDataType",
	"java.lang.Object",
	nullptr,
	_PerfDataType_FieldInfo_,
	_PerfDataType_MethodInfo_
};

$Object* allocate$PerfDataType($Class* clazz) {
	return $of($alloc(PerfDataType));
}

PerfDataType* PerfDataType::BOOLEAN = nullptr;
PerfDataType* PerfDataType::CHAR = nullptr;
PerfDataType* PerfDataType::FLOAT = nullptr;
PerfDataType* PerfDataType::DOUBLE = nullptr;
PerfDataType* PerfDataType::BYTE = nullptr;
PerfDataType* PerfDataType::SHORT = nullptr;
PerfDataType* PerfDataType::INT = nullptr;
PerfDataType* PerfDataType::LONG = nullptr;
PerfDataType* PerfDataType::ILLEGAL = nullptr;
$PerfDataTypeArray* PerfDataType::basicTypes = nullptr;

$String* PerfDataType::toString() {
	return this->name;
}

int8_t PerfDataType::byteValue() {
	return this->value;
}

int32_t PerfDataType::size() {
	return this->size$;
}

PerfDataType* PerfDataType::toPerfDataType(int8_t type) {
	$init(PerfDataType);
	for (int32_t j = 0; j < $nc(PerfDataType::basicTypes)->length; ++j) {
		if ($nc($nc(PerfDataType::basicTypes)->get(j))->byteValue() == type) {
			return ($nc(PerfDataType::basicTypes)->get(j));
		}
	}
	return PerfDataType::ILLEGAL;
}

void PerfDataType::init$($String* name, $String* c, int32_t size) {
	$set(this, name, name);
	this->size$ = size;
	try {
		$var($bytes, b, $nc(c)->getBytes("UTF-8"_s));
		this->value = b->get(0);
	} catch ($UnsupportedEncodingException& e) {
		$throwNew($InternalError, "Unknown encoding"_s, e);
	}
}

void clinit$PerfDataType($Class* class$) {
	$assignStatic(PerfDataType::BOOLEAN, $new(PerfDataType, "boolean"_s, "Z"_s, 1));
	$assignStatic(PerfDataType::CHAR, $new(PerfDataType, "char"_s, "C"_s, 1));
	$assignStatic(PerfDataType::FLOAT, $new(PerfDataType, "float"_s, "F"_s, 8));
	$assignStatic(PerfDataType::DOUBLE, $new(PerfDataType, "double"_s, "D"_s, 8));
	$assignStatic(PerfDataType::BYTE, $new(PerfDataType, "byte"_s, "B"_s, 1));
	$assignStatic(PerfDataType::SHORT, $new(PerfDataType, "short"_s, "S"_s, 2));
	$assignStatic(PerfDataType::INT, $new(PerfDataType, "int"_s, "I"_s, 4));
	$assignStatic(PerfDataType::LONG, $new(PerfDataType, "long"_s, "J"_s, 8));
	$assignStatic(PerfDataType::ILLEGAL, $new(PerfDataType, "illegal"_s, "X"_s, 0));
	$assignStatic(PerfDataType::basicTypes, $new($PerfDataTypeArray, {
		PerfDataType::LONG,
		PerfDataType::BYTE,
		PerfDataType::BOOLEAN,
		PerfDataType::CHAR,
		PerfDataType::FLOAT,
		PerfDataType::DOUBLE,
		PerfDataType::SHORT,
		PerfDataType::INT
	}));
}

PerfDataType::PerfDataType() {
}

$Class* PerfDataType::load$($String* name, bool initialize) {
	$loadClass(PerfDataType, name, initialize, &_PerfDataType_ClassInfo_, clinit$PerfDataType, allocate$PerfDataType);
	return class$;
}

$Class* PerfDataType::class$ = nullptr;

			} // perf
		} // counter
	} // management
} // sun