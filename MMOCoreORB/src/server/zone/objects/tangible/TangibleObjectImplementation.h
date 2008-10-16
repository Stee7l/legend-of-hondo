/*
Copyright (C) 2007 <SWGEmu>

This File is part of Core3.

This program is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software
Foundation; either version 2 of the License,
or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General
Public License along with this program; if not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Linking Engine3 statically or dynamically with other modules
is making a combined work based on Engine3.
Thus, the terms and conditions of the GNU Lesser General Public License
cover the whole combination.

In addition, as a special exception, the copyright holders of Engine3
give you permission to combine Engine3 program with free software
programs or libraries that are released under the GNU LGPL and with
code included in the standard release of Core3 under the GNU LGPL
license (or modified versions of such code, with unchanged license).
You may copy and distribute such a system following the terms of the
GNU LGPL for Engine3 and the licenses of the other code concerned,
provided that you include the source code of that other code when
and as the GNU LGPL requires distribution of source code.

Note that people who make modified versions of Engine3 are not obligated
to grant this special exception for their modified versions;
it is their choice whether to do so. The GNU Lesser General Public License
gives permission to release a modified version without this exception;
this exception also makes it possible to release a modified version
which carries forward this exception.
*/

#ifndef TANGIBLEOBJECTIMPLEMENTATION_H_
#define TANGIBLEOBJECTIMPLEMENTATION_H_

#include "engine/engine.h"

#include "../../../db/ServerDatabase.h"

#include "../scene/SceneObject.h"

#include "ItemAttributes.h"

#include "TangibleObject.h"
#include "CustomizationVariables.h"

#include "../../packets/scene/AttributeListMessage.h"

#include "../draftschematic/DraftSchematicValues.h"

class Zone;
class CreatureObject;
class Player;
class BuildingObject;

class TangibleObjectImplementation : public TangibleObjectServant {
protected:
	Zone* zone;

	int conditionDamage;
	int maxCondition;

	bool persistent, updated;

	uint32 templateID;
	int objectSubType;

	SceneObject* container;

	BuildingObject* building;

	unicode name;
	string templateTypeName;
	string templateName;

	string attributeString;

	CustomizationVariables customizationVars;

	int objectCount;

	bool equipped;

	uint32 pvpStatusBitmask;

	uint16 playerUseMask;

	ItemAttributes* itemAttributes;
	
	string misoAsocKey; //Mission association key

	string craftersName;
	string craftedSerial;

public:
	static const int HAIR = 0x30000001;
	static const int TERMINAL = 0x30000002;
	static const int TICKETCOLLECTOR = 0x30000003;
	static const int LAIR = 0x30000004;
	static const int HOLOCRON = 0x30000005;
	static const int SHIPCOMPONENT = 0x30000006;

	static const int ARMOR = 0x100;
	static const int BODYARMOR = 0x101;
	static const int HEADARMOR = 0x102;
	static const int MISCARMOR = 0x103;
	static const int LEGARMOR = 0x104;
	static const int ARMARMOR = 0x105;
	static const int HANDARMOR = 0x106;
	static const int FOOTARMOR = 0x107;
	static const int SHIELDGENERATOR = 0x108;

	static const int DATA = 0x800;
	static const int DRAFTSCHEMATIC = 0x801;
	static const int MANUFACTURINGSCHEMATIC = 0x802;
	static const int MISSIONOBJECT = 0x803;
	static const int TOKEN = 0x804;
	static const int WAYPOINT = 0x805;
	static const int DATA2 = 0x806;
	static const int PETCONTROLDEVICE = 0x807;
	static const int VEHICLECONTROLDEVICE = 0x808;
	static const int SHIPCONTROLDEVICE = 0x80A;
	static const int DROIDCONTROLDEVICE = 0x80B;

