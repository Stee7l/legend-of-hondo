stormtrooper_squad_leader = Creature:new {
	objectName = "@mob/creature_names:stormtrooper_squad_leader",
	socialGroup = "Imperial",
	pvpFaction = "Imperial",
	faction = "",
	level = 27,
	chanceHit = 0.37,
	damageMin = 260,
	damageMax = 270,
	baseXp = 2822,
	baseHAM = 8100,
	baseHAMmax = 9900,
	armor = 0,
	resists = {20,20,20,-1,30,-1,30,-1,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = PACK + KILLER,
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {"object/mobile/dressed_stormtrooper_squad_leader_white_white.iff"},
	lootGroups = {},
	weapons = {"stormtrooper_weapons"},
	conversationTemplate = "",
	attacks = {
	}
}

CreatureTemplates:addCreatureTemplate(stormtrooper_squad_leader, "stormtrooper_squad_leader")