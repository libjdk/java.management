#include <com/sun/jmx/remote/internal/ClientCommunicatorAdmin.h>

#include <com/sun/jmx/remote/internal/ClientCommunicatorAdmin$Checker.h>
#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <com/sun/jmx/remote/util/EnvHelp.h>
#include <java/io/IOException.h>
#include <java/io/InterruptedIOException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <jcpp.h>

#undef CONNECTED
#undef FAILED
#undef RE_CONNECTING
#undef TERMINATED

using $ClientCommunicatorAdmin$Checker = ::com::sun::jmx::remote::internal::ClientCommunicatorAdmin$Checker;
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
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

$FieldInfo _ClientCommunicatorAdmin_FieldInfo_[] = {
	{"threadNo", "J", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(ClientCommunicatorAdmin, threadNo)},
	{"checker", "Lcom/sun/jmx/remote/internal/ClientCommunicatorAdmin$Checker;", nullptr, $PRIVATE | $FINAL, $field(ClientCommunicatorAdmin, checker)},
	{"period", "J", nullptr, $PRIVATE, $field(ClientCommunicatorAdmin, period)},
	{"CONNECTED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClientCommunicatorAdmin, CONNECTED)},
	{"RE_CONNECTING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClientCommunicatorAdmin, RE_CONNECTING)},
	{"FAILED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClientCommunicatorAdmin, FAILED)},
	{"TERMINATED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClientCommunicatorAdmin, TERMINATED)},
	{"state", "I", nullptr, $PRIVATE, $field(ClientCommunicatorAdmin, state)},
	{"lock", "[I", nullptr, $PRIVATE | $FINAL, $field(ClientCommunicatorAdmin, lock)},
	{"logger", "Lcom/sun/jmx/remote/util/ClassLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ClientCommunicatorAdmin, logger)},
	{}
};

$MethodInfo _ClientCommunicatorAdmin_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(ClientCommunicatorAdmin::*)(int64_t)>(&ClientCommunicatorAdmin::init$))},
	{"checkConnection", "()V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"doStart", "()V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"doStop", "()V", nullptr, $PROTECTED | $ABSTRACT},
	{"gotIOException", "(Ljava/io/IOException;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"restart", "(Ljava/io/IOException;)V", nullptr, $PRIVATE, $method(static_cast<void(ClientCommunicatorAdmin::*)($IOException*)>(&ClientCommunicatorAdmin::restart)), "java.io.IOException"},
	{"terminate", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ClientCommunicatorAdmin_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.internal.ClientCommunicatorAdmin$Checker", "com.sun.jmx.remote.internal.ClientCommunicatorAdmin", "Checker", $PRIVATE},
	{}
};

$ClassInfo _ClientCommunicatorAdmin_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.jmx.remote.internal.ClientCommunicatorAdmin",
	"java.lang.Object",
	nullptr,
	_ClientCommunicatorAdmin_FieldInfo_,
	_ClientCommunicatorAdmin_MethodInfo_,
	nullptr,
	nullptr,
	_ClientCommunicatorAdmin_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.internal.ClientCommunicatorAdmin$Checker"
};

$Object* allocate$ClientCommunicatorAdmin($Class* clazz) {
	return $of($alloc(ClientCommunicatorAdmin));
}

$volatile(int64_t) ClientCommunicatorAdmin::threadNo = 0;
$ClassLogger* ClientCommunicatorAdmin::logger = nullptr;

void ClientCommunicatorAdmin::init$(int64_t period) {
	$useLocalCurrentObjectStackCache();
	this->state = ClientCommunicatorAdmin::CONNECTED;
	$set(this, lock, $new($ints, 0));
	this->period = period;
	if (period > 0) {
		$set(this, checker, $new($ClientCommunicatorAdmin$Checker, this));
		$var($String, var$0, "JMX client heartbeat "_s);
		$var($Thread, t, $new($Thread, nullptr, this->checker, $$concat(var$0, $$str((++ClientCommunicatorAdmin::threadNo))), 0, false));
		t->setDaemon(true);
		t->start();
	} else {
		$set(this, checker, nullptr);
	}
}

void ClientCommunicatorAdmin::gotIOException($IOException* ioe) {
	restart(ioe);
}

void ClientCommunicatorAdmin::terminate() {
	$synchronized(this->lock) {
		if (this->state == ClientCommunicatorAdmin::TERMINATED) {
			return;
		}
		this->state = ClientCommunicatorAdmin::TERMINATED;
		$nc($of(this->lock))->notifyAll();
		if (this->checker != nullptr) {
			$nc(this->checker)->stop();
		}
	}
}

void ClientCommunicatorAdmin::restart($IOException* ioe) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->lock) {
		if (this->state == ClientCommunicatorAdmin::TERMINATED) {
			$throwNew($IOException, "The client has been closed."_s);
		} else if (this->state == ClientCommunicatorAdmin::FAILED) {
			$throw(ioe);
		} else if (this->state == ClientCommunicatorAdmin::RE_CONNECTING) {
			while (this->state == ClientCommunicatorAdmin::RE_CONNECTING) {
				try {
					$nc($of(this->lock))->wait();
				} catch ($InterruptedException& ire) {
					$var($InterruptedIOException, iioe, $new($InterruptedIOException, $(ire->toString())));
					$EnvHelp::initCause(iioe, ire);
					$throw(iioe);
				}
			}
			if (this->state == ClientCommunicatorAdmin::TERMINATED) {
				$throwNew($IOException, "The client has been closed."_s);
			} else if (this->state != ClientCommunicatorAdmin::CONNECTED) {
				$throw(ioe);
			}
			return;
		} else {
			this->state = ClientCommunicatorAdmin::RE_CONNECTING;
			$nc($of(this->lock))->notifyAll();
		}
	}
	try {
		doStart();
		$synchronized(this->lock) {
			if (this->state == ClientCommunicatorAdmin::TERMINATED) {
				$throwNew($IOException, "The client has been closed."_s);
			}
			this->state = ClientCommunicatorAdmin::CONNECTED;
			$nc($of(this->lock))->notifyAll();
		}
		return;
	} catch ($Exception& e) {
		$nc(ClientCommunicatorAdmin::logger)->warning("restart"_s, $$str({"Failed to restart: "_s, e}));
		$nc(ClientCommunicatorAdmin::logger)->debug("restart"_s, static_cast<$Throwable*>(e));
		$synchronized(this->lock) {
			if (this->state == ClientCommunicatorAdmin::TERMINATED) {
				$throwNew($IOException, "The client has been closed."_s);
			}
			this->state = ClientCommunicatorAdmin::FAILED;
			$nc($of(this->lock))->notifyAll();
		}
		try {
			doStop();
		} catch ($Exception& eee) {
		}
		terminate();
		$throw(ioe);
	}
}

void clinit$ClientCommunicatorAdmin($Class* class$) {
	ClientCommunicatorAdmin::threadNo = 1;
	$assignStatic(ClientCommunicatorAdmin::logger, $new($ClassLogger, "javax.management.remote.misc"_s, "ClientCommunicatorAdmin"_s));
}

ClientCommunicatorAdmin::ClientCommunicatorAdmin() {
}

$Class* ClientCommunicatorAdmin::load$($String* name, bool initialize) {
	$loadClass(ClientCommunicatorAdmin, name, initialize, &_ClientCommunicatorAdmin_ClassInfo_, clinit$ClientCommunicatorAdmin, allocate$ClientCommunicatorAdmin);
	return class$;
}

$Class* ClientCommunicatorAdmin::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com