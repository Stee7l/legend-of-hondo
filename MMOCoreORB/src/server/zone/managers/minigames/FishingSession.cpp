/*
 *	server/zone/managers/minigames/FishingSession.cpp generated by engine3 IDL compiler 0.60
 */

#include "FishingSession.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/managers/minigames/events/FishingEvent.h"

/*
 *	FishingSessionStub
 */

enum {RPC_SETMOOD__STRING_,RPC_SETNEXTACTION__INT_,RPC_GETNEXTACTION__,RPC_SETFISHBOXID__INT_,RPC_GETFISHBOXID__,RPC_GETMARKER__,RPC_SETMARKER__SCENEOBJECT_,RPC_GETFISH__,RPC_SETFISH__INT_,RPC_GETFISHINGSTATE__,RPC_SETFISHINGSTATE__INT_,RPC_SETPLAYER__CREATUREOBJECT_,RPC_UPDATE__INT_SCENEOBJECT_INT_INT_INT_,RPC_GETMOODSTRING__};

FishingSession::FishingSession(CreatureObject* player, FishingEvent* event, SceneObject* marker, int nextAction, int fish, unsigned int boxID, int fishingState, const String& mood) : Facade(DummyConstructorParameter::instance()) {
	FishingSessionImplementation* _implementation = new FishingSessionImplementation(player, event, marker, nextAction, fish, boxID, fishingState, mood);
	_impl = _implementation;
	_impl->_setStub(this);
}

FishingSession::FishingSession(DummyConstructorParameter* param) : Facade(param) {
}

FishingSession::~FishingSession() {
}



void FishingSession::setEvent(FishingEvent* ev) {
	FishingSessionImplementation* _implementation = static_cast<FishingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->setEvent(ev);
}

void FishingSession::setMood(const String& m) {
	FishingSessionImplementation* _implementation = static_cast<FishingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETMOOD__STRING_);
		method.addAsciiParameter(m);

		method.executeWithVoidReturn();
	} else
		_implementation->setMood(m);
}

FishingEvent* FishingSession::getEvent() {
	FishingSessionImplementation* _implementation = static_cast<FishingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getEvent();
}

void FishingSession::setNextAction(int action) {
	FishingSessionImplementation* _implementation = static_cast<FishingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETNEXTACTION__INT_);
		method.addSignedIntParameter(action);

		method.executeWithVoidReturn();
	} else
		_implementation->setNextAction(action);
}

int FishingSession::getNextAction() {
	FishingSessionImplementation* _implementation = static_cast<FishingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETNEXTACTION__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getNextAction();
}

void FishingSession::setFishBoxID(unsigned int box) {
	FishingSessionImplementation* _implementation = static_cast<FishingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETFISHBOXID__INT_);
		method.addUnsignedIntParameter(box);

		method.executeWithVoidReturn();
	} else
		_implementation->setFishBoxID(box);
}

unsigned int FishingSession::getFishBoxID() {
	FishingSessionImplementation* _implementation = static_cast<FishingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETFISHBOXID__);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->getFishBoxID();
}

SceneObject* FishingSession::getMarker() {
	FishingSessionImplementation* _implementation = static_cast<FishingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMARKER__);

		return static_cast<SceneObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->getMarker();
}

void FishingSession::setMarker(SceneObject* mar) {
	FishingSessionImplementation* _implementation = static_cast<FishingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETMARKER__SCENEOBJECT_);
		method.addObjectParameter(mar);

		method.executeWithVoidReturn();
	} else
		_implementation->setMarker(mar);
}

int FishingSession::getFish() {
	FishingSessionImplementation* _implementation = static_cast<FishingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETFISH__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getFish();
}

void FishingSession::setFish(int fi) {
	FishingSessionImplementation* _implementation = static_cast<FishingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETFISH__INT_);
		method.addSignedIntParameter(fi);

		method.executeWithVoidReturn();
	} else
		_implementation->setFish(fi);
}

int FishingSession::getFishingState() {
	FishingSessionImplementation* _implementation = static_cast<FishingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETFISHINGSTATE__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getFishingState();
}

