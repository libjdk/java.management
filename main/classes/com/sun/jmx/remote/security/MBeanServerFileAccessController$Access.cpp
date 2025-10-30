#include <com/sun/jmx/remote/security/MBeanServerFileAccessController$Access.h>

#include <com/sun/jmx/remote/security/MBeanServerFileAccessController.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef NO_STRINGS

using $MBeanServerFileAccessController = ::com::sun::jmx::remote::security::MBeanServerFileAccessController;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

$FieldInfo _MBeanServerFileAccessController$Access_FieldInfo_[] = {
	{"write", "Z", nullptr, $FINAL, $field(MBeanServerFileAccessController$Access, write)},
	{"createPatterns", "[Ljava/lang/String;", nullptr, $FINAL, $field(MBeanServerFileAccessController$Access, createPatterns)},
	{"unregister", "Z", nullptr, $PRIVATE, $field(MBeanServerFileAccessController$Access, unregister)},
	{"NO_STRINGS", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MBeanServerFileAccessController$Access, NO_STRINGS)},
	{}
};

$MethodInfo _MBeanServerFileAccessController$Access_MethodInfo_[] = {
	{"<init>", "(ZZLjava/util/List;)V", "(ZZLjava/util/List<Ljava/lang/String;>;)V", 0, $method(static_cast<void(MBeanServerFileAccessController$Access::*)(bool,bool,$List*)>(&MBeanServerFileAccessController$Access::init$))},
	{}
};

$InnerClassInfo _MBeanServerFileAccessController$Access_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.security.MBeanServerFileAccessController$Access", "com.sun.jmx.remote.security.MBeanServerFileAccessController", "Access", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MBeanServerFileAccessController$Access_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.remote.security.MBeanServerFileAccessController$Access",
	"java.lang.Object",
	nullptr,
	_MBeanServerFileAccessController$Access_FieldInfo_,
	_MBeanServerFileAccessController$Access_MethodInfo_,
	nullptr,
	nullptr,
	_MBeanServerFileAccessController$Access_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.security.MBeanServerFileAccessController"
};

$Object* allocate$MBeanServerFileAccessController$Access($Class* clazz) {
	return $of($alloc(MBeanServerFileAccessController$Access));
}

void MBeanServerFileAccessController$Access::init$(bool write, bool unregister, $List* createPatternList) {
	$set(this, NO_STRINGS, $new($StringArray, 0));
	this->write = write;
	int32_t npats = (createPatternList == nullptr) ? 0 : $nc(createPatternList)->size();
	if (npats == 0) {
		$set(this, createPatterns, this->NO_STRINGS);
	} else {
		$set(this, createPatterns, $fcast($StringArray, createPatternList->toArray($$new($StringArray, npats))));
	}
	this->unregister = unregister;
}

MBeanServerFileAccessController$Access::MBeanServerFileAccessController$Access() {
}

$Class* MBeanServerFileAccessController$Access::load$($String* name, bool initialize) {
	$loadClass(MBeanServerFileAccessController$Access, name, initialize, &_MBeanServerFileAccessController$Access_ClassInfo_, allocate$MBeanServerFileAccessController$Access);
	return class$;
}

$Class* MBeanServerFileAccessController$Access::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com