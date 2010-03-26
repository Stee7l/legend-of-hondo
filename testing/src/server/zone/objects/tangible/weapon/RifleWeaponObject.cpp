/*
 *	server/zone/objects/tangible/weapon/RifleWeaponObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "RifleWeaponObject.h"

/*
 *	RifleWeaponObjectStub
 */

RifleWeaponObject::RifleWeaponObject() : RangedWeaponObject(DummyConstructorParameter::instance()) {
	_impl = new RifleWeaponObjectImplementation();
	_impl->_setStub(this);
}

RifleWeaponObject::RifleWeaponObject(DummyConstructorParameter* param) : RangedWeaponObject(param) {
}

RifleWeaponObject::~RifleWeaponObject() {
}


void RifleWeaponObject::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((RifleWeaponObjectImplementation*) _impl)->initializeTransientMembers();
}

/*
 *	RifleWeaponObjectImplementation
 */

RifleWeaponObjectImplementation::RifleWeaponObjectImplementation(DummyConstructorParameter* param) : RangedWeaponObjectImplementation(param) {
	_initializeImplementation();
}

RifleWeaponObjectImplementation::~RifleWeaponObjectImplementation() {
}


void RifleWeaponObjectImplementation::finalize() {
}

void RifleWeaponObjectImplementation::_initializeImplementation() {
	_setClassHelper(RifleWeaponObjectHelper::instance());

	_serializationHelperMethod();
}

void RifleWeaponObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (RifleWeaponObject*) stub;
	RangedWeaponObjectImplementation::_setStub(stub);
}

DistributedObjectStub* RifleWeaponObjectImplementation::_getStub() {
	return _this;
}

RifleWeaponObjectImplementation::operator const RifleWeaponObject*() {
	return _this;
}

void RifleWeaponObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void RifleWeaponObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void RifleWeaponObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void RifleWeaponObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void RifleWeaponObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void RifleWeaponObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void RifleWeaponObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void RifleWeaponObjectImplementation::_serializationHelperMethod() {
	RangedWeaponObjectImplementation::_serializationHelperMethod();

	_setClassName("RifleWeaponObject");

}

RifleWeaponObjectImplementation::RifleWeaponObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/weapon/RifleWeaponObject.idl(53):  		Logger.setLoggingName("RifleWeaponObject");
	Logger::setLoggingName("RifleWeaponObject");
}

void RifleWeaponObjectImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/weapon/RifleWeaponObject.idl(57):  		super.initializeTransientMembers();
	RangedWeaponObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/weapon/RifleWeaponObject.idl(59):  		Logger.setLoggingName("RifleWeaponObject");
	Logger::setLoggingName("RifleWeaponObject");
}

/*
 *	RifleWeaponObjectAdapter
 */

RifleWeaponObjectAdapter::RifleWeaponObjectAdapter(RifleWeaponObjectImplementation* obj) : RangedWeaponObjectAdapter(obj) {
}

Packet* RifleWeaponObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	default:
		return NULL;
	}

	return resp;
}

void RifleWeaponObjectAdapter::initializeTransientMembers() {
	((RifleWeaponObjectImplementation*) impl)->initializeTransientMembers();
}

/*
 *	RifleWeaponObjectHelper
 */

RifleWeaponObjectHelper* RifleWeaponObjectHelper::staticInitializer = RifleWeaponObjectHelper::instance();

RifleWeaponObjectHelper::RifleWeaponObjectHelper() {
	className = "RifleWeaponObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void RifleWeaponObjectHelper::finalizeHelper() {
	RifleWeaponObjectHelper::finalize();
}

DistributedObject* RifleWeaponObjectHelper::instantiateObject() {
	return new RifleWeaponObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* RifleWeaponObjectHelper::instantiateServant() {
	return new RifleWeaponObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* RifleWeaponObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new RifleWeaponObjectAdapter((RifleWeaponObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

