#include <javax/management/MBeanServerPermissionCollection.h>

#include <java/lang/SecurityException.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/Set.h>
#include <javax/management/MBeanServerPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $Set = ::java::util::Set;
using $MBeanServerPermission = ::javax::management::MBeanServerPermission;

namespace javax {
	namespace management {

$FieldInfo _MBeanServerPermissionCollection_FieldInfo_[] = {
	{"collectionPermission", "Ljavax/management/MBeanServerPermission;", nullptr, $PRIVATE, $field(MBeanServerPermissionCollection, collectionPermission)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MBeanServerPermissionCollection, serialVersionUID)},
	{}
};

$MethodInfo _MBeanServerPermissionCollection_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MBeanServerPermissionCollection::*)()>(&MBeanServerPermissionCollection::init$))},
	{"add", "(Ljava/security/Permission;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PUBLIC | $SYNCHRONIZED},
	{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _MBeanServerPermissionCollection_ClassInfo_ = {
	$ACC_SUPER,
	"javax.management.MBeanServerPermissionCollection",
	"java.security.PermissionCollection",
	nullptr,
	_MBeanServerPermissionCollection_FieldInfo_,
	_MBeanServerPermissionCollection_MethodInfo_
};

$Object* allocate$MBeanServerPermissionCollection($Class* clazz) {
	return $of($alloc(MBeanServerPermissionCollection));
}

void MBeanServerPermissionCollection::init$() {
	$PermissionCollection::init$();
}

void MBeanServerPermissionCollection::add($Permission* permission) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (!($instanceOf($MBeanServerPermission, permission))) {
			$var($String, msg, $str({"Permission not an MBeanServerPermission: "_s, permission}));
			$throwNew($IllegalArgumentException, msg);
		}
		if (isReadOnly()) {
			$throwNew($SecurityException, "Read-only permission collection"_s);
		}
		$var($MBeanServerPermission, mbsp, $cast($MBeanServerPermission, permission));
		if (this->collectionPermission == nullptr) {
			$set(this, collectionPermission, mbsp);
		} else if (!$nc(this->collectionPermission)->implies(permission)) {
			int32_t newmask = $nc(this->collectionPermission)->mask | $nc(mbsp)->mask;
			$set(this, collectionPermission, $new($MBeanServerPermission, newmask));
		}
	}
}

bool MBeanServerPermissionCollection::implies($Permission* permission) {
	$synchronized(this) {
		return (this->collectionPermission != nullptr && $nc(this->collectionPermission)->implies(permission));
	}
}

$Enumeration* MBeanServerPermissionCollection::elements() {
	$synchronized(this) {
		$var($Set, set, nullptr);
		if (this->collectionPermission == nullptr) {
			$assign(set, $Collections::emptySet());
		} else {
			$assign(set, $Collections::singleton(static_cast<$Permission*>(this->collectionPermission)));
		}
		return $Collections::enumeration(set);
	}
}

MBeanServerPermissionCollection::MBeanServerPermissionCollection() {
}

$Class* MBeanServerPermissionCollection::load$($String* name, bool initialize) {
	$loadClass(MBeanServerPermissionCollection, name, initialize, &_MBeanServerPermissionCollection_ClassInfo_, allocate$MBeanServerPermissionCollection);
	return class$;
}

$Class* MBeanServerPermissionCollection::class$ = nullptr;

	} // management
} // javax