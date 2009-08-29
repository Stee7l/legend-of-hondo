/*
 *	server/zone/ZoneServer.h generated by engine3 IDL compiler 0.60
 */

#ifndef ZONESERVER_H_
#define ZONESERVER_H_

#include "engine/orb/DistributedObjectBroker.h"

#include "engine/core/ManagedReference.h"

namespace server {
namespace zone {

class ZoneProcessServerImplementation;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace managers {
namespace object {

class ObjectManager;

} // namespace object
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::object;

namespace server {
namespace zone {
namespace managers {
namespace player {

class PlayerManager;

} // namespace player
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::player;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace chat {

class ChatManager;

} // namespace chat
} // namespace server

using namespace server::chat;

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
namespace managers {
namespace radial {

class RadialManager;

} // namespace radial
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::radial;

#include "server/zone/objects/scene/SceneObject.h"

#include "engine/service/proto/BasePacketHandler.h"

#include "engine/service/DatagramServiceThread.h"

#include "system/net/Socket.h"

#include "system/net/SocketAddress.h"

#include "system/net/Packet.h"

#include "engine/service/ServiceClient.h"

#include "engine/core/ManagedObject.h"

#include "engine/core/TaskManager.h"

#include "system/lang/Exception.h"

#include "system/util/Vector.h"

namespace server {
namespace zone {

class ZoneServer : public ManagedObject {
public:
	ZoneServer(int processingThreads, int galaxyid = 2);

	ServiceClient* createConnection(Socket* sock, SocketAddress& addr);

	void init();

	void run();

	void shutdown();

	void startManagers();

	void stopManagers();

	void start(int p, int mconn = 10);

	void stop();

	void handleMessage(ServiceClient* client, Packet* message);

	bool handleError(ServiceClient* client, Exception& e);

	void addTotalSentPacket(int count);

	void addTotalResentPacket(int count);

	void printInfo(bool forcedLog = true);

	void printEvents();

	SceneObject* getObject(unsigned long long objectID, bool doLock = true);

	SceneObject* createObject(unsigned int templateCRC, bool persistent, unsigned long long objectID = 0);

	void updateObjectToDatabase(SceneObject* object);

	void destroyObject(unsigned long long objectID);

	void lock(bool doLock = true);

	void unlock(bool doLock = true);

	void fixScheduler();

	void changeUserCap(int amount = 50);

	int getConnectionCount();

	void increaseOnlinePlayers();

	void decreaseOnlinePlayers();

	void increaseTotalDeletedPlayers();

	int getGalaxyID();

	String getServerName();

	bool isServerLocked();

	bool isServerOnline();

	bool isServerOffline();

	bool isServerLoading();

	int getServerState();

	Zone* getZone(int index);

	int getMaxPlayers();

	int getTotalPlayers();

	int getDeletedPlayers();

	PlayerManager* getPlayerManager();

	ChatManager* getChatManager();

	ObjectController* getObjectController();

	RadialManager* getRadialManager();

	void setServerName(const String& servername);

	void setGalaxyID(int galaxyid);

	void setServerState(int state);

	void setServerStateLocked();

	void setServerStateOnline();

	void loadMessageoftheDay();

	void changeMessageoftheDay(const String& newMOTD);

	String getMessageoftheDay();

protected:
	ZoneServer(DummyConstructorParameter* param);

	virtual ~ZoneServer();

	String _return_getMessageoftheDay;
	String _return_getServerName;

