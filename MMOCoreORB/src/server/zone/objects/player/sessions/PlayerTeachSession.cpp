/*
 *	server/zone/objects/player/sessions/PlayerTeachSession.cpp generated by engine3 IDL compiler 0.60
 */

#include "PlayerTeachSession.h"

/*
 *	PlayerTeachSessionStub
 */

enum {RPC_ADDTEACHABLESKILL__STRING_ = 6,RPC_DROPTEACHABLESKILL__STRING_,RPC_GETTEACHABLESKILL__INT_,RPC_GETTEACHABLESKILLSSIZE__};

PlayerTeachSession::PlayerTeachSession(CreatureObject* creature) : Facade(DummyConstructorParameter::instance()) {
	PlayerTeachSessionImplementation* _implementation = new PlayerTeachSessionImplementation(creature);
	_impl = _implementation;
	_impl->_setStub(this);
}

PlayerTeachSession::PlayerTeachSession(DummyConstructorParameter* param) : Facade(param) {
}

PlayerTeachSession::~PlayerTeachSession() {
}



void PlayerTeachSession::addTeachableSkill(const String& skillbox) {
	PlayerTeachSessionImplementation* _implementation = static_cast<PlayerTeachSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDTEACHABLESKILL__STRING_);
		method.addAsciiParameter(skillbox);

		method.executeWithVoidReturn();
	} else
		_implementation->addTeachableSkill(skillbox);
}

void PlayerTeachSession::dropTeachableSkill(const String& skillbox) {
	PlayerTeachSessionImplementation* _implementation = static_cast<PlayerTeachSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DROPTEACHABLESKILL__STRING_);
		method.addAsciiParameter(skillbox);

		method.executeWithVoidReturn();
	} else
		_implementation->dropTeachableSkill(skillbox);
}

String PlayerTeachSession::getTeachableSkill(int skillbox) {
	PlayerTeachSessionImplementation* _implementation = static_cast<PlayerTeachSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTEACHABLESKILL__INT_);
		method.addSignedIntParameter(skillbox);

		method.executeWithAsciiReturn(_return_getTeachableSkill);
		return _return_getTeachableSkill;
	} else
		return _implementation->getTeachableSkill(skillbox);
}

int PlayerTeachSession::getTeachableSkillsSize() {
	PlayerTeachSessionImplementation* _implementation = static_cast<PlayerTeachSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTEACHABLESKILLSSIZE__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getTeachableSkillsSize();
}

DistributedObjectServant* PlayerTeachSession::_getImplementation() {

	_updated = true;
	return _impl;
}

void PlayerTeachSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	PlayerTeachSessionImplementation
 */

PlayerTeachSessionImplementation::PlayerTeachSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


PlayerTeachSessionImplementation::~PlayerTeachSessionImplementation() {
}


void PlayerTeachSessionImplementation::finalize() {
}

