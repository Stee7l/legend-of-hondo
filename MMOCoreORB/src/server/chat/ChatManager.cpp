/*
 *	server/chat/ChatManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "ChatManager.h"

#include "server/zone/ZoneServer.h"

#include "server/chat/room/ChatRoom.h"

#include "server/chat/room/ChatRoomMap.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/packets/object/StfParameter.h"

#include "server/zone/managers/player/PlayerMap.h"

#include "server/zone/managers/player/PlayerManager.h"

#include "server/zone/packets/chat/ChatRoomList.h"

#include "server/zone/packets/chat/ChatInstantMessageToCharacter.h"

/*
 *	ChatManagerStub
 */

ChatManager::ChatManager(ZoneServer* serv, int initsize) : ManagedObject(DummyConstructorParameter::instance()) {
	_impl = new ChatManagerImplementation(serv, initsize);
	_impl->_setStub(this);

	((ChatManagerImplementation*) _impl)->_serializationHelperMethod();
}

ChatManager::ChatManager(DummyConstructorParameter* param) : ManagedObject(param) {
}

ChatManager::~ChatManager() {
}

void ChatManager::initiateRooms() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->initiateRooms();
}

void ChatManager::destroyRooms() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->destroyRooms();
}

void ChatManager::addRoom(ChatRoom* channel) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(channel);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->addRoom(channel);
}

void ChatManager::removeRoom(ChatRoom* channel) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(channel);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->removeRoom(channel);
}

void ChatManager::populateRoomListMessage(ChatRoom* channel, ChatRoomList* msg) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(channel);
		method.addObjectParameter(msg);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->populateRoomListMessage(channel, msg);
}

void ChatManager::sendRoomList(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->sendRoomList(player);
}

void ChatManager::addPlayer(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->addPlayer(player);
}

PlayerCreature* ChatManager::getPlayer(const String& name) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addAsciiParameter(name);

		return (PlayerCreature*) method.executeWithObjectReturn();
	} else
		return ((ChatManagerImplementation*) _impl)->getPlayer(name);
}

PlayerCreature* ChatManager::removePlayer(const String& name) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addAsciiParameter(name);

		return (PlayerCreature*) method.executeWithObjectReturn();
	} else
		return ((ChatManagerImplementation*) _impl)->removePlayer(name);
}

void ChatManager::broadcastMessage(CreatureObject* player, const UnicodeString& message, unsigned long long target, unsigned int moodid, unsigned int mood2) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(player);
		method.addUnicodeParameter(message);
		method.addUnsignedLongParameter(target);
		method.addUnsignedIntParameter(moodid);
		method.addUnsignedIntParameter(mood2);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->broadcastMessage(player, message, target, moodid, mood2);
}

void ChatManager::handleSpatialChatInternalMessage(PlayerCreature* player, const UnicodeString& args) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addObjectParameter(player);
		method.addUnicodeParameter(args);

		method.executeWithVoidReturn();
	} else
		((ChatManagerImplementation*) _impl)->handleSpatialChatInternalMessage(player, args);
}

void ChatManager::handleChatInstantMessageToCharacter(ChatInstantMessageToCharacter* message) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((ChatManagerImplementation*) _impl)->handleChatInstantMessageToCharacter(message);
}

unsigned int ChatManager::getNextRoomID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((ChatManagerImplementation*) _impl)->getNextRoomID();
}

/*
 *	ChatManagerImplementation
 */

ChatManagerImplementation::~ChatManagerImplementation() {
}

void ChatManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ChatManager*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ChatManagerImplementation::_getStub() {
	return _this;
}

ChatManagerImplementation::operator const ChatManager*() {
	return _this;
}

void ChatManagerImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	addSerializableVariable("server", server);
	addSerializableVariable("playerManager", playerManager);
	addSerializableVariable("groupRoom", groupRoom);
	addSerializableVariable("guildRoom", guildRoom);
	addSerializableVariable("roomID", &roomID);
	addSerializableVariable("mute", &mute);
}

unsigned int ChatManagerImplementation::getNextRoomID() {
	// server/chat/ChatManager.idl(158):  return ++roomID;
	return  ++roomID;
}

/*
 *	ChatManagerAdapter
 */