	friend class ZoneServerHelper;
};

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneServerImplementation : public ManagedObjectImplementation, public DatagramServiceThread {
	BasePacketHandler* phandler;

	ZoneProcessServerImplementation* processor;

	int procThreadCount;

	Vector<ManagedReference<Zone* > > zones;

	ObjectManager* objectManager;

	ManagedReference<PlayerManager* > playerManager;

	ManagedReference<ChatManager* > chatManager;

	ManagedReference<ObjectController* > objectController;

	ManagedReference<RadialManager* > radialManager;

	int totalSentPackets;

	int totalResentPackets;

	int currentPlayers;

	int maximumPlayers;

	int totalPlayers;

	int totalDeletedPlayers;

	int serverState;

	String name;

	String messageoftheDay;

	int galaxyID;

public:
	static const int OFFLINE = 0;

	static const int LOADING = 1;

	static const int ONLINE = 2;

	static const int LOCKED = 3;

	ZoneServerImplementation(int processingThreads, int galaxyid = 2);

	ServiceClient* createConnection(Socket* sock, SocketAddress& addr);

	void init();

	void run();

	void shutdown();

	void startManagers();

	void stopManagers();

	void start(int p, int mconn = 10);

	void stop();

	void handleMessage(ServiceClient* client, Packet* message);

	bool handleError(ServiceClient* client, Exception& e);

	void addTotalSentPacket(int count);

	void addTotalResentPacket(int count);

	void printInfo(bool forcedLog = true);

	void printEvents();

	SceneObject* getObject(unsigned long long objectID, bool doLock = true);

	SceneObject* createObject(unsigned int templateCRC, bool persistent, unsigned long long objectID = 0);

	void updateObjectToDatabase(SceneObject* object);

	void destroyObject(unsigned long long objectID);

	void lock(bool doLock = true);

	void unlock(bool doLock = true);

	void fixScheduler();

	void changeUserCap(int amount = 50);

	int getConnectionCount();

	void increaseOnlinePlayers();

	void decreaseOnlinePlayers();

	void increaseTotalDeletedPlayers();

	int getGalaxyID();

	String getServerName();

	bool isServerLocked();

	bool isServerOnline();

	bool isServerOffline();

	bool isServerLoading();

	int getServerState();

	Zone* getZone(int index);

	int getMaxPlayers();

	int getTotalPlayers();

	int getDeletedPlayers();

	PlayerManager* getPlayerManager();

	ChatManager* getChatManager();

	ObjectController* getObjectController();

	RadialManager* getRadialManager();

	void setServerName(const String& servername);

	void setGalaxyID(int galaxyid);

	void setServerState(int state);

	void setServerStateLocked();

	void setServerStateOnline();

	void loadMessageoftheDay();

	void changeMessageoftheDay(const String& newMOTD);

	String getMessageoftheDay();

	ZoneServer* _this;

	operator const ZoneServer*();

	DistributedObjectStub* _getStub();
protected:
	virtual ~ZoneServerImplementation();

	void _setStub(DistributedObjectStub* stub);

	void _serializationHelperMethod();

	friend class ZoneServer;
};

class ZoneServerAdapter : public ManagedObjectAdapter {
public:
	ZoneServerAdapter(ZoneServerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void init();

	void run();

	void shutdown();

	void startManagers();

	void stopManagers();

	void start(int p, int mconn);

	void stop();

	void addTotalSentPacket(int count);

	void addTotalResentPacket(int count);

	void printInfo(bool forcedLog);

	void printEvents();

	SceneObject* getObject(unsigned long long objectID, bool doLock);

	SceneObject* createObject(unsigned int templateCRC, bool persistent, unsigned long long objectID);

	void updateObjectToDatabase(SceneObject* object);

	void destroyObject(unsigned long long objectID);

	void lock(bool doLock);

	void unlock(bool doLock);

	void fixScheduler();

	void changeUserCap(int amount);

	int getConnectionCount();

	void increaseOnlinePlayers();

	void decreaseOnlinePlayers();

	void increaseTotalDeletedPlayers();

	int getGalaxyID();

	String getServerName();

	bool isServerLocked();

	bool isServerOnline();

	bool isServerOffline();

	bool isServerLoading();

	int getServerState();

	Zone* getZone(int index);

	int getMaxPlayers();

	int getTotalPlayers();

	int getDeletedPlayers();

	PlayerManager* getPlayerManager();

	ChatManager* getChatManager();

	ObjectController* getObjectController();

	RadialManager* getRadialManager();

	void setServerName(const String& servername);

	void setGalaxyID(int galaxyid);

	void setServerState(int state);

	void setServerStateLocked();

	void setServerStateOnline();

	void loadMessageoftheDay();

	void changeMessageoftheDay(const String& newMOTD);

	String getMessageoftheDay();

protected:
	String _param0_setServerName__String_;
	String _param0_changeMessageoftheDay__String_;
};

class ZoneServerHelper : public DistributedObjectClassHelper, public Singleton<ZoneServerHelper> {
	static ZoneServerHelper* staticInitializer;

public:
	ZoneServerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ZoneServerHelper>;
};

} // namespace zone
} // namespace server

using namespace server::zone;

#endif /*ZONESERVER_H_*/
