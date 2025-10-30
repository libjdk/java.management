#include <com/sun/jmx/mbeanserver/MBeanInstantiator.h>

#include <com/sun/jmx/defaults/JmxProperties.h>
#include <com/sun/jmx/mbeanserver/Introspector.h>
#include <com/sun/jmx/mbeanserver/MBeanInstantiator$1.h>
#include <com/sun/jmx/mbeanserver/ModifiableClassLoaderRepository.h>
#include <com/sun/jmx/mbeanserver/ObjectInputStreamWithLoader.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/NoSuchMethodError.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Modifier.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/CodeSource.h>
#include <java/security/Permission.h>
#include <java/security/PermissionCollection.h>
#include <java/security/Permissions.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/ProtectionDomain.h>
#include <java/util/Map.h>
#include <javax/management/InstanceNotFoundException.h>
#include <javax/management/MBeanException.h>
#include <javax/management/MBeanPermission.h>
#include <javax/management/ObjectName.h>
#include <javax/management/OperationsException.h>
#include <javax/management/ReflectionException.h>
#include <javax/management/RuntimeErrorException.h>
#include <javax/management/RuntimeMBeanException.h>
#include <javax/management/RuntimeOperationsException.h>
#include <sun/reflect/misc/ConstructorUtil.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef DEBUG
#undef MBEANSERVER_LOGGER
#undef TYPE

using $ProtectionDomainArray = $Array<::java::security::ProtectionDomain>;
using $JmxProperties = ::com::sun::jmx::defaults::JmxProperties;
using $Introspector = ::com::sun::jmx::mbeanserver::Introspector;
using $MBeanInstantiator$1 = ::com::sun::jmx::mbeanserver::MBeanInstantiator$1;
using $ModifiableClassLoaderRepository = ::com::sun::jmx::mbeanserver::ModifiableClassLoaderRepository;
using $ObjectInputStreamWithLoader = ::com::sun::jmx::mbeanserver::ObjectInputStreamWithLoader;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Double = ::java::lang::Double;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodError = ::java::lang::NoSuchMethodError;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Short = ::java::lang::Short;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $Constructor = ::java::lang::reflect::Constructor;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Modifier = ::java::lang::reflect::Modifier;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $CodeSource = ::java::security::CodeSource;
using $Permission = ::java::security::Permission;
using $PermissionCollection = ::java::security::PermissionCollection;
using $Permissions = ::java::security::Permissions;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $Map = ::java::util::Map;
using $InstanceNotFoundException = ::javax::management::InstanceNotFoundException;
using $MBeanException = ::javax::management::MBeanException;
using $MBeanPermission = ::javax::management::MBeanPermission;
using $ObjectName = ::javax::management::ObjectName;
using $OperationsException = ::javax::management::OperationsException;
using $ReflectionException = ::javax::management::ReflectionException;
using $RuntimeErrorException = ::javax::management::RuntimeErrorException;
using $RuntimeMBeanException = ::javax::management::RuntimeMBeanException;
using $RuntimeOperationsException = ::javax::management::RuntimeOperationsException;
using $ClassLoaderRepository = ::javax::management::loading::ClassLoaderRepository;
using $ConstructorUtil = ::sun::reflect::misc::ConstructorUtil;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$FieldInfo _MBeanInstantiator_FieldInfo_[] = {
	{"clr", "Lcom/sun/jmx/mbeanserver/ModifiableClassLoaderRepository;", nullptr, $PRIVATE | $FINAL, $field(MBeanInstantiator, clr)},
	{"primitiveClasses", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(MBeanInstantiator, primitiveClasses)},
	{}
};

