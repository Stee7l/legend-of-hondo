/*
Copyright (C) 2007 <SWGEmu>

This File is part of Core3.

This program is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software
Foundation; either version 2 of the License,
or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General
Public License along with this program; if not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Linking Engine3 statically or dynamically with other modules
is making a combined work based on Engine3.
Thus, the terms and conditions of the GNU Lesser General Public License
cover the whole combination.

In addition, as a special exception, the copyright holders of Engine3
give you permission to combine Engine3 program with free software
programs or libraries that are released under the GNU LGPL and with
code included in the standard release of Core3 under the GNU LGPL
license (or modified versions of such code, with unchanged license).
You may copy and distribute such a system following the terms of the
GNU LGPL for Engine3 and the licenses of the other code concerned,
provided that you include the source code of that other code when
and as the GNU LGPL requires distribution of source code.

Note that people who make modified versions of Engine3 are not obligated
to grant this special exception for their modified versions;
it is their choice whether to do so. The GNU Lesser General Public License
gives permission to release a modified version without this exception;
this exception also makes it possible to release a modified version
which carries forward this exception.
*/

#ifndef COMPONENTIMPLEMENTATION_H_
#define COMPONENTIMPLEMENTATION_H_

#include "../../../../packets.h"
#include "Component.h"

class CreatureObject;
class SceneObject;
class Player;

class ComponentImplementation : public ComponentServant {
protected:

	VectorMap<String, float> attributeMap;
	VectorMap<String, int> precisionMap;
	VectorMap<String, String> titleMap;
	Vector<String> keyList;

public:
	ComponentImplementation(uint64 object_id, uint32 tempCRC, const UnicodeString& n, const String& tempn);
	ComponentImplementation(CreatureObject* creature, uint32 tempCRC, const UnicodeString& n, const String& tempn);
	ComponentImplementation(Component* component, uint64 oid);

	~ComponentImplementation();

	Component* cloneComponent(Component* component, uint64 oid);

	void init();

	void generateAttributes(SceneObject* player);

	void parseItemAttributes();

	void updateCraftingValues(DraftSchematic* draftSchematic);

	float getAttributeValue(String& attributeName);
	int getAttributePrecision(String& attributeName);
	String& getAttributeTitle(String& attributeName);

	void savePrecisionList();
	void saveTitleList();

	void sendRadialResponseTo(Player* player, ObjectMenuResponse* omr);

	int useObject(Player* player);

	void parseAttributeString();
	void parsePrecisionString();
	void parseTitleString();

	inline bool hasProperty(String& attributeName) {
		return attributeMap.contains(attributeName);
	}

	inline void addProperty(String& attribute, float value, int precision, String& title) {
		keyList.add(attribute);

		itemAttributes->setFloatAttribute(attribute, value);

		attributeMap.put(attribute, value);
		precisionMap.put(attribute, precision);
		titleMap.put(attribute, title);

		savePrecisionList();
		saveTitleList();
	}

	inline int getPropertyCount() {
		return keyList.size();
	}

	inline String& getProperty(const int j){
		return keyList.get(j);
	}

	inline bool hasKey(const String& key){

		for (int i = 0; i < keyList.size(); ++i) {
			if (keyList.get(i) == key)
				return true;
		}
		return false;
	}

	inline bool changeAttributeValue(String& property, float value) {
		bool exists = hasKey(property);
		if (exists == false)
			return false;

		attributeMap.drop(property);
		attributeMap.put(property, value);
		itemAttributes->setFloatAttribute(property, value);
		return true;
	}
};

#endif /*COMPONENTIMPLEMENTATION_H_*/
