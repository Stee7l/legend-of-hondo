/*
 *	server/zone/objects/draftschematic/DraftSchematic.cpp generated by engine3 IDL compiler 0.55
 */

#include "DraftSchematic.h"

#include "DraftSchematicImplementation.h"

#include "../scene/SceneObject.h"

#include "../player/Player.h"

#include "DraftSchematicIngredient.h"

#include "DraftSchematicAttribute.h"

#include "DraftSchematicValues.h"

#include "DraftSchematicExpPropGroup.h"

#include "../../packets/object/ObjectControllerMessage.h"

/*
 *	DraftSchematicStub
 */

DraftSchematic::DraftSchematic(unsigned int schematicID, const string& objName, const string& stringName, unsigned int objCRC, const string& groupName, unsigned int complexity, unsigned int schematicSize, int craftingToolTab) : ManagedObject(DummyConstructorParameter::instance()) {
	_impl = new DraftSchematicImplementation(schematicID, objName, stringName, objCRC, groupName, complexity, schematicSize, craftingToolTab);
	_impl->_setStub(this);
}

DraftSchematic::DraftSchematic(DraftSchematic* draftSchematic) : ManagedObject(DummyConstructorParameter::instance()) {
	_impl = new DraftSchematicImplementation(draftSchematic);
	_impl->_setStub(this);
}

DraftSchematic::DraftSchematic(DummyConstructorParameter* param) : ManagedObject(param) {
}

DraftSchematic::~DraftSchematic() {
}

DraftSchematic* DraftSchematic::dsClone(DraftSchematic* draftSchematic) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(draftSchematic);

		return (DraftSchematic*) method.executeWithObjectReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->dsClone(draftSchematic);
}

void DraftSchematic::destroy(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->destroy(player);
}

void DraftSchematic::sendTo(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->sendTo(player);
}

void DraftSchematic::addExperimentalProperty(unsigned int groupNumber, const string& experimentalProperty, unsigned int weight) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addUnsignedIntParameter(groupNumber);
		method.addAsciiParameter(experimentalProperty);
		method.addUnsignedIntParameter(weight);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->addExperimentalProperty(groupNumber, experimentalProperty, weight);
}

void DraftSchematic::sendExperimentalPropertiesToPlayer(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->sendExperimentalPropertiesToPlayer(player);
}

void DraftSchematic::increaseComplexity() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->increaseComplexity();
}

void DraftSchematic::increaseExpCounter() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->increaseExpCounter();
}

void DraftSchematic::sendIngredientsToPlayer(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->sendIngredientsToPlayer(player);
}

void DraftSchematic::helperSendIngredientsToPlayer(ObjectControllerMessage* objMsg) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addObjectParameter(objMsg);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->helperSendIngredientsToPlayer(objMsg);
}

void DraftSchematic::addIngredient(const string& ingredientTemplateName, const string& ingredientTitleName, bool optional, const string& resourceType, unsigned int resourceQuantity, unsigned int combineType) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addAsciiParameter(ingredientTemplateName);
		method.addAsciiParameter(ingredientTitleName);
		method.addBooleanParameter(optional);
		method.addAsciiParameter(resourceType);
		method.addUnsignedIntParameter(resourceQuantity);
		method.addUnsignedIntParameter(combineType);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->addIngredient(ingredientTemplateName, ingredientTitleName, optional, resourceType, resourceQuantity, combineType);
}

DraftSchematicIngredient* DraftSchematic::getIngredient(int index) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addSignedIntParameter(index);

		return (DraftSchematicIngredient*) method.executeWithObjectReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getIngredient(index);
}

int DraftSchematic::getIngredientListSize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithSignedIntReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getIngredientListSize();
}

int DraftSchematic::getRequiredIngredientCount() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		return method.executeWithSignedIntReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getRequiredIngredientCount();
}

void DraftSchematic::setPersistent(bool status) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addBooleanParameter(status);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->setPersistent(status);
}

void DraftSchematic::setObjectID(unsigned long long objID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addUnsignedLongParameter(objID);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->setObjectID(objID);
}

