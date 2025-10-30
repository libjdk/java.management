#include <javax/management/loading/MLet$1.h>

#include <javax/management/MBeanServer.h>
#include <javax/management/loading/ClassLoaderRepository.h>
#include <javax/management/loading/MLet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $MBeanServer = ::javax::management::MBeanServer;
using $ClassLoaderRepository = ::javax::management::loading::ClassLoaderRepository;
using $MLet = ::javax::management::loading::MLet;

namespace javax {
	namespace management {
		namespace loading {

$FieldInfo _MLet$1_FieldInfo_[] = {
	{"this$0", "Ljavax/management/loading/MLet;", nullptr, $FINAL | $SYNTHETIC, $field(MLet$1, this$0)},
	{"val$server", "Ljavax/management/MBeanServer;", nullptr, $FINAL | $SYNTHETIC, $field(MLet$1, val$server)},
	{}
};

$MethodInfo _MLet$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/loading/MLet;Ljavax/management/MBeanServer;)V", "()V", 0, $method(static_cast<void(MLet$1::*)($MLet*,$MBeanServer*)>(&MLet$1::init$))},
	{"run", "()Ljavax/management/loading/ClassLoaderRepository;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MLet$1_EnclosingMethodInfo_ = {
	"javax.management.loading.MLet",
	"setMBeanServer",
	"(Ljavax/management/MBeanServer;)V"
};

$InnerClassInfo _MLet$1_InnerClassesInfo_[] = {
	{"javax.management.loading.MLet$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MLet$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.loading.MLet$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_MLet$1_FieldInfo_,
	_MLet$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljavax/management/loading/ClassLoaderRepository;>;",
	&_MLet$1_EnclosingMethodInfo_,
	_MLet$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.management.loading.MLet"
};

$Object* allocate$MLet$1($Class* clazz) {
	return $of($alloc(MLet$1));
}

void MLet$1::init$($MLet* this$0, $MBeanServer* val$server) {
	$set(this, this$0, this$0);
	$set(this, val$server, val$server);
}

$Object* MLet$1::run() {
	return $of($nc(this->val$server)->getClassLoaderRepository());
}

MLet$1::MLet$1() {
}

$Class* MLet$1::load$($String* name, bool initialize) {
	$loadClass(MLet$1, name, initialize, &_MLet$1_ClassInfo_, allocate$MLet$1);
	return class$;
}

$Class* MLet$1::class$ = nullptr;

		} // loading
	} // management
} // javax