	static const int MISC = 0x2000;
	static const int AMMUNITION = 0x2001;
	static const int CHEMICAL = 0x2002;
	static const int CONTAINER = 0x2005;
	static const int CRAFTINGSTATION = 0x2006;
	static const int ELECTRONICS = 0x2008;
	static const int FLORA = 0x2009;
	static const int FOOD = 0x200A;
	static const int FURNITURE = 0x200B;
	static const int INSTRUMENT = 0x200C;
	static const int PHARMACEUTICAL = 0x200D;
	static const int SIGN = 0x200F;
	static const int COUNTER = 0x2010;
	static const int FACTORYCRATE = 0x2011;
	static const int TRAVELTICKET = 0x2012;
	static const int GENERICITEM = 0x2013;
	static const int TRAP = 0x2014;
	static const int WEARABLECONTAINER = 0x2015;
	static const int FISHINGPOLE = 0x2016;
	static const int FISHINGBAIT = 0x2017;
	static const int DRINK = 0x2018;
	static const int FIREWORK = 0x2019;
	static const int ITEM = 0x201A;
	static const int PETMEDECINE = 0x201B;
	static const int FIREWORKSHOW = 0x201C;
	static const int CLOTHINGATTACHMENT = 0x201D;
	static const int LIVESAMPLE = 0x201E;
	static const int ARMORATTACHMENT = 0x201F;
	static const int COMMUNITYCRAFTINGPROJECT = 0x2020;
	static const int CRYSTAL = 0x2021;
	static const int DROIDPROGRAMMINGCHIP = 0x2022;
	static const int ASTEROID = 0x2023;
	static const int PILOTCHAIR = 0x2024;
	static const int OPERATIONSCHAIR = 0x2025;
	static const int TURRETACCESSLADDER = 0x2026;
	static const int CONTAINER2 = 0x2027;

	static const int TOOL = 0x8000;
	static const int CRAFTINGTOOL = 0x8001;
	static const int SURVEYTOOL = 0x8002;
	static const int REPAIRTOOL = 0x8003;
	static const int CAMPKIT = 0x8004;
	static const int SHIPCOMPONENTREPAIRITEM = 0x8005;

	static const int VEHICLE = 0x10000;
	static const int HOVERVEHICLE = 0x10001;

	static const int WEAPON = 0x20000;
	static const int MELEEWEAPON = 0x20001;
	static const int RANGEDWEAPON = 0x20002;
	static const int THROWNWEAPON = 0x20003;
	static const int HEAVYWEAPON = 0x20004;
	static const int MINE = 0x20005;
	static const int SPECIALHEAVYWEAPON = 0x20006;
	static const int ONEHANDMELEEWEAPON = 0x20007;
	static const int TWOHANDMELEEWEAPON = 0x20008;
	static const int POLEARM = 0x20009;
	static const int PISTOL = 0x2000A;
	static const int CARBINE = 0x2000B;
	static const int RIFLE = 0x2000C;

	static const int COMPONENT = 0x40000;

	static const int RESOURCECONTAINER = 0x400000;
	static const int ENERGYGAS = 0x400001;
	static const int ENERGYLIQUID = 0x400002;
	static const int ENERGYRADIOACTIVE = 0x400003;
	static const int ENERGYSOLID = 0x400004;
	static const int INORGANICCHEMICAL = 0x400005;
	static const int INORGANICGAS = 0x400006;
	static const int INORGANICMINERAL = 0x400007;
	static const int WATER = 0x400008;
	static const int ORGANICFOOD = 0x400009;
	static const int ORGANICHIDE = 0x40000A;
	static const int ORGANICSTRUCTURAL = 0x40000B;

	static const int WEAPONPOWERUP = 0x80000;
	static const int MELEEWEAPONPOWERUP = 0x80001;
	static const int RANGEDWEAPONPOWERUP = 0x80002;
	static const int THROWNWEAPONPOWERUP = 0x80003;
	static const int HEAVYWEAPONPOWERUP = 0x80004;
	static const int MINEPOWERUP = 0x80005;
	static const int SPECIALHEAVYWEAPONPOWERUP = 0x80006;

	static const int LIGHTSABER = 0x2000000;
	static const int ONEHANDSABER = 0x2000001;
	static const int TWOHANDSABER = 0x2000002;
	static const int POLEARMSABER = 0x2000003;


	// INSTALLATIONS
	static const int INSTALLATION = 4096;
	static const int FACTORY = 4097;
	static const int GENERATOR = 4098;
	static const int HARVESTER = 4099;
	static const int TURRET = 4010;
	static const int MINEFIELD = 4011;

	// DEEDS
	static const int DEED = 0x800000;
	static const int BUILDINGDEED = 0x800001;
	static const int INSTALLATIONDEED = 0x800002;
	static const int PETDEED = 0x800003;
	static const int DROIDDEED = 0x800004;
	static const int VEHICLEDEED = 0x800005;

