/*
 *	server/zone/objects/group/GroupObject.cpp generated by engine3 IDL compiler 0.55
 */

#include "GroupObject.h"

#include "GroupObjectImplementation.h"

#include "../scene/SceneObject.h"

#include "../player/Player.h"

#include "../../../chat/room/ChatRoom.h"

/*
 *	GroupObjectStub
 */

GroupObject::GroupObject(unsigned long long oid, Player* leader) : SceneObject(DummyConstructorParameter::instance()) {
	_impl = new GroupObjectImplementation(oid, leader);
	_impl->_setStub(this);
}

GroupObject::GroupObject(DummyConstructorParameter* param) : SceneObject(param) {
}

GroupObject::~GroupObject() {
}

void GroupObject::sendTo(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _impl)->sendTo(player);
}

void GroupObject::broadcastMessage(BaseMessage* msg) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(msg);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _impl)->broadcastMessage(msg);
}

void GroupObject::addPlayer(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _impl)->addPlayer(player);
}

void GroupObject::removePlayer(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _impl)->removePlayer(player);
}

void GroupObject::disband() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _impl)->disband();
}

void GroupObject::makeLeader(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _impl)->makeLeader(player);
}

bool GroupObject::hasMember(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(player);

		return method.executeWithBooleanReturn();
	} else
		return ((GroupObjectImplementation*) _impl)->hasMember(player);
}

void GroupObject::startChannel() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _impl)->startChannel();
}

ChatRoom* GroupObject::getGroupChannel() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		return (ChatRoom*) method.executeWithObjectReturn();
	} else
		return ((GroupObjectImplementation*) _impl)->getGroupChannel();
}

int GroupObject::getListSize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		return method.executeWithSignedIntReturn();
	} else
		return ((GroupObjectImplementation*) _impl)->getListSize();
}

int GroupObject::getGroupSize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		return method.executeWithSignedIntReturn();
	} else
		return ((GroupObjectImplementation*) _impl)->getGroupSize();
}

Player* GroupObject::getGroupMember(int index) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addSignedIntParameter(index);

		return (Player*) method.executeWithObjectReturn();
	} else
		return ((GroupObjectImplementation*) _impl)->getGroupMember(index);
}

void GroupObject::addMember(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((GroupObjectImplementation*) _impl)->addMember(player);
}

Player* GroupObject::getLeader() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		return (Player*) method.executeWithObjectReturn();
	} else
		return ((GroupObjectImplementation*) _impl)->getLeader();
}

unsigned int GroupObject::getListCount() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((GroupObjectImplementation*) _impl)->getListCount();
}

unsigned int GroupObject::getNewListCount(int cnt) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addSignedIntParameter(cnt);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((GroupObjectImplementation*) _impl)->getNewListCount(cnt);
}

float GroupObject::getRangerBonusForHarvesting(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addObjectParameter(player);

		return method.executeWithFloatReturn();
	} else
		return ((GroupObjectImplementation*) _impl)->getRangerBonusForHarvesting(player);
}

/*
 *	GroupObjectAdapter
 */

GroupObjectAdapter::GroupObjectAdapter(GroupObjectImplementation* obj) : SceneObjectAdapter(obj) {
}