void DraftSchematic::setTanoAttributes(string& attributes) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addAsciiParameter(attributes);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->setTanoAttributes(attributes);
}

void DraftSchematic::setContainer(SceneObject* container) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addObjectParameter(container);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->setContainer(container);
}

void DraftSchematic::setXpType(string& type) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addAsciiParameter(type);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->setXpType(type);
}

void DraftSchematic::setXp(int x) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addSignedIntParameter(x);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->setXp(x);
}

void DraftSchematic::setExpCounter() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->setExpCounter();
}

void DraftSchematic::setExpPoints(int points) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);
		method.addSignedIntParameter(points);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->setExpPoints(points);
}

void DraftSchematic::setExpFailure(float rate) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);
		method.addFloatParameter(rate);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->setExpFailure(rate);
}

void DraftSchematic::setExperimentingSkill(const string& exp) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);
		method.addAsciiParameter(exp);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->setExperimentingSkill(exp);
}

void DraftSchematic::setAssemblySkill(const string& ass) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);
		method.addAsciiParameter(ass);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->setAssemblySkill(ass);
}

void DraftSchematic::setFinished() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->setFinished();
}

int DraftSchematic::getAttributesToSetListSize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		return method.executeWithSignedIntReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getAttributesToSetListSize();
}

DraftSchematicAttribute* DraftSchematic::getAttributeToSet(const int i) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);
		method.addSignedIntParameter(i);

		return (DraftSchematicAttribute*) method.executeWithObjectReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getAttributeToSet(i);
}

DraftSchematicAttribute* DraftSchematic::getAttributeToSet(const string& name) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);
		method.addAsciiParameter(name);

		return (DraftSchematicAttribute*) method.executeWithObjectReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getAttributeToSet(name);
}

void DraftSchematic::addAttributeToSet(const string& attribute, float minVal, float maxVal, const string& attributeExpProp, const int precision) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);
		method.addAsciiParameter(attribute);
		method.addFloatParameter(minVal);
		method.addFloatParameter(maxVal);
		method.addAsciiParameter(attributeExpProp);
		method.addSignedIntParameter(precision);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->addAttributeToSet(attribute, minVal, maxVal, attributeExpProp, precision);
}

int DraftSchematic::getExpPropGroupListSize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);

		return method.executeWithSignedIntReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getExpPropGroupListSize();
}

DraftSchematicExpPropGroup* DraftSchematic::getExpPropGroup(int index) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);
		method.addSignedIntParameter(index);

		return (DraftSchematicExpPropGroup*) method.executeWithObjectReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getExpPropGroup(index);
}

unsigned int DraftSchematic::getSchematicID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getSchematicID();
}

unsigned int DraftSchematic::getSchematicCRC() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getSchematicCRC();
}

string& DraftSchematic::getName() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);

		method.executeWithAsciiReturn(_return_getName);
		return _return_getName;
	} else
		return ((DraftSchematicImplementation*) _impl)->getName();
}

string& DraftSchematic::getStringName() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 40);

		method.executeWithAsciiReturn(_return_getStringName);
		return _return_getStringName;
	} else
		return ((DraftSchematicImplementation*) _impl)->getStringName();
}

string& DraftSchematic::getGroupName() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 41);

		method.executeWithAsciiReturn(_return_getGroupName);
		return _return_getGroupName;
	} else
		return ((DraftSchematicImplementation*) _impl)->getGroupName();
}

unsigned int DraftSchematic::getComplexity() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 42);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getComplexity();
}

unsigned int DraftSchematic::getSchematicSize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 43);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getSchematicSize();
}

unsigned int DraftSchematic::getObjectID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 44);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getObjectID();
}

string& DraftSchematic::getTanoAttributes() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 45);

		method.executeWithAsciiReturn(_return_getTanoAttributes);
		return _return_getTanoAttributes;
	} else
		return ((DraftSchematicImplementation*) _impl)->getTanoAttributes();
}

int DraftSchematic::getCraftingToolTab() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 46);

		return method.executeWithSignedIntReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getCraftingToolTab();
}

SceneObject* DraftSchematic::getContainer() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 47);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getContainer();
}