$MethodInfo _MBeanInstantiator_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jmx/mbeanserver/ModifiableClassLoaderRepository;)V", nullptr, 0, $method(static_cast<void(MBeanInstantiator::*)($ModifiableClassLoaderRepository*)>(&MBeanInstantiator::init$))},
	{"checkMBeanPermission", "(Ljava/lang/Class;Ljava/lang/String;Ljavax/management/ObjectName;Ljava/lang/String;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljavax/management/ObjectName;Ljava/lang/String;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Class*,$String*,$ObjectName*,$String*)>(&MBeanInstantiator::checkMBeanPermission))},
	{"checkMBeanPermission", "(Ljava/lang/String;Ljava/lang/String;Ljavax/management/ObjectName;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*,$ObjectName*,$String*)>(&MBeanInstantiator::checkMBeanPermission)), "java.lang.SecurityException"},
	{"deserialize", "(Ljava/lang/ClassLoader;[B)Ljava/io/ObjectInputStream;", nullptr, $PUBLIC, nullptr, "javax.management.OperationsException"},
	{"deserialize", "(Ljava/lang/String;Ljavax/management/ObjectName;[BLjava/lang/ClassLoader;)Ljava/io/ObjectInputStream;", nullptr, $PUBLIC, nullptr, "javax.management.InstanceNotFoundException,javax.management.OperationsException,javax.management.ReflectionException"},
	{"ensureClassAccess", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Class*)>(&MBeanInstantiator::ensureClassAccess)), "java.lang.IllegalAccessException"},
	{"findClass", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class<*>;", $PUBLIC, nullptr, "javax.management.ReflectionException"},
	{"findClass", "(Ljava/lang/String;Ljavax/management/ObjectName;)Ljava/lang/Class;", "(Ljava/lang/String;Ljavax/management/ObjectName;)Ljava/lang/Class<*>;", $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.InstanceNotFoundException"},
	{"findClassWithDefaultLoaderRepository", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC, nullptr, "javax.management.ReflectionException"},
	{"findConstructor", "(Ljava/lang/Class;[Ljava/lang/Class;)Ljava/lang/reflect/Constructor;", "(Ljava/lang/Class<*>;[Ljava/lang/Class<*>;)Ljava/lang/reflect/Constructor<*>;", $PRIVATE, $method(static_cast<$Constructor*(MBeanInstantiator::*)($Class*,$ClassArray*)>(&MBeanInstantiator::findConstructor))},
	{"findSignatureClasses", "([Ljava/lang/String;Ljava/lang/ClassLoader;)[Ljava/lang/Class;", "([Ljava/lang/String;Ljava/lang/ClassLoader;)[Ljava/lang/Class<*>;", $PUBLIC, nullptr, "javax.management.ReflectionException"},
	{"getClassLoader", "(Ljavax/management/ObjectName;)Ljava/lang/ClassLoader;", nullptr, $PRIVATE, $method(static_cast<$ClassLoader*(MBeanInstantiator::*)($ObjectName*)>(&MBeanInstantiator::getClassLoader))},
	{"getClassLoaderRepository", "()Lcom/sun/jmx/mbeanserver/ModifiableClassLoaderRepository;", nullptr, $PUBLIC},
	{"instantiate", "(Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;)Ljava/lang/Object;", $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.MBeanException"},
	{"instantiate", "(Ljava/lang/Class;[Ljava/lang/Object;[Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Object;", "(Ljava/lang/Class<*>;[Ljava/lang/Object;[Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Object;", $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.MBeanException"},
	{"instantiate", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.MBeanException"},
	{"instantiate", "(Ljava/lang/String;Ljavax/management/ObjectName;Ljava/lang/ClassLoader;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.MBeanException,javax.management.InstanceNotFoundException"},
	{"instantiate", "(Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.MBeanException"},
	{"instantiate", "(Ljava/lang/String;Ljavax/management/ObjectName;[Ljava/lang/Object;[Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.management.ReflectionException,javax.management.MBeanException,javax.management.InstanceNotFoundException"},
	{"loadClass", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/Class<*>;", $STATIC, $method(static_cast<$Class*(*)($String*,$ClassLoader*)>(&MBeanInstantiator::loadClass)), "javax.management.ReflectionException"},
	{"loadSignatureClasses", "([Ljava/lang/String;Ljava/lang/ClassLoader;)[Ljava/lang/Class;", "([Ljava/lang/String;Ljava/lang/ClassLoader;)[Ljava/lang/Class<*>;", $STATIC, $method(static_cast<$ClassArray*(*)($StringArray*,$ClassLoader*)>(&MBeanInstantiator::loadSignatureClasses)), "javax.management.ReflectionException"},
	{"testCreation", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC, nullptr, "javax.management.NotCompliantMBeanException"},
	{}
};

$InnerClassInfo _MBeanInstantiator_InnerClassesInfo_[] = {
	{"com.sun.jmx.mbeanserver.MBeanInstantiator$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MBeanInstantiator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.MBeanInstantiator",
	"java.lang.Object",
	nullptr,
	_MBeanInstantiator_FieldInfo_,
	_MBeanInstantiator_MethodInfo_,
	nullptr,
	nullptr,
	_MBeanInstantiator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jmx.mbeanserver.MBeanInstantiator$1"
};

$Object* allocate$MBeanInstantiator($Class* clazz) {
	return $of($alloc(MBeanInstantiator));
}

$Map* MBeanInstantiator::primitiveClasses = nullptr;

void MBeanInstantiator::init$($ModifiableClassLoaderRepository* clr) {
	$set(this, clr, clr);
}

void MBeanInstantiator::testCreation($Class* c) {
	$Introspector::testCreation(c);
}

$Class* MBeanInstantiator::findClassWithDefaultLoaderRepository($String* className) {
	$Class* theClass = nullptr;
	if (className == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "The class name cannot be null"_s), "Exception occurred during object instantiation"_s);
	}
	$ReflectUtil::checkPackageAccess(className);
	try {
		if (this->clr == nullptr) {
			$throwNew($ClassNotFoundException, className);
		}
		theClass = $nc(this->clr)->loadClass(className);
	} catch ($ClassNotFoundException& ee) {
		$throwNew($ReflectionException, ee, "The MBean class could not be loaded by the default loader repository"_s);
	}
	return theClass;
}

$Class* MBeanInstantiator::findClass($String* className, $ClassLoader* loader) {
	return loadClass(className, loader);
}

$Class* MBeanInstantiator::findClass($String* className, $ObjectName* aLoader) {
	$useLocalCurrentObjectStackCache();
	if (aLoader == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException), "Null loader passed in parameter"_s);
	}
	$var($ClassLoader, loader, nullptr);
	$synchronized(this) {
		$assign(loader, getClassLoader(aLoader));
	}
	if (loader == nullptr) {
		$throwNew($InstanceNotFoundException, $$str({"The loader named "_s, aLoader, " is not registered in the MBeanServer"_s}));
	}
	return findClass(className, loader);
}

$ClassArray* MBeanInstantiator::findSignatureClasses($StringArray* signature, $ClassLoader* loader) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (signature == nullptr) {
		return nullptr;
	}
	$var($ClassLoader, aLoader, loader);
	int32_t length = $nc(signature)->length;
	$var($ClassArray, tab, $new($ClassArray, length));
	if (length == 0) {
		return tab;
	}
	try {
		for (int32_t i = 0; i < length; ++i) {
			$Class* primCla = $cast($Class, $nc(MBeanInstantiator::primitiveClasses)->get(signature->get(i)));
			if (primCla != nullptr) {
				tab->set(i, primCla);
				continue;
			}
			$ReflectUtil::checkPackageAccess(signature->get(i));
			if (aLoader != nullptr) {
				tab->set(i, $Class::forName(signature->get(i), false, aLoader));
			} else {
				tab->set(i, findClass(signature->get(i), $($of(this)->getClass()->getClassLoader())));
			}
		}
	} catch ($ClassNotFoundException& e) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::DEBUG)) {
			$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::DEBUG, "The parameter class could not be found"_s, static_cast<$Throwable*>(e));
		}
		$throwNew($ReflectionException, e, "The parameter class could not be found"_s);
	} catch ($RuntimeException& e) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::DEBUG)) {
			$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::DEBUG, "Unexpected exception"_s, static_cast<$Throwable*>(e));
		}
		$throw(e);
	}
	return tab;
}