void FishingSession::setFishingState(int state) {
	FishingSessionImplementation* _implementation = static_cast<FishingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETFISHINGSTATE__INT_);
		method.addSignedIntParameter(state);

		method.executeWithVoidReturn();
	} else
		_implementation->setFishingState(state);
}

void FishingSession::setPlayer(CreatureObject* pl) {
	FishingSessionImplementation* _implementation = static_cast<FishingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETPLAYER__CREATUREOBJECT_);
		method.addObjectParameter(pl);

		method.executeWithVoidReturn();
	} else
		_implementation->setPlayer(pl);
}

void FishingSession::update(int nextAction, SceneObject* marker, int fish, unsigned int boxID, int fishingState) {
	FishingSessionImplementation* _implementation = static_cast<FishingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATE__INT_SCENEOBJECT_INT_INT_INT_);
		method.addSignedIntParameter(nextAction);
		method.addObjectParameter(marker);
		method.addSignedIntParameter(fish);
		method.addUnsignedIntParameter(boxID);
		method.addSignedIntParameter(fishingState);

		method.executeWithVoidReturn();
	} else
		_implementation->update(nextAction, marker, fish, boxID, fishingState);
}

String FishingSession::getMoodString() {
	FishingSessionImplementation* _implementation = static_cast<FishingSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMOODSTRING__);

		method.executeWithAsciiReturn(_return_getMoodString);
		return _return_getMoodString;
	} else
		return _implementation->getMoodString();
}

DistributedObjectServant* FishingSession::_getImplementation() {

	_updated = true;
	return _impl;
}

void FishingSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	FishingSessionImplementation
 */

FishingSessionImplementation::FishingSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


FishingSessionImplementation::~FishingSessionImplementation() {
}


void FishingSessionImplementation::finalize() {
}

void FishingSessionImplementation::_initializeImplementation() {
	_setClassHelper(FishingSessionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void FishingSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<FishingSession*>(stub);
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* FishingSessionImplementation::_getStub() {
	return _this;
}

FishingSessionImplementation::operator const FishingSession*() {
	return _this;
}

void FishingSessionImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void FishingSessionImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void FishingSessionImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void FishingSessionImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void FishingSessionImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void FishingSessionImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void FishingSessionImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void FishingSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("FishingSession");

}

void FishingSessionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(FishingSessionImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool FishingSessionImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (FacadeImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "FishingSession.player") {
		TypeInfo<ManagedWeakReference<CreatureObject* > >::parseFromBinaryStream(&player, stream);
		return true;
	}

	if (_name == "FishingSession.marker") {
		TypeInfo<ManagedReference<SceneObject* > >::parseFromBinaryStream(&marker, stream);
		return true;
	}

	if (_name == "FishingSession.nextAction") {
		TypeInfo<int >::parseFromBinaryStream(&nextAction, stream);
		return true;
	}

	if (_name == "FishingSession.fish") {
		TypeInfo<int >::parseFromBinaryStream(&fish, stream);
		return true;
	}

	if (_name == "FishingSession.boxID") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&boxID, stream);
		return true;
	}

	if (_name == "FishingSession.fishingState") {
		TypeInfo<int >::parseFromBinaryStream(&fishingState, stream);
		return true;
	}

	if (_name == "FishingSession.mood") {
		TypeInfo<String >::parseFromBinaryStream(&mood, stream);
		return true;
	}


	return false;
}

void FishingSessionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = FishingSessionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int FishingSessionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadeImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "FishingSession.player";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedWeakReference<CreatureObject* > >::toBinaryStream(&player, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "FishingSession.marker";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<SceneObject* > >::toBinaryStream(&marker, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "FishingSession.nextAction";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&nextAction, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "FishingSession.fish";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&fish, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "FishingSession.boxID";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&boxID, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "FishingSession.fishingState";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&fishingState, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "FishingSession.mood";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&mood, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return _count + 7;
}

FishingSessionImplementation::FishingSessionImplementation(CreatureObject* player, FishingEvent* event, SceneObject* marker, int nextAction, int fish, unsigned int boxID, int fishingState, const String& mood) {
	_initializeImplementation();
	// server/zone/managers/minigames/FishingSession.idl():  		setPlayer(player);
	setPlayer(player);
	// server/zone/managers/minigames/FishingSession.idl():  		setEvent(event);
	setEvent(event);
	// server/zone/managers/minigames/FishingSession.idl():  		setMarker(marker);
	setMarker(marker);
	// server/zone/managers/minigames/FishingSession.idl():  		setNextAction(nextAction);
	setNextAction(nextAction);
	// server/zone/managers/minigames/FishingSession.idl():  		setFish(fish);
	setFish(fish);
	// server/zone/managers/minigames/FishingSession.idl():  		setFishBoxID(boxID);
	setFishBoxID(boxID);
	// server/zone/managers/minigames/FishingSession.idl():  		setFishingState(fishingState);
	setFishingState(fishingState);
	// server/zone/managers/minigames/FishingSession.idl():  		setMood(mood);
	setMood(mood);
}

void FishingSessionImplementation::setEvent(FishingEvent* ev) {
	// server/zone/managers/minigames/FishingSession.idl():  		event = ev;
	event = ev;
}

void FishingSessionImplementation::setMood(const String& m) {
	// server/zone/managers/minigames/FishingSession.idl():  		mood = m;
	mood = m;
}

FishingEvent* FishingSessionImplementation::getEvent() {
	// server/zone/managers/minigames/FishingSession.idl():  		return event;
	return event;
}

void FishingSessionImplementation::setNextAction(int action) {
	// server/zone/managers/minigames/FishingSession.idl():  		nextAction = action;
	nextAction = action;
}

int FishingSessionImplementation::getNextAction() {
	// server/zone/managers/minigames/FishingSession.idl():  		return nextAction;
	return nextAction;
}

void FishingSessionImplementation::setFishBoxID(unsigned int box) {
	// server/zone/managers/minigames/FishingSession.idl():  		boxID = box;
	boxID = box;
}

unsigned int FishingSessionImplementation::getFishBoxID() {
	// server/zone/managers/minigames/FishingSession.idl():  		return boxID;
	return boxID;
}

SceneObject* FishingSessionImplementation::getMarker() {
	// server/zone/managers/minigames/FishingSession.idl():  		return marker;
	return marker;
}

void FishingSessionImplementation::setMarker(SceneObject* mar) {
	// server/zone/managers/minigames/FishingSession.idl():  		marker = mar;
	marker = mar;
}

int FishingSessionImplementation::getFish() {
	// server/zone/managers/minigames/FishingSession.idl():  		return fish;
	return fish;
}

void FishingSessionImplementation::setFish(int fi) {
	// server/zone/managers/minigames/FishingSession.idl():  		fish = fi;
	fish = fi;
}

int FishingSessionImplementation::getFishingState() {
	// server/zone/managers/minigames/FishingSession.idl():  		return fishingState;
	return fishingState;
}

void FishingSessionImplementation::setFishingState(int state) {
	// server/zone/managers/minigames/FishingSession.idl():  		fishingState = state;
	fishingState = state;
}

void FishingSessionImplementation::setPlayer(CreatureObject* pl) {
	// server/zone/managers/minigames/FishingSession.idl():  		player = pl;
	player = pl;
}

void FishingSessionImplementation::update(int nextAction, SceneObject* marker, int fish, unsigned int boxID, int fishingState) {
	// server/zone/managers/minigames/FishingSession.idl():  		setNextAction(nextAction);
	setNextAction(nextAction);
	// server/zone/managers/minigames/FishingSession.idl():  		setMarker(marker);
	setMarker(marker);
	// server/zone/managers/minigames/FishingSession.idl():  		setFish(fish);
	setFish(fish);
	// server/zone/managers/minigames/FishingSession.idl():  		setFishBoxID(boxID);
	setFishBoxID(boxID);
	// server/zone/managers/minigames/FishingSession.idl():  		setFishingState(fishingState);
	setFishingState(fishingState);
}

String FishingSessionImplementation::getMoodString() {
	// server/zone/managers/minigames/FishingSession.idl():  		return mood;
	return mood;
}

/*
 *	FishingSessionAdapter
 */

FishingSessionAdapter::FishingSessionAdapter(FishingSession* obj) : FacadeAdapter(obj) {
}

Packet* FishingSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_SETMOOD__STRING_:
		setMood(inv->getAsciiParameter(_param0_setMood__String_));
		break;
	case RPC_SETNEXTACTION__INT_:
		setNextAction(inv->getSignedIntParameter());
		break;
	case RPC_GETNEXTACTION__:
		resp->insertSignedInt(getNextAction());
		break;
	case RPC_SETFISHBOXID__INT_:
		setFishBoxID(inv->getUnsignedIntParameter());
		break;
	case RPC_GETFISHBOXID__:
		resp->insertInt(getFishBoxID());
		break;
	case RPC_GETMARKER__:
		resp->insertLong(getMarker()->_getObjectID());
		break;
	case RPC_SETMARKER__SCENEOBJECT_:
		setMarker(static_cast<SceneObject*>(inv->getObjectParameter()));
		break;
	case RPC_GETFISH__:
		resp->insertSignedInt(getFish());
		break;
	case RPC_SETFISH__INT_:
		setFish(inv->getSignedIntParameter());
		break;
	case RPC_GETFISHINGSTATE__:
		resp->insertSignedInt(getFishingState());
		break;
	case RPC_SETFISHINGSTATE__INT_:
		setFishingState(inv->getSignedIntParameter());
		break;
	case RPC_SETPLAYER__CREATUREOBJECT_:
		setPlayer(static_cast<CreatureObject*>(inv->getObjectParameter()));
		break;
	case RPC_UPDATE__INT_SCENEOBJECT_INT_INT_INT_:
		update(inv->getSignedIntParameter(), static_cast<SceneObject*>(inv->getObjectParameter()), inv->getSignedIntParameter(), inv->getUnsignedIntParameter(), inv->getSignedIntParameter());
		break;
	case RPC_GETMOODSTRING__:
		resp->insertAscii(getMoodString());
		break;
	default:
		return NULL;
	}

	return resp;
}