string& DraftSchematic::getXpType() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 48);

		method.executeWithAsciiReturn(_return_getXpType);
		return _return_getXpType;
	} else
		return ((DraftSchematicImplementation*) _impl)->getXpType();
}

int DraftSchematic::getXp() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 49);

		return method.executeWithSignedIntReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getXp();
}

string& DraftSchematic::getExperimentingSkill() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 50);

		method.executeWithAsciiReturn(_return_getExperimentingSkill);
		return _return_getExperimentingSkill;
	} else
		return ((DraftSchematicImplementation*) _impl)->getExperimentingSkill();
}

string& DraftSchematic::getAssemblySkill() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 51);

		method.executeWithAsciiReturn(_return_getAssemblySkill);
		return _return_getAssemblySkill;
	} else
		return ((DraftSchematicImplementation*) _impl)->getAssemblySkill();
}

int DraftSchematic::getExpPoints() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 52);

		return method.executeWithSignedIntReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getExpPoints();
}

int DraftSchematic::getExpCounter() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 53);

		return method.executeWithSignedIntReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getExpCounter();
}

float DraftSchematic::getExpFailure() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 54);

		return method.executeWithFloatReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getExpFailure();
}

DraftSchematicValues* DraftSchematic::getCraftingValues() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 55);

		return (DraftSchematicValues*) method.executeWithObjectReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->getCraftingValues();
}

bool DraftSchematic::isFinished() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 56);

		return method.executeWithBooleanReturn();
	} else
		return ((DraftSchematicImplementation*) _impl)->isFinished();
}

void DraftSchematic::toString() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 57);

		method.executeWithVoidReturn();
	} else
		((DraftSchematicImplementation*) _impl)->toString();
}

/*
 *	DraftSchematicAdapter
 */

