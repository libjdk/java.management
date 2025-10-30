#include <sun/management/counter/perf/PerfInstrumentation.h>

#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/ByteOrder.h>
#include <java/nio/LongBuffer.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/NavigableMap.h>
#include <java/util/Set.h>
#include <java/util/SortedMap.h>
#include <java/util/TreeMap.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <sun/management/counter/AbstractCounter.h>
#include <sun/management/counter/Counter.h>
#include <sun/management/counter/Units.h>
#include <sun/management/counter/Variability.h>
#include <sun/management/counter/perf/InstrumentationException.h>
#include <sun/management/counter/perf/PerfByteArrayCounter.h>
#include <sun/management/counter/perf/PerfDataEntry.h>
#include <sun/management/counter/perf/PerfDataType.h>
#include <sun/management/counter/perf/PerfLongArrayCounter.h>
#include <sun/management/counter/perf/PerfLongCounter.h>
#include <sun/management/counter/perf/PerfStringCounter.h>
#include <sun/management/counter/perf/Prologue.h>
#include <jcpp.h>

#undef BYTE
#undef LONG
#undef STRING

using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ByteOrder = ::java::nio::ByteOrder;
using $LongBuffer = ::java::nio::LongBuffer;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $NavigableMap = ::java::util::NavigableMap;
using $Set = ::java::util::Set;
using $SortedMap = ::java::util::SortedMap;
using $TreeMap = ::java::util::TreeMap;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;
using $AbstractCounter = ::sun::management::counter::AbstractCounter;
using $Counter = ::sun::management::counter::Counter;
using $Units = ::sun::management::counter::Units;
using $Variability = ::sun::management::counter::Variability;
using $InstrumentationException = ::sun::management::counter::perf::InstrumentationException;
using $PerfByteArrayCounter = ::sun::management::counter::perf::PerfByteArrayCounter;
using $PerfDataEntry = ::sun::management::counter::perf::PerfDataEntry;
using $PerfDataType = ::sun::management::counter::perf::PerfDataType;
using $PerfLongArrayCounter = ::sun::management::counter::perf::PerfLongArrayCounter;
using $PerfLongCounter = ::sun::management::counter::perf::PerfLongCounter;
using $PerfStringCounter = ::sun::management::counter::perf::PerfStringCounter;
using $Prologue = ::sun::management::counter::perf::Prologue;

namespace sun {
	namespace management {
		namespace counter {
			namespace perf {

$FieldInfo _PerfInstrumentation_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(PerfInstrumentation, $assertionsDisabled)},
	{"buffer", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $field(PerfInstrumentation, buffer)},
	{"prologue", "Lsun/management/counter/perf/Prologue;", nullptr, $PRIVATE, $field(PerfInstrumentation, prologue)},
	{"lastModificationTime", "J", nullptr, $PRIVATE, $field(PerfInstrumentation, lastModificationTime)},
	{"lastUsed", "J", nullptr, $PRIVATE, $field(PerfInstrumentation, lastUsed)},
	{"nextEntry", "I", nullptr, $PRIVATE, $field(PerfInstrumentation, nextEntry)},
	{"map", "Ljava/util/SortedMap;", "Ljava/util/SortedMap<Ljava/lang/String;Lsun/management/counter/Counter;>;", $PRIVATE, $field(PerfInstrumentation, map)},
	{}
};

$MethodInfo _PerfInstrumentation_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $method(static_cast<void(PerfInstrumentation::*)($ByteBuffer*)>(&PerfInstrumentation::init$))},
	{"findByPattern", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Lsun/management/counter/Counter;>;", $PUBLIC | $SYNCHRONIZED},
	{"getAllCounters", "()Ljava/util/List;", "()Ljava/util/List<Lsun/management/counter/Counter;>;", $PUBLIC | $SYNCHRONIZED},
	{"getMajorVersion", "()I", nullptr, $PUBLIC},
	{"getMinorVersion", "()I", nullptr, $PUBLIC},
	{"getModificationTimeStamp", "()J", nullptr, $PUBLIC},
	{"getNextCounter", "()Lsun/management/counter/Counter;", nullptr, 0},
	{"hasNext", "()Z", nullptr, 0},
	{"rewind", "()V", nullptr, 0},
	{}
};

$ClassInfo _PerfInstrumentation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.management.counter.perf.PerfInstrumentation",
	"java.lang.Object",
	nullptr,
	_PerfInstrumentation_FieldInfo_,
	_PerfInstrumentation_MethodInfo_
};

$Object* allocate$PerfInstrumentation($Class* clazz) {
	return $of($alloc(PerfInstrumentation));
}

bool PerfInstrumentation::$assertionsDisabled = false;

void PerfInstrumentation::init$($ByteBuffer* b) {
	$useLocalCurrentObjectStackCache();
	$set(this, prologue, $new($Prologue, b));
	$set(this, buffer, b);
	$nc(this->buffer)->order($($nc(this->prologue)->getByteOrder()));
	int32_t major = getMajorVersion();
	int32_t minor = getMinorVersion();
	if (major < 2) {
		$throwNew($InstrumentationException, $$str({"Unsupported version: "_s, $$str(major), "."_s, $$str(minor)}));
	}
	rewind();
}

int32_t PerfInstrumentation::getMajorVersion() {
	return $nc(this->prologue)->getMajorVersion();
}

int32_t PerfInstrumentation::getMinorVersion() {
	return $nc(this->prologue)->getMinorVersion();
}

