haggard_donkuwah_battlelord = Creature:new {
	objectName = "@mob/creature_names:haggard_donkuwah_battlelord",
	socialGroup = "Donkuwah Tr.",
	pvpFaction = "Donkuwah Tr.",
	faction = "",
	level = 24,
	chanceHit = 0.34,
	damageMin = 200,
	damageMax = 210,
	baseXp = 2543,
	baseHAM = 5400,
	baseHAMmax = 6600,
	armor = 0,
	resists = {35,35,0,0,0,-1,-1,0,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE + ATTACKABLE,
	creatureBitmask = PACK + KILLER,
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {"object/mobile/dulok_male.iff"},
	lootGroups = {},
	weapons = {""},
	conversationTemplate = "",
	attacks = {
	}
}

CreatureTemplates:addCreatureTemplate(haggard_donkuwah_battlelord, "haggard_donkuwah_battlelord")