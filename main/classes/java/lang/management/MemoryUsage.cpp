#include <java/lang/management/MemoryUsage.h>

#include <javax/management/openmbean/CompositeData.h>
#include <sun/management/MemoryUsageCompositeData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $MemoryUsageCompositeData = ::sun::management::MemoryUsageCompositeData;

namespace java {
	namespace lang {
		namespace management {

$FieldInfo _MemoryUsage_FieldInfo_[] = {
	{"init", "J", nullptr, $PRIVATE | $FINAL, $field(MemoryUsage, init)},
	{"used", "J", nullptr, $PRIVATE | $FINAL, $field(MemoryUsage, used)},
	{"committed", "J", nullptr, $PRIVATE | $FINAL, $field(MemoryUsage, committed)},
	{"max", "J", nullptr, $PRIVATE | $FINAL, $field(MemoryUsage, max)},
	{}
};

$MethodInfo _MemoryUsage_MethodInfo_[] = {
	{"<init>", "(JJJJ)V", nullptr, $PUBLIC, $method(static_cast<void(MemoryUsage::*)(int64_t,int64_t,int64_t,int64_t)>(&MemoryUsage::init$))},
	{"<init>", "(Ljavax/management/openmbean/CompositeData;)V", nullptr, $PRIVATE, $method(static_cast<void(MemoryUsage::*)($CompositeData*)>(&MemoryUsage::init$))},
	{"from", "(Ljavax/management/openmbean/CompositeData;)Ljava/lang/management/MemoryUsage;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MemoryUsage*(*)($CompositeData*)>(&MemoryUsage::from))},
	{"getCommitted", "()J", nullptr, $PUBLIC},
	{"getInit", "()J", nullptr, $PUBLIC},
	{"getMax", "()J", nullptr, $PUBLIC},
	{"getUsed", "()J", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MemoryUsage_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.management.MemoryUsage",
	"java.lang.Object",
	nullptr,
	_MemoryUsage_FieldInfo_,
	_MemoryUsage_MethodInfo_
};

$Object* allocate$MemoryUsage($Class* clazz) {
	return $of($alloc(MemoryUsage));
}

void MemoryUsage::init$(int64_t init, int64_t used, int64_t committed, int64_t max) {
	$useLocalCurrentObjectStackCache();
	if (init < -1) {
		$throwNew($IllegalArgumentException, $$str({"init parameter = "_s, $$str(init), " is negative but not -1."_s}));
	}
	if (max < -1) {
		$throwNew($IllegalArgumentException, $$str({"max parameter = "_s, $$str(max), " is negative but not -1."_s}));
	}
	if (used < 0) {
		$throwNew($IllegalArgumentException, $$str({"used parameter = "_s, $$str(used), " is negative."_s}));
	}
	if (committed < 0) {
		$throwNew($IllegalArgumentException, $$str({"committed parameter = "_s, $$str(committed), " is negative."_s}));
	}
	if (used > committed) {
		$throwNew($IllegalArgumentException, $$str({"used = "_s, $$str(used), " should be <= committed = "_s, $$str(committed)}));
	}
	if (max >= 0 && committed > max) {
		$throwNew($IllegalArgumentException, $$str({"committed = "_s, $$str(committed), " should be < max = "_s, $$str(max)}));
	}
	this->init = init;
	this->used = used;
	this->committed = committed;
	this->max = max;
}

void MemoryUsage::init$($CompositeData* cd) {
	$MemoryUsageCompositeData::validateCompositeData(cd);
	this->init = $MemoryUsageCompositeData::getInit(cd);
	this->used = $MemoryUsageCompositeData::getUsed(cd);
	this->committed = $MemoryUsageCompositeData::getCommitted(cd);
	this->max = $MemoryUsageCompositeData::getMax(cd);
}

int64_t MemoryUsage::getInit() {
	return this->init;
}

int64_t MemoryUsage::getUsed() {
	return this->used;
}

int64_t MemoryUsage::getCommitted() {
	return this->committed;
}

int64_t MemoryUsage::getMax() {
	return this->max;
}

$String* MemoryUsage::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	buf->append($$str({"init = "_s, $$str(this->init), "("_s, $$str((this->init >> 10)), "K) "_s}));
	buf->append($$str({"used = "_s, $$str(this->used), "("_s, $$str((this->used >> 10)), "K) "_s}));
	buf->append($$str({"committed = "_s, $$str(this->committed), "("_s, $$str((this->committed >> 10)), "K) "_s}));
	buf->append($$str({"max = "_s, $$str(this->max), "("_s, $$str((this->max >> 10)), "K)"_s}));
	return buf->toString();
}

MemoryUsage* MemoryUsage::from($CompositeData* cd) {
	if (cd == nullptr) {
		return nullptr;
	}
	if ($instanceOf($MemoryUsageCompositeData, cd)) {
		return $nc(($cast($MemoryUsageCompositeData, cd)))->getMemoryUsage();
	} else {
		return $new(MemoryUsage, cd);
	}
}

MemoryUsage::MemoryUsage() {
}

$Class* MemoryUsage::load$($String* name, bool initialize) {
	$loadClass(MemoryUsage, name, initialize, &_MemoryUsage_ClassInfo_, allocate$MemoryUsage);
	return class$;
}

$Class* MemoryUsage::class$ = nullptr;

		} // management
	} // lang
} // java