int64_t PerfInstrumentation::getModificationTimeStamp() {
	return $nc(this->prologue)->getModificationTimeStamp();
}

void PerfInstrumentation::rewind() {
	$nc(this->buffer)->rewind();
	$nc(this->buffer)->position($nc(this->prologue)->getEntryOffset());
	this->nextEntry = $nc(this->buffer)->position();
	$set(this, map, $new($TreeMap));
}

bool PerfInstrumentation::hasNext() {
	return (this->nextEntry < $nc(this->prologue)->getUsed());
}

$Counter* PerfInstrumentation::getNextCounter() {
	$useLocalCurrentObjectStackCache();
	if (!hasNext()) {
		return nullptr;
	}
	if ((this->nextEntry % 4) != 0) {
		$throwNew($InstrumentationException, $$str({"Entry index not properly aligned: "_s, $$str(this->nextEntry)}));
	}
	if (this->nextEntry < 0 || this->nextEntry > $nc(this->buffer)->limit()) {
		$throwNew($InstrumentationException, $$str({"Entry index out of bounds: nextEntry = "_s, $$str(this->nextEntry), ", limit = "_s, $$str($nc(this->buffer)->limit())}));
	}
	$nc(this->buffer)->position(this->nextEntry);
	$var($PerfDataEntry, entry, $new($PerfDataEntry, this->buffer));
	this->nextEntry = this->nextEntry + entry->size();
	$var($Counter, counter, nullptr);
	$var($PerfDataType, type, entry->type());
	$init($PerfDataType);
	if (type == $PerfDataType::BYTE) {
		$init($Units);
		bool var$0 = entry->units() == $Units::STRING;
		if (var$0 && entry->vectorLength() > 0) {
			$var($String, var$1, entry->name());
			$var($Variability, var$2, entry->variability());
			int32_t var$3 = entry->flags();
			int32_t var$4 = entry->vectorLength();
			$assign(counter, static_cast<$Counter*>(static_cast<$AbstractCounter*>(static_cast<$PerfByteArrayCounter*>($new($PerfStringCounter, var$1, var$2, var$3, var$4, $(entry->byteData()))))));
		} else if (entry->vectorLength() > 0) {
			$var($String, var$5, entry->name());
			$var($Units, var$6, entry->units());
			$var($Variability, var$7, entry->variability());
			int32_t var$8 = entry->flags();
			int32_t var$9 = entry->vectorLength();
			$assign(counter, static_cast<$Counter*>(static_cast<$AbstractCounter*>($new($PerfByteArrayCounter, var$5, var$6, var$7, var$8, var$9, $(entry->byteData())))));
		} else if (!PerfInstrumentation::$assertionsDisabled) {
			$throwNew($AssertionError);
		}
	} else {
		if (type == $PerfDataType::LONG) {
			if (entry->vectorLength() == 0) {
				$var($String, var$10, entry->name());
				$var($Units, var$11, entry->units());
				$var($Variability, var$12, entry->variability());
				int32_t var$13 = entry->flags();
				$assign(counter, static_cast<$Counter*>(static_cast<$AbstractCounter*>($new($PerfLongCounter, var$10, var$11, var$12, var$13, $(entry->longData())))));
			} else {
				$var($String, var$14, entry->name());
				$var($Units, var$15, entry->units());
				$var($Variability, var$16, entry->variability());
				int32_t var$17 = entry->flags();
				int32_t var$18 = entry->vectorLength();
				$assign(counter, static_cast<$Counter*>(static_cast<$AbstractCounter*>($new($PerfLongArrayCounter, var$14, var$15, var$16, var$17, var$18, $(entry->longData())))));
			}
		} else if (!PerfInstrumentation::$assertionsDisabled) {
			$throwNew($AssertionError);
		}
	}
	return counter;
}

$List* PerfInstrumentation::getAllCounters() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		while (hasNext()) {
			$var($Counter, c, getNextCounter());
			if (c != nullptr) {
				$nc(this->map)->put($(c->getName()), c);
			}
		}
		return $new($ArrayList, $($nc(this->map)->values()));
	}
}

$List* PerfInstrumentation::findByPattern($String* patternString) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		while (hasNext()) {
			$var($Counter, c, getNextCounter());
			if (c != nullptr) {
				$nc(this->map)->put($(c->getName()), c);
			}
		}
		$var($Pattern, pattern, $Pattern::compile(patternString));
		$var($Matcher, matcher, $nc(pattern)->matcher(""_s));
		$var($List, matches, $new($ArrayList));
		{
			$var($Iterator, i$, $nc($($nc(this->map)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, me, $cast($Map$Entry, i$->next()));
				{
					$var($String, name, $cast($String, $nc(me)->getKey()));
					$nc(matcher)->reset(name);
					if (matcher->lookingAt()) {
						matches->add($cast($Counter, $(me->getValue())));
					}
				}
			}
		}
		return matches;
	}
}

void clinit$PerfInstrumentation($Class* class$) {
	PerfInstrumentation::$assertionsDisabled = !PerfInstrumentation::class$->desiredAssertionStatus();
}

PerfInstrumentation::PerfInstrumentation() {
}

$Class* PerfInstrumentation::load$($String* name, bool initialize) {
	$loadClass(PerfInstrumentation, name, initialize, &_PerfInstrumentation_ClassInfo_, clinit$PerfInstrumentation, allocate$PerfInstrumentation);
	return class$;
}

$Class* PerfInstrumentation::class$ = nullptr;

			} // perf
		} // counter
	} // management
} // sun