#include <com/sun/jmx/remote/internal/ClientCommunicatorAdmin$Checker.h>

#include <com/sun/jmx/remote/internal/ClientCommunicatorAdmin.h>
#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <com/sun/jmx/remote/util/EnvHelp.h>
#include <java/io/IOException.h>
#include <java/io/InterruptedIOException.h>
#include <java/lang/InterruptedException.h>
#include <jcpp.h>

using $ClientCommunicatorAdmin = ::com::sun::jmx::remote::internal::ClientCommunicatorAdmin;
using $ClassLogger = ::com::sun::jmx::remote::util::ClassLogger;
using $EnvHelp = ::com::sun::jmx::remote::util::EnvHelp;
using $IOException = ::java::io::IOException;
using $InterruptedIOException = ::java::io::InterruptedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

$FieldInfo _ClientCommunicatorAdmin$Checker_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jmx/remote/internal/ClientCommunicatorAdmin;", nullptr, $FINAL | $SYNTHETIC, $field(ClientCommunicatorAdmin$Checker, this$0)},
	{"myThread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(ClientCommunicatorAdmin$Checker, myThread)},
	{}
};

$MethodInfo _ClientCommunicatorAdmin$Checker_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jmx/remote/internal/ClientCommunicatorAdmin;)V", nullptr, $PRIVATE, $method(static_cast<void(ClientCommunicatorAdmin$Checker::*)($ClientCommunicatorAdmin*)>(&ClientCommunicatorAdmin$Checker::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{"stop", "()V", nullptr, $PRIVATE, $method(static_cast<void(ClientCommunicatorAdmin$Checker::*)()>(&ClientCommunicatorAdmin$Checker::stop))},
	{}
};

$InnerClassInfo _ClientCommunicatorAdmin$Checker_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.internal.ClientCommunicatorAdmin$Checker", "com.sun.jmx.remote.internal.ClientCommunicatorAdmin", "Checker", $PRIVATE},
	{}
};

$ClassInfo _ClientCommunicatorAdmin$Checker_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.remote.internal.ClientCommunicatorAdmin$Checker",
	"java.lang.Object",
	"java.lang.Runnable",
	_ClientCommunicatorAdmin$Checker_FieldInfo_,
	_ClientCommunicatorAdmin$Checker_MethodInfo_,
	nullptr,
	nullptr,
	_ClientCommunicatorAdmin$Checker_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.internal.ClientCommunicatorAdmin"
};

$Object* allocate$ClientCommunicatorAdmin$Checker($Class* clazz) {
	return $of($alloc(ClientCommunicatorAdmin$Checker));
}

void ClientCommunicatorAdmin$Checker::init$($ClientCommunicatorAdmin* this$0) {
	$set(this, this$0, this$0);
}

void ClientCommunicatorAdmin$Checker::run() {
	$useLocalCurrentObjectStackCache();
	$set(this, myThread, $Thread::currentThread());
	while (this->this$0->state != 3 && !$nc(this->myThread)->isInterrupted()) {
		try {
			$Thread::sleep(this->this$0->period);
		} catch ($InterruptedException& ire) {
		}
		if (this->this$0->state == 3 || $nc(this->myThread)->isInterrupted()) {
			break;
		}
		try {
			this->this$0->checkConnection();
		} catch ($Exception& e) {
			$synchronized(this->this$0->lock) {
				if (this->this$0->state == 3 || $nc(this->myThread)->isInterrupted()) {
					break;
				}
			}
			$assign(e, $cast($Exception, $EnvHelp::getCause(e)));
			if ($instanceOf($IOException, e) && !($instanceOf($InterruptedIOException, e))) {
				try {
					this->this$0->gotIOException($cast($IOException, e));
				} catch ($Exception& ee) {
					$init($ClientCommunicatorAdmin);
					$nc($ClientCommunicatorAdmin::logger)->warning("Checker-run"_s, $$str({"Failed to check connection: "_s, e}));
					$nc($ClientCommunicatorAdmin::logger)->warning("Checker-run"_s, "stopping"_s);
					$nc($ClientCommunicatorAdmin::logger)->debug("Checker-run"_s, static_cast<$Throwable*>(e));
					break;
				}
			} else {
				$init($ClientCommunicatorAdmin);
				$nc($ClientCommunicatorAdmin::logger)->warning("Checker-run"_s, $$str({"Failed to check the connection: "_s, e}));
				$nc($ClientCommunicatorAdmin::logger)->debug("Checker-run"_s, static_cast<$Throwable*>(e));
				break;
			}
		}
	}
	$init($ClientCommunicatorAdmin);
	if ($nc($ClientCommunicatorAdmin::logger)->traceOn()) {
		$nc($ClientCommunicatorAdmin::logger)->trace("Checker-run"_s, "Finished."_s);
	}
}

void ClientCommunicatorAdmin$Checker::stop() {
	if (this->myThread != nullptr && this->myThread != $Thread::currentThread()) {
		$nc(this->myThread)->interrupt();
	}
}

ClientCommunicatorAdmin$Checker::ClientCommunicatorAdmin$Checker() {
}

$Class* ClientCommunicatorAdmin$Checker::load$($String* name, bool initialize) {
	$loadClass(ClientCommunicatorAdmin$Checker, name, initialize, &_ClientCommunicatorAdmin$Checker_ClassInfo_, allocate$ClientCommunicatorAdmin$Checker);
	return class$;
}

$Class* ClientCommunicatorAdmin$Checker::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com