DraftSchematicAdapter::DraftSchematicAdapter(DraftSchematicImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* DraftSchematicAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertLong(dsClone((DraftSchematic*) inv->getObjectParameter())->_getObjectID());
		break;
	case 7:
		destroy((Player*) inv->getObjectParameter());
		break;
	case 8:
		sendTo((Player*) inv->getObjectParameter());
		break;
	case 9:
		addExperimentalProperty(inv->getUnsignedIntParameter(), inv->getAsciiParameter(_param1_addExperimentalProperty__int_string_int_), inv->getUnsignedIntParameter());
		break;
	case 10:
		sendExperimentalPropertiesToPlayer((Player*) inv->getObjectParameter());
		break;
	case 11:
		increaseComplexity();
		break;
	case 12:
		increaseExpCounter();
		break;
	case 13:
		sendIngredientsToPlayer((Player*) inv->getObjectParameter());
		break;
	case 14:
		helperSendIngredientsToPlayer((ObjectControllerMessage*) inv->getObjectParameter());
		break;
	case 15:
		addIngredient(inv->getAsciiParameter(_param0_addIngredient__string_string_bool_string_int_int_), inv->getAsciiParameter(_param1_addIngredient__string_string_bool_string_int_int_), inv->getBooleanParameter(), inv->getAsciiParameter(_param3_addIngredient__string_string_bool_string_int_int_), inv->getUnsignedIntParameter(), inv->getUnsignedIntParameter());
		break;
	case 16:
		resp->insertLong(getIngredient(inv->getSignedIntParameter())->_getObjectID());
		break;
	case 17:
		resp->insertSignedInt(getIngredientListSize());
		break;
	case 18:
		resp->insertSignedInt(getRequiredIngredientCount());
		break;
	case 19:
		setPersistent(inv->getBooleanParameter());
		break;
	case 20:
		setObjectID(inv->getUnsignedLongParameter());
		break;
	case 21:
		setTanoAttributes(inv->getAsciiParameter(_param0_setTanoAttributes__string_));
		break;
	case 22:
		setContainer((SceneObject*) inv->getObjectParameter());
		break;
	case 23:
		setXpType(inv->getAsciiParameter(_param0_setXpType__string_));
		break;
	case 24:
		setXp(inv->getSignedIntParameter());
		break;
	case 25:
		setExpCounter();
		break;
	case 26:
		setExpPoints(inv->getSignedIntParameter());
		break;
	case 27:
		setExpFailure(inv->getFloatParameter());
		break;
	case 28:
		setExperimentingSkill(inv->getAsciiParameter(_param0_setExperimentingSkill__string_));
		break;
	case 29:
		setAssemblySkill(inv->getAsciiParameter(_param0_setAssemblySkill__string_));
		break;
	case 30:
		setFinished();
		break;
	case 31:
		resp->insertSignedInt(getAttributesToSetListSize());
		break;
	case 32:
		resp->insertLong(getAttributeToSet(inv->getSignedIntParameter())->_getObjectID());
		break;
	case 33:
		resp->insertLong(getAttributeToSet(inv->getAsciiParameter(_param0_getAttributeToSet__string_))->_getObjectID());
		break;
	case 34:
		addAttributeToSet(inv->getAsciiParameter(_param0_addAttributeToSet__string_float_float_string_int_), inv->getFloatParameter(), inv->getFloatParameter(), inv->getAsciiParameter(_param3_addAttributeToSet__string_float_float_string_int_), inv->getSignedIntParameter());
		break;
	case 35:
		resp->insertSignedInt(getExpPropGroupListSize());
		break;
	case 36:
		resp->insertLong(getExpPropGroup(inv->getSignedIntParameter())->_getObjectID());
		break;
	case 37:
		resp->insertInt(getSchematicID());
		break;
	case 38:
		resp->insertInt(getSchematicCRC());
		break;
	case 39:
		resp->insertAscii(getName());
		break;
	case 40:
		resp->insertAscii(getStringName());
		break;
	case 41:
		resp->insertAscii(getGroupName());
		break;
	case 42:
		resp->insertInt(getComplexity());
		break;
	case 43:
		resp->insertInt(getSchematicSize());
		break;
	case 44:
		resp->insertInt(getObjectID());
		break;
	case 45:
		resp->insertAscii(getTanoAttributes());
		break;
	case 46:
		resp->insertSignedInt(getCraftingToolTab());
		break;
	case 47:
		resp->insertLong(getContainer()->_getObjectID());
		break;
	case 48:
		resp->insertAscii(getXpType());
		break;
	case 49:
		resp->insertSignedInt(getXp());
		break;
	case 50:
		resp->insertAscii(getExperimentingSkill());
		break;
	case 51:
		resp->insertAscii(getAssemblySkill());
		break;
	case 52:
		resp->insertSignedInt(getExpPoints());
		break;
	case 53:
		resp->insertSignedInt(getExpCounter());
		break;
	case 54:
		resp->insertFloat(getExpFailure());
		break;
	case 55:
		resp->insertLong(getCraftingValues()->_getObjectID());
		break;
	case 56:
		resp->insertBoolean(isFinished());
		break;
	case 57:
		toString();
		break;
	default:
		return NULL;
	}

	return resp;
}

DraftSchematic* DraftSchematicAdapter::dsClone(DraftSchematic* draftSchematic) {
	return ((DraftSchematicImplementation*) impl)->dsClone(draftSchematic);
}

void DraftSchematicAdapter::destroy(Player* player) {
	return ((DraftSchematicImplementation*) impl)->destroy(player);
}

void DraftSchematicAdapter::sendTo(Player* player) {
	return ((DraftSchematicImplementation*) impl)->sendTo(player);
}

void DraftSchematicAdapter::addExperimentalProperty(unsigned int groupNumber, const string& experimentalProperty, unsigned int weight) {
	return ((DraftSchematicImplementation*) impl)->addExperimentalProperty(groupNumber, experimentalProperty, weight);
}

void DraftSchematicAdapter::sendExperimentalPropertiesToPlayer(Player* player) {
	return ((DraftSchematicImplementation*) impl)->sendExperimentalPropertiesToPlayer(player);
}

void DraftSchematicAdapter::increaseComplexity() {
	return ((DraftSchematicImplementation*) impl)->increaseComplexity();
}

