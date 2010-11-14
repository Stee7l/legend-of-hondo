/*
 *	server/zone/objects/creature/aigroup/AiGroup.h generated by engine3 IDL compiler 0.60
 */

#ifndef AIGROUP_H_
#define AIGROUP_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace creature {

class AiAgent;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace managers {
namespace creature {

class StaticSpawnGroup;

} // namespace creature
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::creature;

namespace server {
namespace zone {
namespace managers {
namespace creature {

class DynamicSpawnGroup;

} // namespace creature
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::creature;

#include "server/zone/objects/creature/PatrolPointsVector.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "engine/core/ManagedObject.h"

#include "engine/util/Coordinate.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace aigroup {

class AiGroup : public SceneObject {
public:
	AiGroup();

	void setPatrolPoints();

	void setup(StaticSpawnGroup* templ);

	void setup(DynamicSpawnGroup* templ);

	bool isHerdGroup();

	bool isPackGroup();

	bool isLairGroup();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	AiGroup(DummyConstructorParameter* param);

	virtual ~AiGroup();

	friend class AiGroupHelper;
};

} // namespace aigroup
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::aigroup;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace aigroup {

class AiGroupImplementation : public SceneObjectImplementation {
protected:
	ManagedReference<AiAgent* > leader;

	Vector<ManagedReference<AiAgent* > > scouts;

	Vector<String> scoutTemps;

	PatrolPointsVector scoutPoints;

	Vector<ManagedReference<AiAgent* > > protectors;

	Vector<String> protectorTemps;

	Vector<ManagedReference<AiAgent* > > babies;

	Vector<String> babyTemps;

	PatrolPointsVector closePoints;

	Vector<ManagedReference<AiGroup* > > subgroups;

	int commandLevel;

	int wanderRadius;

	int size;

	float scoutWeight;

	float protectorWeight;

	float babyWeight;

public:
	AiGroupImplementation();

	AiGroupImplementation(DummyConstructorParameter* param);

	void setPatrolPoints();

	void setup(StaticSpawnGroup* templ);

	void setup(DynamicSpawnGroup* templ);

	virtual bool isHerdGroup();

	virtual bool isPackGroup();

	virtual bool isLairGroup();

	AiGroup* _this;

	operator const AiGroup*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~AiGroupImplementation();

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

	friend class AiGroup;
};

class AiGroupAdapter : public SceneObjectAdapter {
public:
	AiGroupAdapter(AiGroupImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void setPatrolPoints();

	bool isHerdGroup();

	bool isPackGroup();

	bool isLairGroup();

};

class AiGroupHelper : public DistributedObjectClassHelper, public Singleton<AiGroupHelper> {
	static AiGroupHelper* staticInitializer;

public:
	AiGroupHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<AiGroupHelper>;
};

} // namespace aigroup
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::aigroup;

#endif /*AIGROUP_H_*/
