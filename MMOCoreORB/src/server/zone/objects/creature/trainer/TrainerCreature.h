/*
 *	server/zone/objects/creature/trainer/TrainerCreature.h generated by engine3 IDL compiler 0.55
 */

#ifndef TRAINERCREATURE_H_
#define TRAINERCREATURE_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "../../player/professions/Profession.h"

class SceneObject;

class Player;

class Creature;

#include "../Creature.h"

class TrainerCreature : public Creature {
public:
	TrainerCreature(unsigned long long oid, Profession* prof);

	void sendConversationStartTo(SceneObject* obj);

	void sendSkillBoxes(Player* player);

	void selectConversationOption(int option, SceneObject* obj);

protected:
	TrainerCreature(DummyConstructorParameter* param);

	virtual ~TrainerCreature();

	friend class TrainerCreatureHelper;
};

class TrainerCreatureImplementation;

class TrainerCreatureAdapter : public CreatureAdapter {
public:
	TrainerCreatureAdapter(TrainerCreatureImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void sendConversationStartTo(SceneObject* obj);

	void sendSkillBoxes(Player* player);

	void selectConversationOption(int option, SceneObject* obj);

};

class TrainerCreatureHelper : public DistributedObjectClassHelper, public Singleton<TrainerCreatureHelper> {
	static TrainerCreatureHelper* staticInitializer;

public:
	TrainerCreatureHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<TrainerCreatureHelper>;
};

#include "../CreatureImplementation.h"

class TrainerCreatureServant : public CreatureImplementation {
public:
	TrainerCreature* _this;

public:
	TrainerCreatureServant(unsigned long long oid);
	virtual ~TrainerCreatureServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*TRAINERCREATURE_H_*/