void DraftSchematicAdapter::increaseExpCounter() {
	return ((DraftSchematicImplementation*) impl)->increaseExpCounter();
}

void DraftSchematicAdapter::sendIngredientsToPlayer(Player* player) {
	return ((DraftSchematicImplementation*) impl)->sendIngredientsToPlayer(player);
}

void DraftSchematicAdapter::helperSendIngredientsToPlayer(ObjectControllerMessage* objMsg) {
	return ((DraftSchematicImplementation*) impl)->helperSendIngredientsToPlayer(objMsg);
}

void DraftSchematicAdapter::addIngredient(const string& ingredientTemplateName, const string& ingredientTitleName, bool optional, const string& resourceType, unsigned int resourceQuantity, unsigned int combineType) {
	return ((DraftSchematicImplementation*) impl)->addIngredient(ingredientTemplateName, ingredientTitleName, optional, resourceType, resourceQuantity, combineType);
}

DraftSchematicIngredient* DraftSchematicAdapter::getIngredient(int index) {
	return ((DraftSchematicImplementation*) impl)->getIngredient(index);
}

int DraftSchematicAdapter::getIngredientListSize() {
	return ((DraftSchematicImplementation*) impl)->getIngredientListSize();
}

int DraftSchematicAdapter::getRequiredIngredientCount() {
	return ((DraftSchematicImplementation*) impl)->getRequiredIngredientCount();
}

void DraftSchematicAdapter::setPersistent(bool status) {
	return ((DraftSchematicImplementation*) impl)->setPersistent(status);
}

void DraftSchematicAdapter::setObjectID(unsigned long long objID) {
	return ((DraftSchematicImplementation*) impl)->setObjectID(objID);
}

void DraftSchematicAdapter::setTanoAttributes(string& attributes) {
	return ((DraftSchematicImplementation*) impl)->setTanoAttributes(attributes);
}

void DraftSchematicAdapter::setContainer(SceneObject* container) {
	return ((DraftSchematicImplementation*) impl)->setContainer(container);
}

void DraftSchematicAdapter::setXpType(string& type) {
	return ((DraftSchematicImplementation*) impl)->setXpType(type);
}

void DraftSchematicAdapter::setXp(int x) {
	return ((DraftSchematicImplementation*) impl)->setXp(x);
}

void DraftSchematicAdapter::setExpCounter() {
	return ((DraftSchematicImplementation*) impl)->setExpCounter();
}

void DraftSchematicAdapter::setExpPoints(int points) {
	return ((DraftSchematicImplementation*) impl)->setExpPoints(points);
}

void DraftSchematicAdapter::setExpFailure(float rate) {
	return ((DraftSchematicImplementation*) impl)->setExpFailure(rate);
}

void DraftSchematicAdapter::setExperimentingSkill(const string& exp) {
	return ((DraftSchematicImplementation*) impl)->setExperimentingSkill(exp);
}

void DraftSchematicAdapter::setAssemblySkill(const string& ass) {
	return ((DraftSchematicImplementation*) impl)->setAssemblySkill(ass);
}

void DraftSchematicAdapter::setFinished() {
	return ((DraftSchematicImplementation*) impl)->setFinished();
}

int DraftSchematicAdapter::getAttributesToSetListSize() {
	return ((DraftSchematicImplementation*) impl)->getAttributesToSetListSize();
}

DraftSchematicAttribute* DraftSchematicAdapter::getAttributeToSet(const int i) {
	return ((DraftSchematicImplementation*) impl)->getAttributeToSet(i);
}

DraftSchematicAttribute* DraftSchematicAdapter::getAttributeToSet(const string& name) {
	return ((DraftSchematicImplementation*) impl)->getAttributeToSet(name);
}

void DraftSchematicAdapter::addAttributeToSet(const string& attribute, float minVal, float maxVal, const string& attributeExpProp, const int precision) {
	return ((DraftSchematicImplementation*) impl)->addAttributeToSet(attribute, minVal, maxVal, attributeExpProp, precision);
}

int DraftSchematicAdapter::getExpPropGroupListSize() {
	return ((DraftSchematicImplementation*) impl)->getExpPropGroupListSize();
}

