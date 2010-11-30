--Copyright (C) 2009 <SWGEmu>

--This File is part of Core3.

--This program is free software; you can redistribute
--it and/or modify it under the terms of the GNU Lesser
--General Public License as published by the Free Software
--Foundation; either version 2 of the License,
--or (at your option) any later version.

--This program is distributed in the hope that it will be useful,
--but WITHOUT ANY WARRANTY; without even the implied warranty of
--MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
--See the GNU Lesser General Public License for
--more details.

--You should have received a copy of the GNU Lesser General
--Public License along with this program; if not, write to
--the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

--Linking Engine3 statically or dynamically with other modules
--is making a combined work based on Engine3.
--Thus, the terms and conditions of the GNU Lesser General Public License
--cover the whole combination.

--In addition, as a special exception, the copyright holders of Engine3
--give you permission to combine Engine3 program with free software
--programs or libraries that are released under the GNU LGPL and with
--code included in the standard release of Core3 under the GNU LGPL
--license (or modified versions of such code, with unchanged license).
--You may copy and distribute such a system following the terms of the
--GNU LGPL for Engine3 and the licenses of the other code concerned,
--provided that you include the source code of that other code when
--and as the GNU LGPL requires distribution of source code.

--Note that people who make modified versions of Engine3 are not obligated
--to grant this special exception for their modified versions;
--it is their choice whether to do so. The GNU Lesser General Public License
--gives permission to release a modified version without this exception;
--this exception also makes it possible to release a modified version
--which carries forward this exception.


object_tangible_inventory_shared_character_inventory = SharedTangibleObjectTemplate:new {
	appearanceFilename = "",
	arrangementDescriptors = {"inventory"},

	certificationsRequired = {},
	clearFloraRadius = 0,
	clientDataFile = "",
	clientGameObjectType = 8197,
	collisionActionBlockFlags = 0,
	collisionActionFlags = 0,
	collisionActionPassFlags = 0,
	collisionMaterialBlockFlags = 0,
	collisionMaterialFlags = 0,
	collisionMaterialPassFlags = 0,
	containerType = 2,
	containerVolumeLimit = 80,
	customizationVariableMapping = {},

	detailedDescription = "@item_n:inventory",

	gameObjectType = 8197,

	locationReservationRadius = 0,
	lookAtText = "",

	noBuildRadius = 0,

	objectName = "@item_n:inventory",
	onlyVisibleInTools = 0,

	paletteColorCustomizationVariables = {},
	portalLayoutFilename = "",

	rangedIntCustomizationVariables = {},

	scale = 1,
	scaleThresholdBeforeExtentTest = 0.5,
	sendToClient = 1,
	slotDescriptors = {},
	snapToTerrain = 1,
	socketDestinations = {},
	structureFootprintFileName = "",
	surfaceType = 0,

	targetable = 1,
	totalCellNumber = 0,

	useStructureFootprintOutline = 0,

	clientObjectCRC = 963242043
}

ObjectTemplates:addTemplate(object_tangible_inventory_shared_character_inventory, "object/tangible/inventory/shared_character_inventory.iff")

object_tangible_inventory_shared_creature_inventory = SharedTangibleObjectTemplate:new {
	appearanceFilename = "",
	arrangementDescriptors = {"inventory"},

	certificationsRequired = {},
	clearFloraRadius = 0,
	clientDataFile = "",
	clientGameObjectType = 8197,
	collisionActionBlockFlags = 0,
	collisionActionFlags = 0,
	collisionActionPassFlags = 0,
	collisionMaterialBlockFlags = 0,
	collisionMaterialFlags = 0,
	collisionMaterialPassFlags = 0,
	containerType = 4,
	containerVolumeLimit = 60,
	customizationVariableMapping = {},

	detailedDescription = "@item_n:inventory",

	gameObjectType = 8197,

	locationReservationRadius = 0,
	lookAtText = "string_id_table",

	noBuildRadius = 0,

	objectName = "@item_n:inventory",
	onlyVisibleInTools = 0,

	paletteColorCustomizationVariables = {},
	portalLayoutFilename = "",

	rangedIntCustomizationVariables = {},

	scale = 1,
	scaleThresholdBeforeExtentTest = 0.5,
	sendToClient = 1,
	slotDescriptors = {},
	snapToTerrain = 1,
	socketDestinations = {},
	structureFootprintFileName = "",
	surfaceType = 0,

	targetable = 1,
	totalCellNumber = 0,

	useStructureFootprintOutline = 0,

	clientObjectCRC = 554727708
}

