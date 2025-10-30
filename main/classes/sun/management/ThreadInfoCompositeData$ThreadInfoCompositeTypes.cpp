#include <sun/management/ThreadInfoCompositeData$ThreadInfoCompositeTypes.h>

#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/management/ThreadInfo.h>
#include <java/lang/reflect/Type.h>
#include <java/util/AbstractMap.h>
#include <java/util/Arrays.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/function/Function.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/Stream.h>
#include <javax/management/openmbean/ArrayType.h>
#include <javax/management/openmbean/CompositeType.h>
#include <javax/management/openmbean/OpenDataException.h>
#include <javax/management/openmbean/OpenType.h>
#include <sun/management/MappedMXBeanType.h>
#include <sun/management/MonitorInfoCompositeData.h>
#include <sun/management/StackTraceElementCompositeData.h>
#include <sun/management/ThreadInfoCompositeData.h>
#include <jcpp.h>

#undef RUNTIME_VERSION
#undef V5_ATTRIBUTES
#undef V6_ATTRIBUTES

using $OpenTypeArray = $Array<::javax::management::openmbean::OpenType>;
using $StringArray2 = $Array<::java::lang::String, 2>;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ThreadInfo = ::java::lang::management::ThreadInfo;
using $Type = ::java::lang::reflect::Type;
using $AbstractMap = ::java::util::AbstractMap;
using $Arrays = ::java::util::Arrays;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Function = ::java::util::function::Function;
using $IntFunction = ::java::util::function::IntFunction;
using $Stream = ::java::util::stream::Stream;
using $ArrayType = ::javax::management::openmbean::ArrayType;
using $CompositeType = ::javax::management::openmbean::CompositeType;
using $OpenDataException = ::javax::management::openmbean::OpenDataException;
using $OpenType = ::javax::management::openmbean::OpenType;
using $MappedMXBeanType = ::sun::management::MappedMXBeanType;
using $MonitorInfoCompositeData = ::sun::management::MonitorInfoCompositeData;
using $StackTraceElementCompositeData = ::sun::management::StackTraceElementCompositeData;
using $ThreadInfoCompositeData = ::sun::management::ThreadInfoCompositeData;

