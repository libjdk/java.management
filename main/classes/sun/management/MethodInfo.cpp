#include <sun/management/MethodInfo.h>

#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace management {

$FieldInfo _MethodInfo_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MethodInfo, name)},
	{"type", "J", nullptr, $PRIVATE, $field(MethodInfo, type)},
	{"compileSize", "I", nullptr, $PRIVATE, $field(MethodInfo, compileSize)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MethodInfo, serialVersionUID)},
	{}
};

$MethodInfo _MethodInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;JI)V", nullptr, 0, $method(static_cast<void(MethodInfo::*)($String*,int64_t,int32_t)>(&MethodInfo::init$))},
	{"getCompileSize", "()I", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getType", "()J", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MethodInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.management.MethodInfo",
	"java.lang.Object",
	"java.io.Serializable",
	_MethodInfo_FieldInfo_,
	_MethodInfo_MethodInfo_
};

$Object* allocate$MethodInfo($Class* clazz) {
	return $of($alloc(MethodInfo));
}

void MethodInfo::init$($String* name, int64_t type, int32_t compileSize) {
	$set(this, name, name);
	this->type = type;
	this->compileSize = compileSize;
}

$String* MethodInfo::getName() {
	return this->name;
}

int64_t MethodInfo::getType() {
	return this->type;
}

int32_t MethodInfo::getCompileSize() {
	return this->compileSize;
}

$String* MethodInfo::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$2, $$str({$(getName()), " type = "_s}));
	$var($String, var$1, $$concat(var$2, $$str(getType())));
	$var($String, var$0, $$concat(var$1, " compileSize = "));
	return $concat(var$0, $$str(getCompileSize()));
}

MethodInfo::MethodInfo() {
}

$Class* MethodInfo::load$($String* name, bool initialize) {
	$loadClass(MethodInfo, name, initialize, &_MethodInfo_ClassInfo_, allocate$MethodInfo);
	return class$;
}

$Class* MethodInfo::class$ = nullptr;

	} // management
} // sun