ObjectTemplates:addTemplate(object_tangible_inventory_shared_creature_inventory, "object/tangible/inventory/shared_creature_inventory.iff")

object_tangible_inventory_shared_creature_inventory_1 = SharedTangibleObjectTemplate:new {
	appearanceFilename = "",
	arrangementDescriptors = {"inventory"},

	certificationsRequired = {},
	clearFloraRadius = 0,
	clientDataFile = "",
	clientGameObjectType = 8197,
	collisionActionBlockFlags = 0,
	collisionActionFlags = 0,
	collisionActionPassFlags = 0,
	collisionMaterialBlockFlags = 0,
	collisionMaterialFlags = 0,
	collisionMaterialPassFlags = 0,
	containerType = 4,
	containerVolumeLimit = 1,
	customizationVariableMapping = {},

	detailedDescription = "@item_n:inventory",

	gameObjectType = 8197,

	locationReservationRadius = 0,
	lookAtText = "string_id_table",

	noBuildRadius = 0,

	objectName = "@item_n:inventory",
	onlyVisibleInTools = 0,

	paletteColorCustomizationVariables = {},
	portalLayoutFilename = "",

	rangedIntCustomizationVariables = {},

	scale = 1,
	scaleThresholdBeforeExtentTest = 0.5,
	sendToClient = 1,
	slotDescriptors = {},
	snapToTerrain = 1,
	socketDestinations = {},
	structureFootprintFileName = "",
	surfaceType = 0,

	targetable = 1,
	totalCellNumber = 0,

	useStructureFootprintOutline = 0,

	clientObjectCRC = 4169639267
}

ObjectTemplates:addTemplate(object_tangible_inventory_shared_creature_inventory_1, "object/tangible/inventory/shared_creature_inventory_1.iff")

object_tangible_inventory_shared_creature_inventory_2 = SharedTangibleObjectTemplate:new {
	appearanceFilename = "",
	arrangementDescriptors = {"inventory"},

	certificationsRequired = {},
	clearFloraRadius = 0,
	clientDataFile = "",
	clientGameObjectType = 8197,
	collisionActionBlockFlags = 0,
	collisionActionFlags = 0,
	collisionActionPassFlags = 0,
	collisionMaterialBlockFlags = 0,
	collisionMaterialFlags = 0,
	collisionMaterialPassFlags = 0,
	containerType = 4,
	containerVolumeLimit = 2,
	customizationVariableMapping = {},

	detailedDescription = "@item_n:inventory",

	gameObjectType = 8197,

	locationReservationRadius = 0,
	lookAtText = "string_id_table",

	noBuildRadius = 0,

	objectName = "@item_n:inventory",
	onlyVisibleInTools = 0,

	paletteColorCustomizationVariables = {},
	portalLayoutFilename = "",

	rangedIntCustomizationVariables = {},

	scale = 1,
	scaleThresholdBeforeExtentTest = 0.5,
	sendToClient = 1,
	slotDescriptors = {},
	snapToTerrain = 1,
	socketDestinations = {},
	structureFootprintFileName = "",
	surfaceType = 0,

	targetable = 1,
	totalCellNumber = 0,

	useStructureFootprintOutline = 0,

	clientObjectCRC = 596643316
}

ObjectTemplates:addTemplate(object_tangible_inventory_shared_creature_inventory_2, "object/tangible/inventory/shared_creature_inventory_2.iff")