DraftSchematicExpPropGroup* DraftSchematicAdapter::getExpPropGroup(int index) {
	return ((DraftSchematicImplementation*) impl)->getExpPropGroup(index);
}

unsigned int DraftSchematicAdapter::getSchematicID() {
	return ((DraftSchematicImplementation*) impl)->getSchematicID();
}

unsigned int DraftSchematicAdapter::getSchematicCRC() {
	return ((DraftSchematicImplementation*) impl)->getSchematicCRC();
}

string& DraftSchematicAdapter::getName() {
	return ((DraftSchematicImplementation*) impl)->getName();
}

string& DraftSchematicAdapter::getStringName() {
	return ((DraftSchematicImplementation*) impl)->getStringName();
}

string& DraftSchematicAdapter::getGroupName() {
	return ((DraftSchematicImplementation*) impl)->getGroupName();
}

unsigned int DraftSchematicAdapter::getComplexity() {
	return ((DraftSchematicImplementation*) impl)->getComplexity();
}

unsigned int DraftSchematicAdapter::getSchematicSize() {
	return ((DraftSchematicImplementation*) impl)->getSchematicSize();
}

unsigned int DraftSchematicAdapter::getObjectID() {
	return ((DraftSchematicImplementation*) impl)->getObjectID();
}

string& DraftSchematicAdapter::getTanoAttributes() {
	return ((DraftSchematicImplementation*) impl)->getTanoAttributes();
}

int DraftSchematicAdapter::getCraftingToolTab() {
	return ((DraftSchematicImplementation*) impl)->getCraftingToolTab();
}

SceneObject* DraftSchematicAdapter::getContainer() {
	return ((DraftSchematicImplementation*) impl)->getContainer();
}

string& DraftSchematicAdapter::getXpType() {
	return ((DraftSchematicImplementation*) impl)->getXpType();
}

int DraftSchematicAdapter::getXp() {
	return ((DraftSchematicImplementation*) impl)->getXp();
}

string& DraftSchematicAdapter::getExperimentingSkill() {
	return ((DraftSchematicImplementation*) impl)->getExperimentingSkill();
}

string& DraftSchematicAdapter::getAssemblySkill() {
	return ((DraftSchematicImplementation*) impl)->getAssemblySkill();
}

int DraftSchematicAdapter::getExpPoints() {
	return ((DraftSchematicImplementation*) impl)->getExpPoints();
}

int DraftSchematicAdapter::getExpCounter() {
	return ((DraftSchematicImplementation*) impl)->getExpCounter();
}

float DraftSchematicAdapter::getExpFailure() {
	return ((DraftSchematicImplementation*) impl)->getExpFailure();
}

DraftSchematicValues* DraftSchematicAdapter::getCraftingValues() {
	return ((DraftSchematicImplementation*) impl)->getCraftingValues();
}

bool DraftSchematicAdapter::isFinished() {
	return ((DraftSchematicImplementation*) impl)->isFinished();
}

void DraftSchematicAdapter::toString() {
	return ((DraftSchematicImplementation*) impl)->toString();
}

/*
 *	DraftSchematicHelper
 */

DraftSchematicHelper* DraftSchematicHelper::staticInitializer = DraftSchematicHelper::instance();

DraftSchematicHelper::DraftSchematicHelper() {
	className = "DraftSchematic";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void DraftSchematicHelper::finalizeHelper() {
	DraftSchematicHelper::finalize();
}

DistributedObject* DraftSchematicHelper::instantiateObject() {
	return new DraftSchematic(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* DraftSchematicHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new DraftSchematicAdapter((DraftSchematicImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	DraftSchematicServant
 */

DraftSchematicServant::DraftSchematicServant() : ManagedObjectImplementation() {
	_classHelper = DraftSchematicHelper::instance();
}

DraftSchematicServant::~DraftSchematicServant() {
}

void DraftSchematicServant::_setStub(DistributedObjectStub* stub) {
	_this = (DraftSchematic*) stub;
	ManagedObjectServant::_setStub(stub);
}

DistributedObjectStub* DraftSchematicServant::_getStub() {
	return _this;
}

