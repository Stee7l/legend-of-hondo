/*
 *	server/zone/objects/tangible/wearables/Wearable.cpp generated by engine3 IDL compiler 0.55
 */

#include "Wearable.h"

#include "WearableImplementation.h"

#include "../../creature/CreatureObject.h"

#include "../../player/Player.h"

#include "../TangibleObject.h"

/*
 *	WearableStub
 */

Wearable::Wearable(unsigned long long oid, unsigned int tempCRC, const unicode& n, const string& tempn, bool eqp) : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new WearableImplementation(oid, tempCRC, n, tempn, eqp);
	_impl->_setStub(this);
}

Wearable::Wearable(CreatureObject* creature, unsigned long long oid, unsigned int tempCRC, const unicode& n, const string& tempn, bool eqp) : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new WearableImplementation(creature, oid, tempCRC, n, tempn, eqp);
	_impl->_setStub(this);
}

Wearable::Wearable(CreatureObject* creature, unsigned int tempCRC, const unicode& n, const string& tempn, bool eqp) : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new WearableImplementation(creature, tempCRC, n, tempn, eqp);
	_impl->_setStub(this);
}

Wearable::Wearable(DummyConstructorParameter* param) : TangibleObject(param) {
}

Wearable::~Wearable() {
}

/*
 *	WearableAdapter
 */

WearableAdapter::WearableAdapter(WearableImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* WearableAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	default:
		return NULL;
	}

	return resp;
}

/*
 *	WearableHelper
 */

WearableHelper* WearableHelper::staticInitializer = WearableHelper::instance();

WearableHelper::WearableHelper() {
	className = "Wearable";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void WearableHelper::finalizeHelper() {
	WearableHelper::finalize();
}

DistributedObject* WearableHelper::instantiateObject() {
	return new Wearable(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* WearableHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new WearableAdapter((WearableImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	WearableServant
 */

WearableServant::WearableServant(unsigned long long oid, int tp) : TangibleObjectImplementation(oid, tp) {
	_classHelper = WearableHelper::instance();
}

WearableServant::~WearableServant() {
}

void WearableServant::_setStub(DistributedObjectStub* stub) {
	_this = (Wearable*) stub;
	TangibleObjectServant::_setStub(stub);
}

DistributedObjectStub* WearableServant::_getStub() {
	return _this;
}

