#include "../../../player/Player.h"
#include "../../../../packets.h"

#include "FactoryDeed.h"
#include "FactoryDeedImplementation.h"
#include "../DeedObject.h"
#include "../DeedObjectImplementation.h"

FactoryDeedImplementation::FactoryDeedImplementation(CreatureObject* creature, uint32 tempcrc, const unicode& n, const string& tempn)
	: FactoryDeedServant(creature->getNewItemID(), tempcrc, n, tempn, INSTALLATIONDEED) {
	objectCRC = tempcrc;
	name = n;
	templateName = tempn;

	init();
}

FactoryDeedImplementation::FactoryDeedImplementation(uint64 objid, uint32 tempcrc, const unicode& n, const string& tempn)
	: FactoryDeedServant(objid, tempcrc, n, tempn, INSTALLATIONDEED) {
	objectID = objid;
	objectCRC = tempcrc;
	name = n;
	templateName = tempn;

	init();
}
FactoryDeedImplementation::~FactoryDeedImplementation() {

}
void FactoryDeedImplementation::init() {

	deedSubType = FACTORY;
	targetTempFile = "object/installation/base/shared_construction_installation_base.iff";

	if ((templateName.find("clothing") != string::npos)){
		type = WEARABLES;
		targetTemplate = "clothing_factory";
		targetFile
				= "object/installation/manufacture/shared_clothing_factory.iff";
		targetName = unicode("Clothing Factory");
	}
	else if ((templateName.find("food") != string::npos)){
		type = FOOD;
		targetTemplate = "food_factory";
		targetFile
				= "object/installation/manufacture/shared_food_factory.iff";
		targetName = unicode("Food Factory");
	}
	else if ((templateName.find("structure") != string::npos)){
		type = STRUCTURE;
		targetTemplate = "structure_factory";
		targetFile
				= "object/installation/manufacture/shared_structure_factory.iff";
		targetName = unicode("Structure Factory");
	}
	else {
		type = EQUIPMENT;
		targetTemplate = "weapon_factory";
		targetFile
				= "object/installation/manufacture/shared_weapon_factory.iff";
		targetName = unicode("Equipment Factory");
	}
}

