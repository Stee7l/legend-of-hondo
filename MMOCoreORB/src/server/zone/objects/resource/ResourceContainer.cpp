/*
 *	server/zone/objects/resource/ResourceContainer.cpp generated by engine3 IDL compiler 0.60
 */

#include "ResourceContainer.h"

#include "server/zone/objects/resource/ResourceSpawn.h"

#include "server/zone/objects/player/PlayerCreature.h"

/*
 *	ResourceContainerStub
 */

ResourceContainer::ResourceContainer() : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new ResourceContainerImplementation();
	_impl->_setStub(this);
}

ResourceContainer::ResourceContainer(DummyConstructorParameter* param) : TangibleObject(param) {
}

ResourceContainer::~ResourceContainer() {
}


void ResourceContainer::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->initializeTransientMembers();
}

void ResourceContainer::fillAttributeList(AttributeListMessage* msg, PlayerCreature* object) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((ResourceContainerImplementation*) _impl)->fillAttributeList(msg, object);
}

void ResourceContainer::sendBaselinesTo(SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->sendBaselinesTo(player);
}

void ResourceContainer::setQuantity(int quantity, SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addSignedIntParameter(quantity);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setQuantity(quantity, player);
}

bool ResourceContainer::isResourceContainer() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		return method.executeWithBooleanReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->isResourceContainer();
}

int ResourceContainer::getQuantity() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		return method.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getQuantity();
}

void ResourceContainer::setSpawnObject(ResourceSpawn* spawn) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(spawn);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setSpawnObject(spawn);
}

String ResourceContainer::getSpawnName() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		method.executeWithAsciiReturn(_return_getSpawnName);
		return _return_getSpawnName;
	} else
		return ((ResourceContainerImplementation*) _impl)->getSpawnName();
}

String ResourceContainer::getSpawnType() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		method.executeWithAsciiReturn(_return_getSpawnType);
		return _return_getSpawnType;
	} else
		return ((ResourceContainerImplementation*) _impl)->getSpawnType();
}

unsigned long long ResourceContainer::getSpawnID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getSpawnID();
}

void ResourceContainer::split(PlayerCreature* player, int newStackSize) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(player);
		method.addSignedIntParameter(newStackSize);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->split(player, newStackSize);
}

void ResourceContainer::combine(PlayerCreature* player, ResourceContainer* fromContainer) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addObjectParameter(player);
		method.addObjectParameter(fromContainer);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->combine(player, fromContainer);
}

/*
 *	ResourceContainerImplementation
 */

ResourceContainerImplementation::ResourceContainerImplementation(DummyConstructorParameter* param) : TangibleObjectImplementation(param) {
	_initializeImplementation();
}

ResourceContainerImplementation::~ResourceContainerImplementation() {
}


void ResourceContainerImplementation::finalize() {
}

void ResourceContainerImplementation::_initializeImplementation() {
	_setClassHelper(ResourceContainerHelper::instance());

	_serializationHelperMethod();
}

void ResourceContainerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ResourceContainer*) stub;
	TangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ResourceContainerImplementation::_getStub() {
	return _this;
}

ResourceContainerImplementation::operator const ResourceContainer*() {
	return _this;
}

void ResourceContainerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ResourceContainerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ResourceContainerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ResourceContainerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ResourceContainerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ResourceContainerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ResourceContainerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ResourceContainerImplementation::_serializationHelperMethod() {
	TangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("ResourceContainer");

	addSerializableVariable("spawnObject", &spawnObject);
	addSerializableVariable("stackQuantity", &stackQuantity);
}

ResourceContainerImplementation::ResourceContainerImplementation() {
	_initializeImplementation();
	// server/zone/objects/resource/ResourceContainer.idl(64):   	stackQuantity = 0;
	stackQuantity = 0;
	// server/zone/objects/resource/ResourceContainer.idl(66):   	setLoggingName("ResourceContainer");
	setLoggingName("ResourceContainer");
}

void ResourceContainerImplementation::initializeTransientMembers() {
	// server/zone/objects/resource/ResourceContainer.idl(70):  		super.initializeTransientMembers();
	TangibleObjectImplementation::initializeTransientMembers();
	// server/zone/objects/resource/ResourceContainer.idl(72):  		Logger.setLoggingName("ResourceContainer");
	Logger::setLoggingName("ResourceContainer");
}

bool ResourceContainerImplementation::isResourceContainer() {
	// server/zone/objects/resource/ResourceContainer.idl(96):  		return true;
	return true;
}

