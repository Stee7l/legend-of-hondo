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

kraytAttack1 = {
	attackname = "kraytAttack1",
	animation = "creature_attack_light",
	
	requiredWeaponType = NONE,

	range = 15,

	damageRatio = 720,

	speedRatio = 2,

	arearange = 15,
	accuracyBonus = 0,
		
	knockdownChance = 50,
	postureDownChance = 10,
	postureUpChance = 0,
	dizzyChance = 0,
	blindChance = 0,
	stunChance = 0,
	intimidateChance = 40,
	
	CbtSpamBlock = "attack_block",
	CbtSpamCounter = "attack_counter",
	CbtSpamEvade = "attack_evade",
	CbtSpamHit = "attack_hit",
	CbtSpamMiss = "attack_miss",
}

AddRandomPoolAttackTargetSkill(kraytAttack1)

-----------------------------------------------

kraytAttack2 = {
	attackname = "kraytAttack2",
	animation = "creature_attack_light",
	
	requiredWeaponType = NONE,

	range = 15,

	damageRatio = 720,

	speedRatio = 2,

	arearange = 15,
	accuracyBonus = 0,
		
	knockdownChance = 0,
	postureDownChance = 0,
	postureUpChance = 0,
	dizzyChance = 50,
	blindChance = 0,
	stunChance = 0,
	intimidateChance = 0,
	
	CbtSpamBlock = "attack_block",
	CbtSpamCounter = "attack_counter",
	CbtSpamEvade = "attack_evade",
	CbtSpamHit = "attack_hit",
	CbtSpamMiss = "attack_miss",
}

AddRandomPoolAttackTargetSkill(kraytAttack2)

-----------------------------------------------

kraytAttack3 = {
	attackname = "kraytAttack3",
	animation = "creature_attack_light",
	
	requiredWeaponType = NONE,

	range = 15,

	damageRatio = 760,

	speedRatio = 2,

	arearange = 15,
	accuracyBonus = 0,
		
	knockdownChance = 0,
	postureDownChance = 0,
	postureUpChance = 0,
	dizzyChance = 0,
	blindChance = 0,
	stunChance = 0,
	intimidateChance = 85,
	
	CbtSpamBlock = "attack_block",
	CbtSpamCounter = "attack_counter",
	CbtSpamEvade = "attack_evade",
	CbtSpamHit = "attack_hit",
	CbtSpamMiss = "attack_miss",
}

AddRandomPoolAttackTargetSkill(kraytAttack3)

-----------------------------------------------

kraytAttack4 = {
	attackname = "kraytAttack4",
	animation = "creature_attack_light",
	
	requiredWeaponType = NONE,

	range = 15,

	damageRatio = 800,

	speedRatio = 2,

	arearange = 15,
	accuracyBonus = 0,
		
	knockdownChance = 0,
	postureDownChance = 0,
	postureUpChance = 0,
	dizzyChance = 40,
	blindChance = 0,
	stunChance = 40,
	intimidateChance = 0,
	
	CbtSpamBlock = "attack_block",
	CbtSpamCounter = "attack_counter",
	CbtSpamEvade = "attack_evade",
	CbtSpamHit = "attack_hit",
	CbtSpamMiss = "attack_miss",
}

AddRandomPoolAttackTargetSkill(kraytAttack4)

-----------------------------------------------

kraytAttack5 = {
	attackname = "kraytAttack5",
	animation = "creature_attack_light",
	
	requiredWeaponType = NONE,

	range = 15,

	damageRatio = 740,

	speedRatio = 2,

	arearange = 15,
	accuracyBonus = 0,
		
	knockdownChance = 10,
	postureDownChance = 25,
	postureUpChance = 0,
	dizzyChance = 10,
	blindChance = 0,
	stunChance = 0,
	intimidateChance = 0,
	
	CbtSpamBlock = "attack_block",
	CbtSpamCounter = "attack_counter",
	CbtSpamEvade = "attack_evade",
	CbtSpamHit = "attack_hit",
	CbtSpamMiss = "attack_miss",
}

AddRandomPoolAttackTargetSkill(kraytAttack5)

-----------------------------------------------

kraytAttack6 = {
	attackname = "kraytAttack6",
	animation = "creature_attack_light",
	
	requiredWeaponType = NONE,

	range = 15,

	damageRatio = 840,

	speedRatio = 2,

	arearange = 15,
	accuracyBonus = 0,
		
	knockdownChance = 80,
	postureDownChance = 80,
	postureUpChance = 10,
	dizzyChance = 0,
	blindChance = 0,
	stunChance = 0,
	intimidateChance = 0,
	
	CbtSpamBlock = "attack_block",
	CbtSpamCounter = "attack_counter",
	CbtSpamEvade = "attack_evade",
	CbtSpamHit = "attack_hit",
	CbtSpamMiss = "attack_miss",
}

AddRandomPoolAttackTargetSkill(kraytAttack6)

-------------------------------------------------------------------------------

kraytAttack7 = {
	attackname = "kraytAttack7",
	animation = "creature_attack_light",
	
	requiredWeaponType = NONE,

	range = 15,

	damageRatio = 840,

	speedRatio = 2,

	arearange = 15,
	accuracyBonus = 0,
		
	knockdownChance = 0,
	postureDownChance = 0,
	postureUpChance = 0,
	dizzyChance = 85,
	blindChance = 0,
	stunChance = 0,
	intimidateChance = 0,
	
	CbtSpamBlock = "attack_block",
	CbtSpamCounter = "attack_counter",
	CbtSpamEvade = "attack_evade",
	CbtSpamHit = "attack_hit",
	CbtSpamMiss = "attack_miss",
}

AddRandomPoolAttackTargetSkill(kraytAttack7)
