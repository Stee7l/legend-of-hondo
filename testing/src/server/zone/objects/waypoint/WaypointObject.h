/*
 *	server/zone/objects/waypoint/WaypointObject.h generated by engine3 IDL compiler 0.60
 */

#ifndef WAYPOINTOBJECT_H_
#define WAYPOINTOBJECT_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

#include "engine/lua/LuaObject.h"

#include "engine/core/ManagedReference.h"

#include "server/zone/objects/intangible/IntangibleObject.h"

#include "engine/service/proto/BaseMessage.h"

namespace server {
namespace zone {
namespace objects {
namespace waypoint {

class WaypointObject : public IntangibleObject {
public:
	static const byte COLOR_WHITE = 0x00;

	static const byte COLOR_BLUE = 0x01;

	static const byte COLOR_GREEN = 0x02;

	static const byte COLOR_ORANGE = 0x03;

	static const byte COLOR_YELLOW = 0x04;

	static const byte COLOR_PURPLE = 0x05;

	WaypointObject();

	void loadTemplateData(LuaObject* templateData);

	void insertToMessage(BaseMessage* msg);

	void setCellID(unsigned int id);

	void setPlanetCRC(unsigned int crc);

	void setCustomName(const UnicodeString& name);

	void setColor(byte newColor);

	void setActive(byte newStatus);

	void setUnknown(unsigned long long id);

protected:
	WaypointObject(DummyConstructorParameter* param);

	virtual ~WaypointObject();

	friend class WaypointObjectHelper;
};

} // namespace waypoint
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::waypoint;

namespace server {
namespace zone {
namespace objects {
namespace waypoint {

class WaypointObjectImplementation : public IntangibleObjectImplementation {
protected:
	unsigned int cellID;

	unsigned long long unknown;

	unsigned int planetCRC;

	UnicodeString customName;

	byte color;

	byte active;

public:
	static const byte COLOR_WHITE = 0x00;

	static const byte COLOR_BLUE = 0x01;

	static const byte COLOR_GREEN = 0x02;

	static const byte COLOR_ORANGE = 0x03;

	static const byte COLOR_YELLOW = 0x04;

	static const byte COLOR_PURPLE = 0x05;

	WaypointObjectImplementation();

	WaypointObjectImplementation(DummyConstructorParameter* param);

	void loadTemplateData(LuaObject* templateData);

	void insertToMessage(BaseMessage* msg);

	void setCellID(unsigned int id);

	void setPlanetCRC(unsigned int crc);

	void setCustomName(const UnicodeString& name);

	void setColor(byte newColor);

	void setActive(byte newStatus);

	void setUnknown(unsigned long long id);

	WaypointObject* _this;

	operator const WaypointObject*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~WaypointObjectImplementation();

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

	friend class WaypointObject;
};

class WaypointObjectAdapter : public IntangibleObjectAdapter {
public:
	WaypointObjectAdapter(WaypointObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void setCellID(unsigned int id);

	void setPlanetCRC(unsigned int crc);

	void setCustomName(const UnicodeString& name);

	void setColor(byte newColor);

	void setActive(byte newStatus);

	void setUnknown(unsigned long long id);

protected:
	UnicodeString _param0_setCustomName__UnicodeString_;
};

class WaypointObjectHelper : public DistributedObjectClassHelper, public Singleton<WaypointObjectHelper> {
	static WaypointObjectHelper* staticInitializer;

public:
	WaypointObjectHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<WaypointObjectHelper>;
};

} // namespace waypoint
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::waypoint;

#endif /*WAYPOINTOBJECT_H_*/
