hutt_expeditionary_force_surveyor = Creature:new {
	objectName = "@mob/creature_names:hutt_expedition_force_surveyer",
	randomNameType = NAME_GENERIC_TAG,
	socialGroup = "hutt",
	faction = "hutt",
	level = 15,
	chanceHit = 0.31,
	damageMin = 160,
	damageMax = 170,
	baseXp = 960,
	baseHAM = 2400,
	baseHAMmax = 3000,
	armor = 0,
	resists = {10,10,10,20,10,-1,-1,-1,-1},
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

	templates = {"object/mobile/dressed_hutt_expedition_force_member.iff"},
	lootGroups = {
		{
			groups = {
				{group = "junk", chance = 3400000},
				{group = "tailor_components", chance = 1000000},
				{group = "loot_kit_parts", chance = 1000000},
				{group = "color_crystals", chance = 200000},
				{group = "crystals_poor", chance = 200000},
				{group = "pistols", chance = 600000},
				{group = "carbines", chance = 600000},
				{group = "rifles", chance = 600000},
				{group = "clothing_attachments", chance = 200000},
				{group = "armor_attachments", chance = 200000},
				{group = "hutt_exp_common", chance = 2000000}
			},
			lootChance = 2500000
		}
	},
	weapons = {"pirate_weapons_medium"},
	conversationTemplate = "",
	reactionStf = "@npc_reaction/slang",
	attacks = merge(brawlermid,marksmanmid)
}

CreatureTemplates:addCreatureTemplate(hutt_expeditionary_force_surveyor, "hutt_expeditionary_force_surveyor")
