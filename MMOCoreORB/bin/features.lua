--Copyright (C) 2007 <SWGEmu>
 
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


-------------------------------------------------------------------------------
--*****************************************************************************
--     Features Configuration for SWGEmu Servers
--     -----------------------------------------
--     This file will allow Server administrators to toggle on and off
--     certain features that are considered controversial. By default,
--     these features should be toggled to their 14.1 Pre-CU state.

--     Features should follow the following format:

--	    String:
--          --Values: "value1", "value2", "value3"
--          in lua: AddStringFeature("featureKey", "value1")
--	    in Code: features->getStringFeature("featureKey") , returns the associated value as String
--		     features->hasStringFeature("featureKey") , checks if the key exists

--	    Integer:
--          --Values: -5, 0 ,1 , 18
--          in lua: AddIntegerFeature("featureKey", 1)
--	    in Code: features->getIntegerFeature("featureKey") , returns the associated value as int
--		     features->hasIntegerFeature("featureKey") , checks if the key exists

--	    String:
--          --Values: 0.0, 0.4, -0.5
--          in lua: AddFloatFeature("featureKey", 0.6)
--	    in Code: features->getFloatFeature("featureKey") , returns the associated value as float
--		     features->hasFloatFeature("featureKey") , checks if the key exists

--	   Binary Feature:
--          --No values ,
--          in lua: true : AddStringFeature("featureKey", "")
--		    false : --AddStringFeature("featureKey", "")
--	    in Code: features->getStringFeature("featureKey") , returns an empty String will not be used
--		     features->hasStringFeature("featureKey") , checks if the key exists

--	   Set Feature:
--          --Values: {"unarmed_damge","heavy_weapon_speed"}
--          in lua: AddSetFeature("featureKey", "unarmed_damge","heavy_weapon_speed")
--			creatues a new set if the key does not exist, adds the new entries to the set if the key exists
--	    in Code: features->hasSetFeature("key","features") , checks if the key exists

--*****************************************************************************
-------------------------------------------------------------------------------
--Jedi System Features
--Values: "hologrind", "village"
--AddStringFeature("jediSystem", "hologrind")

--Armor Protection
--Values: "minisuits" yes/no
--AddStringFeature("minisuits","")

--GCW System
--Values: "specialForces", "TEF"
--AddStringFeature("gcwSystem", "specialForces")

--************************
--Broken Skillmods Section
--************************
--Values: "enabled", "disabled"
--feature("modUnarmedDamage", "enabled");
--feature("modCombatMedicEffectiveness", "enabled");


--XP scale
--Values: float, 1.0 = default
AddFloatFeature("xpScale",1.0)

-- Globale damage multipier (player)
--Values: float, 1.5 = default
AddFloatFeature("globalMultiplier",1.5)

-- PVP damage multipier (player)
--Values: float, 0.25 = default
AddFloatFeature("pvpMultiplier",0.25)

-- PVE damage multipier (player)
--Values: float, 1.0 = default
AddFloatFeature("pveMultiplier",1.0)

-- PVP damage multipier (pet)
--Values: float, 0.25 = default
AddFloatFeature("petPvpMultiplier",0.25)