object_tangible_inventory_shared_creature_inventory_3 = SharedTangibleObjectTemplate:new {
	appearanceFilename = "",
	arrangementDescriptors = {"inventory"},

	certificationsRequired = {},
	clearFloraRadius = 0,
	clientDataFile = "",
	clientGameObjectType = 8197,
	collisionActionBlockFlags = 0,
	collisionActionFlags = 0,
	collisionActionPassFlags = 0,
	collisionMaterialBlockFlags = 0,
	collisionMaterialFlags = 0,
	collisionMaterialPassFlags = 0,
	containerType = 4,
	containerVolumeLimit = 4,
	customizationVariableMapping = {},

	detailedDescription = "@item_n:inventory",

	gameObjectType = 8197,

	locationReservationRadius = 0,
	lookAtText = "string_id_table",

	noBuildRadius = 0,

	objectName = "@item_n:inventory",
	onlyVisibleInTools = 0,

	paletteColorCustomizationVariables = {},
	portalLayoutFilename = "",

	rangedIntCustomizationVariables = {},

	scale = 1,
	scaleThresholdBeforeExtentTest = 0.5,
	sendToClient = 1,
	slotDescriptors = {},
	snapToTerrain = 1,
	socketDestinations = {},
	structureFootprintFileName = "",
	surfaceType = 0,

	targetable = 1,
	totalCellNumber = 0,

	useStructureFootprintOutline = 0,

	clientObjectCRC = 1788701305
}

ObjectTemplates:addTemplate(object_tangible_inventory_shared_creature_inventory_3, "object/tangible/inventory/shared_creature_inventory_3.iff")

object_tangible_inventory_shared_creature_inventory_4 = SharedTangibleObjectTemplate:new {
	appearanceFilename = "",
	arrangementDescriptors = {"inventory"},

	certificationsRequired = {},
	clearFloraRadius = 0,
	clientDataFile = "",
	clientGameObjectType = 8197,
	collisionActionBlockFlags = 0,
	collisionActionFlags = 0,
	collisionActionPassFlags = 0,
	collisionMaterialBlockFlags = 0,
	collisionMaterialFlags = 0,
	collisionMaterialPassFlags = 0,
	containerType = 4,
	containerVolumeLimit = 6,
	customizationVariableMapping = {},

	detailedDescription = "@item_n:inventory",

	gameObjectType = 8197,

	locationReservationRadius = 0,
	lookAtText = "string_id_table",

	noBuildRadius = 0,

	objectName = "@item_n:inventory",
	onlyVisibleInTools = 0,

	paletteColorCustomizationVariables = {},
	portalLayoutFilename = "",

	rangedIntCustomizationVariables = {},

	scale = 1,
	scaleThresholdBeforeExtentTest = 0.5,
	sendToClient = 1,
	slotDescriptors = {},
	snapToTerrain = 1,
	socketDestinations = {},
	structureFootprintFileName = "",
	surfaceType = 0,

	targetable = 1,
	totalCellNumber = 0,

	useStructureFootprintOutline = 0,

	clientObjectCRC = 2440970605
}

ObjectTemplates:addTemplate(object_tangible_inventory_shared_creature_inventory_4, "object/tangible/inventory/shared_creature_inventory_4.iff")

object_tangible_inventory_shared_creature_inventory_5 = SharedTangibleObjectTemplate:new {
	appearanceFilename = "",
	arrangementDescriptors = {"inventory"},

	certificationsRequired = {},
	clearFloraRadius = 0,
	clientDataFile = "",
	clientGameObjectType = 8197,
	collisionActionBlockFlags = 0,
	collisionActionFlags = 0,
	collisionActionPassFlags = 0,
	collisionMaterialBlockFlags = 0,
	collisionMaterialFlags = 0,
	collisionMaterialPassFlags = 0,
	containerType = 4,
	containerVolumeLimit = 8,
	customizationVariableMapping = {},

	detailedDescription = "@item_n:inventory",

	gameObjectType = 8197,

	locationReservationRadius = 0,
	lookAtText = "string_id_table",

	noBuildRadius = 0,

	objectName = "@item_n:inventory",
	onlyVisibleInTools = 0,

	paletteColorCustomizationVariables = {},
	portalLayoutFilename = "",

	rangedIntCustomizationVariables = {},

	scale = 1,
	scaleThresholdBeforeExtentTest = 0.5,
	sendToClient = 1,
	slotDescriptors = {},
	snapToTerrain = 1,
	socketDestinations = {},
	structureFootprintFileName = "",
	surfaceType = 0,

	targetable = 1,
	totalCellNumber = 0,

	useStructureFootprintOutline = 0,

	clientObjectCRC = 3631425248
}

ObjectTemplates:addTemplate(object_tangible_inventory_shared_creature_inventory_5, "object/tangible/inventory/shared_creature_inventory_5.iff")