$Object* MBeanInstantiator::instantiate($Class* theClass) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	checkMBeanPermission(theClass, ($String*)nullptr, ($ObjectName*)nullptr, "instantiate"_s);
	$var($Object, moi, nullptr);
	$var($Constructor, cons, findConstructor(theClass, nullptr));
	if (cons == nullptr) {
		$throwNew($ReflectionException, $$new($NoSuchMethodException, "No such constructor"_s));
	}
	try {
		$ReflectUtil::checkPackageAccess(theClass);
		ensureClassAccess(theClass);
		$assign(moi, $nc(cons)->newInstance($$new($ObjectArray, 0)));
	} catch ($InvocationTargetException& e) {
		$var($Throwable, t, e->getCause());
		if ($instanceOf($RuntimeException, t)) {
			$throwNew($RuntimeMBeanException, $cast($RuntimeException, t), "RuntimeException thrown in the MBean\'s empty constructor"_s);
		} else if ($instanceOf($Error, t)) {
			$throwNew($RuntimeErrorException, $cast($Error, t), "Error thrown in the MBean\'s empty constructor"_s);
		} else {
			$throwNew($MBeanException, $cast($Exception, t), "Exception thrown in the MBean\'s empty constructor"_s);
		}
	} catch ($NoSuchMethodError& error) {
		$throwNew($ReflectionException, $$new($NoSuchMethodException, "No constructor"_s), "No such constructor"_s);
	} catch ($InstantiationException& e) {
		$throwNew($ReflectionException, e, "Exception thrown trying to invoke the MBean\'s empty constructor"_s);
	} catch ($IllegalAccessException& e) {
		$throwNew($ReflectionException, e, "Exception thrown trying to invoke the MBean\'s empty constructor"_s);
	} catch ($IllegalArgumentException& e) {
		$throwNew($ReflectionException, e, "Exception thrown trying to invoke the MBean\'s empty constructor"_s);
	}
	return $of(moi);
}

