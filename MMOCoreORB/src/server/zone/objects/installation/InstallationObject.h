/*
 *	server/zone/objects/installation/InstallationObject.h generated by engine3 IDL compiler 0.55
 */

#ifndef INSTALLATIONOBJECT_H_
#define INSTALLATIONOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

class TangibleObject;

class CreatureObject;

class SceneObject;

class Player;

class DeedObject;

class Zone;

#include "engine/service/Message.h"

#include "../tangible/TangibleObject.h"

class InstallationObject : public TangibleObject {
public:
	InstallationObject(unsigned long long oid);

	InstallationObject(unsigned long long oid, DeedObject* deed);

	void sendTo(Player* player, bool doClose = true);

	void handleStructureRedeed(Player* player);

	void handleStructureRedeedConfirm(Player* player);

	void handleMakeDeed(Player* player);

	void handleStructureStatus(Player* player);

	void handleStructureManageMaintenance(Player* player);

	void handleStructureAddEnergy(Player* player);

	String& getOwner();

	void setOwner(const String& owner);

	unsigned long long getOwnerID();

	void setOwnerID(unsigned long long owner);

	unsigned int getDeedCRC();

	int getDestroyCode();

	int getLotSize();

	void setLotSize(int size);

	unsigned int getNewDefenderUpdateCounter(unsigned int cnt);

	void updateMaintenance();

	void addMaintenance(float maint);

	float getSurplusMaintenance();

	float getMaintenanceRate();

	void setMaintenanceRate(float rate);

	void addPower(float pow);

	float getSurplusPower();

	float getPowerRate();

	void setPowerRate(float rate);

	void updateOperators();

	int getOperatorListSize();

	SceneObject* getOperator(int idx);

	void addOperator(SceneObject* op);

	void removeOperator(SceneObject* op);

	void activateSync();

	bool isOperating();

	void setOperating(bool state);

	float getExtractionRate();

	float getActualRate();

	unsigned long long getActiveResourceID();

	float getHopperSize();

	float getHopperSizeMax();

	void updateHopper();

	void setHopperUpdateCounter(int counter);

	int getNewHopperUpdateCounter(int counter);

	int getHopperUpdateCounter();

	int getHopperItemCount();

	unsigned long long getHopperItemID(int index);

	float getHopperItemQuantity(int index);

	float getHopperItemQuantity(unsigned long long rid);

	float removeHopperItem(unsigned long long rid, int quantity);

	bool isHarvester();

	bool isFactory();

protected:
	InstallationObject(DummyConstructorParameter* param);

	virtual ~InstallationObject();

	String _return_getOwner;

	friend class InstallationObjectHelper;
};

class InstallationObjectImplementation;

class InstallationObjectAdapter : public TangibleObjectAdapter {
public:
	InstallationObjectAdapter(InstallationObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void sendTo(Player* player, bool doClose);

	void handleStructureRedeed(Player* player);

	void handleStructureRedeedConfirm(Player* player);

	void handleMakeDeed(Player* player);

	void handleStructureStatus(Player* player);

	void handleStructureManageMaintenance(Player* player);

	void handleStructureAddEnergy(Player* player);

	String& getOwner();

	void setOwner(const String& owner);

	unsigned long long getOwnerID();

	void setOwnerID(unsigned long long owner);

	unsigned int getDeedCRC();

	int getDestroyCode();

	int getLotSize();

	void setLotSize(int size);

	unsigned int getNewDefenderUpdateCounter(unsigned int cnt);

	void updateMaintenance();

	void addMaintenance(float maint);

	float getSurplusMaintenance();

	float getMaintenanceRate();

	void setMaintenanceRate(float rate);

	void addPower(float pow);

	float getSurplusPower();

	float getPowerRate();

	void setPowerRate(float rate);

	void updateOperators();

	int getOperatorListSize();

	SceneObject* getOperator(int idx);

	void addOperator(SceneObject* op);

	void removeOperator(SceneObject* op);

	void activateSync();

	bool isOperating();

	void setOperating(bool state);

	float getExtractionRate();

	float getActualRate();

	unsigned long long getActiveResourceID();

	float getHopperSize();

	float getHopperSizeMax();

	void updateHopper();

	void setHopperUpdateCounter(int counter);

	int getNewHopperUpdateCounter(int counter);

	int getHopperUpdateCounter();

	int getHopperItemCount();

	unsigned long long getHopperItemID(int index);

	float getHopperItemQuantity(int index);

	float getHopperItemQuantity(unsigned long long rid);

	float removeHopperItem(unsigned long long rid, int quantity);

	bool isHarvester();

	bool isFactory();

protected:
	String _param0_setOwner__String_;
};

class InstallationObjectHelper : public DistributedObjectClassHelper, public Singleton<InstallationObjectHelper> {
	static InstallationObjectHelper* staticInitializer;

public:
	InstallationObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<InstallationObjectHelper>;
};

#include "../tangible/TangibleObjectImplementation.h"

class InstallationObjectServant : public TangibleObjectImplementation {
public:
	InstallationObject* _this;

public:
	InstallationObjectServant(unsigned long long oid, int type);
	virtual ~InstallationObjectServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*INSTALLATIONOBJECT_H_*/
