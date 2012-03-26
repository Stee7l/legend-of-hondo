/*
 *	server/zone/objects/area/LairSpawnArea.cpp generated by engine3 IDL compiler 0.60
 */

#include "LairSpawnArea.h"

#include "server/zone/objects/area/ActiveArea.h"

#include "server/zone/objects/creature/aigroup/AiGroup.h"

#include "server/zone/managers/creature/LairSpawnGroup.h"

#include "server/zone/objects/area/SpawnObserver.h"

/*
 *	LairSpawnAreaStub
 */

enum {RPC_NOTIFYENTER__SCENEOBJECT_ = 6,RPC_NOTIFYEXIT__SCENEOBJECT_,RPC_NOTIFYPOSITIONUPDATE__QUADTREEENTRY_,RPC_TRYSPAWNLAIR__SCENEOBJECT_,RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_,RPC_ISLAIRSPAWNAREA__,};

LairSpawnArea::LairSpawnArea() : SpawnArea(DummyConstructorParameter::instance()) {
	LairSpawnAreaImplementation* _implementation = new LairSpawnAreaImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

LairSpawnArea::LairSpawnArea(DummyConstructorParameter* param) : SpawnArea(param) {
}

LairSpawnArea::~LairSpawnArea() {
}



void LairSpawnArea::notifyEnter(SceneObject* object) {
	LairSpawnAreaImplementation* _implementation = static_cast<LairSpawnAreaImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYENTER__SCENEOBJECT_);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyEnter(object);
}

void LairSpawnArea::notifyExit(SceneObject* object) {
	LairSpawnAreaImplementation* _implementation = static_cast<LairSpawnAreaImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYEXIT__SCENEOBJECT_);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyExit(object);
}

void LairSpawnArea::notifyPositionUpdate(QuadTreeEntry* obj) {
	LairSpawnAreaImplementation* _implementation = static_cast<LairSpawnAreaImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYPOSITIONUPDATE__QUADTREEENTRY_);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		_implementation->notifyPositionUpdate(obj);
}

int LairSpawnArea::trySpawnLair(SceneObject* object) {
	LairSpawnAreaImplementation* _implementation = static_cast<LairSpawnAreaImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_TRYSPAWNLAIR__SCENEOBJECT_);
		method.addObjectParameter(object);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->trySpawnLair(object);
}

int LairSpawnArea::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	LairSpawnAreaImplementation* _implementation = static_cast<LairSpawnAreaImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->notifyObserverEvent(eventType, observable, arg1, arg2);
}

bool LairSpawnArea::isLairSpawnArea() {
	LairSpawnAreaImplementation* _implementation = static_cast<LairSpawnAreaImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISLAIRSPAWNAREA__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isLairSpawnArea();
}

void LairSpawnArea::setSpawnGroup(LairSpawnGroup* group) {
	LairSpawnAreaImplementation* _implementation = static_cast<LairSpawnAreaImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->setSpawnGroup(group);
}

LairSpawnGroup* LairSpawnArea::getSpawnGroup() {
	LairSpawnAreaImplementation* _implementation = static_cast<LairSpawnAreaImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getSpawnGroup();
}

DistributedObjectServant* LairSpawnArea::_getImplementation() {

	_updated = true;
	return _impl;
}

void LairSpawnArea::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	LairSpawnAreaImplementation
 */

LairSpawnAreaImplementation::LairSpawnAreaImplementation(DummyConstructorParameter* param) : SpawnAreaImplementation(param) {
	_initializeImplementation();
}


LairSpawnAreaImplementation::~LairSpawnAreaImplementation() {
}


void LairSpawnAreaImplementation::finalize() {
}