void PlayerTeachSessionImplementation::_initializeImplementation() {
	_setClassHelper(PlayerTeachSessionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void PlayerTeachSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<PlayerTeachSession*>(stub);
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* PlayerTeachSessionImplementation::_getStub() {
	return _this;
}

PlayerTeachSessionImplementation::operator const PlayerTeachSession*() {
	return _this;
}

void PlayerTeachSessionImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void PlayerTeachSessionImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void PlayerTeachSessionImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void PlayerTeachSessionImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void PlayerTeachSessionImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void PlayerTeachSessionImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void PlayerTeachSessionImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void PlayerTeachSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("PlayerTeachSession");

}

void PlayerTeachSessionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(PlayerTeachSessionImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool PlayerTeachSessionImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (FacadeImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "PlayerTeachSession.teachableSkills") {
		TypeInfo<SortedVector<String> >::parseFromBinaryStream(&teachableSkills, stream);
		return true;
	}


	return false;
}

void PlayerTeachSessionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = PlayerTeachSessionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int PlayerTeachSessionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = FacadeImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "PlayerTeachSession.teachableSkills";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<SortedVector<String> >::toBinaryStream(&teachableSkills, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return _count + 1;
}

PlayerTeachSessionImplementation::PlayerTeachSessionImplementation(CreatureObject* creature) {
	_initializeImplementation();
	// server/zone/objects/player/sessions/PlayerTeachSession.idl():  		Logger.setLoggingName("PlayerTeachSession");
	Logger::setLoggingName("PlayerTeachSession");
	// server/zone/objects/player/sessions/PlayerTeachSession.idl():  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/objects/player/sessions/PlayerTeachSession.idl():  		teachableSkills.setNoDuplicateInsertPlan();
	(&teachableSkills)->setNoDuplicateInsertPlan();
}

void PlayerTeachSessionImplementation::addTeachableSkill(const String& skillbox) {
	// server/zone/objects/player/sessions/PlayerTeachSession.idl():   	teachableSkills.put(skillbox);
	(&teachableSkills)->put(skillbox);
}

void PlayerTeachSessionImplementation::dropTeachableSkill(const String& skillbox) {
	// server/zone/objects/player/sessions/PlayerTeachSession.idl():   	teachableSkills.drop(skillbox);
	(&teachableSkills)->drop(skillbox);
}

String PlayerTeachSessionImplementation::getTeachableSkill(int skillbox) {
	// server/zone/objects/player/sessions/PlayerTeachSession.idl():   	return teachableSkills.get(skillbox);
	return (&teachableSkills)->get(skillbox);
}

int PlayerTeachSessionImplementation::getTeachableSkillsSize() {
	// server/zone/objects/player/sessions/PlayerTeachSession.idl():   	return teachableSkills.size();
	return (&teachableSkills)->size();
}

/*
 *	PlayerTeachSessionAdapter
 */

PlayerTeachSessionAdapter::PlayerTeachSessionAdapter(PlayerTeachSession* obj) : FacadeAdapter(obj) {
}

Packet* PlayerTeachSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_ADDTEACHABLESKILL__STRING_:
		addTeachableSkill(inv->getAsciiParameter(_param0_addTeachableSkill__String_));
		break;
	case RPC_DROPTEACHABLESKILL__STRING_:
		dropTeachableSkill(inv->getAsciiParameter(_param0_dropTeachableSkill__String_));
		break;
	case RPC_GETTEACHABLESKILL__INT_:
		resp->insertAscii(getTeachableSkill(inv->getSignedIntParameter()));
		break;
	case RPC_GETTEACHABLESKILLSSIZE__:
		resp->insertSignedInt(getTeachableSkillsSize());
		break;
	default:
		return NULL;
	}

	return resp;
}

void PlayerTeachSessionAdapter::addTeachableSkill(const String& skillbox) {
	(static_cast<PlayerTeachSession*>(stub))->addTeachableSkill(skillbox);
}

void PlayerTeachSessionAdapter::dropTeachableSkill(const String& skillbox) {
	(static_cast<PlayerTeachSession*>(stub))->dropTeachableSkill(skillbox);
}

String PlayerTeachSessionAdapter::getTeachableSkill(int skillbox) {
	return (static_cast<PlayerTeachSession*>(stub))->getTeachableSkill(skillbox);
}

int PlayerTeachSessionAdapter::getTeachableSkillsSize() {
	return (static_cast<PlayerTeachSession*>(stub))->getTeachableSkillsSize();
}

/*
 *	PlayerTeachSessionHelper
 */

PlayerTeachSessionHelper* PlayerTeachSessionHelper::staticInitializer = PlayerTeachSessionHelper::instance();

PlayerTeachSessionHelper::PlayerTeachSessionHelper() {
	className = "PlayerTeachSession";

	Core::getObjectBroker()->registerClass(className, this);
}

void PlayerTeachSessionHelper::finalizeHelper() {
	PlayerTeachSessionHelper::finalize();
}

DistributedObject* PlayerTeachSessionHelper::instantiateObject() {
	return new PlayerTeachSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* PlayerTeachSessionHelper::instantiateServant() {
	return new PlayerTeachSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* PlayerTeachSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PlayerTeachSessionAdapter(static_cast<PlayerTeachSession*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