$Object* MBeanInstantiator::instantiate($Class* theClass, $ObjectArray* params, $StringArray* signature, $ClassLoader* loader) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	checkMBeanPermission(theClass, ($String*)nullptr, ($ObjectName*)nullptr, "instantiate"_s);
	$var($ClassArray, tab, nullptr);
	$var($Object, moi, nullptr);
	try {
		$var($ClassLoader, aLoader, $nc(theClass)->getClassLoader());
		$assign(tab, (signature == nullptr) ? ($ClassArray*)nullptr : findSignatureClasses(signature, aLoader));
	} catch ($IllegalArgumentException& e) {
		$throwNew($ReflectionException, e, "The constructor parameter classes could not be loaded"_s);
	}
	$var($Constructor, cons, findConstructor(theClass, tab));
	if (cons == nullptr) {
		$throwNew($ReflectionException, $$new($NoSuchMethodException, "No such constructor"_s));
	}
	try {
		$ReflectUtil::checkPackageAccess(theClass);
		ensureClassAccess(theClass);
		$assign(moi, $nc(cons)->newInstance(params));
	} catch ($NoSuchMethodError& error) {
		$throwNew($ReflectionException, $$new($NoSuchMethodException, "No such constructor found"_s), "No such constructor"_s);
	} catch ($InstantiationException& e) {
		$throwNew($ReflectionException, e, "Exception thrown trying to invoke the MBean\'s constructor"_s);
	} catch ($IllegalAccessException& e) {
		$throwNew($ReflectionException, e, "Exception thrown trying to invoke the MBean\'s constructor"_s);
	} catch ($InvocationTargetException& e) {
		$var($Throwable, th, e->getCause());
		if ($instanceOf($RuntimeException, th)) {
			$throwNew($RuntimeMBeanException, $cast($RuntimeException, th), "RuntimeException thrown in the MBean\'s constructor"_s);
		} else if ($instanceOf($Error, th)) {
			$throwNew($RuntimeErrorException, $cast($Error, th), "Error thrown in the MBean\'s constructor"_s);
		} else {
			$throwNew($MBeanException, $cast($Exception, th), "Exception thrown in the MBean\'s constructor"_s);
		}
	}
	return $of(moi);
}

$ObjectInputStream* MBeanInstantiator::deserialize($ClassLoader* loader, $bytes* data) {
	$useLocalCurrentObjectStackCache();
	if (data == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException), "Null data passed in parameter"_s);
	}
	if ($nc(data)->length == 0) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException), "Empty data passed in parameter"_s);
	}
	$var($ByteArrayInputStream, bIn, nullptr);
	$var($ObjectInputStream, objIn, nullptr);
	$assign(bIn, $new($ByteArrayInputStream, data));
	try {
		$assign(objIn, $new($ObjectInputStreamWithLoader, bIn, loader));
	} catch ($IOException& e) {
		$throwNew($OperationsException, "An IOException occurred trying to de-serialize the data"_s);
	}
	return objIn;
}

