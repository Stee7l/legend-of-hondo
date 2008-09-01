/*
 *	server/zone/objects/tangible/wearables/Armor.cpp generated by engine3 IDL compiler 0.55
 */

#include "Armor.h"

#include "ArmorImplementation.h"

#include "../../player/Player.h"

#include "../../creature/CreatureObject.h"

#include "../../scene/SceneObject.h"

#include "Wearable.h"

/*
 *	ArmorStub
 */

Armor::Armor(unsigned long long oid, unsigned int tempCRC, const unicode& n, const string& tempn, bool eqp) : Wearable(DummyConstructorParameter::instance()) {
	_impl = new ArmorImplementation(oid, tempCRC, n, tempn, eqp);
	_impl->_setStub(this);
}

Armor::Armor(CreatureObject* creature, unsigned int tempCRC, const unicode& n, const string& tempn, bool eqp) : Wearable(DummyConstructorParameter::instance()) {
	_impl = new ArmorImplementation(creature, tempCRC, n, tempn, eqp);
	_impl->_setStub(this);
}

Armor::Armor(DummyConstructorParameter* param) : Wearable(param) {
}

Armor::~Armor() {
}

void Armor::sendTo(Player* player, bool doClose) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(player);
		method.addBooleanParameter(doClose);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->sendTo(player, doClose);
}

void Armor::decayArmor(int decayRate) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addSignedIntParameter(decayRate);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->decayArmor(decayRate);
}

void Armor::generateAttributes(SceneObject* obj) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->generateAttributes(obj);
}

void Armor::setArmorStats(int modifier) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addSignedIntParameter(modifier);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->setArmorStats(modifier);
}

void Armor::sliceArmor(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->sliceArmor(player);
}

void Armor::repairArmor(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->repairArmor(player);
}

int Armor::addSkillMod(int skillModType, int skillModValue) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addSignedIntParameter(skillModType);
		method.addSignedIntParameter(skillModValue);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorImplementation*) _impl)->addSkillMod(skillModType, skillModValue);
}

int Armor::getRating() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorImplementation*) _impl)->getRating();
}

int Armor::getCondition() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorImplementation*) _impl)->getCondition();
}

int Armor::getMaxCondition() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorImplementation*) _impl)->getMaxCondition();
}

int Armor::getHealthEncumbrance() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorImplementation*) _impl)->getHealthEncumbrance();
}

int Armor::getActionEncumbrance() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorImplementation*) _impl)->getActionEncumbrance();
}

int Armor::getMindEncumbrance() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorImplementation*) _impl)->getMindEncumbrance();
}

float Armor::getKinetic() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		return method.executeWithFloatReturn();
	} else
		return ((ArmorImplementation*) _impl)->getKinetic();
}

bool Armor::isKineticSpecial() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		return method.executeWithBooleanReturn();
	} else
		return ((ArmorImplementation*) _impl)->isKineticSpecial();
}

float Armor::getEnergy() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		return method.executeWithFloatReturn();
	} else
		return ((ArmorImplementation*) _impl)->getEnergy();
}

bool Armor::isEnergySpecial() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		return method.executeWithBooleanReturn();
	} else
		return ((ArmorImplementation*) _impl)->isEnergySpecial();
}

float Armor::getElectricity() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		return method.executeWithFloatReturn();
	} else
		return ((ArmorImplementation*) _impl)->getElectricity();
}

bool Armor::isElectricitySpecial() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		return method.executeWithBooleanReturn();
	} else
		return ((ArmorImplementation*) _impl)->isElectricitySpecial();
}

float Armor::getStun() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);

		return method.executeWithFloatReturn();
	} else
		return ((ArmorImplementation*) _impl)->getStun();
}

bool Armor::isStunSpecial() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);

		return method.executeWithBooleanReturn();
	} else
		return ((ArmorImplementation*) _impl)->isStunSpecial();
}

