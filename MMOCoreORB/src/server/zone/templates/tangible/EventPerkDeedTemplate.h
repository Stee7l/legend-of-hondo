
#ifndef EVENTPERKDEEDTEMPLATE_H_
#define EVENTPERKDEEDTEMPLATE_H_

#include "DeedTemplate.h"

class EventPerkDeedTemplate : public DeedTemplate {
private:
	int perkType;

public:
	const static int UNKNOWN = 0;
	const static int STATIC = 1;
	const static int THEATER = 2;
	const static int PERSONNEL = 3;
	const static int GAME = 4;

	EventPerkDeedTemplate() {
		perkType = UNKNOWN;
	}

	~EventPerkDeedTemplate() {

	}

	void readObject(LuaObject* templateData) {
		DeedTemplate::readObject(templateData);
		perkType = templateData->getIntField("perkType");
    }

	int getPerkType()
	{
		return perkType;
	}

};


#endif /* EVENTPERKDEEDTEMPLATE_H_ */
