/*
 *	server/zone/objects/tangible/tool/CraftingTool.cpp generated by engine3 IDL compiler 0.60
 */

#include "CraftingTool.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/draftschematic/DraftSchematic.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/managers/crafting/CraftingManager.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

#include "server/zone/objects/area/ActiveArea.h"

#include "server/zone/packets/scene/AttributeListMessage.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/templates/SharedObjectTemplate.h"

/*
 *	CraftingToolStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_,RPC_UPDATECRAFTINGVALUES__MANUFACTURESCHEMATIC_,RPC_ISCRAFTINGTOOL__,RPC_ISREADY__,RPC_GETTOOLTYPE__,RPC_GETPROTOTYPE__,RPC_GETMANUFACTURESCHEMATIC__,RPC_REQUESTCRAFTINGSESSION__CREATUREOBJECT_CRAFTINGSTATION_,RPC_CANCELCRAFTINGSESSION__CREATUREOBJECT_,RPC_CLEARCRAFTINGSESSION__,RPC_SELECTDRAFTSCHEMATIC__CREATUREOBJECT_INT_,RPC_CREATESESSIONOBJECTS__CREATUREOBJECT_DRAFTSCHEMATIC_,RPC_CREATEMANUFACTURESCHEMATIC__CREATUREOBJECT_DRAFTSCHEMATIC_,RPC_CREATEPROTOTYPE__CREATUREOBJECT_DRAFTSCHEMATIC_,RPC_SYNCHRONIZEDUILISTENFORSCHEMATIC__CREATUREOBJECT_,RPC_ADDINGREDIENT__CREATUREOBJECT_TANGIBLEOBJECT_INT_INT_,RPC_REMOVEINGREDIENT__CREATUREOBJECT_TANGIBLEOBJECT_INT_INT_,RPC_NEXTCRAFTINGSTAGE__CREATUREOBJECT_INT_,RPC_EXPERIMENT__CREATUREOBJECT_INT_STRING_INT_,RPC_CUSTOMIZATION__CREATUREOBJECT_STRING_BYTE_INT_STRING_,RPC_CREATEPROTOTYPE__CREATUREOBJECT_INT_INT_,RPC_CREATEMANFSCHEMATIC__CREATUREOBJECT_INT_,RPC_CREATEOBJECT__CREATUREOBJECT_INT_BOOL_,RPC_DEPOSITOBJECT__CREATUREOBJECT_BOOL_,RPC_GETLASTEXPERIMENTATIONTIMESTAMP__,RPC_GETEXPERIMENTATIONRESULT__};

CraftingTool::CraftingTool() : ToolTangibleObject(DummyConstructorParameter::instance()) {
	CraftingToolImplementation* _implementation = new CraftingToolImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

CraftingTool::CraftingTool(DummyConstructorParameter* param) : ToolTangibleObject(param) {
}

CraftingTool::~CraftingTool() {
}


void CraftingTool::initializeTransientMembers() {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void CraftingTool::loadTemplateData(SharedObjectTemplate* templateData) {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void CraftingTool::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, CreatureObject* player) {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillObjectMenuResponse(menuResponse, player);
}

int CraftingTool::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

void CraftingTool::fillAttributeList(AttributeListMessage* msg, CreatureObject* object) {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillAttributeList(msg, object);
}

void CraftingTool::updateCraftingValues(ManufactureSchematic* schematic) {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATECRAFTINGVALUES__MANUFACTURESCHEMATIC_);
		method.addObjectParameter(schematic);

		method.executeWithVoidReturn();
	} else
		_implementation->updateCraftingValues(schematic);
}

bool CraftingTool::isCraftingTool() {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISCRAFTINGTOOL__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isCraftingTool();
}

bool CraftingTool::isReady() {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISREADY__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isReady();
}

int CraftingTool::getToolType() {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTOOLTYPE__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getToolType();
}

TangibleObject* CraftingTool::getPrototype() {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPROTOTYPE__);

		return (TangibleObject*) method.executeWithObjectReturn();
	} else
		return _implementation->getPrototype();
}

ManufactureSchematic* CraftingTool::getManufactureSchematic() {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMANUFACTURESCHEMATIC__);

		return (ManufactureSchematic*) method.executeWithObjectReturn();
	} else
		return _implementation->getManufactureSchematic();
}

Vector<unsigned int>* CraftingTool::getToolTabs() {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getToolTabs();
}

void CraftingTool::requestCraftingSession(CreatureObject* player, CraftingStation* craftingStation) {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REQUESTCRAFTINGSESSION__CREATUREOBJECT_CRAFTINGSTATION_);
		method.addObjectParameter(player);
		method.addObjectParameter(craftingStation);

		method.executeWithVoidReturn();
	} else
		_implementation->requestCraftingSession(player, craftingStation);
}

void CraftingTool::cancelCraftingSession(CreatureObject* player) {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANCELCRAFTINGSESSION__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->cancelCraftingSession(player);
}

void CraftingTool::clearCraftingSession() {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARCRAFTINGSESSION__);

		method.executeWithVoidReturn();
	} else
		_implementation->clearCraftingSession();
}

void CraftingTool::selectDraftSchematic(CreatureObject* player, int index) {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SELECTDRAFTSCHEMATIC__CREATUREOBJECT_INT_);
		method.addObjectParameter(player);
		method.addSignedIntParameter(index);

		method.executeWithVoidReturn();
	} else
		_implementation->selectDraftSchematic(player, index);
}

bool CraftingTool::createSessionObjects(CreatureObject* player, DraftSchematic* draftschematic) {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATESESSIONOBJECTS__CREATUREOBJECT_DRAFTSCHEMATIC_);
		method.addObjectParameter(player);
		method.addObjectParameter(draftschematic);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->createSessionObjects(player, draftschematic);
}

bool CraftingTool::createManufactureSchematic(CreatureObject* player, DraftSchematic* draftschematic) {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATEMANUFACTURESCHEMATIC__CREATUREOBJECT_DRAFTSCHEMATIC_);
		method.addObjectParameter(player);
		method.addObjectParameter(draftschematic);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->createManufactureSchematic(player, draftschematic);
}

bool CraftingTool::createPrototype(CreatureObject* player, DraftSchematic* draftschematic) {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATEPROTOTYPE__CREATUREOBJECT_DRAFTSCHEMATIC_);
		method.addObjectParameter(player);
		method.addObjectParameter(draftschematic);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->createPrototype(player, draftschematic);
}

void CraftingTool::synchronizedUIListenForSchematic(CreatureObject* player) {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SYNCHRONIZEDUILISTENFORSCHEMATIC__CREATUREOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->synchronizedUIListenForSchematic(player);
}

void CraftingTool::addIngredient(CreatureObject* player, TangibleObject* tano, int slot, int clientCounter) {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDINGREDIENT__CREATUREOBJECT_TANGIBLEOBJECT_INT_INT_);
		method.addObjectParameter(player);
		method.addObjectParameter(tano);
		method.addSignedIntParameter(slot);
		method.addSignedIntParameter(clientCounter);

		method.executeWithVoidReturn();
	} else
		_implementation->addIngredient(player, tano, slot, clientCounter);
}

void CraftingTool::removeIngredient(CreatureObject* player, TangibleObject* tano, int slot, int clientCounter) {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_REMOVEINGREDIENT__CREATUREOBJECT_TANGIBLEOBJECT_INT_INT_);
		method.addObjectParameter(player);
		method.addObjectParameter(tano);
		method.addSignedIntParameter(slot);
		method.addSignedIntParameter(clientCounter);

		method.executeWithVoidReturn();
	} else
		_implementation->removeIngredient(player, tano, slot, clientCounter);
}

void CraftingTool::nextCraftingStage(CreatureObject* player, int clientCounter) {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NEXTCRAFTINGSTAGE__CREATUREOBJECT_INT_);
		method.addObjectParameter(player);
		method.addSignedIntParameter(clientCounter);

		method.executeWithVoidReturn();
	} else
		_implementation->nextCraftingStage(player, clientCounter);
}

void CraftingTool::experiment(CreatureObject* player, int numRowsAttempted, String& expString, int clientCounter) {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_EXPERIMENT__CREATUREOBJECT_INT_STRING_INT_);
		method.addObjectParameter(player);
		method.addSignedIntParameter(numRowsAttempted);
		method.addAsciiParameter(expString);
		method.addSignedIntParameter(clientCounter);

		method.executeWithVoidReturn();
	} else
		_implementation->experiment(player, numRowsAttempted, expString, clientCounter);
}

void CraftingTool::customization(CreatureObject* player, String& name, byte templateChoice, int schematicCount, String& customization) {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CUSTOMIZATION__CREATUREOBJECT_STRING_BYTE_INT_STRING_);
		method.addObjectParameter(player);
		method.addAsciiParameter(name);
		method.addByteParameter(templateChoice);
		method.addSignedIntParameter(schematicCount);
		method.addAsciiParameter(customization);

		method.executeWithVoidReturn();
	} else
		_implementation->customization(player, name, templateChoice, schematicCount, customization);
}

void CraftingTool::createPrototype(CreatureObject* player, int clientCounter, int practice) {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATEPROTOTYPE__CREATUREOBJECT_INT_INT_);
		method.addObjectParameter(player);
		method.addSignedIntParameter(clientCounter);
		method.addSignedIntParameter(practice);

		method.executeWithVoidReturn();
	} else
		_implementation->createPrototype(player, clientCounter, practice);
}

void CraftingTool::createManfSchematic(CreatureObject* player, int clientCounter) {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATEMANFSCHEMATIC__CREATUREOBJECT_INT_);
		method.addObjectParameter(player);
		method.addSignedIntParameter(clientCounter);

		method.executeWithVoidReturn();
	} else
		_implementation->createManfSchematic(player, clientCounter);
}

void CraftingTool::createObject(CreatureObject* player, int timer, bool create) {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CREATEOBJECT__CREATUREOBJECT_INT_BOOL_);
		method.addObjectParameter(player);
		method.addSignedIntParameter(timer);
		method.addBooleanParameter(create);

		method.executeWithVoidReturn();
	} else
		_implementation->createObject(player, timer, create);
}

void CraftingTool::depositObject(CreatureObject* player, bool practice) {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DEPOSITOBJECT__CREATUREOBJECT_BOOL_);
		method.addObjectParameter(player);
		method.addBooleanParameter(practice);

		method.executeWithVoidReturn();
	} else
		_implementation->depositObject(player, practice);
}

unsigned long long CraftingTool::getLastExperimentationTimestamp() {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETLASTEXPERIMENTATIONTIMESTAMP__);

		return method.executeWithUnsignedLongReturn();
	} else
		return _implementation->getLastExperimentationTimestamp();
}

int CraftingTool::getExperimentationResult() {
	CraftingToolImplementation* _implementation = (CraftingToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETEXPERIMENTATIONRESULT__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getExperimentationResult();
}

DistributedObjectServant* CraftingTool::_getImplementation() {

	_updated = true;
	return _impl;
}

void CraftingTool::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	CraftingToolImplementation
 */