	static const int CLOTHING = 0x1000000;
	static const int BANDOLIER = 0x1000001;
	static const int BELT = 0x1000002;
	static const int BODYSUIT = 0x1000003;
	static const int CAPE = 0x1000004;
	static const int CLOAK = 0x1000005;
	static const int FOOTWEAR = 0x1000006;
	static const int DRESS = 0x1000007;
	static const int HANDWEAR = 0x1000008;
	static const int EYEWEAR = 0x1000009;
	static const int HEADWEAR = 0x100000A;
	static const int JACKET = 0x100000B;
	static const int PANTS = 0x100000C;
	static const int ROBE = 0x100000D;
	static const int SHIRT = 0x100000E;
	static const int VEST = 0x100000F;
	static const int WOOKIEGARB = 0x1000010;
	static const int MISCCLOTHING = 0x1000011;
	static const int SKIRT = 0x1000012;
	static const int ITHOGARB = 0x1000013;

	static const uint16 MALE = 0x01;
	static const uint16 FEMALE = 0x02;

	static const uint16 HUMAN = 0x004;
	static const uint16 TRANDOSHAN = 0x008;
	static const uint16 TWILEK = 0x010;
	static const uint16 BOTHAN = 0x020;
	static const uint16 ZABRAK = 0x040;
	static const uint16 RODIAN = 0x080;
	static const uint16 MONCALAMARI = 0x100;
	static const uint16 WOOKIEE = 0x200;
	static const uint16 SULLUSTAN = 0x400;
	static const uint16 ITHORIAN = 0x800;

	static const uint16 NEUTRAL = 0x1000;
	static const uint16 IMPERIAL = 0x2000;
	static const uint16 REBEL = 0x4000;
	static const uint16 COVERT = 0x8000;

	static const uint16 ALL = 0xFFFF;
	static const uint16 ALLSEXES = MALE | FEMALE;
	static const uint16 ALLFACTIONS = NEUTRAL | IMPERIAL | REBEL | COVERT;
	static const uint16 HUMANOIDS = ALL & ~(WOOKIEE | ITHORIAN);
	static const uint16 HUMANOID_FOOTWEAR = HUMANOIDS & ~TRANDOSHAN;
	static const uint16 HUMANOID_MALES = HUMANOIDS & ~FEMALE;
	static const uint16 HUMANOID_FEMALES = HUMANOIDS & ~MALE;
	static const uint16 HUMANOID_IMPERIALS = HUMANOIDS & ~(REBEL | NEUTRAL | COVERT);
	static const uint16 HUMANOID_REBELS = HUMANOIDS & ~(IMPERIAL | NEUTRAL | COVERT);
	static const uint16 WOOKIEES = WOOKIEE | ALLSEXES | ALLFACTIONS;
	static const uint16 ITHORIANS = ITHORIAN | ALLSEXES | ALLFACTIONS;
	static const uint16 TWILEKS = TWILEK | ALLSEXES | ALLFACTIONS;

public:
	TangibleObjectImplementation(uint64 oid, int tp = 0);
	TangibleObjectImplementation(uint64 oid, uint32 tempCRC, const unicode& name, const string& tempname, int tp = 0);
	TangibleObjectImplementation(CreatureObject* creature, uint32 tempCRC, const unicode& name, const string& tempname, int tp = 0);

	~TangibleObjectImplementation();

	void initialize();

	// This function should be called for all character items
	void parseAttributes();

	virtual void parseItemAttributes() {
	}

	virtual void updateCraftingValues(DraftSchematic* draftSchematic) {

	}

	inline void setPlayerUseMask(uint16 mask) {
		playerUseMask = mask;
	}

	inline uint16 getPlayerUseMask() {
		return playerUseMask;
	}

	void generateSkillMods(class AttributeListMessage* alm, int skillModType, int skillModValue);

	void sendTo(Player* player, bool doClose = true);

	void sendDestroyTo(Player* player);

	void sendDeltas(Player* player);

	void close(Player* player);

	void repairItem(Player* player);

	void setObjectName(Player * player);

	virtual void decay(int decayRate);

	virtual void addAttributes(AttributeListMessage* alm);

	// setters and getters
	inline void setContainer(SceneObject* cont, uint32 type = 0x04) {
		container = cont;
		linkType = type;
	}

	inline void setPersistent(bool pers) {
		persistent = pers;
	}

	inline void setUpdated(bool upd) {
		updated = upd;
	}

	inline void setEquipped(bool eqp) {
		equipped = eqp;
	}

	inline void setCustomizationString(string& cust) {
		customizationVars = cust;
	}

	inline void setCondition(int current, int max){
		itemAttributes->setCondition(current, max);
		maxCondition = max;
		conditionDamage = max - current;
	}

	inline void setMaxCondition(int maxCond) {
		maxCondition = maxCond;
		itemAttributes->setCondition((maxCond - conditionDamage), maxCond);
	}

	inline void setConditionDamage(int damage) {
		conditionDamage = damage;
		itemAttributes->setCondition((maxCondition - damage), maxCondition);
	}