float Armor::getBlast() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);

		return method.executeWithFloatReturn();
	} else
		return ((ArmorImplementation*) _impl)->getBlast();
}

bool Armor::isBlastSpecial() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);

		return method.executeWithBooleanReturn();
	} else
		return ((ArmorImplementation*) _impl)->isBlastSpecial();
}

float Armor::getHeat() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);

		return method.executeWithFloatReturn();
	} else
		return ((ArmorImplementation*) _impl)->getHeat();
}

bool Armor::isHeatSpecial() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);

		return method.executeWithBooleanReturn();
	} else
		return ((ArmorImplementation*) _impl)->isHeatSpecial();
}

float Armor::getCold() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		return method.executeWithFloatReturn();
	} else
		return ((ArmorImplementation*) _impl)->getCold();
}

bool Armor::isColdSpecial() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		return method.executeWithBooleanReturn();
	} else
		return ((ArmorImplementation*) _impl)->isColdSpecial();
}

float Armor::getAcid() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);

		return method.executeWithFloatReturn();
	} else
		return ((ArmorImplementation*) _impl)->getAcid();
}

bool Armor::isAcidSpecial() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);

		return method.executeWithBooleanReturn();
	} else
		return ((ArmorImplementation*) _impl)->isAcidSpecial();
}

float Armor::getLightSaber() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);

		return method.executeWithFloatReturn();
	} else
		return ((ArmorImplementation*) _impl)->getLightSaber();
}

bool Armor::isLightSaberSpecial() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);

		return method.executeWithBooleanReturn();
	} else
		return ((ArmorImplementation*) _impl)->isLightSaberSpecial();
}

int Armor::getType() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorImplementation*) _impl)->getType();
}

bool Armor::isSliced() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);

		return method.executeWithBooleanReturn();
	} else
		return ((ArmorImplementation*) _impl)->isSliced();
}

int Armor::getSocketType(int index) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);
		method.addSignedIntParameter(index);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorImplementation*) _impl)->getSocketType(index);
}

int Armor::getSocketValue(int index) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 40);
		method.addSignedIntParameter(index);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorImplementation*) _impl)->getSocketValue(index);
}

int Armor::getSkillMod0Type() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 41);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorImplementation*) _impl)->getSkillMod0Type();
}

int Armor::getSkillMod1Type() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 42);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorImplementation*) _impl)->getSkillMod1Type();
}

int Armor::getSkillMod2Type() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 43);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorImplementation*) _impl)->getSkillMod2Type();
}

int Armor::getSkillMod0Value() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 44);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorImplementation*) _impl)->getSkillMod0Value();
}

int Armor::getSkillMod1Value() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 45);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorImplementation*) _impl)->getSkillMod1Value();
}

int Armor::getSkillMod2Value() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 46);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorImplementation*) _impl)->getSkillMod2Value();
}

int Armor::getSockets() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 47);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorImplementation*) _impl)->getSockets();
}

int Armor::getSocket0Type() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 48);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorImplementation*) _impl)->getSocket0Type();
}

int Armor::getSocket1Type() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 49);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorImplementation*) _impl)->getSocket1Type();
}

int Armor::getSocket2Type() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 50);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorImplementation*) _impl)->getSocket2Type();
}

int Armor::getSocket3Type() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 51);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorImplementation*) _impl)->getSocket3Type();
}

int Armor::getSocket0Value() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 52);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorImplementation*) _impl)->getSocket0Value();
}

int Armor::getSocket1Value() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 53);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorImplementation*) _impl)->getSocket1Value();
}

int Armor::getSocket2Value() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 54);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorImplementation*) _impl)->getSocket2Value();
}

int Armor::getSocket3Value() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 55);

		return method.executeWithSignedIntReturn();
	} else
		return ((ArmorImplementation*) _impl)->getSocket3Value();
}

void Armor::setType(int armorSlot) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 56);
		method.addSignedIntParameter(armorSlot);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->setType(armorSlot);
}

