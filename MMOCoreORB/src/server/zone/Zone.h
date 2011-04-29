/*
 *	server/zone/Zone.h generated by engine3 IDL compiler 0.60
 */

#ifndef ZONE_H_
#define ZONE_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {

class ZoneProcessServer;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace managers {
namespace structure {

class StructureManager;

} // namespace structure
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::structure;

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace objects {
namespace area {

class ActiveArea;

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

namespace server {
namespace zone {
namespace managers {
namespace planet {

class PlanetManager;

} // namespace planet
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::planet;

namespace server {
namespace zone {
namespace managers {
namespace city {

class CityManager;

} // namespace city
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::city;

namespace server {
namespace zone {
namespace managers {
namespace creature {

class CreatureManager;

} // namespace creature
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::creature;

namespace server {
namespace zone {
namespace managers {
namespace objectcontroller {

class ObjectController;

} // namespace objectcontroller
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::objectcontroller;

namespace server {
namespace zone {
namespace objects {
namespace building {
namespace cloning {

class CloningBuildingObject;

} // namespace cloning
} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building::cloning;

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

#include "server/zone/ZoneServer.h"

#include "server/zone/managers/planet/HeightMap.h"

#include "server/zone/managers/object/ObjectMap.h"

#include "server/zone/managers/planet/MapLocationTable.h"

#include "engine/util/u3d/Vector3.h"

#include "engine/util/u3d/QuadTree.h"

#include "engine/util/u3d/QuadTreeEntry.h"

#include "system/lang/Time.h"

#include "engine/core/TaskManager.h"

#include "engine/core/ManagedObject.h"

#include "system/util/VectorMap.h"

#include "system/util/SortedVector.h"

#include "system/lang/System.h"

namespace server {
namespace zone {

class Zone : public ManagedObject {
public:
	Zone(ZoneProcessServer* processor, const String& zoneName);

	void initializeTransientMembers();

	CloningBuildingObject* getNearestCloningBuilding(CreatureObject* creature);

	SceneObject* getNearestPlanetaryObject(SceneObject* object, const String& mapObjectLocationType);

	void initializePrivateData();

	QuadTree* getRegionTree();

	int getInRangeObjects(float x, float y, float range, SortedVector<ManagedReference<SceneObject* > >* objects);

	int getInRangeActiveAreas(float x, float y, float range, SortedVector<ManagedReference<ActiveArea* > >* objects);

	SortedVector<ManagedReference<SceneObject* > > getPlanetaryObjectList(const String& mapObjectLocationType);

	void insert(QuadTreeEntry* entry);

	void remove(QuadTreeEntry* entry);

	void update(QuadTreeEntry* entry);

	void inRange(QuadTreeEntry* entry, float range);

	void updateActiveAreas(SceneObject* object);

	void startManagers();

	void stopManagers();

	float getHeight(float x, float y);

	void addSceneObject(SceneObject* object);

	void sendMapLocationsTo(SceneObject* player);

	void dropSceneObject(SceneObject* object);

	PlanetManager* getPlanetManager();

	CityManager* getCityManager();

	ZoneServer* getZoneServer();

	CreatureManager* getCreatureManager();

	unsigned long long getGalacticTime();

	bool hasManagersStarted();

	float getMinX();

	float getMaxX();

	float getMinY();

	float getMaxY();

	void registerObjectWithPlanetaryMap(SceneObject* object);

	void unregisterObjectWithPlanetaryMap(SceneObject* object);

	String getZoneName();

	unsigned int getZoneCRC();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	Zone(DummyConstructorParameter* param);

	virtual ~Zone();

	String _return_getZoneName;

	friend class ZoneHelper;
};

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneImplementation : public ManagedObjectImplementation, public QuadTree {
	String zoneName;

	unsigned int zoneCRC;

	ManagedReference<ZoneProcessServer* > processor;

	ObjectMap objectMap;

	ManagedReference<PlanetManager* > planetManager;

	ManagedReference<CityManager* > cityManager;

	ManagedReference<CreatureManager* > creatureManager;

	ManagedWeakReference<ZoneServer* > server;

	QuadTree* regionTree;

	Time galacticTime;

	HeightMap* heightMap;

	MapLocationTable mapLocations;

	bool managersStarted;

public:
	ZoneImplementation(ZoneProcessServer* processor, const String& zoneName);

	ZoneImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void finalize();

	CloningBuildingObject* getNearestCloningBuilding(CreatureObject* creature);

	SceneObject* getNearestPlanetaryObject(SceneObject* object, const String& mapObjectLocationType);

	void initializePrivateData();

	QuadTree* getRegionTree();

	int getInRangeObjects(float x, float y, float range, SortedVector<ManagedReference<SceneObject* > >* objects);

	int getInRangeActiveAreas(float x, float y, float range, SortedVector<ManagedReference<ActiveArea* > >* objects);

	SortedVector<ManagedReference<SceneObject* > > getPlanetaryObjectList(const String& mapObjectLocationType);

	void insert(QuadTreeEntry* entry);

	void remove(QuadTreeEntry* entry);

	void update(QuadTreeEntry* entry);

	void inRange(QuadTreeEntry* entry, float range);

	void updateActiveAreas(SceneObject* object);

	void startManagers();

	void stopManagers();

	float getHeight(float x, float y);

	void addSceneObject(SceneObject* object);

	void sendMapLocationsTo(SceneObject* player);

	void dropSceneObject(SceneObject* object);

	PlanetManager* getPlanetManager();

	CityManager* getCityManager();

	ZoneServer* getZoneServer();

	CreatureManager* getCreatureManager();

	unsigned long long getGalacticTime();

	bool hasManagersStarted();

	float getMinX();

	float getMaxX();

	float getMinY();

	float getMaxY();

	void registerObjectWithPlanetaryMap(SceneObject* object);

	void unregisterObjectWithPlanetaryMap(SceneObject* object);

	String getZoneName();

	unsigned int getZoneCRC();

	Zone* _this;

	operator const Zone*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ZoneImplementation();

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
	bool readObjectMember(ObjectInputStream* stream, const String& name);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class Zone;
};

class ZoneAdapter : public ManagedObjectAdapter {
public:
	ZoneAdapter(ZoneImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void finalize();

	CloningBuildingObject* getNearestCloningBuilding(CreatureObject* creature);

	SceneObject* getNearestPlanetaryObject(SceneObject* object, const String& mapObjectLocationType);

	void initializePrivateData();

	void updateActiveAreas(SceneObject* object);

	void startManagers();

	void stopManagers();

	float getHeight(float x, float y);

	void addSceneObject(SceneObject* object);

	void sendMapLocationsTo(SceneObject* player);

	void dropSceneObject(SceneObject* object);

	PlanetManager* getPlanetManager();

	CityManager* getCityManager();

	ZoneServer* getZoneServer();

	CreatureManager* getCreatureManager();

	unsigned long long getGalacticTime();

	bool hasManagersStarted();

	float getMinX();

	float getMaxX();

	float getMinY();

	float getMaxY();

	void registerObjectWithPlanetaryMap(SceneObject* object);

	void unregisterObjectWithPlanetaryMap(SceneObject* object);

	String getZoneName();

	unsigned int getZoneCRC();

protected:
	String _param1_getNearestPlanetaryObject__SceneObject_String_;
};

class ZoneHelper : public DistributedObjectClassHelper, public Singleton<ZoneHelper> {
	static ZoneHelper* staticInitializer;

public:
	ZoneHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ZoneHelper>;
};

} // namespace zone
} // namespace server

using namespace server::zone;

#endif /*ZONE_H_*/