int ResourceContainerImplementation::getQuantity() {
	// server/zone/objects/resource/ResourceContainer.idl(100):  		return stackQuantity;
	return stackQuantity;
}

void ResourceContainerImplementation::setSpawnObject(ResourceSpawn* spawn) {
	// server/zone/objects/resource/ResourceContainer.idl(104):  		spawnObject = spawn;
	spawnObject = spawn;
}

String ResourceContainerImplementation::getSpawnName() {
	// server/zone/objects/resource/ResourceContainer.idl(108):  		return spawnObject.getName();
	return spawnObject->getName();
}

String ResourceContainerImplementation::getSpawnType() {
	// server/zone/objects/resource/ResourceContainer.idl(112):  		return spawnObject.getType();
	return spawnObject->getType();
}

unsigned long long ResourceContainerImplementation::getSpawnID() {
	// server/zone/objects/resource/ResourceContainer.idl(116):  		return spawnObject.getObjectID();
	return spawnObject->getObjectID();
}

/*
 *	ResourceContainerAdapter
 */

ResourceContainerAdapter::ResourceContainerAdapter(ResourceContainerImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* ResourceContainerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		sendBaselinesTo((SceneObject*) inv->getObjectParameter());
		break;
	case 8:
		setQuantity(inv->getSignedIntParameter(), (SceneObject*) inv->getObjectParameter());
		break;
	case 9:
		resp->insertBoolean(isResourceContainer());
		break;
	case 10:
		resp->insertSignedInt(getQuantity());
		break;
	case 11:
		setSpawnObject((ResourceSpawn*) inv->getObjectParameter());
		break;
	case 12:
		resp->insertAscii(getSpawnName());
		break;
	case 13:
		resp->insertAscii(getSpawnType());
		break;
	case 14:
		resp->insertLong(getSpawnID());
		break;
	case 15:
		split((PlayerCreature*) inv->getObjectParameter(), inv->getSignedIntParameter());
		break;
	case 16:
		combine((PlayerCreature*) inv->getObjectParameter(), (ResourceContainer*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ResourceContainerAdapter::initializeTransientMembers() {
	((ResourceContainerImplementation*) impl)->initializeTransientMembers();
}

void ResourceContainerAdapter::sendBaselinesTo(SceneObject* player) {
	((ResourceContainerImplementation*) impl)->sendBaselinesTo(player);
}

void ResourceContainerAdapter::setQuantity(int quantity, SceneObject* player) {
	((ResourceContainerImplementation*) impl)->setQuantity(quantity, player);
}

bool ResourceContainerAdapter::isResourceContainer() {
	return ((ResourceContainerImplementation*) impl)->isResourceContainer();
}

int ResourceContainerAdapter::getQuantity() {
	return ((ResourceContainerImplementation*) impl)->getQuantity();
}

void ResourceContainerAdapter::setSpawnObject(ResourceSpawn* spawn) {
	((ResourceContainerImplementation*) impl)->setSpawnObject(spawn);
}

String ResourceContainerAdapter::getSpawnName() {
	return ((ResourceContainerImplementation*) impl)->getSpawnName();
}

String ResourceContainerAdapter::getSpawnType() {
	return ((ResourceContainerImplementation*) impl)->getSpawnType();
}

unsigned long long ResourceContainerAdapter::getSpawnID() {
	return ((ResourceContainerImplementation*) impl)->getSpawnID();
}

void ResourceContainerAdapter::split(PlayerCreature* player, int newStackSize) {
	((ResourceContainerImplementation*) impl)->split(player, newStackSize);
}

void ResourceContainerAdapter::combine(PlayerCreature* player, ResourceContainer* fromContainer) {
	((ResourceContainerImplementation*) impl)->combine(player, fromContainer);
}

/*
 *	ResourceContainerHelper
 */

ResourceContainerHelper* ResourceContainerHelper::staticInitializer = ResourceContainerHelper::instance();

ResourceContainerHelper::ResourceContainerHelper() {
	className = "ResourceContainer";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ResourceContainerHelper::finalizeHelper() {
	ResourceContainerHelper::finalize();
}

DistributedObject* ResourceContainerHelper::instantiateObject() {
	return new ResourceContainer(DummyConstructorParameter::instance());
}

DistributedObjectServant* ResourceContainerHelper::instantiateServant() {
	return new ResourceContainerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ResourceContainerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ResourceContainerAdapter((ResourceContainerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