CraftingToolImplementation::CraftingToolImplementation(DummyConstructorParameter* param) : ToolTangibleObjectImplementation(param) {
	_initializeImplementation();
}


CraftingToolImplementation::~CraftingToolImplementation() {
}


void CraftingToolImplementation::finalize() {
}

void CraftingToolImplementation::_initializeImplementation() {
	_setClassHelper(CraftingToolHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void CraftingToolImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (CraftingTool*) stub;
	ToolTangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* CraftingToolImplementation::_getStub() {
	return _this;
}

CraftingToolImplementation::operator const CraftingTool*() {
	return _this;
}

void CraftingToolImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void CraftingToolImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void CraftingToolImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void CraftingToolImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void CraftingToolImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void CraftingToolImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void CraftingToolImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void CraftingToolImplementation::_serializationHelperMethod() {
	ToolTangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("CraftingTool");

}

void CraftingToolImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(CraftingToolImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool CraftingToolImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ToolTangibleObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "type") {
		TypeInfo<int >::parseFromBinaryStream(&type, stream);
		return true;
	}

	if (_name == "effectiveness") {
		TypeInfo<float >::parseFromBinaryStream(&effectiveness, stream);
		return true;
	}

	if (_name == "status") {
		TypeInfo<String >::parseFromBinaryStream(&status, stream);
		return true;
	}

	if (_name == "complexityLevel") {
		TypeInfo<int >::parseFromBinaryStream(&complexityLevel, stream);
		return true;
	}

	if (_name == "craftingManager") {
		TypeInfo<ManagedReference<CraftingManager* > >::parseFromBinaryStream(&craftingManager, stream);
		return true;
	}

	if (_name == "enabledTabs") {
		TypeInfo<Vector<unsigned int> >::parseFromBinaryStream(&enabledTabs, stream);
		return true;
	}

	if (_name == "currentSchematicList") {
		TypeInfo<Vector<ManagedReference<DraftSchematic* > > >::parseFromBinaryStream(&currentSchematicList, stream);
		return true;
	}

	if (_name == "craftingStation") {
		TypeInfo<ManagedReference<CraftingStation* > >::parseFromBinaryStream(&craftingStation, stream);
		return true;
	}

	if (_name == "state") {
		TypeInfo<int >::parseFromBinaryStream(&state, stream);
		return true;
	}


	return false;
}

void CraftingToolImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CraftingToolImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CraftingToolImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "type";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&type, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "effectiveness";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&effectiveness, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "status";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&status, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "complexityLevel";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&complexityLevel, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "craftingManager";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<CraftingManager* > >::toBinaryStream(&craftingManager, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "enabledTabs";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<Vector<unsigned int> >::toBinaryStream(&enabledTabs, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "currentSchematicList";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<Vector<ManagedReference<DraftSchematic* > > >::toBinaryStream(&currentSchematicList, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "craftingStation";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<CraftingStation* > >::toBinaryStream(&craftingStation, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "state";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&state, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 9 + ToolTangibleObjectImplementation::writeObjectMembers(stream);
}

CraftingToolImplementation::CraftingToolImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		Logger.setLoggingName("CraftingTool");
	Logger::setLoggingName("CraftingTool");
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		status = "@crafting:tool_status_ready";
	status = "@crafting:tool_status_ready";
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		state = 1;
	state = 1;
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		effectiveness = -15;
	effectiveness = -15;
}

void CraftingToolImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		super.initializeTransientMembers();
	ToolTangibleObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		lastExperimentationTimestamp = 0;
	lastExperimentationTimestamp = 0;
}

bool CraftingToolImplementation::isCraftingTool() {
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		return true;
	return true;
}

bool CraftingToolImplementation::isReady() {
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		return status == "@crafting:tool_status_ready";
	return status == "@crafting:tool_status_ready";
}

int CraftingToolImplementation::getToolType() {
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		return type;
	return type;
}

ManufactureSchematic* CraftingToolImplementation::getManufactureSchematic() {
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		return (ManufactureSchematic)getSlottedObject("test_manf_schematic");
	return (ManufactureSchematic*) getSlottedObject("test_manf_schematic");
}

unsigned long long CraftingToolImplementation::getLastExperimentationTimestamp() {
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		return lastExperimentationTimestamp;
	return lastExperimentationTimestamp;
}

int CraftingToolImplementation::getExperimentationResult() {
	// server/zone/objects/tangible/tool/CraftingTool.idl():  		return experimentationResult;
	return experimentationResult;
}

/*
 *	CraftingToolAdapter
 */

CraftingToolAdapter::CraftingToolAdapter(CraftingToolImplementation* obj) : ToolTangibleObjectAdapter(obj) {
}

Packet* CraftingToolAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_HANDLEOBJECTMENUSELECT__CREATUREOBJECT_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect((CreatureObject*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case RPC_UPDATECRAFTINGVALUES__MANUFACTURESCHEMATIC_:
		updateCraftingValues((ManufactureSchematic*) inv->getObjectParameter());
		break;
	case RPC_ISCRAFTINGTOOL__:
		resp->insertBoolean(isCraftingTool());
		break;
	case RPC_ISREADY__:
		resp->insertBoolean(isReady());
		break;
	case RPC_GETTOOLTYPE__:
		resp->insertSignedInt(getToolType());
		break;
	case RPC_GETPROTOTYPE__:
		resp->insertLong(getPrototype()->_getObjectID());
		break;
	case RPC_GETMANUFACTURESCHEMATIC__:
		resp->insertLong(getManufactureSchematic()->_getObjectID());
		break;
	case RPC_REQUESTCRAFTINGSESSION__CREATUREOBJECT_CRAFTINGSTATION_:
		requestCraftingSession((CreatureObject*) inv->getObjectParameter(), (CraftingStation*) inv->getObjectParameter());
		break;
	case RPC_CANCELCRAFTINGSESSION__CREATUREOBJECT_:
		cancelCraftingSession((CreatureObject*) inv->getObjectParameter());
		break;
	case RPC_CLEARCRAFTINGSESSION__:
		clearCraftingSession();
		break;
	case RPC_SELECTDRAFTSCHEMATIC__CREATUREOBJECT_INT_:
		selectDraftSchematic((CreatureObject*) inv->getObjectParameter(), inv->getSignedIntParameter());
		break;
	case RPC_CREATESESSIONOBJECTS__CREATUREOBJECT_DRAFTSCHEMATIC_:
		resp->insertBoolean(createSessionObjects((CreatureObject*) inv->getObjectParameter(), (DraftSchematic*) inv->getObjectParameter()));
		break;
	case RPC_CREATEMANUFACTURESCHEMATIC__CREATUREOBJECT_DRAFTSCHEMATIC_:
		resp->insertBoolean(createManufactureSchematic((CreatureObject*) inv->getObjectParameter(), (DraftSchematic*) inv->getObjectParameter()));
		break;
	case RPC_CREATEPROTOTYPE__CREATUREOBJECT_DRAFTSCHEMATIC_:
		resp->insertBoolean(createPrototype((CreatureObject*) inv->getObjectParameter(), (DraftSchematic*) inv->getObjectParameter()));
		break;
	case RPC_SYNCHRONIZEDUILISTENFORSCHEMATIC__CREATUREOBJECT_:
		synchronizedUIListenForSchematic((CreatureObject*) inv->getObjectParameter());
		break;
	case RPC_ADDINGREDIENT__CREATUREOBJECT_TANGIBLEOBJECT_INT_INT_:
		addIngredient((CreatureObject*) inv->getObjectParameter(), (TangibleObject*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter());
		break;
	case RPC_REMOVEINGREDIENT__CREATUREOBJECT_TANGIBLEOBJECT_INT_INT_:
		removeIngredient((CreatureObject*) inv->getObjectParameter(), (TangibleObject*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter());
		break;
	case RPC_NEXTCRAFTINGSTAGE__CREATUREOBJECT_INT_:
		nextCraftingStage((CreatureObject*) inv->getObjectParameter(), inv->getSignedIntParameter());
		break;
	case RPC_EXPERIMENT__CREATUREOBJECT_INT_STRING_INT_:
		experiment((CreatureObject*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getAsciiParameter(_param2_experiment__CreatureObject_int_String_int_), inv->getSignedIntParameter());
		break;
	case RPC_CUSTOMIZATION__CREATUREOBJECT_STRING_BYTE_INT_STRING_:
		customization((CreatureObject*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_customization__CreatureObject_String_byte_int_String_), inv->getByteParameter(), inv->getSignedIntParameter(), inv->getAsciiParameter(_param4_customization__CreatureObject_String_byte_int_String_));
		break;
	case RPC_CREATEPROTOTYPE__CREATUREOBJECT_INT_INT_:
		createPrototype((CreatureObject*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter());
		break;
	case RPC_CREATEMANFSCHEMATIC__CREATUREOBJECT_INT_:
		createManfSchematic((CreatureObject*) inv->getObjectParameter(), inv->getSignedIntParameter());
		break;
	case RPC_CREATEOBJECT__CREATUREOBJECT_INT_BOOL_:
		createObject((CreatureObject*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case RPC_DEPOSITOBJECT__CREATUREOBJECT_BOOL_:
		depositObject((CreatureObject*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case RPC_GETLASTEXPERIMENTATIONTIMESTAMP__:
		resp->insertLong(getLastExperimentationTimestamp());
		break;
	case RPC_GETEXPERIMENTATIONRESULT__:
		resp->insertSignedInt(getExperimentationResult());
		break;
	default:
		return NULL;
	}

	return resp;
}

void CraftingToolAdapter::initializeTransientMembers() {
	((CraftingToolImplementation*) impl)->initializeTransientMembers();
}

int CraftingToolAdapter::handleObjectMenuSelect(CreatureObject* player, byte selectedID) {
	return ((CraftingToolImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

void CraftingToolAdapter::updateCraftingValues(ManufactureSchematic* schematic) {
	((CraftingToolImplementation*) impl)->updateCraftingValues(schematic);
}

bool CraftingToolAdapter::isCraftingTool() {
	return ((CraftingToolImplementation*) impl)->isCraftingTool();
}

bool CraftingToolAdapter::isReady() {
	return ((CraftingToolImplementation*) impl)->isReady();
}

int CraftingToolAdapter::getToolType() {
	return ((CraftingToolImplementation*) impl)->getToolType();
}

TangibleObject* CraftingToolAdapter::getPrototype() {
	return ((CraftingToolImplementation*) impl)->getPrototype();
}

ManufactureSchematic* CraftingToolAdapter::getManufactureSchematic() {
	return ((CraftingToolImplementation*) impl)->getManufactureSchematic();
}

void CraftingToolAdapter::requestCraftingSession(CreatureObject* player, CraftingStation* craftingStation) {
	((CraftingToolImplementation*) impl)->requestCraftingSession(player, craftingStation);
}

void CraftingToolAdapter::cancelCraftingSession(CreatureObject* player) {
	((CraftingToolImplementation*) impl)->cancelCraftingSession(player);
}

void CraftingToolAdapter::clearCraftingSession() {
	((CraftingToolImplementation*) impl)->clearCraftingSession();
}

void CraftingToolAdapter::selectDraftSchematic(CreatureObject* player, int index) {
	((CraftingToolImplementation*) impl)->selectDraftSchematic(player, index);
}

bool CraftingToolAdapter::createSessionObjects(CreatureObject* player, DraftSchematic* draftschematic) {
	return ((CraftingToolImplementation*) impl)->createSessionObjects(player, draftschematic);
}

bool CraftingToolAdapter::createManufactureSchematic(CreatureObject* player, DraftSchematic* draftschematic) {
	return ((CraftingToolImplementation*) impl)->createManufactureSchematic(player, draftschematic);
}

bool CraftingToolAdapter::createPrototype(CreatureObject* player, DraftSchematic* draftschematic) {
	return ((CraftingToolImplementation*) impl)->createPrototype(player, draftschematic);
}

void CraftingToolAdapter::synchronizedUIListenForSchematic(CreatureObject* player) {
	((CraftingToolImplementation*) impl)->synchronizedUIListenForSchematic(player);
}

void CraftingToolAdapter::addIngredient(CreatureObject* player, TangibleObject* tano, int slot, int clientCounter) {
	((CraftingToolImplementation*) impl)->addIngredient(player, tano, slot, clientCounter);
}

void CraftingToolAdapter::removeIngredient(CreatureObject* player, TangibleObject* tano, int slot, int clientCounter) {
	((CraftingToolImplementation*) impl)->removeIngredient(player, tano, slot, clientCounter);
}

void CraftingToolAdapter::nextCraftingStage(CreatureObject* player, int clientCounter) {
	((CraftingToolImplementation*) impl)->nextCraftingStage(player, clientCounter);
}

void CraftingToolAdapter::experiment(CreatureObject* player, int numRowsAttempted, String& expString, int clientCounter) {
	((CraftingToolImplementation*) impl)->experiment(player, numRowsAttempted, expString, clientCounter);
}

void CraftingToolAdapter::customization(CreatureObject* player, String& name, byte templateChoice, int schematicCount, String& customization) {
	((CraftingToolImplementation*) impl)->customization(player, name, templateChoice, schematicCount, customization);
}

void CraftingToolAdapter::createPrototype(CreatureObject* player, int clientCounter, int practice) {
	((CraftingToolImplementation*) impl)->createPrototype(player, clientCounter, practice);
}

void CraftingToolAdapter::createManfSchematic(CreatureObject* player, int clientCounter) {
	((CraftingToolImplementation*) impl)->createManfSchematic(player, clientCounter);
}

void CraftingToolAdapter::createObject(CreatureObject* player, int timer, bool create) {
	((CraftingToolImplementation*) impl)->createObject(player, timer, create);
}

void CraftingToolAdapter::depositObject(CreatureObject* player, bool practice) {
	((CraftingToolImplementation*) impl)->depositObject(player, practice);
}

unsigned long long CraftingToolAdapter::getLastExperimentationTimestamp() {
	return ((CraftingToolImplementation*) impl)->getLastExperimentationTimestamp();
}

int CraftingToolAdapter::getExperimentationResult() {
	return ((CraftingToolImplementation*) impl)->getExperimentationResult();
}

/*
 *	CraftingToolHelper
 */

CraftingToolHelper* CraftingToolHelper::staticInitializer = CraftingToolHelper::instance();

CraftingToolHelper::CraftingToolHelper() {
	className = "CraftingTool";

	Core::getObjectBroker()->registerClass(className, this);
}

void CraftingToolHelper::finalizeHelper() {
	CraftingToolHelper::finalize();
}

DistributedObject* CraftingToolHelper::instantiateObject() {
	return new CraftingTool(DummyConstructorParameter::instance());
}

DistributedObjectServant* CraftingToolHelper::instantiateServant() {
	return new CraftingToolImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CraftingToolHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CraftingToolAdapter((CraftingToolImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

