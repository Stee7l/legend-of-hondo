/*
 *	server/zone/objects/player/sui/listbox/SuiListBoxMenuItem.cpp generated by engine3 IDL compiler 0.60
 */

#include "SuiListBoxMenuItem.h"

#include "server/zone/objects/player/sui/listbox/SuiListBox.h"

/*
 *	SuiListBoxMenuItemStub
 */

enum {RPC_GETOBJECTID__ = 6,RPC_GETOPTIONNAME__};

SuiListBoxMenuItem::SuiListBoxMenuItem(const String& name, unsigned long long oid) : ManagedObject(DummyConstructorParameter::instance()) {
	SuiListBoxMenuItemImplementation* _implementation = new SuiListBoxMenuItemImplementation(name, oid);
	_impl = _implementation;
	_impl->_setStub(this);
}

SuiListBoxMenuItem::SuiListBoxMenuItem(DummyConstructorParameter* param) : ManagedObject(param) {
}

SuiListBoxMenuItem::~SuiListBoxMenuItem() {
}



unsigned long long SuiListBoxMenuItem::getObjectID() {
	SuiListBoxMenuItemImplementation* _implementation = static_cast<SuiListBoxMenuItemImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETOBJECTID__);

		return method.executeWithUnsignedLongReturn();
	} else
		return _implementation->getObjectID();
}

String SuiListBoxMenuItem::getOptionName() {
	SuiListBoxMenuItemImplementation* _implementation = static_cast<SuiListBoxMenuItemImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETOPTIONNAME__);

		method.executeWithAsciiReturn(_return_getOptionName);
		return _return_getOptionName;
	} else
		return _implementation->getOptionName();
}

DistributedObjectServant* SuiListBoxMenuItem::_getImplementation() {

	_updated = true;
	return _impl;
}

void SuiListBoxMenuItem::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	SuiListBoxMenuItemImplementation
 */

SuiListBoxMenuItemImplementation::SuiListBoxMenuItemImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}


SuiListBoxMenuItemImplementation::~SuiListBoxMenuItemImplementation() {
}


void SuiListBoxMenuItemImplementation::finalize() {
}

void SuiListBoxMenuItemImplementation::_initializeImplementation() {
	_setClassHelper(SuiListBoxMenuItemHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void SuiListBoxMenuItemImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<SuiListBoxMenuItem*>(stub);
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* SuiListBoxMenuItemImplementation::_getStub() {
	return _this;
}

SuiListBoxMenuItemImplementation::operator const SuiListBoxMenuItem*() {
	return _this;
}

void SuiListBoxMenuItemImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void SuiListBoxMenuItemImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void SuiListBoxMenuItemImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void SuiListBoxMenuItemImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void SuiListBoxMenuItemImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void SuiListBoxMenuItemImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void SuiListBoxMenuItemImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void SuiListBoxMenuItemImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("SuiListBoxMenuItem");

}

void SuiListBoxMenuItemImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(SuiListBoxMenuItemImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool SuiListBoxMenuItemImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ManagedObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "SuiListBoxMenuItem.optionName") {
		TypeInfo<String >::parseFromBinaryStream(&optionName, stream);
		return true;
	}

	if (_name == "SuiListBoxMenuItem.objectID") {
		TypeInfo<unsigned long long >::parseFromBinaryStream(&objectID, stream);
		return true;
	}


	return false;
}

void SuiListBoxMenuItemImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SuiListBoxMenuItemImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SuiListBoxMenuItemImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ManagedObjectImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "SuiListBoxMenuItem.optionName";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&optionName, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "SuiListBoxMenuItem.objectID";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned long long >::toBinaryStream(&objectID, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return _count + 2;
}

SuiListBoxMenuItemImplementation::SuiListBoxMenuItemImplementation(const String& name, unsigned long long oid) {
	_initializeImplementation();
	// server/zone/objects/player/sui/listbox/SuiListBoxMenuItem.idl():  		optionName = name;
	optionName = name;
	// server/zone/objects/player/sui/listbox/SuiListBoxMenuItem.idl():  		objectID = oid;
	objectID = oid;
}

unsigned long long SuiListBoxMenuItemImplementation::getObjectID() {
	// server/zone/objects/player/sui/listbox/SuiListBoxMenuItem.idl():  		return objectID;
	return objectID;
}

String SuiListBoxMenuItemImplementation::getOptionName() {
	// server/zone/objects/player/sui/listbox/SuiListBoxMenuItem.idl():  		return optionName;
	return optionName;
}

/*
 *	SuiListBoxMenuItemAdapter
 */

SuiListBoxMenuItemAdapter::SuiListBoxMenuItemAdapter(SuiListBoxMenuItem* obj) : ManagedObjectAdapter(obj) {
}

Packet* SuiListBoxMenuItemAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_GETOBJECTID__:
		resp->insertLong(getObjectID());
		break;
	case RPC_GETOPTIONNAME__:
		resp->insertAscii(getOptionName());
		break;
	default:
		return NULL;
	}

	return resp;
}

unsigned long long SuiListBoxMenuItemAdapter::getObjectID() {
	return (static_cast<SuiListBoxMenuItem*>(stub))->getObjectID();
}

String SuiListBoxMenuItemAdapter::getOptionName() {
	return (static_cast<SuiListBoxMenuItem*>(stub))->getOptionName();
}

/*
 *	SuiListBoxMenuItemHelper
 */

SuiListBoxMenuItemHelper* SuiListBoxMenuItemHelper::staticInitializer = SuiListBoxMenuItemHelper::instance();

SuiListBoxMenuItemHelper::SuiListBoxMenuItemHelper() {
	className = "SuiListBoxMenuItem";

	Core::getObjectBroker()->registerClass(className, this);
}

void SuiListBoxMenuItemHelper::finalizeHelper() {
	SuiListBoxMenuItemHelper::finalize();
}

DistributedObject* SuiListBoxMenuItemHelper::instantiateObject() {
	return new SuiListBoxMenuItem(DummyConstructorParameter::instance());
}

DistributedObjectServant* SuiListBoxMenuItemHelper::instantiateServant() {
	return new SuiListBoxMenuItemImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* SuiListBoxMenuItemHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SuiListBoxMenuItemAdapter(static_cast<SuiListBoxMenuItem*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

