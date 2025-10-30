#include <javax/management/MBeanFeatureInfo.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/io/StreamCorruptedException.h>
#include <java/util/Objects.h>
#include <javax/management/Descriptor.h>
#include <javax/management/ImmutableDescriptor.h>
#include <jcpp.h>

#undef EMPTY_DESCRIPTOR

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $StreamCorruptedException = ::java::io::StreamCorruptedException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Descriptor = ::javax::management::Descriptor;
using $DescriptorRead = ::javax::management::DescriptorRead;
using $ImmutableDescriptor = ::javax::management::ImmutableDescriptor;

namespace javax {
	namespace management {

$FieldInfo _MBeanFeatureInfo_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(MBeanFeatureInfo, serialVersionUID)},
	{"name", "Ljava/lang/String;", nullptr, $PROTECTED, $field(MBeanFeatureInfo, name)},
	{"description", "Ljava/lang/String;", nullptr, $PROTECTED, $field(MBeanFeatureInfo, description)},
	{"descriptor", "Ljavax/management/Descriptor;", nullptr, $PRIVATE | $TRANSIENT, $field(MBeanFeatureInfo, descriptor)},
	{}
};

$MethodInfo _MBeanFeatureInfo_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanFeatureInfo::*)($String*,$String*)>(&MBeanFeatureInfo::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/Descriptor;)V", nullptr, $PUBLIC, $method(static_cast<void(MBeanFeatureInfo::*)($String*,$String*,$Descriptor*)>(&MBeanFeatureInfo::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDescriptor", "()Ljavax/management/Descriptor;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(MBeanFeatureInfo::*)($ObjectInputStream*)>(&MBeanFeatureInfo::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(MBeanFeatureInfo::*)($ObjectOutputStream*)>(&MBeanFeatureInfo::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _MBeanFeatureInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.management.MBeanFeatureInfo",
	"java.lang.Object",
	"java.io.Serializable,javax.management.DescriptorRead",
	_MBeanFeatureInfo_FieldInfo_,
	_MBeanFeatureInfo_MethodInfo_
};

$Object* allocate$MBeanFeatureInfo($Class* clazz) {
	return $of($alloc(MBeanFeatureInfo));
}

$Object* MBeanFeatureInfo::clone() {
	 return this->$Serializable::clone();
}

$String* MBeanFeatureInfo::toString() {
	 return this->$Serializable::toString();
}

void MBeanFeatureInfo::finalize() {
	this->$Serializable::finalize();
}

void MBeanFeatureInfo::init$($String* name, $String* description) {
	MBeanFeatureInfo::init$(name, description, nullptr);
}

void MBeanFeatureInfo::init$($String* name, $String* description, $Descriptor* descriptor) {
	$set(this, name, name);
	$set(this, description, description);
	$set(this, descriptor, descriptor);
}

$String* MBeanFeatureInfo::getName() {
	return this->name;
}

$String* MBeanFeatureInfo::getDescription() {
	return this->description;
}

$Descriptor* MBeanFeatureInfo::getDescriptor() {
	return $cast($Descriptor, $nc($($ImmutableDescriptor::nonNullDescriptor(this->descriptor)))->clone());
}

bool MBeanFeatureInfo::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(o, this)) {
		return true;
	}
	if (!($instanceOf(MBeanFeatureInfo, o))) {
		return false;
	}
	$var(MBeanFeatureInfo, p, $cast(MBeanFeatureInfo, o));
	$var($Object, var$2, $of($nc(p)->getName()));
	bool var$1 = $Objects::equals(var$2, $(getName()));
	if (var$1) {
		$var($Object, var$3, $of($nc(p)->getDescription()));
		var$1 = $Objects::equals(var$3, $(getDescription()));
	}
	bool var$0 = var$1;
	if (var$0) {
		$var($Object, var$4, $of($nc(p)->getDescriptor()));
		var$0 = $Objects::equals(var$4, $(getDescriptor()));
	}
	return (var$0);
}

int32_t MBeanFeatureInfo::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t var$1 = $nc($(getName()))->hashCode();
	int32_t var$0 = var$1 ^ $nc($(getDescription()))->hashCode();
	return var$0 ^ $nc($(getDescriptor()))->hashCode();
}

void MBeanFeatureInfo::writeObject($ObjectOutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$nc(out)->defaultWriteObject();
	$load($ImmutableDescriptor);
	if (this->descriptor != nullptr && $nc($of(this->descriptor))->getClass() == $ImmutableDescriptor::class$) {
		out->write(1);
		$var($StringArray, names, $nc(this->descriptor)->getFieldNames());
		out->writeObject(names);
		out->writeObject($($nc(this->descriptor)->getFieldValues(names)));
	} else {
		out->write(0);
		out->writeObject(this->descriptor);
	}
}

void MBeanFeatureInfo::readObject($ObjectInputStream* in) {
	$useLocalCurrentObjectStackCache();
	$nc(in)->defaultReadObject();
	{
		$var($StringArray, names, nullptr)
		$var($ObjectArray, values, nullptr)
		switch (in->read()) {
		case 1:
			{
				$assign(names, $cast($StringArray, in->readObject()));
				$assign(values, $cast($ObjectArray, in->readObject()));
				$init($ImmutableDescriptor);
				$set(this, descriptor, ($nc(names)->length == 0) ? static_cast<$Descriptor*>($ImmutableDescriptor::EMPTY_DESCRIPTOR) : static_cast<$Descriptor*>($new($ImmutableDescriptor, names, values)));
				break;
			}
		case 0:
			{
				$set(this, descriptor, $cast($Descriptor, in->readObject()));
				if (this->descriptor == nullptr) {
					$init($ImmutableDescriptor);
					$set(this, descriptor, $ImmutableDescriptor::EMPTY_DESCRIPTOR);
				}
				break;
			}
		case -1:
			{
				$init($ImmutableDescriptor);
				$set(this, descriptor, $ImmutableDescriptor::EMPTY_DESCRIPTOR);
				break;
			}
		default:
			{
				$throwNew($StreamCorruptedException, "Got unexpected byte."_s);
			}
		}
	}
}

MBeanFeatureInfo::MBeanFeatureInfo() {
}

$Class* MBeanFeatureInfo::load$($String* name, bool initialize) {
	$loadClass(MBeanFeatureInfo, name, initialize, &_MBeanFeatureInfo_ClassInfo_, allocate$MBeanFeatureInfo);
	return class$;
}

$Class* MBeanFeatureInfo::class$ = nullptr;

	} // management
} // javax