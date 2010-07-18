--Copyright (C) 2010 <SWGEmu>


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


object_draft_schematic_food_dessert_bantha_butter = object_draft_schematic_food_shared_dessert_bantha_butter:new {

   templateType = DRAFTSCHEMATIC,

   customObjectName = "Bantha Butter",

   groupName = "craftFoodDessertGroupA", -- Group schematic is awarded in (See skills table)

   craftingToolTab = 4, -- (See DraftSchemticImplementation.h)
   complexity = 6, 
   size = 1, 

   xpType = "crafting_food_general", 
   xp = 100, 

   assemblySkill = "food_assembly", 
   experimentingSkill = "food_experimentation", 
   customizationSkill = "food_customization", 

   customizationOptions = {},
   customizationStringNames = {},
   customizationDefaults = {},

   ingredientTemplateNames = {"craft_food_ingredients_n", "craft_food_ingredients_n"},
   ingredientTitleNames = {"bantha_milk", "fruit"},
   ingredientSlotType = {0, 0},
   resourceTypes = {"milk", "fruit_fruits"},
   resourceQuantities = {20, 5},
   combineTypes = {0, 0},
   contribution = {100, 100},

   numberExperimentalProperties = {1, 1, 1},
   experimentalProperties = {"XX", "XX", "XX"},
   experimentalWeights = {1, 1, 1},
   experimentalGroupTitles = {"null", "null", "null"},
   experimentalSubGroupTitles = {"null", "null", "hitpoints"},
   experimentalMin = {0, 0, 1000},
   experimentalMax = {0, 0, 1000},
   experimentalPrecision = {0, 0, 0},

   tanoCRC = 3006616343, -- Script: 'object/tangible/food/crafted/dessert_bantha_butter.iff'
}
ObjectTemplates:addTemplate(object_draft_schematic_food_dessert_bantha_butter, "object/draft_schematic/food/dessert_bantha_butter.iff")