void FishingSessionAdapter::setMood(const String& m) {
	(static_cast<FishingSession*>(stub))->setMood(m);
}

void FishingSessionAdapter::setNextAction(int action) {
	(static_cast<FishingSession*>(stub))->setNextAction(action);
}

int FishingSessionAdapter::getNextAction() {
	return (static_cast<FishingSession*>(stub))->getNextAction();
}

void FishingSessionAdapter::setFishBoxID(unsigned int box) {
	(static_cast<FishingSession*>(stub))->setFishBoxID(box);
}

unsigned int FishingSessionAdapter::getFishBoxID() {
	return (static_cast<FishingSession*>(stub))->getFishBoxID();
}

SceneObject* FishingSessionAdapter::getMarker() {
	return (static_cast<FishingSession*>(stub))->getMarker();
}

void FishingSessionAdapter::setMarker(SceneObject* mar) {
	(static_cast<FishingSession*>(stub))->setMarker(mar);
}

int FishingSessionAdapter::getFish() {
	return (static_cast<FishingSession*>(stub))->getFish();
}

void FishingSessionAdapter::setFish(int fi) {
	(static_cast<FishingSession*>(stub))->setFish(fi);
}

int FishingSessionAdapter::getFishingState() {
	return (static_cast<FishingSession*>(stub))->getFishingState();
}

void FishingSessionAdapter::setFishingState(int state) {
	(static_cast<FishingSession*>(stub))->setFishingState(state);
}

void FishingSessionAdapter::setPlayer(CreatureObject* pl) {
	(static_cast<FishingSession*>(stub))->setPlayer(pl);
}

void FishingSessionAdapter::update(int nextAction, SceneObject* marker, int fish, unsigned int boxID, int fishingState) {
	(static_cast<FishingSession*>(stub))->update(nextAction, marker, fish, boxID, fishingState);
}

String FishingSessionAdapter::getMoodString() {
	return (static_cast<FishingSession*>(stub))->getMoodString();
}

/*
 *	FishingSessionHelper
 */

FishingSessionHelper* FishingSessionHelper::staticInitializer = FishingSessionHelper::instance();

FishingSessionHelper::FishingSessionHelper() {
	className = "FishingSession";

	Core::getObjectBroker()->registerClass(className, this);
}

void FishingSessionHelper::finalizeHelper() {
	FishingSessionHelper::finalize();
}

DistributedObject* FishingSessionHelper::instantiateObject() {
	return new FishingSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* FishingSessionHelper::instantiateServant() {
	return new FishingSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* FishingSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new FishingSessionAdapter(static_cast<FishingSession*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

