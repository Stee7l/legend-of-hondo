/*
 *	server/zone/objects/player/sessions/TradeSession.cpp generated by engine3 IDL compiler 0.60
 */

#include "TradeSession.h"

#include "server/zone/objects/player/PlayerObject.h"

#include "server/zone/objects/scene/SceneObject.h"

/*
 *	TradeSessionStub
 */

enum {RPC_CLEAR__ = 6,RPC_GETACCEPTEDTRADE__,RPC_ADDTRADEITEM__SCENEOBJECT_,RPC_GETTRADEITEM__INT_,RPC_GETTRADESIZE__,RPC_GETMONEYTOTRADE__,RPC_GETTRADETARGETPLAYER__,RPC_ISTRYINGTOTRADE__,RPC_HASVERIFIEDTRADE__,RPC_SETACCEPTEDTRADE__BOOL_,RPC_SETMONEYTOTRADE__INT_,RPC_SETTRADETARGETPLAYER__LONG_,RPC_SETVERIFIEDTRADE__BOOL_};

TradeSession::TradeSession() : Facade(DummyConstructorParameter::instance()) {
	TradeSessionImplementation* _implementation = new TradeSessionImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

TradeSession::TradeSession(DummyConstructorParameter* param) : Facade(param) {
}

TradeSession::~TradeSession() {
}



void TradeSession::clear() {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEAR__);

		method.executeWithVoidReturn();
	} else
		_implementation->clear();
}

bool TradeSession::getAcceptedTrade() {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETACCEPTEDTRADE__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->getAcceptedTrade();
}

void TradeSession::addTradeItem(SceneObject* object) {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDTRADEITEM__SCENEOBJECT_);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		_implementation->addTradeItem(object);
}

SortedVector<ManagedReference<SceneObject* > >* TradeSession::getItemsToTrade() {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getItemsToTrade();
}

SceneObject* TradeSession::getTradeItem(int index) {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTRADEITEM__INT_);
		method.addSignedIntParameter(index);

		return static_cast<SceneObject*>(method.executeWithObjectReturn());
	} else
		return _implementation->getTradeItem(index);
}

int TradeSession::getTradeSize() {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTRADESIZE__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getTradeSize();
}

int TradeSession::getMoneyToTrade() {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMONEYTOTRADE__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getMoneyToTrade();
}

unsigned long long TradeSession::getTradeTargetPlayer() {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTRADETARGETPLAYER__);

		return method.executeWithUnsignedLongReturn();
	} else
		return _implementation->getTradeTargetPlayer();
}

bool TradeSession::isTryingToTrade() {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISTRYINGTOTRADE__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isTryingToTrade();
}

bool TradeSession::hasVerifiedTrade() {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HASVERIFIEDTRADE__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->hasVerifiedTrade();
}

void TradeSession::setAcceptedTrade(bool val) {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETACCEPTEDTRADE__BOOL_);
		method.addBooleanParameter(val);

		method.executeWithVoidReturn();
	} else
		_implementation->setAcceptedTrade(val);
}

void TradeSession::setMoneyToTrade(int val) {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETMONEYTOTRADE__INT_);
		method.addSignedIntParameter(val);

		method.executeWithVoidReturn();
	} else
		_implementation->setMoneyToTrade(val);
}

void TradeSession::setTradeTargetPlayer(unsigned long long val) {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETTRADETARGETPLAYER__LONG_);
		method.addUnsignedLongParameter(val);

		method.executeWithVoidReturn();
	} else
		_implementation->setTradeTargetPlayer(val);
}

void TradeSession::setVerifiedTrade(bool val) {
	TradeSessionImplementation* _implementation = static_cast<TradeSessionImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETVERIFIEDTRADE__BOOL_);
		method.addBooleanParameter(val);

		method.executeWithVoidReturn();
	} else
		_implementation->setVerifiedTrade(val);
}

DistributedObjectServant* TradeSession::_getImplementation() {

	_updated = true;
	return _impl;
}

void TradeSession::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	TradeSessionImplementation
 */

TradeSessionImplementation::TradeSessionImplementation(DummyConstructorParameter* param) : FacadeImplementation(param) {
	_initializeImplementation();
}


TradeSessionImplementation::~TradeSessionImplementation() {
}


void TradeSessionImplementation::finalize() {
}

