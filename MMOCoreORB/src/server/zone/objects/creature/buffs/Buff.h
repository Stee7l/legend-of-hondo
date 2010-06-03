/*
 *	server/zone/objects/creature/buffs/Buff.h generated by engine3 IDL compiler 0.60
 */

#ifndef BUFF_H_
#define BUFF_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace buffs {

class BuffDurationEvent;

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

#include "server/zone/ZoneProcessServerImplementation.h"

#include "server/zone/objects/creature/buffs/BuffType.h"

#include "server/zone/objects/scene/variables/ParameterizedStringId.h"

#include "engine/core/ManagedObject.h"

#include "system/util/VectorMap.h"

#include "system/lang/ref/Reference.h"

#include "system/lang/Time.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace buffs {

class Buff : public ManagedObject {
public:
	Buff(CreatureObject* creo, unsigned int buffcrc, float duration, int bufftype);

	void initializeTransientMembers();

	void init();

	void sendTo(PlayerCreature* player);

	void sendDestroyTo(PlayerCreature* player);

	void activate();

	void deactivate();

	void applyAttributeModifiers();

	void applySkillModifiers();

	void removeAttributeModifiers();

	void removeSkillModifiers();

	void clearBuffEvent();

	void setBuffEventNull();

	void scheduleBuffEvent();

	void parseAttributeModifierString(const String& modifierstring);

	void parseSkillModifierString(const String& modifierstring);

	String getAttributeModifierString();

	String getSkillModifierString();

	float getTimeLeft();

	void setAttributeModifier(byte attribute, int value);

	void setSkillModifier(const String& modname, int value);

	void setSpeedModifier(float speed);

	String getBuffName();

	int getBuffCRC();

	float getBuffDuration();

	int getBuffType();

	int getAttributeModifierValue(byte attribute);

	int getSkillModifierValue(const String& modname);

	bool isActive();

	bool isSpiceBuff();

	void setStartMessage(ParameterizedStringId& start);

	void setEndMessage(ParameterizedStringId& start);

protected:
	Buff(DummyConstructorParameter* param);

	virtual ~Buff();

	String _return_getAttributeModifierString;
	String _return_getBuffName;
	String _return_getSkillModifierString;

	friend class BuffHelper;
};

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace buffs {

class BuffImplementation : public ManagedObjectImplementation {
protected:
	ManagedWeakReference<CreatureObject* > creature;

	Reference<BuffDurationEvent*> buffEvent;

	VectorMap<byte, int> attributeModifiers;

	VectorMap<String, int> skillModifiers;

	String buffName;

	float buffDuration;

	unsigned int buffCRC;

	int buffType;

	float speedModifier;

	ParameterizedStringId startMessage;

	ParameterizedStringId endMessage;

	Time nextExecutionTime;

public:
	BuffImplementation(CreatureObject* creo, unsigned int buffcrc, float duration, int bufftype);

	BuffImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void init();

	virtual void sendTo(PlayerCreature* player);

	virtual void sendDestroyTo(PlayerCreature* player);

	virtual void activate();

	virtual void deactivate();

	virtual void applyAttributeModifiers();

	virtual void applySkillModifiers();

	virtual void removeAttributeModifiers();

	virtual void removeSkillModifiers();

	void clearBuffEvent();

	void setBuffEventNull();

	void scheduleBuffEvent();

	virtual void parseAttributeModifierString(const String& modifierstring);

	virtual void parseSkillModifierString(const String& modifierstring);

	virtual String getAttributeModifierString();

	virtual String getSkillModifierString();

	virtual float getTimeLeft();

	void setAttributeModifier(byte attribute, int value);

	void setSkillModifier(const String& modname, int value);

	void setSpeedModifier(float speed);

	String getBuffName();

	int getBuffCRC();

	float getBuffDuration();

	int getBuffType();

	virtual int getAttributeModifierValue(byte attribute);

	virtual int getSkillModifierValue(const String& modname);

	bool isActive();

	bool isSpiceBuff();

	void setStartMessage(ParameterizedStringId& start);

	void setEndMessage(ParameterizedStringId& start);

	Buff* _this;

	operator const Buff*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~BuffImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();

	friend class Buff;
};

class BuffAdapter : public ManagedObjectAdapter {
public:
	BuffAdapter(BuffImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void init();

	void sendTo(PlayerCreature* player);

	void sendDestroyTo(PlayerCreature* player);

	void activate();

	void deactivate();

	void applyAttributeModifiers();

	void applySkillModifiers();

	void removeAttributeModifiers();

	void removeSkillModifiers();

	void clearBuffEvent();

	void setBuffEventNull();

	void scheduleBuffEvent();

	void parseAttributeModifierString(const String& modifierstring);

	void parseSkillModifierString(const String& modifierstring);

	String getAttributeModifierString();

	String getSkillModifierString();

	float getTimeLeft();

	void setAttributeModifier(byte attribute, int value);

	void setSkillModifier(const String& modname, int value);

	void setSpeedModifier(float speed);

	String getBuffName();

	int getBuffCRC();

	float getBuffDuration();

	int getBuffType();

	int getAttributeModifierValue(byte attribute);

	int getSkillModifierValue(const String& modname);

	bool isActive();

	bool isSpiceBuff();

protected:
	String _param0_parseAttributeModifierString__String_;
	String _param0_parseSkillModifierString__String_;
	String _param0_setSkillModifier__String_int_;
	String _param0_getSkillModifierValue__String_;
};

class BuffHelper : public DistributedObjectClassHelper, public Singleton<BuffHelper> {
	static BuffHelper* staticInitializer;

public:
	BuffHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<BuffHelper>;
};

} // namespace buffs
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::buffs;

#endif /*BUFF_H_*/
