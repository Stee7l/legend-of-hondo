/*
 *	server/zone/objects/tangible/resource/ResourceContainer.cpp generated by engine3 IDL compiler 0.55
 */

#include "ResourceContainer.h"

#include "ResourceContainerImplementation.h"

#include "../../scene/SceneObject.h"

#include "../../creature/CreatureObject.h"

#include "../../player/Player.h"

#include "../TangibleObject.h"

/*
 *	ResourceContainerStub
 */

ResourceContainer::ResourceContainer(unsigned long long oid) : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new ResourceContainerImplementation(oid);
	_impl->_setStub(this);
}

ResourceContainer::ResourceContainer(unsigned long long oid, unsigned int tempCRC, const unicode& n, const string& tempn) : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new ResourceContainerImplementation(oid, tempCRC, n, tempn);
	_impl->_setStub(this);
}

ResourceContainer::ResourceContainer(CreatureObject* creature, unsigned int tempCRC, const unicode& n, const string& tempn) : TangibleObject(DummyConstructorParameter::instance()) {
	_impl = new ResourceContainerImplementation(creature, tempCRC, n, tempn);
	_impl->_setStub(this);
}

ResourceContainer::ResourceContainer(DummyConstructorParameter* param) : TangibleObject(param) {
}

ResourceContainer::~ResourceContainer() {
}

bool ResourceContainer::compare(ResourceContainer* inResource) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(inResource);

		return method.executeWithBooleanReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->compare(inResource);
}

void ResourceContainer::init() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->init();
}

void ResourceContainer::sendTo(Player* player, bool doClose) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);
		method.addBooleanParameter(doClose);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->sendTo(player, doClose);
}

void ResourceContainer::sendDeltas(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->sendDeltas(player);
}

void ResourceContainer::generateAttributes(SceneObject* obj) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->generateAttributes(obj);
}

void ResourceContainer::splitContainer(Player* player, int newQuantity) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(player);
		method.addSignedIntParameter(newQuantity);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->splitContainer(player, newQuantity);
}

void ResourceContainer::transferContents(Player* player, ResourceContainer* fromRCO) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(player);
		method.addObjectParameter(fromRCO);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->transferContents(player, fromRCO);
}

void ResourceContainer::setContents(int i) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addSignedIntParameter(i);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setContents(i);
}

void ResourceContainer::setDecayResistance(int i) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addSignedIntParameter(i);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setDecayResistance(i);
}

void ResourceContainer::setQuality(int i) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addSignedIntParameter(i);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setQuality(i);
}

void ResourceContainer::setFlavor(int i) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addSignedIntParameter(i);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setFlavor(i);
}

void ResourceContainer::setPotentialEnergy(int i) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addSignedIntParameter(i);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setPotentialEnergy(i);
}

void ResourceContainer::setMalleability(int i) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addSignedIntParameter(i);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setMalleability(i);
}

void ResourceContainer::setToughness(int i) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addSignedIntParameter(i);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setToughness(i);
}

void ResourceContainer::setShockResistance(int i) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addSignedIntParameter(i);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setShockResistance(i);
}

void ResourceContainer::setColdResistance(int i) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addSignedIntParameter(i);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setColdResistance(i);
}

void ResourceContainer::setHeatResistance(int i) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addSignedIntParameter(i);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setHeatResistance(i);
}

void ResourceContainer::setConductivity(int i) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addSignedIntParameter(i);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setConductivity(i);
}

void ResourceContainer::setEntangleResistance(int i) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addSignedIntParameter(i);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setEntangleResistance(i);
}

void ResourceContainer::setClassSeven(string& str) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addAsciiParameter(str);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setClassSeven(str);
}

void ResourceContainer::setResourceName(string& str) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);
		method.addAsciiParameter(str);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setResourceName(str);
}

void ResourceContainer::setContainerFile(string& tempn) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);
		method.addAsciiParameter(tempn);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setContainerFile(tempn);
}

void ResourceContainer::setName(unicode& n) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);
		method.addUnicodeParameter(n);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setName(n);
}

void ResourceContainer::setObjectCRC(int tempCRC) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);
		method.addSignedIntParameter(tempCRC);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setObjectCRC(tempCRC);
}

void ResourceContainer::setResourceID(unsigned long long rid) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);
		method.addUnsignedLongParameter(rid);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setResourceID(rid);
}