void TradeSessionImplementation::_initializeImplementation() {
	_setClassHelper(TradeSessionHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void TradeSessionImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<TradeSession*>(stub);
	FacadeImplementation::_setStub(stub);
}

DistributedObjectStub* TradeSessionImplementation::_getStub() {
	return _this;
}

TradeSessionImplementation::operator const TradeSession*() {
	return _this;
}

void TradeSessionImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void TradeSessionImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void TradeSessionImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void TradeSessionImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void TradeSessionImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void TradeSessionImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void TradeSessionImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void TradeSessionImplementation::_serializationHelperMethod() {
	FacadeImplementation::_serializationHelperMethod();

	_setClassName("TradeSession");

}

void TradeSessionImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(TradeSessionImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool TradeSessionImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (FacadeImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "tradeTargetPlayer") {
		TypeInfo<unsigned long long >::parseFromBinaryStream(&tradeTargetPlayer, stream);
		return true;
	}

	if (_name == "itemsToTrade") {
		TypeInfo<SortedVector<ManagedReference<SceneObject* > > >::parseFromBinaryStream(&itemsToTrade, stream);
		return true;
	}

	if (_name == "verifiedTrade") {
		TypeInfo<bool >::parseFromBinaryStream(&verifiedTrade, stream);
		return true;
	}

	if (_name == "acceptedTrade") {
		TypeInfo<bool >::parseFromBinaryStream(&acceptedTrade, stream);
		return true;
	}

	if (_name == "moneyToTrade") {
		TypeInfo<int >::parseFromBinaryStream(&moneyToTrade, stream);
		return true;
	}


	return false;
}

void TradeSessionImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = TradeSessionImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int TradeSessionImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "tradeTargetPlayer";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned long long >::toBinaryStream(&tradeTargetPlayer, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "itemsToTrade";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<SortedVector<ManagedReference<SceneObject* > > >::toBinaryStream(&itemsToTrade, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "verifiedTrade";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&verifiedTrade, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "acceptedTrade";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&acceptedTrade, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "moneyToTrade";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&moneyToTrade, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 5 + FacadeImplementation::writeObjectMembers(stream);
}

TradeSessionImplementation::TradeSessionImplementation() {
	_initializeImplementation();
	// server/zone/objects/player/sessions/TradeSession.idl():  		tradeTargetPlayer = 0;
	tradeTargetPlayer = 0;
	// server/zone/objects/player/sessions/TradeSession.idl():  		itemsToTrade.setNoDuplicateInsertPlan();
	(&itemsToTrade)->setNoDuplicateInsertPlan();
	// server/zone/objects/player/sessions/TradeSession.idl():  		acceptedTrade = false;
	acceptedTrade = false;
	// server/zone/objects/player/sessions/TradeSession.idl():  		verifiedTrade = false;
	verifiedTrade = false;
	// server/zone/objects/player/sessions/TradeSession.idl():  		moneyToTrade = 0;
	moneyToTrade = 0;
}

void TradeSessionImplementation::clear() {
	// server/zone/objects/player/sessions/TradeSession.idl():  		tradeTargetPlayer = 0;
	tradeTargetPlayer = 0;
	// server/zone/objects/player/sessions/TradeSession.idl():  		itemsToTrade.removeAll();
	(&itemsToTrade)->removeAll();
	// server/zone/objects/player/sessions/TradeSession.idl():  		acceptedTrade = false;
	acceptedTrade = false;
	// server/zone/objects/player/sessions/TradeSession.idl():  		acceptedTrade = false;
	acceptedTrade = false;
	// server/zone/objects/player/sessions/TradeSession.idl():  		verifiedTrade = false;
	verifiedTrade = false;
	// server/zone/objects/player/sessions/TradeSession.idl():  		moneyToTrade = 0;
	moneyToTrade = 0;
}

bool TradeSessionImplementation::getAcceptedTrade() {
	// server/zone/objects/player/sessions/TradeSession.idl():  		return acceptedTrade;
	return acceptedTrade;
}

void TradeSessionImplementation::addTradeItem(SceneObject* object) {
	// server/zone/objects/player/sessions/TradeSession.idl():   	itemsToTrade.put(object);
	(&itemsToTrade)->put(object);
}

SortedVector<ManagedReference<SceneObject* > >* TradeSessionImplementation::getItemsToTrade() {
	// server/zone/objects/player/sessions/TradeSession.idl():  		return itemsToTrade;
	return (&itemsToTrade);
}

SceneObject* TradeSessionImplementation::getTradeItem(int index) {
	// server/zone/objects/player/sessions/TradeSession.idl():   	return itemsToTrade.get(index);
	return (&itemsToTrade)->get(index);
}

int TradeSessionImplementation::getTradeSize() {
	// server/zone/objects/player/sessions/TradeSession.idl():   	return itemsToTrade.size();
	return (&itemsToTrade)->size();
}

int TradeSessionImplementation::getMoneyToTrade() {
	// server/zone/objects/player/sessions/TradeSession.idl():  		return moneyToTrade;
	return moneyToTrade;
}

unsigned long long TradeSessionImplementation::getTradeTargetPlayer() {
	// server/zone/objects/player/sessions/TradeSession.idl():  		return tradeTargetPlayer;
	return tradeTargetPlayer;
}

bool TradeSessionImplementation::isTryingToTrade() {
	// server/zone/objects/player/sessions/TradeSession.idl():   	return tradeTargetPlayer != 0;
	return tradeTargetPlayer != 0;
}

bool TradeSessionImplementation::hasVerifiedTrade() {
	// server/zone/objects/player/sessions/TradeSession.idl():  		return verifiedTrade;
	return verifiedTrade;
}

void TradeSessionImplementation::setAcceptedTrade(bool val) {
	// server/zone/objects/player/sessions/TradeSession.idl():  		acceptedTrade = val;
	acceptedTrade = val;
}

void TradeSessionImplementation::setMoneyToTrade(int val) {
	// server/zone/objects/player/sessions/TradeSession.idl():  		moneyToTrade = val;
	moneyToTrade = val;
}

void TradeSessionImplementation::setTradeTargetPlayer(unsigned long long val) {
	// server/zone/objects/player/sessions/TradeSession.idl():  		tradeTargetPlayer = val;
	tradeTargetPlayer = val;
}

void TradeSessionImplementation::setVerifiedTrade(bool val) {
	// server/zone/objects/player/sessions/TradeSession.idl():  		verifiedTrade = val;
	verifiedTrade = val;
}

/*
 *	TradeSessionAdapter
 */

TradeSessionAdapter::TradeSessionAdapter(TradeSession* obj) : FacadeAdapter(obj) {
}

Packet* TradeSessionAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_CLEAR__:
		clear();
		break;
	case RPC_GETACCEPTEDTRADE__:
		resp->insertBoolean(getAcceptedTrade());
		break;
	case RPC_ADDTRADEITEM__SCENEOBJECT_:
		addTradeItem(static_cast<SceneObject*>(inv->getObjectParameter()));
		break;
	case RPC_GETTRADEITEM__INT_:
		resp->insertLong(getTradeItem(inv->getSignedIntParameter())->_getObjectID());
		break;
	case RPC_GETTRADESIZE__:
		resp->insertSignedInt(getTradeSize());
		break;
	case RPC_GETMONEYTOTRADE__:
		resp->insertSignedInt(getMoneyToTrade());
		break;
	case RPC_GETTRADETARGETPLAYER__:
		resp->insertLong(getTradeTargetPlayer());
		break;
	case RPC_ISTRYINGTOTRADE__:
		resp->insertBoolean(isTryingToTrade());
		break;
	case RPC_HASVERIFIEDTRADE__:
		resp->insertBoolean(hasVerifiedTrade());
		break;
	case RPC_SETACCEPTEDTRADE__BOOL_:
		setAcceptedTrade(inv->getBooleanParameter());
		break;
	case RPC_SETMONEYTOTRADE__INT_:
		setMoneyToTrade(inv->getSignedIntParameter());
		break;
	case RPC_SETTRADETARGETPLAYER__LONG_:
		setTradeTargetPlayer(inv->getUnsignedLongParameter());
		break;
	case RPC_SETVERIFIEDTRADE__BOOL_:
		setVerifiedTrade(inv->getBooleanParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void TradeSessionAdapter::clear() {
	(static_cast<TradeSession*>(stub))->clear();
}

bool TradeSessionAdapter::getAcceptedTrade() {
	return (static_cast<TradeSession*>(stub))->getAcceptedTrade();
}

void TradeSessionAdapter::addTradeItem(SceneObject* object) {
	(static_cast<TradeSession*>(stub))->addTradeItem(object);
}

SceneObject* TradeSessionAdapter::getTradeItem(int index) {
	return (static_cast<TradeSession*>(stub))->getTradeItem(index);
}

int TradeSessionAdapter::getTradeSize() {
	return (static_cast<TradeSession*>(stub))->getTradeSize();
}

int TradeSessionAdapter::getMoneyToTrade() {
	return (static_cast<TradeSession*>(stub))->getMoneyToTrade();
}

unsigned long long TradeSessionAdapter::getTradeTargetPlayer() {
	return (static_cast<TradeSession*>(stub))->getTradeTargetPlayer();
}

bool TradeSessionAdapter::isTryingToTrade() {
	return (static_cast<TradeSession*>(stub))->isTryingToTrade();
}

bool TradeSessionAdapter::hasVerifiedTrade() {
	return (static_cast<TradeSession*>(stub))->hasVerifiedTrade();
}

void TradeSessionAdapter::setAcceptedTrade(bool val) {
	(static_cast<TradeSession*>(stub))->setAcceptedTrade(val);
}

void TradeSessionAdapter::setMoneyToTrade(int val) {
	(static_cast<TradeSession*>(stub))->setMoneyToTrade(val);
}

void TradeSessionAdapter::setTradeTargetPlayer(unsigned long long val) {
	(static_cast<TradeSession*>(stub))->setTradeTargetPlayer(val);
}

void TradeSessionAdapter::setVerifiedTrade(bool val) {
	(static_cast<TradeSession*>(stub))->setVerifiedTrade(val);
}

/*
 *	TradeSessionHelper
 */

TradeSessionHelper* TradeSessionHelper::staticInitializer = TradeSessionHelper::instance();

TradeSessionHelper::TradeSessionHelper() {
	className = "TradeSession";

	Core::getObjectBroker()->registerClass(className, this);
}

void TradeSessionHelper::finalizeHelper() {
	TradeSessionHelper::finalize();
}

DistributedObject* TradeSessionHelper::instantiateObject() {
	return new TradeSession(DummyConstructorParameter::instance());
}

DistributedObjectServant* TradeSessionHelper::instantiateServant() {
	return new TradeSessionImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* TradeSessionHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new TradeSessionAdapter(static_cast<TradeSession*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