namespace sun {
	namespace management {

class ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$stream : public $Function {
	$class(ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$stream, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* arg0) override {
		 return $of($Arrays::stream($cast($ObjectArray, arg0)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$stream>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$stream::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$stream::*)()>(&ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$stream::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$stream::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.management.ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$stream",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$stream::load$($String* name, bool initialize) {
	$loadClass(ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$stream, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$stream::class$ = nullptr;

class ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$lambda$initV6CompositeType$0$1 : public $IntFunction {
	$class(ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$lambda$initV6CompositeType$0$1, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t x$0) override {
		 return $of(ThreadInfoCompositeData$ThreadInfoCompositeTypes::lambda$initV6CompositeType$0(x$0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$lambda$initV6CompositeType$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$lambda$initV6CompositeType$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$lambda$initV6CompositeType$0$1::*)()>(&ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$lambda$initV6CompositeType$0$1::init$))},
	{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$lambda$initV6CompositeType$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.management.ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$lambda$initV6CompositeType$0$1",
	"java.lang.Object",
	"java.util.function.IntFunction",
	nullptr,
	methodInfos
};
$Class* ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$lambda$initV6CompositeType$0$1::load$($String* name, bool initialize) {
	$loadClass(ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$lambda$initV6CompositeType$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$lambda$initV6CompositeType$0$1::class$ = nullptr;

$FieldInfo _ThreadInfoCompositeData$ThreadInfoCompositeTypes_FieldInfo_[] = {
	{"compositeTypes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Ljavax/management/openmbean/CompositeType;>;", $STATIC | $FINAL, $staticField(ThreadInfoCompositeData$ThreadInfoCompositeTypes, compositeTypes)},
	{}
};

$MethodInfo _ThreadInfoCompositeData$ThreadInfoCompositeTypes_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ThreadInfoCompositeData$ThreadInfoCompositeTypes::*)()>(&ThreadInfoCompositeData$ThreadInfoCompositeTypes::init$))},
	{"initCompositeType", "()Ljavax/management/openmbean/CompositeType;", nullptr, $STATIC, $method(static_cast<$CompositeType*(*)()>(&ThreadInfoCompositeData$ThreadInfoCompositeTypes::initCompositeType))},
	{"initCompositeTypes", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/Integer;Ljavax/management/openmbean/CompositeType;>;", $STATIC, $method(static_cast<$Map*(*)()>(&ThreadInfoCompositeData$ThreadInfoCompositeTypes::initCompositeTypes))},
	{"initV5CompositeType", "(Ljavax/management/openmbean/CompositeType;)Ljavax/management/openmbean/CompositeType;", nullptr, $STATIC, $method(static_cast<$CompositeType*(*)($CompositeType*)>(&ThreadInfoCompositeData$ThreadInfoCompositeTypes::initV5CompositeType))},
	{"initV6CompositeType", "(Ljavax/management/openmbean/CompositeType;)Ljavax/management/openmbean/CompositeType;", nullptr, $STATIC, $method(static_cast<$CompositeType*(*)($CompositeType*)>(&ThreadInfoCompositeData$ThreadInfoCompositeTypes::initV6CompositeType))},
	{"lambda$initV6CompositeType$0", "(I)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$StringArray*(*)(int32_t)>(&ThreadInfoCompositeData$ThreadInfoCompositeTypes::lambda$initV6CompositeType$0))},
	{"ofVersion", "(I)Ljavax/management/openmbean/CompositeType;", nullptr, $STATIC, $method(static_cast<$CompositeType*(*)(int32_t)>(&ThreadInfoCompositeData$ThreadInfoCompositeTypes::ofVersion))},
	{}
};

$InnerClassInfo _ThreadInfoCompositeData$ThreadInfoCompositeTypes_InnerClassesInfo_[] = {
	{"sun.management.ThreadInfoCompositeData$ThreadInfoCompositeTypes", "sun.management.ThreadInfoCompositeData", "ThreadInfoCompositeTypes", $STATIC},
	{}
};

$ClassInfo _ThreadInfoCompositeData$ThreadInfoCompositeTypes_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.ThreadInfoCompositeData$ThreadInfoCompositeTypes",
	"java.lang.Object",
	nullptr,
	_ThreadInfoCompositeData$ThreadInfoCompositeTypes_FieldInfo_,
	_ThreadInfoCompositeData$ThreadInfoCompositeTypes_MethodInfo_,
	nullptr,
	nullptr,
	_ThreadInfoCompositeData$ThreadInfoCompositeTypes_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.management.ThreadInfoCompositeData"
};

$Object* allocate$ThreadInfoCompositeData$ThreadInfoCompositeTypes($Class* clazz) {
	return $of($alloc(ThreadInfoCompositeData$ThreadInfoCompositeTypes));
}

$Map* ThreadInfoCompositeData$ThreadInfoCompositeTypes::compositeTypes = nullptr;

void ThreadInfoCompositeData$ThreadInfoCompositeTypes::init$() {
}

$CompositeType* ThreadInfoCompositeData$ThreadInfoCompositeTypes::ofVersion(int32_t version) {
	$init(ThreadInfoCompositeData$ThreadInfoCompositeTypes);
	return $cast($CompositeType, $nc(ThreadInfoCompositeData$ThreadInfoCompositeTypes::compositeTypes)->get($($Integer::valueOf(version))));
}

$Map* ThreadInfoCompositeData$ThreadInfoCompositeTypes::initCompositeTypes() {
	$init(ThreadInfoCompositeData$ThreadInfoCompositeTypes);
	$useLocalCurrentObjectStackCache();
	$var($Map, types, $new($HashMap));
	$var($CompositeType, ctype, initCompositeType());
	$init($ThreadInfoCompositeData);
	types->put($($Integer::valueOf($ThreadInfoCompositeData::RUNTIME_VERSION)), ctype);
	$var($Object, var$0, $of($Integer::valueOf(5)));
	types->put(var$0, $(initV5CompositeType(ctype)));
	$var($Object, var$1, $of($Integer::valueOf(6)));
	types->put(var$1, $(initV6CompositeType(ctype)));
	return types;
}

$CompositeType* ThreadInfoCompositeData$ThreadInfoCompositeTypes::initCompositeType() {
	$init(ThreadInfoCompositeData$ThreadInfoCompositeTypes);
	try {
		$load($ThreadInfo);
		return $cast($CompositeType, $MappedMXBeanType::toOpenType($ThreadInfo::class$));
	} catch ($OpenDataException& e) {
		$throwNew($AssertionError, $of(e));
	}
	$shouldNotReachHere();
}

$CompositeType* ThreadInfoCompositeData$ThreadInfoCompositeTypes::initV5CompositeType($CompositeType* threadInfoCompositeType) {
	$init(ThreadInfoCompositeData$ThreadInfoCompositeTypes);
	$useLocalCurrentObjectStackCache();
	try {
		$init($ThreadInfoCompositeData);
		$var($OpenTypeArray, v5Types, $new($OpenTypeArray, $nc($ThreadInfoCompositeData::V5_ATTRIBUTES)->length));
		for (int32_t i = 0; i < v5Types->length; ++i) {
			$var($String, name, $nc($ThreadInfoCompositeData::V5_ATTRIBUTES)->get(i));
			v5Types->set(i, $nc(name)->equals("stackTrace"_s) ? static_cast<$OpenType*>($$new($ArrayType, 1, $(static_cast<$OpenType*>($StackTraceElementCompositeData::v5CompositeType())))) : $($nc(threadInfoCompositeType)->getType(name)));
		}
		return $new($CompositeType, "ThreadInfo"_s, "JDK 5 ThreadInfo"_s, $ThreadInfoCompositeData::V5_ATTRIBUTES, $ThreadInfoCompositeData::V5_ATTRIBUTES, v5Types);
	} catch ($OpenDataException& e) {
		$throwNew($AssertionError, $of(e));
	}
	$shouldNotReachHere();
}

$CompositeType* ThreadInfoCompositeData$ThreadInfoCompositeTypes::initV6CompositeType($CompositeType* threadInfoCompositeType) {
	$init(ThreadInfoCompositeData$ThreadInfoCompositeTypes);
	$useLocalCurrentObjectStackCache();
	try {
		$init($ThreadInfoCompositeData);
		$var($StringArray, v6Names, $fcast($StringArray, $nc($($nc($($Stream::of($$new($StringArray2, {
			$ThreadInfoCompositeData::V5_ATTRIBUTES,
			$ThreadInfoCompositeData::V6_ATTRIBUTES
		}))))->flatMap(static_cast<$Function*>($$new(ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$stream)))))->toArray(static_cast<$IntFunction*>($$new(ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$lambda$initV6CompositeType$0$1)))));
		$var($OpenTypeArray, v6Types, $new($OpenTypeArray, $nc(v6Names)->length));
		for (int32_t i = 0; i < v6Names->length; ++i) {
			$var($String, name, v6Names->get(i));
			$var($OpenType, ot, $nc(threadInfoCompositeType)->getType(name));
			if ($nc(name)->equals("stackTrace"_s)) {
				$assign(ot, $new($ArrayType, 1, $(static_cast<$OpenType*>($StackTraceElementCompositeData::v5CompositeType()))));
			} else if (name->equals("lockedMonitors"_s)) {
				$assign(ot, $new($ArrayType, 1, $(static_cast<$OpenType*>($MonitorInfoCompositeData::v6CompositeType()))));
			}
			v6Types->set(i, ot);
		}
		return $new($CompositeType, "ThreadInfo"_s, "JDK 6 ThreadInfo"_s, v6Names, v6Names, v6Types);
	} catch ($OpenDataException& e) {
		$throwNew($AssertionError, $of(e));
	}
	$shouldNotReachHere();
}

$StringArray* ThreadInfoCompositeData$ThreadInfoCompositeTypes::lambda$initV6CompositeType$0(int32_t x$0) {
	$init(ThreadInfoCompositeData$ThreadInfoCompositeTypes);
	return $new($StringArray, x$0);
}

void clinit$ThreadInfoCompositeData$ThreadInfoCompositeTypes($Class* class$) {
	$assignStatic(ThreadInfoCompositeData$ThreadInfoCompositeTypes::compositeTypes, ThreadInfoCompositeData$ThreadInfoCompositeTypes::initCompositeTypes());
}

ThreadInfoCompositeData$ThreadInfoCompositeTypes::ThreadInfoCompositeData$ThreadInfoCompositeTypes() {
}

$Class* ThreadInfoCompositeData$ThreadInfoCompositeTypes::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$stream::classInfo$.name)) {
			return ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$stream::load$(name, initialize);
		}
		if (name->equals(ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$lambda$initV6CompositeType$0$1::classInfo$.name)) {
			return ThreadInfoCompositeData$ThreadInfoCompositeTypes$$Lambda$lambda$initV6CompositeType$0$1::load$(name, initialize);
		}
	}
	$loadClass(ThreadInfoCompositeData$ThreadInfoCompositeTypes, name, initialize, &_ThreadInfoCompositeData$ThreadInfoCompositeTypes_ClassInfo_, clinit$ThreadInfoCompositeData$ThreadInfoCompositeTypes, allocate$ThreadInfoCompositeData$ThreadInfoCompositeTypes);
	return class$;
}

$Class* ThreadInfoCompositeData$ThreadInfoCompositeTypes::class$ = nullptr;

	} // management
} // sun