void Armor::setHealthEncumbrance(int healthEnc) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 57);
		method.addSignedIntParameter(healthEnc);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->setHealthEncumbrance(healthEnc);
}

void Armor::setActionEncumbrance(int actionEnc) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 58);
		method.addSignedIntParameter(actionEnc);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->setActionEncumbrance(actionEnc);
}

void Armor::setMindEncumbrance(int mindEnc) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 59);
		method.addSignedIntParameter(mindEnc);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->setMindEncumbrance(mindEnc);
}

void Armor::setAcid(float resist) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 60);
		method.addFloatParameter(resist);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->setAcid(resist);
}

void Armor::setBlast(float resist) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 61);
		method.addFloatParameter(resist);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->setBlast(resist);
}

void Armor::setCold(float resist) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 62);
		method.addFloatParameter(resist);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->setCold(resist);
}

void Armor::setElectricity(float resist) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 63);
		method.addFloatParameter(resist);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->setElectricity(resist);
}

void Armor::setEnergy(float resist) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 64);
		method.addFloatParameter(resist);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->setEnergy(resist);
}

void Armor::setHeat(float resist) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 65);
		method.addFloatParameter(resist);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->setHeat(resist);
}

void Armor::setKinetic(float resist) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 66);
		method.addFloatParameter(resist);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->setKinetic(resist);
}

void Armor::setLightSaber(float resist) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 67);
		method.addFloatParameter(resist);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->setLightSaber(resist);
}

void Armor::setSocketType(int index, int type) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 68);
		method.addSignedIntParameter(index);
		method.addSignedIntParameter(type);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->setSocketType(index, type);
}

void Armor::setSocketValue(int index, int type) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 69);
		method.addSignedIntParameter(index);
		method.addSignedIntParameter(type);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->setSocketValue(index, type);
}

void Armor::setSockets(int socket) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 70);
		method.addSignedIntParameter(socket);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->setSockets(socket);
}

void Armor::setSocket0Type(int type) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 71);
		method.addSignedIntParameter(type);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->setSocket0Type(type);
}

void Armor::setSocket1Type(int type) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 72);
		method.addSignedIntParameter(type);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->setSocket1Type(type);
}

void Armor::setSocket2Type(int type) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 73);
		method.addSignedIntParameter(type);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->setSocket2Type(type);
}

void Armor::setSocket3Type(int type) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 74);
		method.addSignedIntParameter(type);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->setSocket3Type(type);
}

void Armor::setSocket0Value(int value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 75);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->setSocket0Value(value);
}

void Armor::setSocket1Value(int value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 76);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->setSocket1Value(value);
}

void Armor::setSocket2Value(int value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 77);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->setSocket2Value(value);
}

void Armor::setSocket3Value(int value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 78);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		((ArmorImplementation*) _impl)->setSocket3Value(value);
}

/*
 *	ArmorAdapter
 */

ArmorAdapter::ArmorAdapter(ArmorImplementation* obj) : WearableAdapter(obj) {
}

