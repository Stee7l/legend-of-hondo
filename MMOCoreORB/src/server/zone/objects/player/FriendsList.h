/*
 *	server/zone/objects/player/FriendsList.h generated by engine3 IDL compiler 0.55
 */

#ifndef FRIENDSLIST_H_
#define FRIENDSLIST_H_

#include "engine/orb/DistributedObjectBroker.h"

class Player;

class PlayerManager;

class PlayerObject;

class FriendsList : public DistributedObjectStub {
public:
	FriendsList(Player* player);

	int getCount();

	int getMagicNumber();

	string& getFriendsName(const int i);

	string& getFriendsServer(const int i);

	void addFriend(string& name, string& inServer);

	void friendsMagicNumberReset();

	void removeFriend(string& name);

	void findFriend(string& name, PlayerManager* playerManager);

	void saveFriends();

	void loadFriends();

	void updateAllFriends(PlayerObject* playerObject);

	void toString();

protected:
	FriendsList(DummyConstructorParameter* param);

	virtual ~FriendsList();

	string _return_getFriendsName;
	string _return_getFriendsServer;

	friend class FriendsListHelper;
};

class FriendsListImplementation;

class FriendsListAdapter : public DistributedObjectAdapter {
public:
	FriendsListAdapter(FriendsListImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int getCount();

	int getMagicNumber();

	string& getFriendsName(const int i);

	string& getFriendsServer(const int i);

	void addFriend(string& name, string& inServer);

	void friendsMagicNumberReset();

	void removeFriend(string& name);

	void findFriend(string& name, PlayerManager* playerManager);

	void saveFriends();

	void loadFriends();

	void updateAllFriends(PlayerObject* playerObject);

	void toString();

protected:
	string _param0_addFriend__string_string_;
	string _param1_addFriend__string_string_;
	string _param0_removeFriend__string_;
	string _param0_findFriend__string_PlayerManager_;
};

class FriendsListHelper : public DistributedObjectClassHelper, public Singleton<FriendsListHelper> {
	static FriendsListHelper* staticInitializer;

public:
	FriendsListHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<FriendsListHelper>;
};

class FriendsListServant : public DistributedObjectServant {
public:
	FriendsList* _this;

public:
	FriendsListServant();
	virtual ~FriendsListServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*FRIENDSLIST_H_*/