void ResourceContainer::setObjectSubType(int subType) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);
		method.addSignedIntParameter(subType);

		method.executeWithVoidReturn();
	} else
		((ResourceContainerImplementation*) _impl)->setObjectSubType(subType);
}

int ResourceContainer::getContents() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		return method.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getContents();
}

int ResourceContainer::getDecayResistance() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);

		return method.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getDecayResistance();
}

int ResourceContainer::getQuality() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);

		return method.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getQuality();
}

int ResourceContainer::getFlavor() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);

		return method.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getFlavor();
}

int ResourceContainer::getPotentialEnergy() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);

		return method.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getPotentialEnergy();
}

int ResourceContainer::getMalleability() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);

		return method.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getMalleability();
}

int ResourceContainer::getToughness() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);

		return method.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getToughness();
}

int ResourceContainer::getShockResistance() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);

		return method.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getShockResistance();
}

int ResourceContainer::getColdResistance() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 40);

		return method.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getColdResistance();
}

int ResourceContainer::getHeatResistance() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 41);

		return method.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getHeatResistance();
}

int ResourceContainer::getConductivity() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 42);

		return method.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getConductivity();
}

int ResourceContainer::getEntangleResistance() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 43);

		return method.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getEntangleResistance();
}

string& ResourceContainer::getClassSeven() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 44);

		method.executeWithAsciiReturn(_return_getClassSeven);
		return _return_getClassSeven;
	} else
		return ((ResourceContainerImplementation*) _impl)->getClassSeven();
}

string& ResourceContainer::getResourceName() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 45);

		method.executeWithAsciiReturn(_return_getResourceName);
		return _return_getResourceName;
	} else
		return ((ResourceContainerImplementation*) _impl)->getResourceName();
}

unsigned long long ResourceContainer::getResourceID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 46);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getResourceID();
}

int ResourceContainer::getMaxContents() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 47);

		return method.executeWithSignedIntReturn();
	} else
		return ((ResourceContainerImplementation*) _impl)->getMaxContents();
}

/*
 *	ResourceContainerAdapter
 */

ResourceContainerAdapter::ResourceContainerAdapter(ResourceContainerImplementation* obj) : TangibleObjectAdapter(obj) {
}

Packet* ResourceContainerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertBoolean(compare((ResourceContainer*) inv->getObjectParameter()));
		break;
	case 7:
		init();
		break;
	case 8:
		sendTo((Player*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 9:
		sendDeltas((Player*) inv->getObjectParameter());
		break;
	case 10:
		generateAttributes((SceneObject*) inv->getObjectParameter());
		break;
	case 11:
		splitContainer((Player*) inv->getObjectParameter(), inv->getSignedIntParameter());
		break;
	case 12:
		transferContents((Player*) inv->getObjectParameter(), (ResourceContainer*) inv->getObjectParameter());
		break;
	case 13:
		setContents(inv->getSignedIntParameter());
		break;
	case 14:
		setDecayResistance(inv->getSignedIntParameter());
		break;
	case 15:
		setQuality(inv->getSignedIntParameter());
		break;
	case 16:
		setFlavor(inv->getSignedIntParameter());
		break;
	case 17:
		setPotentialEnergy(inv->getSignedIntParameter());
		break;
	case 18:
		setMalleability(inv->getSignedIntParameter());
		break;
	case 19:
		setToughness(inv->getSignedIntParameter());
		break;
	case 20:
		setShockResistance(inv->getSignedIntParameter());
		break;
	case 21:
		setColdResistance(inv->getSignedIntParameter());
		break;
	case 22:
		setHeatResistance(inv->getSignedIntParameter());
		break;
	case 23:
		setConductivity(inv->getSignedIntParameter());
		break;
	case 24:
		setEntangleResistance(inv->getSignedIntParameter());
		break;
	case 25:
		setClassSeven(inv->getAsciiParameter(_param0_setClassSeven__string_));
		break;
	case 26:
		setResourceName(inv->getAsciiParameter(_param0_setResourceName__string_));
		break;
	case 27:
		setContainerFile(inv->getAsciiParameter(_param0_setContainerFile__string_));
		break;
	case 28:
		setName(inv->getUnicodeParameter(_param0_setName__unicode_));
		break;
	case 29:
		setObjectCRC(inv->getSignedIntParameter());
		break;
	case 30:
		setResourceID(inv->getUnsignedLongParameter());
		break;
	case 31:
		setObjectSubType(inv->getSignedIntParameter());
		break;
	case 32:
		resp->insertSignedInt(getContents());
		break;
	case 33:
		resp->insertSignedInt(getDecayResistance());
		break;
	case 34:
		resp->insertSignedInt(getQuality());
		break;
	case 35:
		resp->insertSignedInt(getFlavor());
		break;
	case 36:
		resp->insertSignedInt(getPotentialEnergy());
		break;
	case 37:
		resp->insertSignedInt(getMalleability());
		break;
	case 38:
		resp->insertSignedInt(getToughness());
		break;
	case 39:
		resp->insertSignedInt(getShockResistance());
		break;
	case 40:
		resp->insertSignedInt(getColdResistance());
		break;
	case 41:
		resp->insertSignedInt(getHeatResistance());
		break;
	case 42:
		resp->insertSignedInt(getConductivity());
		break;
	case 43:
		resp->insertSignedInt(getEntangleResistance());
		break;
	case 44:
		resp->insertAscii(getClassSeven());
		break;
	case 45:
		resp->insertAscii(getResourceName());
		break;
	case 46:
		resp->insertLong(getResourceID());
		break;
	case 47:
		resp->insertSignedInt(getMaxContents());
		break;
	default:
		return NULL;
	}

	return resp;
}

