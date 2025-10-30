#include <com/sun/jmx/mbeanserver/ClassLoaderRepositorySupport$LoaderEntry.h>

#include <com/sun/jmx/mbeanserver/ClassLoaderRepositorySupport.h>
#include <java/lang/ClassLoader.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ClassLoaderRepositorySupport = ::com::sun::jmx::mbeanserver::ClassLoaderRepositorySupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _ClassLoaderRepositorySupport$LoaderEntry_FieldInfo_[] = {
	{"name", "Ljavax/management/ObjectName;", nullptr, 0, $field(ClassLoaderRepositorySupport$LoaderEntry, name)},
	{"loader", "Ljava/lang/ClassLoader;", nullptr, 0, $field(ClassLoaderRepositorySupport$LoaderEntry, loader)},
	{}
};

$MethodInfo _ClassLoaderRepositorySupport$LoaderEntry_MethodInfo_[] = {
	{"<init>", "(Ljavax/management/ObjectName;Ljava/lang/ClassLoader;)V", nullptr, 0, $method(static_cast<void(ClassLoaderRepositorySupport$LoaderEntry::*)($ObjectName*,$ClassLoader*)>(&ClassLoaderRepositorySupport$LoaderEntry::init$))},
	{}
};

$InnerClassInfo _ClassLoaderRepositorySupport$LoaderEntry_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.ClassLoaderRepositorySupport$LoaderEntry", "com.sun.jmx.mbeanserver.ClassLoaderRepositorySupport", "LoaderEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ClassLoaderRepositorySupport$LoaderEntry_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jmx.mbeanserver.ClassLoaderRepositorySupport$LoaderEntry",
	"java.lang.Object",
	nullptr,
	_ClassLoaderRepositorySupport$LoaderEntry_FieldInfo_,
	_ClassLoaderRepositorySupport$LoaderEntry_MethodInfo_,
	nullptr,
	nullptr,
	_ClassLoaderRepositorySupport$LoaderEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.ClassLoaderRepositorySupport"
};

$Object* allocate$ClassLoaderRepositorySupport$LoaderEntry($Class* clazz) {
	return $of($alloc(ClassLoaderRepositorySupport$LoaderEntry));
}

void ClassLoaderRepositorySupport$LoaderEntry::init$($ObjectName* name, $ClassLoader* loader) {
	$set(this, name, name);
	$set(this, loader, loader);
}

ClassLoaderRepositorySupport$LoaderEntry::ClassLoaderRepositorySupport$LoaderEntry() {
}

$Class* ClassLoaderRepositorySupport$LoaderEntry::load$($String* name, bool initialize) {
	$loadClass(ClassLoaderRepositorySupport$LoaderEntry, name, initialize, &_ClassLoaderRepositorySupport$LoaderEntry_ClassInfo_, allocate$ClassLoaderRepositorySupport$LoaderEntry);
	return class$;
}

$Class* ClassLoaderRepositorySupport$LoaderEntry::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com