object_tangible_inventory_shared_creature_inventory_6 = SharedTangibleObjectTemplate:new {
	appearanceFilename = "",
	arrangementDescriptors = {"inventory"},

	certificationsRequired = {},
	clearFloraRadius = 0,
	clientDataFile = "",
	clientGameObjectType = 8197,
	collisionActionBlockFlags = 0,
	collisionActionFlags = 0,
	collisionActionPassFlags = 0,
	collisionMaterialBlockFlags = 0,
	collisionMaterialFlags = 0,
	collisionMaterialPassFlags = 0,
	containerType = 4,
	containerVolumeLimit = 10,
	customizationVariableMapping = {},

	detailedDescription = "@item_n:inventory",

	gameObjectType = 8197,

	locationReservationRadius = 0,
	lookAtText = "string_id_table",

	noBuildRadius = 0,

	objectName = "@item_n:inventory",
	onlyVisibleInTools = 0,

	paletteColorCustomizationVariables = {},
	portalLayoutFilename = "",

	rangedIntCustomizationVariables = {},

	scale = 1,
	scaleThresholdBeforeExtentTest = 0.5,
	sendToClient = 1,
	slotDescriptors = {},
	snapToTerrain = 1,
	socketDestinations = {},
	structureFootprintFileName = "",
	surfaceType = 0,

	targetable = 1,
	totalCellNumber = 0,

	useStructureFootprintOutline = 0,

	clientObjectCRC = 56921719
}

ObjectTemplates:addTemplate(object_tangible_inventory_shared_creature_inventory_6, "object/tangible/inventory/shared_creature_inventory_6.iff")

object_tangible_inventory_shared_lightsaber_inventory_1 = SharedTangibleObjectTemplate:new {
	appearanceFilename = "",
	arrangementDescriptors = {"saber_inv"},

	certificationsRequired = {},
	clearFloraRadius = 0,
	clientDataFile = "",
	clientGameObjectType = 8197,
	collisionActionBlockFlags = 0,
	collisionActionFlags = 0,
	collisionActionPassFlags = 0,
	collisionMaterialBlockFlags = 0,
	collisionMaterialFlags = 0,
	collisionMaterialPassFlags = 0,
	containerType = 2,
	containerVolumeLimit = 2,
	customizationVariableMapping = {},

	detailedDescription = "@item_n:saber_inventory",

	gameObjectType = 8197,

	locationReservationRadius = 0,
	lookAtText = "",

	noBuildRadius = 0,

	objectName = "@item_n:saber_inventory",
	onlyVisibleInTools = 0,

	paletteColorCustomizationVariables = {},
	portalLayoutFilename = "",

	rangedIntCustomizationVariables = {},

	scale = 1,
	scaleThresholdBeforeExtentTest = 0.5,
	sendToClient = 1,
	slotDescriptors = {},
	snapToTerrain = 1,
	socketDestinations = {},
	structureFootprintFileName = "",
	surfaceType = 0,

	targetable = 1,
	totalCellNumber = 0,

	useStructureFootprintOutline = 0,

	clientObjectCRC = 3089628208
}

ObjectTemplates:addTemplate(object_tangible_inventory_shared_lightsaber_inventory_1, "object/tangible/inventory/shared_lightsaber_inventory_1.iff")

object_tangible_inventory_shared_lightsaber_inventory_2 = SharedTangibleObjectTemplate:new {
	appearanceFilename = "",
	arrangementDescriptors = {"saber_inv"},

	certificationsRequired = {},
	clearFloraRadius = 0,
	clientDataFile = "",
	clientGameObjectType = 8197,
	collisionActionBlockFlags = 0,
	collisionActionFlags = 0,
	collisionActionPassFlags = 0,
	collisionMaterialBlockFlags = 0,
	collisionMaterialFlags = 0,
	collisionMaterialPassFlags = 0,
	containerType = 2,
	containerVolumeLimit = 3,
	customizationVariableMapping = {},

	detailedDescription = "@item_n:saber_inventory",

	gameObjectType = 8197,

	locationReservationRadius = 0,
	lookAtText = "",

	noBuildRadius = 0,

	objectName = "@item_n:saber_inventory",
	onlyVisibleInTools = 0,

	paletteColorCustomizationVariables = {},
	portalLayoutFilename = "",

	rangedIntCustomizationVariables = {},

	scale = 1,
	scaleThresholdBeforeExtentTest = 0.5,
	sendToClient = 1,
	slotDescriptors = {},
	snapToTerrain = 1,
	socketDestinations = {},
	structureFootprintFileName = "",
	surfaceType = 0,

	targetable = 1,
	totalCellNumber = 0,

	useStructureFootprintOutline = 0,

	clientObjectCRC = 1664111783
}

