#include <javax/management/NotificationFilterSupport.h>

#include <java/util/AbstractList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <javax/management/Notification.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractList = ::java::util::AbstractList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $Notification = ::javax::management::Notification;
using $NotificationFilter = ::javax::management::NotificationFilter;

namespace javax {
	namespace management {

$FieldInfo _NotificationFilterSupport_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NotificationFilterSupport, serialVersionUID)},
	{"enabledTypes", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(NotificationFilterSupport, enabledTypes)},
	{}
};

$MethodInfo _NotificationFilterSupport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NotificationFilterSupport::*)()>(&NotificationFilterSupport::init$))},
	{"disableAllTypes", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"disableType", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"enableType", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.lang.IllegalArgumentException"},
	{"getEnabledTypes", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/lang/String;>;", $PUBLIC | $SYNCHRONIZED},
	{"isNotificationEnabled", "(Ljavax/management/Notification;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$ClassInfo _NotificationFilterSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.NotificationFilterSupport",
	"java.lang.Object",
	"javax.management.NotificationFilter",
	_NotificationFilterSupport_FieldInfo_,
	_NotificationFilterSupport_MethodInfo_
};

$Object* allocate$NotificationFilterSupport($Class* clazz) {
	return $of($alloc(NotificationFilterSupport));
}

void NotificationFilterSupport::init$() {
	$set(this, enabledTypes, $new($Vector));
}

bool NotificationFilterSupport::isNotificationEnabled($Notification* notification) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($String, type, $nc(notification)->getType());
		if (type == nullptr) {
			return false;
		}
		try {
			{
				$var($Iterator, i$, $nc(this->enabledTypes)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($String, prefix, $cast($String, i$->next()));
					{
						if ($nc(type)->startsWith(prefix)) {
							return true;
						}
					}
				}
			}
		} catch ($NullPointerException& e) {
			return false;
		}
		return false;
	}
}

void NotificationFilterSupport::enableType($String* prefix) {
	$synchronized(this) {
		if (prefix == nullptr) {
			$throwNew($IllegalArgumentException, "The prefix cannot be null."_s);
		}
		if (!$nc(this->enabledTypes)->contains(prefix)) {
			$nc(this->enabledTypes)->add(prefix);
		}
	}
}

void NotificationFilterSupport::disableType($String* prefix) {
	$synchronized(this) {
		$nc(this->enabledTypes)->remove($of(prefix));
	}
}

void NotificationFilterSupport::disableAllTypes() {
	$synchronized(this) {
		$nc(this->enabledTypes)->clear();
	}
}

$Vector* NotificationFilterSupport::getEnabledTypes() {
	$synchronized(this) {
		return $cast($Vector, this->enabledTypes);
	}
}

NotificationFilterSupport::NotificationFilterSupport() {
}

$Class* NotificationFilterSupport::load$($String* name, bool initialize) {
	$loadClass(NotificationFilterSupport, name, initialize, &_NotificationFilterSupport_ClassInfo_, allocate$NotificationFilterSupport);
	return class$;
}

$Class* NotificationFilterSupport::class$ = nullptr;

	} // management
} // javax