void LairSpawnAreaImplementation::_initializeImplementation() {
	_setClassHelper(LairSpawnAreaHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void LairSpawnAreaImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<LairSpawnArea*>(stub);
	SpawnAreaImplementation::_setStub(stub);
}

DistributedObjectStub* LairSpawnAreaImplementation::_getStub() {
	return _this;
}

LairSpawnAreaImplementation::operator const LairSpawnArea*() {
	return _this;
}

void LairSpawnAreaImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void LairSpawnAreaImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void LairSpawnAreaImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void LairSpawnAreaImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void LairSpawnAreaImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void LairSpawnAreaImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void LairSpawnAreaImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void LairSpawnAreaImplementation::_serializationHelperMethod() {
	SpawnAreaImplementation::_serializationHelperMethod();

	_setClassName("LairSpawnArea");

}

void LairSpawnAreaImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(LairSpawnAreaImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool LairSpawnAreaImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (SpawnAreaImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "LairSpawnArea.currentlySpawnedLairs") {
		TypeInfo<int >::parseFromBinaryStream(&currentlySpawnedLairs, stream);
		return true;
	}

	if (_name == "LairSpawnArea.exitObserver") {
		TypeInfo<ManagedReference<SpawnObserver* > >::parseFromBinaryStream(&exitObserver, stream);
		return true;
	}

	if (_name == "LairSpawnArea.spawnedGroupsCount") {
		TypeInfo<HashTable<unsigned int, int> >::parseFromBinaryStream(&spawnedGroupsCount, stream);
		return true;
	}

	if (_name == "LairSpawnArea.lairTypes") {
		TypeInfo<HashTable<unsigned long long, unsigned int> >::parseFromBinaryStream(&lairTypes, stream);
		return true;
	}

	if (_name == "LairSpawnArea.lastSpawn") {
		TypeInfo<Time >::parseFromBinaryStream(&lastSpawn, stream);
		return true;
	}


	return false;
}

void LairSpawnAreaImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = LairSpawnAreaImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int LairSpawnAreaImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = SpawnAreaImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "LairSpawnArea.currentlySpawnedLairs";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&currentlySpawnedLairs, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "LairSpawnArea.exitObserver";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<SpawnObserver* > >::toBinaryStream(&exitObserver, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "LairSpawnArea.spawnedGroupsCount";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<HashTable<unsigned int, int> >::toBinaryStream(&spawnedGroupsCount, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "LairSpawnArea.lairTypes";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<HashTable<unsigned long long, unsigned int> >::toBinaryStream(&lairTypes, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "LairSpawnArea.lastSpawn";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<Time >::toBinaryStream(&lastSpawn, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return _count + 5;
}

LairSpawnAreaImplementation::LairSpawnAreaImplementation() : SpawnAreaImplementation() {
	_initializeImplementation();
	// server/zone/objects/area/LairSpawnArea.idl():  		currentlySpawnedLairs = 0;
	currentlySpawnedLairs = 0;
	// server/zone/objects/area/LairSpawnArea.idl():  		exitObserver = null;
	exitObserver = NULL;
	// server/zone/objects/area/LairSpawnArea.idl():  		Logger.setLoggingName("LairSpawnArea");
	Logger::setLoggingName("LairSpawnArea");
}

bool LairSpawnAreaImplementation::isLairSpawnArea() {
	// server/zone/objects/area/LairSpawnArea.idl():  		return true;
	return true;
}

void LairSpawnAreaImplementation::setSpawnGroup(LairSpawnGroup* group) {
	// server/zone/objects/area/LairSpawnArea.idl():  		spawnGroup = group;
	spawnGroup = group;
}

/*
 *	LairSpawnAreaAdapter
 */

LairSpawnAreaAdapter::LairSpawnAreaAdapter(LairSpawnArea* obj) : SpawnAreaAdapter(obj) {
}

Packet* LairSpawnAreaAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_NOTIFYENTER__SCENEOBJECT_:
		notifyEnter(static_cast<SceneObject*>(inv->getObjectParameter()));
		break;
	case RPC_NOTIFYEXIT__SCENEOBJECT_:
		notifyExit(static_cast<SceneObject*>(inv->getObjectParameter()));
		break;
	case RPC_NOTIFYPOSITIONUPDATE__QUADTREEENTRY_:
		notifyPositionUpdate(static_cast<QuadTreeEntry*>(inv->getObjectParameter()));
		break;
	case RPC_TRYSPAWNLAIR__SCENEOBJECT_:
		resp->insertSignedInt(trySpawnLair(static_cast<SceneObject*>(inv->getObjectParameter())));
		break;
	case RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_:
		resp->insertSignedInt(notifyObserverEvent(inv->getUnsignedIntParameter(), static_cast<Observable*>(inv->getObjectParameter()), static_cast<ManagedObject*>(inv->getObjectParameter()), inv->getSignedLongParameter()));
		break;
	case RPC_ISLAIRSPAWNAREA__:
		resp->insertBoolean(isLairSpawnArea());
		break;
	default:
		return NULL;
	}

	return resp;
}

void LairSpawnAreaAdapter::notifyEnter(SceneObject* object) {
	(static_cast<LairSpawnArea*>(stub))->notifyEnter(object);
}

void LairSpawnAreaAdapter::notifyExit(SceneObject* object) {
	(static_cast<LairSpawnArea*>(stub))->notifyExit(object);
}

void LairSpawnAreaAdapter::notifyPositionUpdate(QuadTreeEntry* obj) {
	(static_cast<LairSpawnArea*>(stub))->notifyPositionUpdate(obj);
}

int LairSpawnAreaAdapter::trySpawnLair(SceneObject* object) {
	return (static_cast<LairSpawnArea*>(stub))->trySpawnLair(object);
}

int LairSpawnAreaAdapter::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return (static_cast<LairSpawnArea*>(stub))->notifyObserverEvent(eventType, observable, arg1, arg2);
}

bool LairSpawnAreaAdapter::isLairSpawnArea() {
	return (static_cast<LairSpawnArea*>(stub))->isLairSpawnArea();
}

/*
 *	LairSpawnAreaHelper
 */

LairSpawnAreaHelper* LairSpawnAreaHelper::staticInitializer = LairSpawnAreaHelper::instance();

LairSpawnAreaHelper::LairSpawnAreaHelper() {
	className = "LairSpawnArea";

	Core::getObjectBroker()->registerClass(className, this);
}

void LairSpawnAreaHelper::finalizeHelper() {
	LairSpawnAreaHelper::finalize();
}

DistributedObject* LairSpawnAreaHelper::instantiateObject() {
	return new LairSpawnArea(DummyConstructorParameter::instance());
}

DistributedObjectServant* LairSpawnAreaHelper::instantiateServant() {
	return new LairSpawnAreaImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* LairSpawnAreaHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new LairSpawnAreaAdapter(static_cast<LairSpawnArea*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

