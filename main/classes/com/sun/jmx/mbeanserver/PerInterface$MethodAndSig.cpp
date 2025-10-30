#include <com/sun/jmx/mbeanserver/PerInterface$MethodAndSig.h>

#include <com/sun/jmx/mbeanserver/PerInterface.h>
#include <jcpp.h>

using $PerInterface = ::com::sun::jmx::mbeanserver::PerInterface;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _PerInterface$MethodAndSig_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jmx/mbeanserver/PerInterface;", nullptr, $FINAL | $SYNTHETIC, $field(PerInterface$MethodAndSig, this$0)},
	{"method", "Ljava/lang/Object;", "TM;", 0, $field(PerInterface$MethodAndSig, method)},
	{"signature", "[Ljava/lang/String;", nullptr, 0, $field(PerInterface$MethodAndSig, signature)},
	{}
};

$MethodInfo _PerInterface$MethodAndSig_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jmx/mbeanserver/PerInterface;)V", nullptr, $PRIVATE, $method(static_cast<void(PerInterface$MethodAndSig::*)($PerInterface*)>(&PerInterface$MethodAndSig::init$))},
	{}
};

$InnerClassInfo _PerInterface$MethodAndSig_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.PerInterface$MethodAndSig", "com.sun.jmx.mbeanserver.PerInterface", "MethodAndSig", $PRIVATE},
	{}
};

$ClassInfo _PerInterface$MethodAndSig_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.mbeanserver.PerInterface$MethodAndSig",
	"java.lang.Object",
	nullptr,
	_PerInterface$MethodAndSig_FieldInfo_,
	_PerInterface$MethodAndSig_MethodInfo_,
	nullptr,
	nullptr,
	_PerInterface$MethodAndSig_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.PerInterface"
};

$Object* allocate$PerInterface$MethodAndSig($Class* clazz) {
	return $of($alloc(PerInterface$MethodAndSig));
}

void PerInterface$MethodAndSig::init$($PerInterface* this$0) {
	$set(this, this$0, this$0);
}

PerInterface$MethodAndSig::PerInterface$MethodAndSig() {
}

$Class* PerInterface$MethodAndSig::load$($String* name, bool initialize) {
	$loadClass(PerInterface$MethodAndSig, name, initialize, &_PerInterface$MethodAndSig_ClassInfo_, allocate$PerInterface$MethodAndSig);
	return class$;
}

$Class* PerInterface$MethodAndSig::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com