$ObjectInputStream* MBeanInstantiator::deserialize($String* className, $ObjectName* loaderName, $bytes* data, $ClassLoader* loader) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (data == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException), "Null data passed in parameter"_s);
	}
	if ($nc(data)->length == 0) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException), "Empty data passed in parameter"_s);
	}
	if (className == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException), "Null className passed in parameter"_s);
	}
	$ReflectUtil::checkPackageAccess(className);
	$Class* theClass = nullptr;
	if (loaderName == nullptr) {
		theClass = findClass(className, loader);
	} else {
		try {
			$var($ClassLoader, instance, nullptr);
			$assign(instance, getClassLoader(loaderName));
			if (instance == nullptr) {
				$throwNew($ClassNotFoundException, className);
			}
			theClass = $Class::forName(className, false, instance);
		} catch ($ClassNotFoundException& e) {
			$throwNew($ReflectionException, e, $$str({"The MBean class could not be loaded by the "_s, $($nc(loaderName)->toString()), " class loader"_s}));
		}
	}
	$var($ByteArrayInputStream, bIn, nullptr);
	$var($ObjectInputStream, objIn, nullptr);
	$assign(bIn, $new($ByteArrayInputStream, data));
	try {
		$assign(objIn, $new($ObjectInputStreamWithLoader, bIn, $($nc(theClass)->getClassLoader())));
	} catch ($IOException& e) {
		$throwNew($OperationsException, "An IOException occurred trying to de-serialize the data"_s);
	}
	return objIn;
}

$Object* MBeanInstantiator::instantiate($String* className) {
	return $of(instantiate(className, ($ObjectArray*)nullptr, ($StringArray*)nullptr, ($ClassLoader*)nullptr));
}

$Object* MBeanInstantiator::instantiate($String* className, $ObjectName* loaderName, $ClassLoader* loader) {
	return $of(instantiate(className, loaderName, ($ObjectArray*)nullptr, ($StringArray*)nullptr, loader));
}

$Object* MBeanInstantiator::instantiate($String* className, $ObjectArray* params, $StringArray* signature, $ClassLoader* loader) {
	$Class* theClass = findClassWithDefaultLoaderRepository(className);
	return $of(instantiate(theClass, params, signature, loader));
}

$Object* MBeanInstantiator::instantiate($String* className, $ObjectName* loaderName, $ObjectArray* params, $StringArray* signature, $ClassLoader* loader) {
	$Class* theClass = nullptr;
	if (loaderName == nullptr) {
		theClass = findClass(className, loader);
	} else {
		theClass = findClass(className, loaderName);
	}
	return $of(instantiate(theClass, params, signature, loader));
}

$ModifiableClassLoaderRepository* MBeanInstantiator::getClassLoaderRepository() {
	checkMBeanPermission(($String*)nullptr, ($String*)nullptr, ($ObjectName*)nullptr, "getClassLoaderRepository"_s);
	return this->clr;
}

$Class* MBeanInstantiator::loadClass($String* className, $ClassLoader* loader$renamed) {
	$init(MBeanInstantiator);
	$useLocalCurrentObjectStackCache();
	$var($ClassLoader, loader, loader$renamed);
	$beforeCallerSensitive();
	$Class* theClass = nullptr;
	if (className == nullptr) {
		$throwNew($RuntimeOperationsException, $$new($IllegalArgumentException, "The class name cannot be null"_s), "Exception occurred during object instantiation"_s);
	}
	$ReflectUtil::checkPackageAccess(className);
	try {
		if (loader == nullptr) {
			$assign(loader, MBeanInstantiator::class$->getClassLoader());
		}
		if (loader != nullptr) {
			theClass = $Class::forName(className, false, loader);
		} else {
			theClass = $Class::forName(className);
		}
	} catch ($ClassNotFoundException& e) {
		$throwNew($ReflectionException, e, "The MBean class could not be loaded"_s);
	}
	return theClass;
}