Packet* ArmorAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		sendTo((Player*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 7:
		decayArmor(inv->getSignedIntParameter());
		break;
	case 8:
		generateAttributes((SceneObject*) inv->getObjectParameter());
		break;
	case 9:
		setArmorStats(inv->getSignedIntParameter());
		break;
	case 10:
		sliceArmor((Player*) inv->getObjectParameter());
		break;
	case 11:
		repairArmor((Player*) inv->getObjectParameter());
		break;
	case 12:
		resp->insertSignedInt(addSkillMod(inv->getSignedIntParameter(), inv->getSignedIntParameter()));
		break;
	case 13:
		resp->insertSignedInt(getRating());
		break;
	case 14:
		resp->insertSignedInt(getCondition());
		break;
	case 15:
		resp->insertSignedInt(getMaxCondition());
		break;
	case 16:
		resp->insertSignedInt(getHealthEncumbrance());
		break;
	case 17:
		resp->insertSignedInt(getActionEncumbrance());
		break;
	case 18:
		resp->insertSignedInt(getMindEncumbrance());
		break;
	case 19:
		resp->insertFloat(getKinetic());
		break;
	case 20:
		resp->insertBoolean(isKineticSpecial());
		break;
	case 21:
		resp->insertFloat(getEnergy());
		break;
	case 22:
		resp->insertBoolean(isEnergySpecial());
		break;
	case 23:
		resp->insertFloat(getElectricity());
		break;
	case 24:
		resp->insertBoolean(isElectricitySpecial());
		break;
	case 25:
		resp->insertFloat(getStun());
		break;
	case 26:
		resp->insertBoolean(isStunSpecial());
		break;
	case 27:
		resp->insertFloat(getBlast());
		break;
	case 28:
		resp->insertBoolean(isBlastSpecial());
		break;
	case 29:
		resp->insertFloat(getHeat());
		break;
	case 30:
		resp->insertBoolean(isHeatSpecial());
		break;
	case 31:
		resp->insertFloat(getCold());
		break;
	case 32:
		resp->insertBoolean(isColdSpecial());
		break;
	case 33:
		resp->insertFloat(getAcid());
		break;
	case 34:
		resp->insertBoolean(isAcidSpecial());
		break;
	case 35:
		resp->insertFloat(getLightSaber());
		break;
	case 36:
		resp->insertBoolean(isLightSaberSpecial());
		break;
	case 37:
		resp->insertSignedInt(getType());
		break;
	case 38:
		resp->insertBoolean(isSliced());
		break;
	case 39:
		resp->insertSignedInt(getSocketType(inv->getSignedIntParameter()));
		break;
	case 40:
		resp->insertSignedInt(getSocketValue(inv->getSignedIntParameter()));
		break;
	case 41:
		resp->insertSignedInt(getSkillMod0Type());
		break;
	case 42:
		resp->insertSignedInt(getSkillMod1Type());
		break;
	case 43:
		resp->insertSignedInt(getSkillMod2Type());
		break;
	case 44:
		resp->insertSignedInt(getSkillMod0Value());
		break;
	case 45:
		resp->insertSignedInt(getSkillMod1Value());
		break;
	case 46:
		resp->insertSignedInt(getSkillMod2Value());
		break;
	case 47:
		resp->insertSignedInt(getSockets());
		break;
	case 48:
		resp->insertSignedInt(getSocket0Type());
		break;
	case 49:
		resp->insertSignedInt(getSocket1Type());
		break;
	case 50:
		resp->insertSignedInt(getSocket2Type());
		break;
	case 51:
		resp->insertSignedInt(getSocket3Type());
		break;
	case 52:
		resp->insertSignedInt(getSocket0Value());
		break;
	case 53:
		resp->insertSignedInt(getSocket1Value());
		break;
	case 54:
		resp->insertSignedInt(getSocket2Value());
		break;
	case 55:
		resp->insertSignedInt(getSocket3Value());
		break;
	case 56:
		setType(inv->getSignedIntParameter());
		break;
	case 57:
		setHealthEncumbrance(inv->getSignedIntParameter());
		break;
	case 58:
		setActionEncumbrance(inv->getSignedIntParameter());
		break;
	case 59:
		setMindEncumbrance(inv->getSignedIntParameter());
		break;
	case 60:
		setAcid(inv->getFloatParameter());
		break;
	case 61:
		setBlast(inv->getFloatParameter());
		break;
	case 62:
		setCold(inv->getFloatParameter());
		break;
	case 63:
		setElectricity(inv->getFloatParameter());
		break;
	case 64:
		setEnergy(inv->getFloatParameter());
		break;
	case 65:
		setHeat(inv->getFloatParameter());
		break;
	case 66:
		setKinetic(inv->getFloatParameter());
		break;
	case 67:
		setLightSaber(inv->getFloatParameter());
		break;
	case 68:
		setSocketType(inv->getSignedIntParameter(), inv->getSignedIntParameter());
		break;
	case 69:
		setSocketValue(inv->getSignedIntParameter(), inv->getSignedIntParameter());
		break;
	case 70:
		setSockets(inv->getSignedIntParameter());
		break;
	case 71:
		setSocket0Type(inv->getSignedIntParameter());
		break;
	case 72:
		setSocket1Type(inv->getSignedIntParameter());
		break;
	case 73:
		setSocket2Type(inv->getSignedIntParameter());
		break;
	case 74:
		setSocket3Type(inv->getSignedIntParameter());
		break;
	case 75:
		setSocket0Value(inv->getSignedIntParameter());
		break;
	case 76:
		setSocket1Value(inv->getSignedIntParameter());
		break;
	case 77:
		setSocket2Value(inv->getSignedIntParameter());
		break;
	case 78:
		setSocket3Value(inv->getSignedIntParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ArmorAdapter::sendTo(Player* player, bool doClose) {
	return ((ArmorImplementation*) impl)->sendTo(player, doClose);
}

void ArmorAdapter::decayArmor(int decayRate) {
	return ((ArmorImplementation*) impl)->decayArmor(decayRate);
}

void ArmorAdapter::generateAttributes(SceneObject* obj) {
	return ((ArmorImplementation*) impl)->generateAttributes(obj);
}

void ArmorAdapter::setArmorStats(int modifier) {
	return ((ArmorImplementation*) impl)->setArmorStats(modifier);
}

void ArmorAdapter::sliceArmor(Player* player) {
	return ((ArmorImplementation*) impl)->sliceArmor(player);
}

void ArmorAdapter::repairArmor(Player* player) {
	return ((ArmorImplementation*) impl)->repairArmor(player);
}

int ArmorAdapter::addSkillMod(int skillModType, int skillModValue) {
	return ((ArmorImplementation*) impl)->addSkillMod(skillModType, skillModValue);
}

int ArmorAdapter::getRating() {
	return ((ArmorImplementation*) impl)->getRating();
}

int ArmorAdapter::getCondition() {
	return ((ArmorImplementation*) impl)->getCondition();
}

int ArmorAdapter::getMaxCondition() {
	return ((ArmorImplementation*) impl)->getMaxCondition();
}

int ArmorAdapter::getHealthEncumbrance() {
	return ((ArmorImplementation*) impl)->getHealthEncumbrance();
}

int ArmorAdapter::getActionEncumbrance() {
	return ((ArmorImplementation*) impl)->getActionEncumbrance();
}

int ArmorAdapter::getMindEncumbrance() {
	return ((ArmorImplementation*) impl)->getMindEncumbrance();
}

float ArmorAdapter::getKinetic() {
	return ((ArmorImplementation*) impl)->getKinetic();
}

bool ArmorAdapter::isKineticSpecial() {
	return ((ArmorImplementation*) impl)->isKineticSpecial();
}

float ArmorAdapter::getEnergy() {
	return ((ArmorImplementation*) impl)->getEnergy();
}

bool ArmorAdapter::isEnergySpecial() {
	return ((ArmorImplementation*) impl)->isEnergySpecial();
}

float ArmorAdapter::getElectricity() {
	return ((ArmorImplementation*) impl)->getElectricity();
}

bool ArmorAdapter::isElectricitySpecial() {
	return ((ArmorImplementation*) impl)->isElectricitySpecial();
}

float ArmorAdapter::getStun() {
	return ((ArmorImplementation*) impl)->getStun();
}

bool ArmorAdapter::isStunSpecial() {
	return ((ArmorImplementation*) impl)->isStunSpecial();
}

float ArmorAdapter::getBlast() {
	return ((ArmorImplementation*) impl)->getBlast();
}

bool ArmorAdapter::isBlastSpecial() {
	return ((ArmorImplementation*) impl)->isBlastSpecial();
}

float ArmorAdapter::getHeat() {
	return ((ArmorImplementation*) impl)->getHeat();
}

bool ArmorAdapter::isHeatSpecial() {
	return ((ArmorImplementation*) impl)->isHeatSpecial();
}

float ArmorAdapter::getCold() {
	return ((ArmorImplementation*) impl)->getCold();
}

bool ArmorAdapter::isColdSpecial() {
	return ((ArmorImplementation*) impl)->isColdSpecial();
}

float ArmorAdapter::getAcid() {
	return ((ArmorImplementation*) impl)->getAcid();
}

bool ArmorAdapter::isAcidSpecial() {
	return ((ArmorImplementation*) impl)->isAcidSpecial();
}

float ArmorAdapter::getLightSaber() {
	return ((ArmorImplementation*) impl)->getLightSaber();
}

bool ArmorAdapter::isLightSaberSpecial() {
	return ((ArmorImplementation*) impl)->isLightSaberSpecial();
}

int ArmorAdapter::getType() {
	return ((ArmorImplementation*) impl)->getType();
}

bool ArmorAdapter::isSliced() {
	return ((ArmorImplementation*) impl)->isSliced();
}

int ArmorAdapter::getSocketType(int index) {
	return ((ArmorImplementation*) impl)->getSocketType(index);
}

int ArmorAdapter::getSocketValue(int index) {
	return ((ArmorImplementation*) impl)->getSocketValue(index);
}

int ArmorAdapter::getSkillMod0Type() {
	return ((ArmorImplementation*) impl)->getSkillMod0Type();
}

int ArmorAdapter::getSkillMod1Type() {
	return ((ArmorImplementation*) impl)->getSkillMod1Type();
}

int ArmorAdapter::getSkillMod2Type() {
	return ((ArmorImplementation*) impl)->getSkillMod2Type();
}

int ArmorAdapter::getSkillMod0Value() {
	return ((ArmorImplementation*) impl)->getSkillMod0Value();
}

int ArmorAdapter::getSkillMod1Value() {
	return ((ArmorImplementation*) impl)->getSkillMod1Value();
}

int ArmorAdapter::getSkillMod2Value() {
	return ((ArmorImplementation*) impl)->getSkillMod2Value();
}

int ArmorAdapter::getSockets() {
	return ((ArmorImplementation*) impl)->getSockets();
}

int ArmorAdapter::getSocket0Type() {
	return ((ArmorImplementation*) impl)->getSocket0Type();
}

int ArmorAdapter::getSocket1Type() {
	return ((ArmorImplementation*) impl)->getSocket1Type();
}

int ArmorAdapter::getSocket2Type() {
	return ((ArmorImplementation*) impl)->getSocket2Type();
}

int ArmorAdapter::getSocket3Type() {
	return ((ArmorImplementation*) impl)->getSocket3Type();
}

int ArmorAdapter::getSocket0Value() {
	return ((ArmorImplementation*) impl)->getSocket0Value();
}

int ArmorAdapter::getSocket1Value() {
	return ((ArmorImplementation*) impl)->getSocket1Value();
}

int ArmorAdapter::getSocket2Value() {
	return ((ArmorImplementation*) impl)->getSocket2Value();
}

int ArmorAdapter::getSocket3Value() {
	return ((ArmorImplementation*) impl)->getSocket3Value();
}

void ArmorAdapter::setType(int armorSlot) {
	return ((ArmorImplementation*) impl)->setType(armorSlot);
}

void ArmorAdapter::setHealthEncumbrance(int healthEnc) {
	return ((ArmorImplementation*) impl)->setHealthEncumbrance(healthEnc);
}

void ArmorAdapter::setActionEncumbrance(int actionEnc) {
	return ((ArmorImplementation*) impl)->setActionEncumbrance(actionEnc);
}

void ArmorAdapter::setMindEncumbrance(int mindEnc) {
	return ((ArmorImplementation*) impl)->setMindEncumbrance(mindEnc);
}

void ArmorAdapter::setAcid(float resist) {
	return ((ArmorImplementation*) impl)->setAcid(resist);
}

void ArmorAdapter::setBlast(float resist) {
	return ((ArmorImplementation*) impl)->setBlast(resist);
}

void ArmorAdapter::setCold(float resist) {
	return ((ArmorImplementation*) impl)->setCold(resist);
}

void ArmorAdapter::setElectricity(float resist) {
	return ((ArmorImplementation*) impl)->setElectricity(resist);
}

void ArmorAdapter::setEnergy(float resist) {
	return ((ArmorImplementation*) impl)->setEnergy(resist);
}

void ArmorAdapter::setHeat(float resist) {
	return ((ArmorImplementation*) impl)->setHeat(resist);
}

void ArmorAdapter::setKinetic(float resist) {
	return ((ArmorImplementation*) impl)->setKinetic(resist);
}

void ArmorAdapter::setLightSaber(float resist) {
	return ((ArmorImplementation*) impl)->setLightSaber(resist);
}

void ArmorAdapter::setSocketType(int index, int type) {
	return ((ArmorImplementation*) impl)->setSocketType(index, type);
}

void ArmorAdapter::setSocketValue(int index, int type) {
	return ((ArmorImplementation*) impl)->setSocketValue(index, type);
}

void ArmorAdapter::setSockets(int socket) {
	return ((ArmorImplementation*) impl)->setSockets(socket);
}

void ArmorAdapter::setSocket0Type(int type) {
	return ((ArmorImplementation*) impl)->setSocket0Type(type);
}

void ArmorAdapter::setSocket1Type(int type) {
	return ((ArmorImplementation*) impl)->setSocket1Type(type);
}

void ArmorAdapter::setSocket2Type(int type) {
	return ((ArmorImplementation*) impl)->setSocket2Type(type);
}

void ArmorAdapter::setSocket3Type(int type) {
	return ((ArmorImplementation*) impl)->setSocket3Type(type);
}

void ArmorAdapter::setSocket0Value(int value) {
	return ((ArmorImplementation*) impl)->setSocket0Value(value);
}

void ArmorAdapter::setSocket1Value(int value) {
	return ((ArmorImplementation*) impl)->setSocket1Value(value);
}

void ArmorAdapter::setSocket2Value(int value) {
	return ((ArmorImplementation*) impl)->setSocket2Value(value);
}

void ArmorAdapter::setSocket3Value(int value) {
	return ((ArmorImplementation*) impl)->setSocket3Value(value);
}

/*
 *	ArmorHelper
 */

ArmorHelper* ArmorHelper::staticInitializer = ArmorHelper::instance();

ArmorHelper::ArmorHelper() {
	className = "Armor";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ArmorHelper::finalizeHelper() {
	ArmorHelper::finalize();
}

DistributedObject* ArmorHelper::instantiateObject() {
	return new Armor(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ArmorHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ArmorAdapter((ArmorImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	ArmorServant
 */

ArmorServant::ArmorServant(unsigned long long oid, unsigned int tempCRC, const unicode& n, const string& tempn, bool eqp) : WearableImplementation(oid, tempCRC, n, tempn, eqp) {
	_classHelper = ArmorHelper::instance();
}

ArmorServant::ArmorServant(CreatureObject* creature, unsigned int tempCRC, const unicode& n, const string& tempn, bool eqp) : WearableImplementation(creature, tempCRC, n, tempn, eqp) {
	_classHelper = ArmorHelper::instance();
}

ArmorServant::~ArmorServant() {
}

void ArmorServant::_setStub(DistributedObjectStub* stub) {
	_this = (Armor*) stub;
	WearableServant::_setStub(stub);
}

DistributedObjectStub* ArmorServant::_getStub() {
	return _this;
}