bool ResourceContainerAdapter::compare(ResourceContainer* inResource) {
	return ((ResourceContainerImplementation*) impl)->compare(inResource);
}

void ResourceContainerAdapter::init() {
	return ((ResourceContainerImplementation*) impl)->init();
}

void ResourceContainerAdapter::sendTo(Player* player, bool doClose) {
	return ((ResourceContainerImplementation*) impl)->sendTo(player, doClose);
}

void ResourceContainerAdapter::sendDeltas(Player* player) {
	return ((ResourceContainerImplementation*) impl)->sendDeltas(player);
}

void ResourceContainerAdapter::generateAttributes(SceneObject* obj) {
	return ((ResourceContainerImplementation*) impl)->generateAttributes(obj);
}

void ResourceContainerAdapter::splitContainer(Player* player, int newQuantity) {
	return ((ResourceContainerImplementation*) impl)->splitContainer(player, newQuantity);
}

void ResourceContainerAdapter::transferContents(Player* player, ResourceContainer* fromRCO) {
	return ((ResourceContainerImplementation*) impl)->transferContents(player, fromRCO);
}

void ResourceContainerAdapter::setContents(int i) {
	return ((ResourceContainerImplementation*) impl)->setContents(i);
}

void ResourceContainerAdapter::setDecayResistance(int i) {
	return ((ResourceContainerImplementation*) impl)->setDecayResistance(i);
}

void ResourceContainerAdapter::setQuality(int i) {
	return ((ResourceContainerImplementation*) impl)->setQuality(i);
}

void ResourceContainerAdapter::setFlavor(int i) {
	return ((ResourceContainerImplementation*) impl)->setFlavor(i);
}

void ResourceContainerAdapter::setPotentialEnergy(int i) {
	return ((ResourceContainerImplementation*) impl)->setPotentialEnergy(i);
}

void ResourceContainerAdapter::setMalleability(int i) {
	return ((ResourceContainerImplementation*) impl)->setMalleability(i);
}

void ResourceContainerAdapter::setToughness(int i) {
	return ((ResourceContainerImplementation*) impl)->setToughness(i);
}

void ResourceContainerAdapter::setShockResistance(int i) {
	return ((ResourceContainerImplementation*) impl)->setShockResistance(i);
}

void ResourceContainerAdapter::setColdResistance(int i) {
	return ((ResourceContainerImplementation*) impl)->setColdResistance(i);
}

void ResourceContainerAdapter::setHeatResistance(int i) {
	return ((ResourceContainerImplementation*) impl)->setHeatResistance(i);
}

void ResourceContainerAdapter::setConductivity(int i) {
	return ((ResourceContainerImplementation*) impl)->setConductivity(i);
}

void ResourceContainerAdapter::setEntangleResistance(int i) {
	return ((ResourceContainerImplementation*) impl)->setEntangleResistance(i);
}

void ResourceContainerAdapter::setClassSeven(string& str) {
	return ((ResourceContainerImplementation*) impl)->setClassSeven(str);
}

void ResourceContainerAdapter::setResourceName(string& str) {
	return ((ResourceContainerImplementation*) impl)->setResourceName(str);
}

void ResourceContainerAdapter::setContainerFile(string& tempn) {
	return ((ResourceContainerImplementation*) impl)->setContainerFile(tempn);
}

