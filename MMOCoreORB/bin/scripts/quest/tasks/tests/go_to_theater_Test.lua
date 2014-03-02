local GoToTheater = require("quest.tasks.go_to_theater")
local DirectorManagerMocks = require("screenplays.mocks.director_manager_mocks")
local SpawnMobilesMocks = require("utils.mocks.spawn_mobiles_mocks")

local READ_DISK_ERROR_STRING = "quest/force_sensitive/intro:read_disk_error"
local THEATER_SUM_STRING = "quest/force_sensitive/intro:theater_sum"

local testGoToTheater = GoToTheater:new {
	taskName = "testGoToTheater",
	minimumDistance = 768,
	maximumDistance = 1280,
	theater = "theater",
	waypointDescription = "waypointDescription",
	mobileList = { "mobileList" },
	despawnTime = 10,
	onFailedSpawn = nil,
	onSuccessfulSpawn = nil
}

describe("GoToTheater", function()
	local pCreatureObject = { "creatureObjectPointer" }
	local positionX = 1234
	local positionY = 5678
	local minDistance = 768
	local maxDistance = 1280
	local creatureObject
	local spawnAreaPosition = {1, 2, 3}
	local zoneName = "testZone"
	local pSpawnedMobile = { "spawnedMobilePointer" }
	local spawnedMobilesList = { pSpawnedMobile }
	local playerObjectId = 12345678
	local theaterObjectId = 45678901
	local theaterObject
	local pTheater = { "theaterObjectPointer" }
	local pActiveArea = { "activeAreaPointer" }
	local pPlayerObject = { "playerObjectPointer" }
	local playerObject
	local waypointId = 1234

	setup(function()
		DirectorManagerMocks.mocks.setup()
		SpawnMobilesMocks.mocks.setup()
	end)

	teardown(function()
		DirectorManagerMocks.mocks.teardown()
		SpawnMobilesMocks.mocks.teardown()
	end)

	before_each(function()
		DirectorManagerMocks.mocks.before_each()
		SpawnMobilesMocks.mocks.before_each()

		testGoToTheater.onFailedSpawn = spy.new(function() end)
		testGoToTheater.onSuccessfulSpawn = spy.new(function() end)

		creatureObject = {}
		creatureObject.getObjectID = spy.new(function() return playerObjectId end)
		creatureObject.getZoneName = spy.new(function() return zoneName end)
		creatureObject.setScreenPlayState = spy.new(function() end)
		creatureObject.getScreenPlayState = spy.new(function() return 0 end)
		creatureObject.getWorldPositionX = spy.new(function() return positionX end)
		creatureObject.getWorldPositionY = spy.new(function() return positionY end)
		creatureObject.getPlayerObject = spy.new(function() return pPlayerObject end)
		creatureObject.sendSystemMessage = spy.new(function() end)
		DirectorManagerMocks.creatureObjects[pCreatureObject] = creatureObject

		playerObject = {}
		playerObject.addWaypoint = spy.new(function() return waypointId end)
		DirectorManagerMocks.playerObjects[pPlayerObject] = playerObject

		theaterObject = {}
		theaterObject.getObjectID = spy.new(function() return theaterObjectId end)
		DirectorManagerMocks.sceneObjects[pTheater] = theaterObject
	end)

	describe("start", function()
		local realFinish

		setup(function()
			realFinish = testGoToTheater.finish
		end)

		teardown(function()
			testGoToTheater.finish = realFinish
		end)

		before_each(function()
			testGoToTheater.finish = spy.new(function() end)
		end)

		describe("When called with a player", function()
			it("Should find a spawn point for the theater.", function()
				testGoToTheater:start(pCreatureObject)

				assert.spy(getSpawnArea).was.called_with(pCreatureObject, positionX, positionY, minDistance, maxDistance, 10, 5)
			end)

			describe("and a spawn area was found", function()
				before_each(function()
					getSpawnArea = spy.new(function() return spawnAreaPosition end)
					spawnSceneObject = spy.new(function(zn, script, x, z, y, parentId, heading)
						assert.same(zoneName, zn)
						assert.same(testGoToTheater.theater, script)
						assert.same(spawnAreaPosition[1], x)
						assert.same(spawnAreaPosition[2], z)
						assert.same(spawnAreaPosition[3], y)
						assert.same(0, parentId)
					end)
				end)

				it("Should spawn the theater at the spawn point.", function()
					testGoToTheater:start(pCreatureObject)

					assert.spy(spawnSceneObject).was.called(1)
				end)

				describe("and the theater was spawned", function()
					before_each(function()
						spawnSceneObject = spy.new(function() return pTheater end)
					end)

					it("Should save the object id of the theater on the player.", function()
						testGoToTheater:start(pCreatureObject)

						assert.spy(writeData).was.called_with(playerObjectId .. testGoToTheater.taskName .. "theater", theaterObjectId)
					end)

					it("Should spawn the mobiles at the theater.", function()
						testGoToTheater:start(pCreatureObject)

						assert.spy(SpawnMobilesMocks.spawnMobiles).was.called_with(pCreatureObject, testGoToTheater.taskName, testGoToTheater.mobileList)
					end)

					describe("and the mobiles was spawned", function()
						before_each(function()
							SpawnMobilesMocks.spawnMobiles = spy.new(function() return spawnedMobilesList end)
						end)

						it("Should setup and active area at the spawn point.", function()
							testGoToTheater:start(pCreatureObject)

							assert.spy(spawnSceneObject).was.called_with(zoneName, "object/active_area.iff", spawnAreaPosition[1], 0, spawnAreaPosition[3], 0, 0)
						end)

						describe("and the active area was spawned", function()
							local spawnSceneObjectTimes = 0
							local writeDataTimes = 0

							before_each(function()
								spawnSceneObjectTimes = 0
								writeDataTimes = 0

								spawnSceneObject = spy.new(function()
									spawnSceneObjectTimes = spawnSceneObjectTimes + 1
									if spawnSceneObjectTimes == 1 then
										return pTheater
									else
										return pActiveArea
									end
								end)
								writeData = spy.new(function(string, value)
									writeDataTimes = writeDataTimes + 1
									if writeDataTimes == 2 then
										assert.same(playerObjectId .. testGoToTheater.taskName .. "waypointId", string)
										assert.same(waypointId, value)
									end
								end)
							end)

							it("Should generate an active waypoint for the player to the theater.", function()
								testGoToTheater:start(pCreatureObject)

								assert.spy(playerObject.addWaypoint).was.called_with(playerObject, zoneName, testGoToTheater.waypointDescription, "", spawnAreaPosition[1], spawnAreaPosition[3], WAYPOINTWHITE, true, true)
							end)

							it("Should store the id of the waypoint on the player", function()
								testGoToTheater:start(pCreatureObject)

								assert.spy(writeData).was.called(2)
							end)

							it("Should schedule the despawn event.", function()
								testGoToTheater:start(pCreatureObject)

								assert.spy(createEvent).was.called_with(testGoToTheater.despawnTime, "handleDespawnTheater", testGoToTheater.taskName, pCreatureObject)
							end)

							it("Should call the onSuccessfulSpawn function.", function()
								testGoToTheater:start(pCreatureObject)

								assert.spy(testGoToTheater.onSuccessfulSpawn).was.called_with(testGoToTheater, pCreatureObject)
							end)

							it("Should not finish the task.", function()
								testGoToTheater:start(pCreatureObject)

								assert.spy(testGoToTheater.finish).was.not_called()
							end)
						end)

						describe("and the active area was not spawned", function()
							local spawnSceneObjectTimes = 0

							before_each(function()
								spawnSceneObject = spy.new(function()
									spawnSceneObjectTimes = spawnSceneObjectTimes + 1
									if spawnSceneObjectTimes == 1 then
										return pTheater
									else
										return nil
									end
								end)
							end)

							it("Should call the onFailedSpawn function.", function()
								testGoToTheater:start(pCreatureObject)

								assert.spy(testGoToTheater.onFailedSpawn).was.called_with(testGoToTheater, pCreatureObject)
							end)

							it("Should finish the task.", function()
								testGoToTheater:start(pCreatureObject)

								assert.spy(testGoToTheater.finish).was.called_with(testGoToTheater, pCreatureObject)
							end)
						end)
					end)

					describe("and the mobiles was not spawned", function()
						before_each(function()
							SpawnMobilesMocks.spawnMobiles = spy.new(function() return nil end)
						end)

						it("Should call the onFailedSpawn function.", function()
							testGoToTheater:start(pCreatureObject)

							assert.spy(testGoToTheater.onFailedSpawn).was.called_with(testGoToTheater, pCreatureObject)
						end)

						it("Should finish the task.", function()
							testGoToTheater:start(pCreatureObject)

							assert.spy(testGoToTheater.finish).was.called_with(testGoToTheater, pCreatureObject)
						end)
					end)
				end)

				describe("and the theater was not spawned", function()
					before_each(function()
						spawnSceneObject = spy.new(function() return nil end)
					end)

					it("Should call the onFailedSpawn function.", function()
						testGoToTheater:start(pCreatureObject)

						assert.spy(testGoToTheater.onFailedSpawn).was.called_with(testGoToTheater, pCreatureObject)
					end)

					it("Should finish the task.", function()
						testGoToTheater:start(pCreatureObject)

						assert.spy(testGoToTheater.finish).was.called_with(testGoToTheater, pCreatureObject)
					end)
				end)
			end)

			describe("and no spawn area was found", function()
				it("Should call the onFailedSpawn function.", function()
					testGoToTheater:start(pCreatureObject)

					assert.spy(testGoToTheater.onFailedSpawn).was.called_with(testGoToTheater, pCreatureObject)
				end)

				it("Should finish the task.", function()
					testGoToTheater:start(pCreatureObject)

					assert.spy(testGoToTheater.finish).was.called_with(testGoToTheater, pCreatureObject)
				end)
			end)
		end)
	end)
end)
