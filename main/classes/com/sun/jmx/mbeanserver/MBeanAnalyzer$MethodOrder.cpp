#include <com/sun/jmx/mbeanserver/MBeanAnalyzer$MethodOrder.h>

#include <com/sun/jmx/mbeanserver/MBeanAnalyzer.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $MBeanAnalyzer = ::com::sun::jmx::mbeanserver::MBeanAnalyzer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $Arrays = ::java::util::Arrays;
using $Comparator = ::java::util::Comparator;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _MBeanAnalyzer$MethodOrder_FieldInfo_[] = {
	{"instance", "Lcom/sun/jmx/mbeanserver/MBeanAnalyzer$MethodOrder;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MBeanAnalyzer$MethodOrder, instance)},
	{}
};

$MethodInfo _MBeanAnalyzer$MethodOrder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MBeanAnalyzer$MethodOrder::*)()>(&MBeanAnalyzer$MethodOrder::init$))},
	{"compare", "(Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _MBeanAnalyzer$MethodOrder_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.MBeanAnalyzer$MethodOrder", "com.sun.jmx.mbeanserver.MBeanAnalyzer", "MethodOrder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MBeanAnalyzer$MethodOrder_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.mbeanserver.MBeanAnalyzer$MethodOrder",
	"java.lang.Object",
	"java.util.Comparator",
	_MBeanAnalyzer$MethodOrder_FieldInfo_,
	_MBeanAnalyzer$MethodOrder_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/reflect/Method;>;",
	nullptr,
	_MBeanAnalyzer$MethodOrder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.MBeanAnalyzer"
};

$Object* allocate$MBeanAnalyzer$MethodOrder($Class* clazz) {
	return $of($alloc(MBeanAnalyzer$MethodOrder));
}

MBeanAnalyzer$MethodOrder* MBeanAnalyzer$MethodOrder::instance = nullptr;

void MBeanAnalyzer$MethodOrder::init$() {
}

int32_t MBeanAnalyzer$MethodOrder::compare($Method* a, $Method* b) {
	$useLocalCurrentObjectStackCache();
	int32_t cmp = $nc($($nc(a)->getName()))->compareTo($($nc(b)->getName()));
	if (cmp != 0) {
		return cmp;
	}
	$var($ClassArray, aparams, a->getParameterTypes());
	$var($ClassArray, bparams, $nc(b)->getParameterTypes());
	if ($nc(aparams)->length != $nc(bparams)->length) {
		return aparams->length - bparams->length;
	}
	if (!$Arrays::equals(aparams, bparams)) {
		return $nc($($Arrays::toString(aparams)))->compareTo($($Arrays::toString(bparams)));
	}
	$Class* aret = a->getReturnType();
	$Class* bret = b->getReturnType();
	if (aret == bret) {
		return 0;
	}
	if ($nc(aret)->isAssignableFrom(bret)) {
		return -1;
	}
	return +1;
}

int32_t MBeanAnalyzer$MethodOrder::compare(Object$* a, Object$* b) {
	return this->compare($cast($Method, a), $cast($Method, b));
}

void clinit$MBeanAnalyzer$MethodOrder($Class* class$) {
	$assignStatic(MBeanAnalyzer$MethodOrder::instance, $new(MBeanAnalyzer$MethodOrder));
}

MBeanAnalyzer$MethodOrder::MBeanAnalyzer$MethodOrder() {
}

$Class* MBeanAnalyzer$MethodOrder::load$($String* name, bool initialize) {
	$loadClass(MBeanAnalyzer$MethodOrder, name, initialize, &_MBeanAnalyzer$MethodOrder_ClassInfo_, clinit$MBeanAnalyzer$MethodOrder, allocate$MBeanAnalyzer$MethodOrder);
	return class$;
}

$Class* MBeanAnalyzer$MethodOrder::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com