void ResourceContainerAdapter::setName(unicode& n) {
	return ((ResourceContainerImplementation*) impl)->setName(n);
}

void ResourceContainerAdapter::setObjectCRC(int tempCRC) {
	return ((ResourceContainerImplementation*) impl)->setObjectCRC(tempCRC);
}

void ResourceContainerAdapter::setResourceID(unsigned long long rid) {
	return ((ResourceContainerImplementation*) impl)->setResourceID(rid);
}

void ResourceContainerAdapter::setObjectSubType(int subType) {
	return ((ResourceContainerImplementation*) impl)->setObjectSubType(subType);
}

int ResourceContainerAdapter::getContents() {
	return ((ResourceContainerImplementation*) impl)->getContents();
}

int ResourceContainerAdapter::getDecayResistance() {
	return ((ResourceContainerImplementation*) impl)->getDecayResistance();
}

int ResourceContainerAdapter::getQuality() {
	return ((ResourceContainerImplementation*) impl)->getQuality();
}

int ResourceContainerAdapter::getFlavor() {
	return ((ResourceContainerImplementation*) impl)->getFlavor();
}

int ResourceContainerAdapter::getPotentialEnergy() {
	return ((ResourceContainerImplementation*) impl)->getPotentialEnergy();
}

int ResourceContainerAdapter::getMalleability() {
	return ((ResourceContainerImplementation*) impl)->getMalleability();
}

int ResourceContainerAdapter::getToughness() {
	return ((ResourceContainerImplementation*) impl)->getToughness();
}

int ResourceContainerAdapter::getShockResistance() {
	return ((ResourceContainerImplementation*) impl)->getShockResistance();
}

int ResourceContainerAdapter::getColdResistance() {
	return ((ResourceContainerImplementation*) impl)->getColdResistance();
}

int ResourceContainerAdapter::getHeatResistance() {
	return ((ResourceContainerImplementation*) impl)->getHeatResistance();
}

int ResourceContainerAdapter::getConductivity() {
	return ((ResourceContainerImplementation*) impl)->getConductivity();
}

int ResourceContainerAdapter::getEntangleResistance() {
	return ((ResourceContainerImplementation*) impl)->getEntangleResistance();
}

string& ResourceContainerAdapter::getClassSeven() {
	return ((ResourceContainerImplementation*) impl)->getClassSeven();
}

string& ResourceContainerAdapter::getResourceName() {
	return ((ResourceContainerImplementation*) impl)->getResourceName();
}

unsigned long long ResourceContainerAdapter::getResourceID() {
	return ((ResourceContainerImplementation*) impl)->getResourceID();
}

int ResourceContainerAdapter::getMaxContents() {
	return ((ResourceContainerImplementation*) impl)->getMaxContents();
}

/*
 *	ResourceContainerHelper
 */

ResourceContainerHelper* ResourceContainerHelper::staticInitializer = ResourceContainerHelper::instance();

ResourceContainerHelper::ResourceContainerHelper() {
	className = "ResourceContainer";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ResourceContainerHelper::finalizeHelper() {
	ResourceContainerHelper::finalize();
}

DistributedObject* ResourceContainerHelper::instantiateObject() {
	return new ResourceContainer(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ResourceContainerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ResourceContainerAdapter((ResourceContainerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	ResourceContainerServant
 */

ResourceContainerServant::ResourceContainerServant(unsigned long long oid, int tp) : TangibleObjectImplementation(oid, tp) {
	_classHelper = ResourceContainerHelper::instance();
}

ResourceContainerServant::ResourceContainerServant(unsigned long long oid, unsigned int tempCRC, const unicode& n, const string& tempn, int tp) : TangibleObjectImplementation(oid, tempCRC, n, tempn, tp) {
	_classHelper = ResourceContainerHelper::instance();
}

ResourceContainerServant::ResourceContainerServant(CreatureObject* creature, unsigned int tempCRC, const unicode& n, const string& tempn, int tp) : TangibleObjectImplementation(creature, tempCRC, n, tempn, tp) {
	_classHelper = ResourceContainerHelper::instance();
}

ResourceContainerServant::~ResourceContainerServant() {
}

void ResourceContainerServant::_setStub(DistributedObjectStub* stub) {
	_this = (ResourceContainer*) stub;
	TangibleObjectServant::_setStub(stub);
}

DistributedObjectStub* ResourceContainerServant::_getStub() {
	return _this;
}