ObjectTemplates:addTemplate(object_tangible_inventory_shared_lightsaber_inventory_2, "object/tangible/inventory/shared_lightsaber_inventory_2.iff")

object_tangible_inventory_shared_lightsaber_inventory_3 = SharedTangibleObjectTemplate:new {
	appearanceFilename = "",
	arrangementDescriptors = {"saber_inv"},

	certificationsRequired = {},
	clearFloraRadius = 0,
	clientDataFile = "",
	clientGameObjectType = 8197,
	collisionActionBlockFlags = 0,
	collisionActionFlags = 0,
	collisionActionPassFlags = 0,
	collisionMaterialBlockFlags = 0,
	collisionMaterialFlags = 0,
	collisionMaterialPassFlags = 0,
	containerType = 2,
	containerVolumeLimit = 4,
	customizationVariableMapping = {},

	detailedDescription = "@item_n:saber_inventory",

	gameObjectType = 8197,

	locationReservationRadius = 0,
	lookAtText = "",

	noBuildRadius = 0,

	objectName = "@item_n:saber_inventory",
	onlyVisibleInTools = 0,

	paletteColorCustomizationVariables = {},
	portalLayoutFilename = "",

	rangedIntCustomizationVariables = {},

	scale = 1,
	scaleThresholdBeforeExtentTest = 0.5,
	sendToClient = 1,
	slotDescriptors = {},
	snapToTerrain = 1,
	socketDestinations = {},
	structureFootprintFileName = "",
	surfaceType = 0,

	targetable = 1,
	totalCellNumber = 0,

	useStructureFootprintOutline = 0,

	clientObjectCRC = 708653866
}

ObjectTemplates:addTemplate(object_tangible_inventory_shared_lightsaber_inventory_3, "object/tangible/inventory/shared_lightsaber_inventory_3.iff")

object_tangible_inventory_shared_lightsaber_inventory_4 = SharedTangibleObjectTemplate:new {
	appearanceFilename = "",
	arrangementDescriptors = {"saber_inv"},

	certificationsRequired = {},
	clearFloraRadius = 0,
	clientDataFile = "",
	clientGameObjectType = 8197,
	collisionActionBlockFlags = 0,
	collisionActionFlags = 0,
	collisionActionPassFlags = 0,
	collisionMaterialBlockFlags = 0,
	collisionMaterialFlags = 0,
	collisionMaterialPassFlags = 0,
	containerType = 2,
	containerVolumeLimit = 5,
	customizationVariableMapping = {},

	detailedDescription = "@item_n:saber_inventory",

	gameObjectType = 8197,

	locationReservationRadius = 0,
	lookAtText = "",

	noBuildRadius = 0,

	objectName = "@item_n:saber_inventory",
	onlyVisibleInTools = 0,

	paletteColorCustomizationVariables = {},
	portalLayoutFilename = "",

	rangedIntCustomizationVariables = {},

	scale = 1,
	scaleThresholdBeforeExtentTest = 0.5,
	sendToClient = 1,
	slotDescriptors = {},
	snapToTerrain = 1,
	socketDestinations = {},
	structureFootprintFileName = "",
	surfaceType = 0,

	targetable = 1,
	totalCellNumber = 0,

	useStructureFootprintOutline = 0,

	clientObjectCRC = 3520993342
}

ObjectTemplates:addTemplate(object_tangible_inventory_shared_lightsaber_inventory_4, "object/tangible/inventory/shared_lightsaber_inventory_4.iff")

