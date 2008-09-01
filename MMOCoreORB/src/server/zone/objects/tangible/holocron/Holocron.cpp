/*
 *	server/zone/objects/tangible/holocron/Holocron.cpp generated by engine3 IDL compiler 0.55
 */

#include "Holocron.h"

#include "HolocronImplementation.h"

#include "../../player/Player.h"

#include "../TangibleObject.h"

/*
 *	HolocronStub
 */

Holocron::Holocron(Player* player, unsigned int tempCRC, const unicode& n, const string& tempn) : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new HolocronImplementation(player, tempCRC, n, tempn);
	_impl->_setStub(this);
}

Holocron::Holocron(DummyConstructorParameter* param) : TangibleObject(param) {
}

Holocron::~Holocron() {
}

int Holocron::useObject(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(player);

		return method.executeWithSignedIntReturn();
	} else
		return ((HolocronImplementation*) _impl)->useObject(player);
}

/*
 *	HolocronAdapter
 */

HolocronAdapter::HolocronAdapter(HolocronImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* HolocronAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertSignedInt(useObject((Player*) inv->getObjectParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

int HolocronAdapter::useObject(Player* player) {
	return ((HolocronImplementation*) impl)->useObject(player);
}

/*
 *	HolocronHelper
 */

HolocronHelper* HolocronHelper::staticInitializer = HolocronHelper::instance();

HolocronHelper::HolocronHelper() {
	className = "Holocron";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void HolocronHelper::finalizeHelper() {
	HolocronHelper::finalize();
}

DistributedObject* HolocronHelper::instantiateObject() {
	return new Holocron(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* HolocronHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new HolocronAdapter((HolocronImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	HolocronServant
 */

HolocronServant::HolocronServant(unsigned long long oid, int tp) : TangibleObjectImplementation(oid, tp) {
	_classHelper = HolocronHelper::instance();
}

HolocronServant::~HolocronServant() {
}

void HolocronServant::_setStub(DistributedObjectStub* stub) {
	_this = (Holocron*) stub;
	TangibleObjectServant::_setStub(stub);
}

DistributedObjectStub* HolocronServant::_getStub() {
	return _this;
}

