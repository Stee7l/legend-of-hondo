/*
 *	server/zone/objects/resource/ResourceSpawn.h generated by engine3 IDL compiler 0.60
 */

#ifndef RESOURCESPAWN_H_
#define RESOURCESPAWN_H_

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
namespace resource {

class ResourceContainer;

} // namespace resource
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::resource;

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/resource/SpawnDensityMap.h"

#include "server/zone/objects/resource/SpawnMap.h"

#include "engine/log/Logger.h"

#include "system/util/VectorMap.h"

#include "system/util/Vector.h"

#include "engine/core/ManagedObject.h"

namespace server {
namespace zone {
namespace objects {
namespace resource {

class ResourceSpawn : public SceneObject {
public:
	ResourceSpawn();

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	void decreaseContainerReferenceCount();

	void setName(const String& name);

	void setType(const String& type);

	void setSpawnPool(int pool);

	void setZoneRestriction(int zone);

	void addClass(const String& newclass);

	void addStfClass(const String& newclass);

	void addAttribute(const String& attribute, int value);

	bool isType(const String& type);

	void setSurveyToolType(int type);

	void setIsEnergy(bool val);

	String getName();

	String getType();

	String getClass(int index);

	String getFinalClass();

	String getFamilyName();

	void setSpawned(unsigned long long t);

	void setDespawned(unsigned long long t);

	unsigned long long getDespawned();

	void setContainerCRC(unsigned int crc);

	int getSpawnPool();

	bool isEnergy();

	int getZoneRestriction();

	int getSurveyToolType();

	int getSpawnMapSize();

	void extractResource(int zoneid, int units);

	ResourceContainer* createResource(int units);

	int getSpawnMapZone(int i);

	bool isUnknownType();

	void createSpawnMaps(bool jtl, int minpool, int maxpool, int zonerestriction, Vector<unsigned int>& activeZones);

	float getDensityAt(int zoneid, float x, float y);

	bool inShift();

	int getAttributeAndValue(String& attribute, int index);

	int getAttributeValue(int index);

	void print();

protected:
	ResourceSpawn(DummyConstructorParameter* param);

	virtual ~ResourceSpawn();

	String _return_getClass;
	String _return_getFamilyName;
	String _return_getFinalClass;
	String _return_getName;
	String _return_getType;

	friend class ResourceSpawnHelper;
};

} // namespace resource
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::resource;

namespace server {
namespace zone {
namespace objects {
namespace resource {

class ResourceSpawnImplementation : public SceneObjectImplementation {
protected:
	String spawnType;

	String spawnName;

	Vector<String> spawnClasses;

	Vector<String> stfSpawnClasses;

	VectorMap<String, int> spawnAttributes;

	int spawnPool;

	int zoneRestriction;

	int surveyToolType;

	unsigned int containerCRC;

	unsigned long long spawned;

	unsigned long long despawned;

	SpawnMap spawnMaps;

	unsigned long long maxUnitsSpawned;

	unsigned long long unitsInCirculation;

	int containerReferenceCount;

	bool dbDestroyed;

	bool energy;

public:
	ResourceSpawnImplementation();

	ResourceSpawnImplementation(DummyConstructorParameter* param);

	void finalize();

	void fillAttributeList(AttributeListMessage* msg, PlayerCreature* object);

	void decreaseContainerReferenceCount();

	void setName(const String& name);

	void setType(const String& type);

	void setSpawnPool(int pool);

	void setZoneRestriction(int zone);

	void addClass(const String& newclass);

	void addStfClass(const String& newclass);

	void addAttribute(const String& attribute, int value);

	bool isType(const String& type);

	void setSurveyToolType(int type);

	void setIsEnergy(bool val);

	String getName();

	String getType();

	String getClass(int index);

	String getFinalClass();

	String getFamilyName();

	void setSpawned(unsigned long long t);

	void setDespawned(unsigned long long t);

	unsigned long long getDespawned();

	void setContainerCRC(unsigned int crc);

	int getSpawnPool();

	bool isEnergy();

	int getZoneRestriction();

	int getSurveyToolType();

	int getSpawnMapSize();

	void extractResource(int zoneid, int units);

	ResourceContainer* createResource(int units);

	int getSpawnMapZone(int i);

	bool isUnknownType();

	void createSpawnMaps(bool jtl, int minpool, int maxpool, int zonerestriction, Vector<unsigned int>& activeZones);

private:
	int getConcentration(bool jtl);

	Vector<unsigned int> getSpawnZones(int minpool, int maxpool, int zonerestriction, Vector<unsigned int>& activeZones);

public:
	float getDensityAt(int zoneid, float x, float y);

	bool inShift();

	int getAttributeAndValue(String& attribute, int index);

	int getAttributeValue(int index);

	void print();

	ResourceSpawn* _this;

	operator const ResourceSpawn*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~ResourceSpawnImplementation();

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

	friend class ResourceSpawn;
};

class ResourceSpawnAdapter : public SceneObjectAdapter {
public:
	ResourceSpawnAdapter(ResourceSpawnImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void finalize();

	void decreaseContainerReferenceCount();

	void setName(const String& name);

	void setType(const String& type);

	void setSpawnPool(int pool);

	void setZoneRestriction(int zone);

	void addClass(const String& newclass);

	void addStfClass(const String& newclass);

	void addAttribute(const String& attribute, int value);

	bool isType(const String& type);

	void setSurveyToolType(int type);

	void setIsEnergy(bool val);

	String getName();

	String getType();

	String getClass(int index);

	String getFinalClass();

	String getFamilyName();

	void setSpawned(unsigned long long t);

	void setDespawned(unsigned long long t);

	unsigned long long getDespawned();

	void setContainerCRC(unsigned int crc);

	int getSpawnPool();

	bool isEnergy();

	int getZoneRestriction();

	int getSurveyToolType();

	int getSpawnMapSize();

	void extractResource(int zoneid, int units);

	ResourceContainer* createResource(int units);

	int getAttributeValue(int index);

protected:
	String _param0_setName__String_;
	String _param0_setType__String_;
	String _param0_addClass__String_;
	String _param0_addStfClass__String_;
	String _param0_addAttribute__String_int_;
	String _param0_isType__String_;
};

class ResourceSpawnHelper : public DistributedObjectClassHelper, public Singleton<ResourceSpawnHelper> {
	static ResourceSpawnHelper* staticInitializer;

public:
	ResourceSpawnHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ResourceSpawnHelper>;
};

} // namespace resource
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::resource;

#endif /*RESOURCESPAWN_H_*/