object_tangible_inventory_shared_lightsaber_inventory_base = SharedTangibleObjectTemplate:new {
	appearanceFilename = "",
	arrangementDescriptors = {"saber_inv"},

	certificationsRequired = {},
	clearFloraRadius = 0,
	clientDataFile = "",
	clientGameObjectType = 8197,
	collisionActionBlockFlags = 0,
	collisionActionFlags = 0,
	collisionActionPassFlags = 0,
	collisionMaterialBlockFlags = 0,
	collisionMaterialFlags = 0,
	collisionMaterialPassFlags = 0,
	containerType = 2,
	containerVolumeLimit = 2,
	customizationVariableMapping = {},

	detailedDescription = "@item_n:saber_inventory",

	gameObjectType = 8197,

	locationReservationRadius = 0,
	lookAtText = "",

	noBuildRadius = 0,

	objectName = "@item_n:saber_inventory",
	onlyVisibleInTools = 0,

	paletteColorCustomizationVariables = {},
	portalLayoutFilename = "",

	rangedIntCustomizationVariables = {},

	scale = 1,
	scaleThresholdBeforeExtentTest = 0.5,
	sendToClient = 1,
	slotDescriptors = {},
	snapToTerrain = 1,
	socketDestinations = {},
	structureFootprintFileName = "",
	surfaceType = 0,

	targetable = 1,
	totalCellNumber = 0,

	useStructureFootprintOutline = 0,

	clientObjectCRC = 1036860999
}

ObjectTemplates:addTemplate(object_tangible_inventory_shared_lightsaber_inventory_base, "object/tangible/inventory/shared_lightsaber_inventory_base.iff")

object_tangible_inventory_shared_lightsaber_inventory_training = SharedTangibleObjectTemplate:new {
	appearanceFilename = "",
	arrangementDescriptors = {"saber_inv"},

	certificationsRequired = {},
	clearFloraRadius = 0,
	clientDataFile = "",
	clientGameObjectType = 8197,
	collisionActionBlockFlags = 0,
	collisionActionFlags = 0,
	collisionActionPassFlags = 0,
	collisionMaterialBlockFlags = 0,
	collisionMaterialFlags = 0,
	collisionMaterialPassFlags = 0,
	containerType = 2,
	containerVolumeLimit = 1,
	customizationVariableMapping = {},

	detailedDescription = "@item_n:saber_inventory",

	gameObjectType = 8197,

	locationReservationRadius = 0,
	lookAtText = "",

	noBuildRadius = 0,

	objectName = "@item_n:saber_inventory",
	onlyVisibleInTools = 0,

	paletteColorCustomizationVariables = {},
	portalLayoutFilename = "",

	rangedIntCustomizationVariables = {},

	scale = 1,
	scaleThresholdBeforeExtentTest = 0.5,
	sendToClient = 1,
	slotDescriptors = {},
	snapToTerrain = 1,
	socketDestinations = {},
	structureFootprintFileName = "",
	surfaceType = 0,

	targetable = 1,
	totalCellNumber = 0,

	useStructureFootprintOutline = 0,

	clientObjectCRC = 3030613257
}

ObjectTemplates:addTemplate(object_tangible_inventory_shared_lightsaber_inventory_training, "object/tangible/inventory/shared_lightsaber_inventory_training.iff")

object_tangible_inventory_shared_vendor_inventory = SharedTangibleObjectTemplate:new {
	appearanceFilename = "",
	arrangementDescriptors = {"inventory"},

	certificationsRequired = {},
	clearFloraRadius = 0,
	clientDataFile = "",
	clientGameObjectType = 8197,
	collisionActionBlockFlags = 0,
	collisionActionFlags = 0,
	collisionActionPassFlags = 0,
	collisionMaterialBlockFlags = 0,
	collisionMaterialFlags = 0,
	collisionMaterialPassFlags = 0,
	containerType = 4,
	containerVolumeLimit = -1,
	customizationVariableMapping = {},

	detailedDescription = "@item_n:inventory",

	gameObjectType = 8197,

	locationReservationRadius = 0,
	lookAtText = "",

	noBuildRadius = 0,

	objectName = "@item_n:inventory",
	onlyVisibleInTools = 0,

	paletteColorCustomizationVariables = {},
	portalLayoutFilename = "",

	rangedIntCustomizationVariables = {},

	scale = 1,
	scaleThresholdBeforeExtentTest = 0.5,
	sendToClient = 1,
	slotDescriptors = {},
	snapToTerrain = 1,
	socketDestinations = {},
	structureFootprintFileName = "",
	surfaceType = 0,

	targetable = 1,
	totalCellNumber = 0,

	useStructureFootprintOutline = 0,

	clientObjectCRC = 2721032514
}

ObjectTemplates:addTemplate(object_tangible_inventory_shared_vendor_inventory, "object/tangible/inventory/shared_vendor_inventory.iff")