$ClassArray* MBeanInstantiator::loadSignatureClasses($StringArray* signature, $ClassLoader* loader) {
	$init(MBeanInstantiator);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (signature == nullptr) {
		return nullptr;
	}
	$var($ClassLoader, aLoader, loader == nullptr ? MBeanInstantiator::class$->getClassLoader() : loader);
	int32_t length = $nc(signature)->length;
	$var($ClassArray, tab, $new($ClassArray, length));
	if (length == 0) {
		return tab;
	}
	try {
		for (int32_t i = 0; i < length; ++i) {
			$Class* primCla = $cast($Class, $nc(MBeanInstantiator::primitiveClasses)->get(signature->get(i)));
			if (primCla != nullptr) {
				tab->set(i, primCla);
				continue;
			}
			$ReflectUtil::checkPackageAccess(signature->get(i));
			tab->set(i, $Class::forName(signature->get(i), false, aLoader));
		}
	} catch ($ClassNotFoundException& e) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::DEBUG)) {
			$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::DEBUG, "The parameter class could not be found"_s, static_cast<$Throwable*>(e));
		}
		$throwNew($ReflectionException, e, "The parameter class could not be found"_s);
	} catch ($RuntimeException& e) {
		$init($JmxProperties);
		$init($System$Logger$Level);
		if ($nc($JmxProperties::MBEANSERVER_LOGGER)->isLoggable($System$Logger$Level::DEBUG)) {
			$nc($JmxProperties::MBEANSERVER_LOGGER)->log($System$Logger$Level::DEBUG, "Unexpected exception"_s, static_cast<$Throwable*>(e));
		}
		$throw(e);
	}
	return tab;
}

$Constructor* MBeanInstantiator::findConstructor($Class* c, $ClassArray* params) {
	try {
		return $ConstructorUtil::getConstructor(c, params);
	} catch ($Exception& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

void MBeanInstantiator::checkMBeanPermission($Class* clazz, $String* member, $ObjectName* objectName, $String* actions) {
	$init(MBeanInstantiator);
	if (clazz != nullptr) {
		checkMBeanPermission($(clazz->getName()), member, objectName, actions);
	}
}

void MBeanInstantiator::checkMBeanPermission($String* classname, $String* member, $ObjectName* objectName, $String* actions) {
	$init(MBeanInstantiator);
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$var($Permission, perm, $new($MBeanPermission, classname, member, objectName, actions));
		sm->checkPermission(perm);
	}
}

void MBeanInstantiator::ensureClassAccess($Class* clazz) {
	$init(MBeanInstantiator);
	int32_t mod = $nc(clazz)->getModifiers();
	if (!$Modifier::isPublic(mod)) {
		$throwNew($IllegalAccessException, "Class is not public and can\'t be instantiated"_s);
	}
}

$ClassLoader* MBeanInstantiator::getClassLoader($ObjectName* name) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (this->clr == nullptr) {
		return nullptr;
	}
	$var($Permissions, permissions, $new($Permissions));
	permissions->add($$new($MBeanPermission, "*"_s, nullptr, name, "getClassLoader"_s));
	$var($ProtectionDomain, protectionDomain, $new($ProtectionDomain, nullptr, permissions));
	$var($ProtectionDomainArray, domains, $new($ProtectionDomainArray, {protectionDomain}));
	$var($AccessControlContext, ctx, $new($AccessControlContext, domains));
	$var($ClassLoader, loader, $cast($ClassLoader, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($MBeanInstantiator$1, this, name)), ctx)));
	return loader;
}

void clinit$MBeanInstantiator($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MBeanInstantiator::primitiveClasses, $Util::newMap());
	{
		{
			$init($Byte);
			$init($Short);
			$init($Integer);
			$init($Long);
			$init($Float);
			$init($Double);
			$init($Character);
			$init($Boolean);
			$var($ClassArray, arr$, $new($ClassArray, {
				$Byte::TYPE,
				$Short::TYPE,
				$Integer::TYPE,
				$Long::TYPE,
				$Float::TYPE,
				$Double::TYPE,
				$Character::TYPE,
				$Boolean::TYPE
			}));
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$Class* c = arr$->get(i$);
				$nc(MBeanInstantiator::primitiveClasses)->put($($nc(c)->getName()), c);
			}
		}
	}
}

MBeanInstantiator::MBeanInstantiator() {
}

$Class* MBeanInstantiator::load$($String* name, bool initialize) {
	$loadClass(MBeanInstantiator, name, initialize, &_MBeanInstantiator_ClassInfo_, clinit$MBeanInstantiator, allocate$MBeanInstantiator);
	return class$;
}

$Class* MBeanInstantiator::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com