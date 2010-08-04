/*
 *	server/zone/objects/installation/InstallationObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef INSTALLATIONOBJECT_H_
#define INSTALLATIONOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

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
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace packets {
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

namespace server {
namespace zone {
namespace packets {
namespace scene {

class AttributeListMessage;

} // namespace scene
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::scene;

namespace server {
namespace zone {
namespace packets {
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

namespace server {
namespace zone {
namespace templates {

class SharedObjectTemplate;

} // namespace templates
} // namespace zone
} // namespace server

using namespace server::zone::templates;

namespace server {
namespace zone {
namespace objects {
namespace installation {

class SyncrhonizedUiListenInstallationTask;

} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation;

namespace server {
namespace zone {
namespace objects {
namespace resource {

class ResourceSpawn;

} // namespace resource
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::resource;

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

#include "server/zone/objects/building/StructurePermissionList.h"

#include "server/zone/objects/installation/HopperList.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "engine/lua/LuaObject.h"

#include "system/util/SortedVector.h"

#include "engine/service/proto/BasePacket.h"

#include "system/lang/ref/Reference.h"

#include "system/util/VectorMap.h"

namespace server {
namespace zone {
namespace objects {
namespace installation {

class InstallationObject : public TangibleObject {
public:
	InstallationObject();

	void initializeTransientMembers();

	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	int notifyStructurePlaced(PlayerCreature* player);

	bool checkRequisitesForPlacement(PlayerCreature* player);

	void updateResourceContainerQuantity(ResourceContainer* container, int newQuantity, bool notifyClient = true);

	void updateToDatabaseAllObjects(bool startTask);

	void setOperating(bool operating, bool notifyClient = true);

	void activateUiSync();

	void updateOperators();

	void verifyOperators();

	void updateInstallationWork();

	void handleStructureStatus(PlayerCreature* player);

	void handleStructureManageMaintenance(PlayerCreature* player);

	void handleSetObjectName(PlayerCreature* player);

	void handleStructureDestroy(PlayerCreature* player);

	void handleStructureAddEnergy(PlayerCreature* player);

	void setActiveResource(ResourceContainer* container);

	void changeActiveResourceID(unsigned long long spawnObjectID);

	void addResourceToHopper(ResourceContainer* container);

	void removeResourceFromHopper(ResourceContainer* container);

	void clearResourceHopper();

	float getHopperSize();

	bool updateMaintenance(Time& workingTime);

	void updateHopper(Time& workingTime, bool shutdownAfterUpdate);

	int getHopperItemQuantity(ResourceSpawn* spawn);

	ResourceContainer* getContainerFromHopper(ResourceSpawn* spawn);

	unsigned long long getActiveResourceSpawnID();

	float getActualRate();

	void broadcastToOperators(BasePacket* packet);

	bool isOnAdminList(CreatureObject* creature);

	void sendPermissionListTo(PlayerCreature* player, const String& listName);

	void addOperator(PlayerCreature* player);

	void removeOperator(PlayerCreature* player);

	void sendBaselinesTo(SceneObject* player);

	void setLotSize(int lotsize);

	int getLotSize();

	void setDeedObjectID(unsigned long long deedid);

	unsigned long long getDeedObjectID();

	void setOwnerObjectID(unsigned long long ownerID);

	unsigned long long getOwnerObjectID();

	void setMaintenancePool(unsigned int maintenance);

	unsigned int getMaintenancePool();

	void setPowerPool(unsigned int power);

	unsigned int getPowerPool();

	void addPower(int add);

	void addMaintenance(float maint);

	int getBasePowerRate();

	void setBasePowerRate(int powerRate);

	void setBaseMaintenanceRate(int maintenanceRate);

	int getBaseMaintenanceRate();

	int getRedeedCost();

	bool isInstallationObject();

	bool isOperating();

	int getInstallationType();

	float getExtractionRate();

	float getHopperSizeMax();

	HopperList* getHopperList();

	bool isHarvesterObject();

	bool isGeneratorObject();

protected:
	InstallationObject(DummyConstructorParameter* param);

	virtual ~InstallationObject();

	friend class InstallationObjectHelper;
};

} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation;

namespace server {
namespace zone {
namespace objects {
namespace installation {

class InstallationObjectImplementation : public TangibleObjectImplementation {
protected:
	StructurePermissionList structurePermissionList;

	Reference<SyncrhonizedUiListenInstallationTask*> syncUiTask;

	unsigned long long ownerObjectID;

	int lotSize;

	bool operating;

	unsigned long long deedObjectID;

	int baseMaintenanceRate;

	int basePowerRate;

	unsigned int maintenancePool;

	unsigned int powerPool;

	float surplusMaintenance;

	float surplusPower;

	bool publicStructure;

	SortedVector<ManagedReference<PlayerCreature* > > operatorList;

	int installationType;

	Time resourceHopperTimestamp;

	Time lastMaintenanceTime;

	HopperList resourceHopper;

	float hopperSizeMax;

	float extractionRate;

public:
	InstallationObjectImplementation();

	InstallationObjectImplementation(DummyConstructorParameter* param);

	void initializeTransientMembers();

	void destroyObjectFromDatabase(bool destroyContainedObjects = false);

	void loadTemplateData(SharedObjectTemplate* templateData);

	void fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	virtual int notifyStructurePlaced(PlayerCreature* player);

	virtual bool checkRequisitesForPlacement(PlayerCreature* player);

	void updateResourceContainerQuantity(ResourceContainer* container, int newQuantity, bool notifyClient = true);

	virtual void updateToDatabaseAllObjects(bool startTask);

	virtual void setOperating(bool operating, bool notifyClient = true);

	void activateUiSync();

	virtual void updateOperators();

	void verifyOperators();

	virtual void updateInstallationWork();

	void handleStructureStatus(PlayerCreature* player);

	void handleStructureManageMaintenance(PlayerCreature* player);

	void handleSetObjectName(PlayerCreature* player);

	void handleStructureDestroy(PlayerCreature* player);

	void handleStructureAddEnergy(PlayerCreature* player);

	void setActiveResource(ResourceContainer* container);

	void changeActiveResourceID(unsigned long long spawnObjectID);

	void addResourceToHopper(ResourceContainer* container);

	void removeResourceFromHopper(ResourceContainer* container);

	void clearResourceHopper();

	float getHopperSize();

	bool updateMaintenance(Time& workingTime);

	void updateHopper(Time& workingTime, bool shutdownAfterUpdate);

	int getHopperItemQuantity(ResourceSpawn* spawn);

	ResourceContainer* getContainerFromHopper(ResourceSpawn* spawn);

	unsigned long long getActiveResourceSpawnID();

	float getActualRate();

	void broadcastToOperators(BasePacket* packet);

	bool isOnAdminList(CreatureObject* creature);

	void sendPermissionListTo(PlayerCreature* player, const String& listName);

	void addOperator(PlayerCreature* player);

	void removeOperator(PlayerCreature* player);

	void sendBaselinesTo(SceneObject* player);

	void setLotSize(int lotsize);

	int getLotSize();

	void setDeedObjectID(unsigned long long deedid);

	unsigned long long getDeedObjectID();

	void setOwnerObjectID(unsigned long long ownerID);

	unsigned long long getOwnerObjectID();

	void setMaintenancePool(unsigned int maintenance);

	unsigned int getMaintenancePool();

	void setPowerPool(unsigned int power);

	unsigned int getPowerPool();

	void addPower(int add);

	void addMaintenance(float maint);

	int getBasePowerRate();

	void setBasePowerRate(int powerRate);

	void setBaseMaintenanceRate(int maintenanceRate);

	int getBaseMaintenanceRate();

	int getRedeedCost();

	bool isInstallationObject();

	bool isOperating();

	int getInstallationType();

	float getExtractionRate();

	float getHopperSizeMax();

	HopperList* getHopperList();

	virtual bool isHarvesterObject();

	virtual bool isGeneratorObject();

	InstallationObject* _this;

	operator const InstallationObject*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~InstallationObjectImplementation();

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

	friend class InstallationObject;
};

class InstallationObjectAdapter : public TangibleObjectAdapter {
public:
	InstallationObjectAdapter(InstallationObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void destroyObjectFromDatabase(bool destroyContainedObjects);

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	int notifyStructurePlaced(PlayerCreature* player);

	bool checkRequisitesForPlacement(PlayerCreature* player);

	void updateResourceContainerQuantity(ResourceContainer* container, int newQuantity, bool notifyClient);

	void updateToDatabaseAllObjects(bool startTask);

	void setOperating(bool operating, bool notifyClient);

	void activateUiSync();

	void updateOperators();

	void verifyOperators();

	void updateInstallationWork();

	void handleStructureStatus(PlayerCreature* player);

	void handleStructureManageMaintenance(PlayerCreature* player);

	void handleSetObjectName(PlayerCreature* player);

	void handleStructureDestroy(PlayerCreature* player);

	void handleStructureAddEnergy(PlayerCreature* player);

	void setActiveResource(ResourceContainer* container);

	void changeActiveResourceID(unsigned long long spawnObjectID);

	void addResourceToHopper(ResourceContainer* container);

	void removeResourceFromHopper(ResourceContainer* container);

	void clearResourceHopper();

	float getHopperSize();

	int getHopperItemQuantity(ResourceSpawn* spawn);

	ResourceContainer* getContainerFromHopper(ResourceSpawn* spawn);

	unsigned long long getActiveResourceSpawnID();

	float getActualRate();

	void broadcastToOperators(BasePacket* packet);

	bool isOnAdminList(CreatureObject* creature);

	void sendPermissionListTo(PlayerCreature* player, const String& listName);

	void addOperator(PlayerCreature* player);

	void removeOperator(PlayerCreature* player);

	void sendBaselinesTo(SceneObject* player);

	void setLotSize(int lotsize);

	int getLotSize();

	void setDeedObjectID(unsigned long long deedid);

	unsigned long long getDeedObjectID();

	void setOwnerObjectID(unsigned long long ownerID);

	unsigned long long getOwnerObjectID();

	void setMaintenancePool(unsigned int maintenance);

	unsigned int getMaintenancePool();

	void setPowerPool(unsigned int power);

	unsigned int getPowerPool();

	void addPower(int add);

	void addMaintenance(float maint);

	int getBasePowerRate();

	void setBasePowerRate(int powerRate);

	void setBaseMaintenanceRate(int maintenanceRate);

	int getBaseMaintenanceRate();

	int getRedeedCost();

	bool isInstallationObject();

	bool isOperating();

	int getInstallationType();

	float getExtractionRate();

	float getHopperSizeMax();

	bool isHarvesterObject();

	bool isGeneratorObject();

protected:
	String _param1_sendPermissionListTo__PlayerCreature_String_;
};

class InstallationObjectHelper : public DistributedObjectClassHelper, public Singleton<InstallationObjectHelper> {
	static InstallationObjectHelper* staticInitializer;

public:
	InstallationObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<InstallationObjectHelper>;
};

} // namespace installation
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::installation;

#endif /*INSTALLATIONOBJECT_H_*/