	inline void setCustomizationVariable(uint8 type, uint16 value) {
		customizationVars.setVariable(type, value);
	}

	inline void setCustomizationVariable(const string type, uint8 value) {
		customizationVars.setVariable(type, value);
	}

	inline void setCraftersName(string& n){
		craftersName = n;
		string temp = "craftersname";
		itemAttributes->setStringAttribute(temp, n);
	}

	inline void setCraftedSerial(string& s){
		craftedSerial = s;
		string temp = "craftedserial";
		itemAttributes->setStringAttribute(temp, s);
	}

	inline void setObjectCount(const int count) {
		if (count == 1) {

			objectCount = 0;

		} else {

			objectCount = count;

		}
	}

	inline bool isPersistent() {
		return persistent;
	}

	inline bool isUpdated() {
		return updated;
	}

	inline SceneObject* getContainer() {
		return container;
	}

	inline void setName(const string& n) {
		name = n;
	}

	inline void setName(const unicode& n) {
		name = n;
	}

	inline unicode& getName() {
		return name;
	}

	inline uint32 getTemplateID() {
		return templateID;
	}

	inline void setTemplateName(const string& tempName) {
		templateName = tempName;
	}

	inline string& getTemplateName() {
		return templateName;
	}

	inline void getCustomizationString(string& appearance) {
		return customizationVars.toString(appearance);
	}

	inline void setTemplateTypeName(const string& tempTypeName) {
		templateTypeName = tempTypeName;
	}

	inline string& getTemplateTypeName() {
		return templateTypeName;
	}

	inline int getObjectCount() {
		return objectCount;
	}

	inline bool isEquipped() {
		return equipped;
	}

	inline void setAttributes(string& attributestring) {
		itemAttributes->setAttributes(attributestring);
	}

	inline string& getAttributes() {
		itemAttributes->getAttributeString(attributeString);
		return attributeString;
	}

	inline void setObjectSubType(const int type) {
		objectSubType = type;
	}

	inline string& getCraftersName(){
		return craftersName;
	}

	inline string& getCraftedSerial(){
		return craftedSerial;
	}

	inline int getObjectSubType() {
		return objectSubType;
	}
	
	inline string& getMisoAsocKey() {
		return misoAsocKey;
	}
	
	inline void setMisoAsocKey(const string& tma) {
		misoAsocKey = tma;
	}

	inline bool isWeapon() {
		return (objectSubType & WEAPON || objectSubType & LIGHTSABER);
	}

	inline bool isArmor() {
		return (objectSubType & ARMOR);
	}

	inline bool isClothing() {
		return (objectSubType & CLOTHING);
	}

	inline bool isAttachment() {
		return (objectSubType == ARMORATTACHMENT || objectSubType == CLOTHINGATTACHMENT);
	}

	inline bool isResource() {
		return (objectSubType & RESOURCECONTAINER);
	}

	inline bool isSurveyTool() {
		return objectSubType == SURVEYTOOL;
	}

	inline bool isTicket() {
		return objectSubType == TRAVELTICKET;
	}

	inline bool isInstrument() {
		return objectSubType == INSTRUMENT;
	}

	inline bool isTicketCollector() {
		return objectSubType == TICKETCOLLECTOR;
	}

	inline bool isHolocron() {
		return objectSubType == HOLOCRON;
	}

	inline bool isFirework() {
		return objectSubType == FIREWORK;
	}

	inline bool isDeed() {
		return ((objectSubType == INSTALLATIONDEED) || (objectSubType
				== BUILDINGDEED) || (objectSubType == PETDEED)
				|| (objectSubType == DROIDDEED) || (objectSubType
				== VEHICLEDEED) || (objectSubType == DEED));
	}


	inline bool isLair() {
		return objectSubType == LAIR;
	}

	inline bool isCraftingStation() {
		return objectSubType == CRAFTINGSTATION;
	}

	inline bool isCraftingTool() {
		return objectSubType == CRAFTINGTOOL;
	}

	inline bool isComponent() {
		return objectSubType == COMPONENT;
	}

	inline bool isPharmaceutical() {
		return objectSubType == PHARMACEUTICAL;
	}

	inline bool isWeaponPowerup() {
		return objectSubType == WEAPONPOWERUP;
	}

	inline int getConditionDamage() {
		return conditionDamage;
	}

	inline int getMaxCondition() {
		return maxCondition;
	}

	inline int getCondition() {
		return maxCondition - conditionDamage;
	}


};

#endif /*TANGIBLEOBJECTIMPLEMENTATION_H_*/