ChatManagerAdapter::ChatManagerAdapter(ChatManagerImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* ChatManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initiateRooms();
		break;
	case 7:
		destroyRooms();
		break;
	case 8:
		addRoom((ChatRoom*) inv->getObjectParameter());
		break;
	case 9:
		removeRoom((ChatRoom*) inv->getObjectParameter());
		break;
	case 10:
		populateRoomListMessage((ChatRoom*) inv->getObjectParameter(), (ChatRoomList*) inv->getObjectParameter());
		break;
	case 11:
		sendRoomList((PlayerCreature*) inv->getObjectParameter());
		break;
	case 12:
		addPlayer((PlayerCreature*) inv->getObjectParameter());
		break;
	case 13:
		resp->insertLong(getPlayer(inv->getAsciiParameter(_param0_getPlayer__String_))->_getObjectID());
		break;
	case 14:
		resp->insertLong(removePlayer(inv->getAsciiParameter(_param0_removePlayer__String_))->_getObjectID());
		break;
	case 15:
		broadcastMessage((CreatureObject*) inv->getObjectParameter(), inv->getUnicodeParameter(_param1_broadcastMessage__CreatureObject_UnicodeString_long_int_int_), inv->getUnsignedLongParameter(), inv->getUnsignedIntParameter(), inv->getUnsignedIntParameter());
		break;
	case 16:
		handleSpatialChatInternalMessage((PlayerCreature*) inv->getObjectParameter(), inv->getUnicodeParameter(_param1_handleSpatialChatInternalMessage__PlayerCreature_UnicodeString_));
		break;
	case 17:
		resp->insertInt(getNextRoomID());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ChatManagerAdapter::initiateRooms() {
	return ((ChatManagerImplementation*) impl)->initiateRooms();
}

void ChatManagerAdapter::destroyRooms() {
	return ((ChatManagerImplementation*) impl)->destroyRooms();
}

void ChatManagerAdapter::addRoom(ChatRoom* channel) {
	return ((ChatManagerImplementation*) impl)->addRoom(channel);
}

void ChatManagerAdapter::removeRoom(ChatRoom* channel) {
	return ((ChatManagerImplementation*) impl)->removeRoom(channel);
}

void ChatManagerAdapter::populateRoomListMessage(ChatRoom* channel, ChatRoomList* msg) {
	return ((ChatManagerImplementation*) impl)->populateRoomListMessage(channel, msg);
}

void ChatManagerAdapter::sendRoomList(PlayerCreature* player) {
	return ((ChatManagerImplementation*) impl)->sendRoomList(player);
}

void ChatManagerAdapter::addPlayer(PlayerCreature* player) {
	return ((ChatManagerImplementation*) impl)->addPlayer(player);
}

PlayerCreature* ChatManagerAdapter::getPlayer(const String& name) {
	return ((ChatManagerImplementation*) impl)->getPlayer(name);
}

PlayerCreature* ChatManagerAdapter::removePlayer(const String& name) {
	return ((ChatManagerImplementation*) impl)->removePlayer(name);
}

void ChatManagerAdapter::broadcastMessage(CreatureObject* player, const UnicodeString& message, unsigned long long target, unsigned int moodid, unsigned int mood2) {
	return ((ChatManagerImplementation*) impl)->broadcastMessage(player, message, target, moodid, mood2);
}

void ChatManagerAdapter::handleSpatialChatInternalMessage(PlayerCreature* player, const UnicodeString& args) {
	return ((ChatManagerImplementation*) impl)->handleSpatialChatInternalMessage(player, args);
}

unsigned int ChatManagerAdapter::getNextRoomID() {
	return ((ChatManagerImplementation*) impl)->getNextRoomID();
}

/*
 *	ChatManagerHelper
 */

ChatManagerHelper* ChatManagerHelper::staticInitializer = ChatManagerHelper::instance();

ChatManagerHelper::ChatManagerHelper() {
	className = "ChatManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ChatManagerHelper::finalizeHelper() {
	ChatManagerHelper::finalize();
}

DistributedObject* ChatManagerHelper::instantiateObject() {
	return new ChatManager(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ChatManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ChatManagerAdapter((ChatManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

