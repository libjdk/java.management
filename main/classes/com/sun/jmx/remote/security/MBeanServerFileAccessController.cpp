#include <com/sun/jmx/remote/security/MBeanServerFileAccessController.h>

#include <com/sun/jmx/remote/security/MBeanServerAccessController.h>
#include <com/sun/jmx/remote/security/MBeanServerFileAccessController$1.h>
#include <com/sun/jmx/remote/security/MBeanServerFileAccessController$2.h>
#include <com/sun/jmx/remote/security/MBeanServerFileAccessController$Access.h>
#include <com/sun/jmx/remote/security/MBeanServerFileAccessController$AccessType.h>
#include <com/sun/jmx/remote/security/MBeanServerFileAccessController$Parser.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/AssertionError.h>
#include <java/lang/SecurityException.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/Principal.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Properties.h>
#include <java/util/Set.h>
#include <java/util/StringTokenizer.h>
#include <java/util/regex/Pattern.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <javax/security/auth/Subject.h>
#include <jcpp.h>

#undef CREATE
#undef READ
#undef READONLY
#undef READWRITE
#undef UNREGISTER
#undef WRITE

using $MBeanServerAccessController = ::com::sun::jmx::remote::security::MBeanServerAccessController;
using $MBeanServerFileAccessController$1 = ::com::sun::jmx::remote::security::MBeanServerFileAccessController$1;
using $MBeanServerFileAccessController$2 = ::com::sun::jmx::remote::security::MBeanServerFileAccessController$2;
using $MBeanServerFileAccessController$Access = ::com::sun::jmx::remote::security::MBeanServerFileAccessController$Access;
using $MBeanServerFileAccessController$AccessType = ::com::sun::jmx::remote::security::MBeanServerFileAccessController$AccessType;
using $MBeanServerFileAccessController$Parser = ::com::sun::jmx::remote::security::MBeanServerFileAccessController$Parser;
using $FileInputStream = ::java::io::FileInputStream;
using $InputStream = ::java::io::InputStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $Principal = ::java::security::Principal;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Properties = ::java::util::Properties;
using $Set = ::java::util::Set;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Pattern = ::java::util::regex::Pattern;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;
using $Subject = ::javax::security::auth::Subject;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace security {

$FieldInfo _MBeanServerFileAccessController_FieldInfo_[] = {
	{"READONLY", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(MBeanServerFileAccessController, READONLY)},
	{"READWRITE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(MBeanServerFileAccessController, READWRITE)},
	{"CREATE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(MBeanServerFileAccessController, CREATE)},
	{"UNREGISTER", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(MBeanServerFileAccessController, UNREGISTER)},
	{"accessMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/jmx/remote/security/MBeanServerFileAccessController$Access;>;", $PRIVATE, $field(MBeanServerFileAccessController, accessMap)},
	{"originalProps", "Ljava/util/Properties;", nullptr, $PRIVATE, $field(MBeanServerFileAccessController, originalProps)},
	{"accessFileName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MBeanServerFileAccessController, accessFileName)},
	{}
};

$MethodInfo _MBeanServerFileAccessController_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanServerFileAccessController::*)($String*)>(&MBeanServerFileAccessController::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/String;Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanServerFileAccessController::*)($String*,$MBeanServer*)>(&MBeanServerFileAccessController::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/util/Properties;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanServerFileAccessController::*)($Properties*)>(&MBeanServerFileAccessController::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/util/Properties;Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanServerFileAccessController::*)($Properties*,$MBeanServer*)>(&MBeanServerFileAccessController::init$)), "java.io.IOException"},
	{"checkAccess", "(Lcom/sun/jmx/remote/security/MBeanServerFileAccessController$AccessType;Ljava/lang/String;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(MBeanServerFileAccessController::*)($MBeanServerFileAccessController$AccessType*,$String*)>(&MBeanServerFileAccessController::checkAccess))},
	{"checkCreate", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"checkCreateAccess", "(Lcom/sun/jmx/remote/security/MBeanServerFileAccessController$Access;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($MBeanServerFileAccessController$Access*,$String*)>(&MBeanServerFileAccessController::checkCreateAccess))},
	{"checkRead", "()V", nullptr, $PUBLIC},
	{"checkUnregister", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC},
	{"checkWrite", "()V", nullptr, $PUBLIC},
	{"classNameMatch", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,$String*)>(&MBeanServerFileAccessController::classNameMatch))},
	{"parseProperties", "(Ljava/util/Properties;)V", nullptr, $PRIVATE, $method(static_cast<void(MBeanServerFileAccessController::*)($Properties*)>(&MBeanServerFileAccessController::parseProperties))},
	{"propertiesFromFile", "(Ljava/lang/String;)Ljava/util/Properties;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Properties*(*)($String*)>(&MBeanServerFileAccessController::propertiesFromFile)), "java.io.IOException"},
	{"refresh", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _MBeanServerFileAccessController_InnerClassesInfo_[] = {
	{"com.sun.jmx.remote.security.MBeanServerFileAccessController$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.jmx.remote.security.MBeanServerFileAccessController$Parser", "com.sun.jmx.remote.security.MBeanServerFileAccessController", "Parser", $PRIVATE | $STATIC},
	{"com.sun.jmx.remote.security.MBeanServerFileAccessController$Access", "com.sun.jmx.remote.security.MBeanServerFileAccessController", "Access", $PRIVATE | $STATIC},
	{"com.sun.jmx.remote.security.MBeanServerFileAccessController$AccessType", "com.sun.jmx.remote.security.MBeanServerFileAccessController", "AccessType", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{"com.sun.jmx.remote.security.MBeanServerFileAccessController$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MBeanServerFileAccessController_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.remote.security.MBeanServerFileAccessController",
	"com.sun.jmx.remote.security.MBeanServerAccessController",
	nullptr,
	_MBeanServerFileAccessController_FieldInfo_,
	_MBeanServerFileAccessController_MethodInfo_,
	nullptr,
	nullptr,
	_MBeanServerFileAccessController_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jmx.remote.security.MBeanServerFileAccessController$2,com.sun.jmx.remote.security.MBeanServerFileAccessController$Parser,com.sun.jmx.remote.security.MBeanServerFileAccessController$Access,com.sun.jmx.remote.security.MBeanServerFileAccessController$AccessType,com.sun.jmx.remote.security.MBeanServerFileAccessController$1"
};

$Object* allocate$MBeanServerFileAccessController($Class* clazz) {
	return $of($alloc(MBeanServerFileAccessController));
}

$String* MBeanServerFileAccessController::READONLY = nullptr;
$String* MBeanServerFileAccessController::READWRITE = nullptr;
$String* MBeanServerFileAccessController::CREATE = nullptr;
$String* MBeanServerFileAccessController::UNREGISTER = nullptr;

void MBeanServerFileAccessController::init$($String* accessFileName) {
	$MBeanServerAccessController::init$();
	$set(this, accessFileName, accessFileName);
	$var($Properties, props, propertiesFromFile(accessFileName));
	parseProperties(props);
}

void MBeanServerFileAccessController::init$($String* accessFileName, $MBeanServer* mbs) {
	MBeanServerFileAccessController::init$(accessFileName);
	setMBeanServer(mbs);
}

void MBeanServerFileAccessController::init$($Properties* accessFileProps) {
	$MBeanServerAccessController::init$();
	if (accessFileProps == nullptr) {
		$throwNew($IllegalArgumentException, "Null properties"_s);
	}
	$set(this, originalProps, accessFileProps);
	parseProperties(accessFileProps);
}

void MBeanServerFileAccessController::init$($Properties* accessFileProps, $MBeanServer* mbs) {
	MBeanServerFileAccessController::init$(accessFileProps);
	setMBeanServer(mbs);
}

void MBeanServerFileAccessController::checkRead() {
	$init($MBeanServerFileAccessController$AccessType);
	checkAccess($MBeanServerFileAccessController$AccessType::READ, nullptr);
}

void MBeanServerFileAccessController::checkWrite() {
	$init($MBeanServerFileAccessController$AccessType);
	checkAccess($MBeanServerFileAccessController$AccessType::WRITE, nullptr);
}

void MBeanServerFileAccessController::checkCreate($String* className) {
	$init($MBeanServerFileAccessController$AccessType);
	checkAccess($MBeanServerFileAccessController$AccessType::CREATE, className);
}

void MBeanServerFileAccessController::checkUnregister($ObjectName* name) {
	$init($MBeanServerFileAccessController$AccessType);
	checkAccess($MBeanServerFileAccessController$AccessType::UNREGISTER, nullptr);
}

void MBeanServerFileAccessController::refresh() {
	$synchronized(this) {
		$var($Properties, props, nullptr);
		if (this->accessFileName == nullptr) {
			$assign(props, this->originalProps);
		} else {
			$assign(props, propertiesFromFile(this->accessFileName));
		}
		parseProperties(props);
	}
}

$Properties* MBeanServerFileAccessController::propertiesFromFile($String* fname) {
	$init(MBeanServerFileAccessController);
	$useLocalCurrentObjectStackCache();
	$var($FileInputStream, fin, $new($FileInputStream, fname));
	{
		$var($Throwable, var$0, nullptr);
		$var($Properties, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($Properties, p, $new($Properties));
			p->load(static_cast<$InputStream*>(fin));
			$assign(var$2, p);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			fin->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void MBeanServerFileAccessController::checkAccess($MBeanServerFileAccessController$AccessType* requiredAccess, $String* arg) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$beforeCallerSensitive();
		$var($AccessControlContext, acc, $AccessController::getContext());
		$var($Subject, s, $cast($Subject, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($MBeanServerFileAccessController$1, this, acc)))));
		if (s == nullptr) {
			return;
		}
		$var($Set, principals, $nc(s)->getPrincipals());
		$var($String, newPropertyValue, nullptr);
		{
			$var($Iterator, i, $nc(principals)->iterator());
			for (; $nc(i)->hasNext();) {
				$var($Principal, p, $cast($Principal, i->next()));
				$var($MBeanServerFileAccessController$Access, access, $cast($MBeanServerFileAccessController$Access, $nc(this->accessMap)->get($($nc(p)->getName()))));
				if (access != nullptr) {
					bool ok = false;
					$init($MBeanServerFileAccessController$2);
					switch ($nc($MBeanServerFileAccessController$2::$SwitchMap$com$sun$jmx$remote$security$MBeanServerFileAccessController$AccessType)->get($nc((requiredAccess))->ordinal())) {
					case 1:
						{
							ok = true;
							break;
						}
					case 2:
						{
							ok = access->write;
							break;
						}
					case 3:
						{
							ok = access->unregister;
							if (!ok && access->write) {
								$assign(newPropertyValue, "unregister"_s);
							}
							break;
						}
					case 4:
						{
							ok = checkCreateAccess(access, arg);
							if (!ok && access->write) {
								$assign(newPropertyValue, $str({"create "_s, arg}));
							}
							break;
						}
					default:
						{
							$throwNew($AssertionError);
						}
					}
					if (ok) {
						return;
					}
				}
			}
		}
		$var($SecurityException, se, $new($SecurityException, "Access denied! Invalid access level for requested MBeanServer operation."_s));
		if (newPropertyValue != nullptr) {
			$var($SecurityException, se2, $new($SecurityException, $$str({"Access property for this identity should be similar to: "_s, MBeanServerFileAccessController::READWRITE, " "_s, newPropertyValue})));
			se->initCause(se2);
		}
		$throw(se);
	}
}

bool MBeanServerFileAccessController::checkCreateAccess($MBeanServerFileAccessController$Access* access, $String* className) {
	$init(MBeanServerFileAccessController);
	$useLocalCurrentObjectStackCache();
	{
		$var($StringArray, arr$, $nc(access)->createPatterns);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, classNamePattern, arr$->get(i$));
			{
				if (classNameMatch(classNamePattern, className)) {
					return true;
				}
			}
		}
	}
	return false;
}

bool MBeanServerFileAccessController::classNameMatch($String* pattern, $String* className) {
	$init(MBeanServerFileAccessController);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	$var($StringTokenizer, stok, $new($StringTokenizer, pattern, "*"_s, true));
	while (stok->hasMoreTokens()) {
		$var($String, tok, stok->nextToken());
		if ($nc(tok)->equals("*"_s)) {
			sb->append("[^.]*"_s);
		} else {
			sb->append($($Pattern::quote(tok)));
		}
	}
	return $nc(className)->matches($(sb->toString()));
}

void MBeanServerFileAccessController::parseProperties($Properties* props) {
	$useLocalCurrentObjectStackCache();
	$set(this, accessMap, $new($HashMap));
	{
		$var($Iterator, i$, $nc($($nc(props)->entrySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($String, identity, $cast($String, $nc(entry)->getKey()));
				$var($String, accessString, $cast($String, entry->getValue()));
				$var($MBeanServerFileAccessController$Access, access, $MBeanServerFileAccessController$Parser::parseAccess(identity, accessString));
				$nc(this->accessMap)->put(identity, access);
			}
		}
	}
}

MBeanServerFileAccessController::MBeanServerFileAccessController() {
}

void clinit$MBeanServerFileAccessController($Class* class$) {
	$assignStatic(MBeanServerFileAccessController::READONLY, "readonly"_s);
	$assignStatic(MBeanServerFileAccessController::READWRITE, "readwrite"_s);
	$assignStatic(MBeanServerFileAccessController::CREATE, "create"_s);
	$assignStatic(MBeanServerFileAccessController::UNREGISTER, "unregister"_s);
}

$Class* MBeanServerFileAccessController::load$($String* name, bool initialize) {
	$loadClass(MBeanServerFileAccessController, name, initialize, &_MBeanServerFileAccessController_ClassInfo_, clinit$MBeanServerFileAccessController, allocate$MBeanServerFileAccessController);
	return class$;
}

$Class* MBeanServerFileAccessController::class$ = nullptr;

				} // security
			} // remote
		} // jmx
	} // sun
} // com