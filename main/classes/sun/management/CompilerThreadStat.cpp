#include <sun/management/CompilerThreadStat.h>

#include <sun/management/MethodInfo.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $1MethodInfo = ::java::lang::MethodInfo;
using $MethodInfo = ::sun::management::MethodInfo;

namespace sun {
	namespace management {

$CompoundAttribute _CompilerThreadStat_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _CompilerThreadStat_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CompilerThreadStat, name)},
	{"taskCount", "J", nullptr, $PRIVATE, $field(CompilerThreadStat, taskCount)},
	{"compileTime", "J", nullptr, $PRIVATE, $field(CompilerThreadStat, compileTime)},
	{"lastMethod", "Lsun/management/MethodInfo;", nullptr, $PRIVATE, $field(CompilerThreadStat, lastMethod)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CompilerThreadStat, serialVersionUID)},
	{}
};

$1MethodInfo _CompilerThreadStat_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;JJLsun/management/MethodInfo;)V", nullptr, 0, $method(static_cast<void(CompilerThreadStat::*)($String*,int64_t,int64_t,$MethodInfo*)>(&CompilerThreadStat::init$))},
	{"getCompileTaskCount", "()J", nullptr, $PUBLIC},
	{"getCompileTime", "()J", nullptr, $PUBLIC},
	{"getLastCompiledMethodInfo", "()Lsun/management/MethodInfo;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CompilerThreadStat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.management.CompilerThreadStat",
	"java.lang.Object",
	"java.io.Serializable",
	_CompilerThreadStat_FieldInfo_,
	_CompilerThreadStat_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_CompilerThreadStat_Annotations_
};

$Object* allocate$CompilerThreadStat($Class* clazz) {
	return $of($alloc(CompilerThreadStat));
}

void CompilerThreadStat::init$($String* name, int64_t taskCount, int64_t time, $MethodInfo* lastMethod) {
	$set(this, name, name);
	this->taskCount = taskCount;
	this->compileTime = time;
	$set(this, lastMethod, lastMethod);
}

$String* CompilerThreadStat::getName() {
	return this->name;
}

int64_t CompilerThreadStat::getCompileTaskCount() {
	return this->taskCount;
}

int64_t CompilerThreadStat::getCompileTime() {
	return this->compileTime;
}

$MethodInfo* CompilerThreadStat::getLastCompiledMethodInfo() {
	return this->lastMethod;
}

$String* CompilerThreadStat::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$2, $$str({$(getName()), " compileTasks = "_s}));
	$var($String, var$1, $$concat(var$2, $$str(getCompileTaskCount())));
	$var($String, var$0, $$concat(var$1, " compileTime = "));
	return $concat(var$0, $$str(getCompileTime()));
}

CompilerThreadStat::CompilerThreadStat() {
}

$Class* CompilerThreadStat::load$($String* name, bool initialize) {
	$loadClass(CompilerThreadStat, name, initialize, &_CompilerThreadStat_ClassInfo_, allocate$CompilerThreadStat);
	return class$;
}

$Class* CompilerThreadStat::class$ = nullptr;

	} // management
} // sun