Packet* GroupObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		sendTo((Player*) inv->getObjectParameter());
		break;
	case 7:
		broadcastMessage((BaseMessage*) inv->getObjectParameter());
		break;
	case 8:
		addPlayer((Player*) inv->getObjectParameter());
		break;
	case 9:
		removePlayer((Player*) inv->getObjectParameter());
		break;
	case 10:
		disband();
		break;
	case 11:
		makeLeader((Player*) inv->getObjectParameter());
		break;
	case 12:
		resp->insertBoolean(hasMember((Player*) inv->getObjectParameter()));
		break;
	case 13:
		startChannel();
		break;
	case 14:
		resp->insertLong(getGroupChannel()->_getObjectID());
		break;
	case 15:
		resp->insertSignedInt(getListSize());
		break;
	case 16:
		resp->insertSignedInt(getGroupSize());
		break;
	case 17:
		resp->insertLong(getGroupMember(inv->getSignedIntParameter())->_getObjectID());
		break;
	case 18:
		addMember((Player*) inv->getObjectParameter());
		break;
	case 19:
		resp->insertLong(getLeader()->_getObjectID());
		break;
	case 20:
		resp->insertInt(getListCount());
		break;
	case 21:
		resp->insertInt(getNewListCount(inv->getSignedIntParameter()));
		break;
	case 22:
		resp->insertFloat(getRangerBonusForHarvesting((Player*) inv->getObjectParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void GroupObjectAdapter::sendTo(Player* player) {
	return ((GroupObjectImplementation*) impl)->sendTo(player);
}

void GroupObjectAdapter::broadcastMessage(BaseMessage* msg) {
	return ((GroupObjectImplementation*) impl)->broadcastMessage(msg);
}

void GroupObjectAdapter::addPlayer(Player* player) {
	return ((GroupObjectImplementation*) impl)->addPlayer(player);
}

void GroupObjectAdapter::removePlayer(Player* player) {
	return ((GroupObjectImplementation*) impl)->removePlayer(player);
}

void GroupObjectAdapter::disband() {
	return ((GroupObjectImplementation*) impl)->disband();
}

void GroupObjectAdapter::makeLeader(Player* player) {
	return ((GroupObjectImplementation*) impl)->makeLeader(player);
}

bool GroupObjectAdapter::hasMember(Player* player) {
	return ((GroupObjectImplementation*) impl)->hasMember(player);
}

void GroupObjectAdapter::startChannel() {
	return ((GroupObjectImplementation*) impl)->startChannel();
}

ChatRoom* GroupObjectAdapter::getGroupChannel() {
	return ((GroupObjectImplementation*) impl)->getGroupChannel();
}

int GroupObjectAdapter::getListSize() {
	return ((GroupObjectImplementation*) impl)->getListSize();
}

int GroupObjectAdapter::getGroupSize() {
	return ((GroupObjectImplementation*) impl)->getGroupSize();
}

Player* GroupObjectAdapter::getGroupMember(int index) {
	return ((GroupObjectImplementation*) impl)->getGroupMember(index);
}

void GroupObjectAdapter::addMember(Player* player) {
	return ((GroupObjectImplementation*) impl)->addMember(player);
}

Player* GroupObjectAdapter::getLeader() {
	return ((GroupObjectImplementation*) impl)->getLeader();
}

unsigned int GroupObjectAdapter::getListCount() {
	return ((GroupObjectImplementation*) impl)->getListCount();
}

unsigned int GroupObjectAdapter::getNewListCount(int cnt) {
	return ((GroupObjectImplementation*) impl)->getNewListCount(cnt);
}

float GroupObjectAdapter::getRangerBonusForHarvesting(Player* player) {
	return ((GroupObjectImplementation*) impl)->getRangerBonusForHarvesting(player);
}

/*
 *	GroupObjectHelper
 */

GroupObjectHelper* GroupObjectHelper::staticInitializer = GroupObjectHelper::instance();

GroupObjectHelper::GroupObjectHelper() {
	className = "GroupObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void GroupObjectHelper::finalizeHelper() {
	GroupObjectHelper::finalize();
}

DistributedObject* GroupObjectHelper::instantiateObject() {
	return new GroupObject(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* GroupObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new GroupObjectAdapter((GroupObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	GroupObjectServant
 */

GroupObjectServant::GroupObjectServant(unsigned long long oid, int type) : SceneObjectImplementation(oid, type) {
	_classHelper = GroupObjectHelper::instance();
}

GroupObjectServant::~GroupObjectServant() {
}

void GroupObjectServant::_setStub(DistributedObjectStub* stub) {
	_this = (GroupObject*) stub;
	SceneObjectServant::_setStub(stub);
}

DistributedObjectStub* GroupObjectServant::_getStub() {
	return _this;
}

