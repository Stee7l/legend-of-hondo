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

#include "SuiTransferBoxImplementation.h"

#include "../../../../packets.h"

SuiTransferBoxImplementation::SuiTransferBoxImplementation(Player* player, uint32 boxType) :
	SuiTransferBoxServant(player, boxType, TRANSFERBOX) {
	
	options = 0;
	
	SuiCreatePageMessage* message = NULL;
}

void SuiTransferBoxImplementation::generateHeader(SuiCreatePageMessage* msg) {
	msg->insertAscii("Script.transfer");
	msg->insertInt(12); // Size
	
	for (int i = 0; i < 2; i++) {  // If these are not added twice it crashes the client
		msg->insertByte(5);
		msg->insertInt(0);
		msg->insertInt(7);
		msg->insertShort(0); // 1
		msg->insertShort(1); // 2
		msg->insertByte(9 + i);
		msg->insertAscii("msgPayMaintenance"); // 3
		msg->insertAscii("transaction.txtInputFrom"); // 4
		msg->insertAscii("Text"); // 5
		msg->insertAscii("transaction.txtInputTo"); // 6
		msg->insertAscii("Text"); // 7
	}
	
	msg->insertOption(3, promptTitle, "bg.caption.lblTitle", "Text");
	msg->insertOption(3, promptText, "Prompt.lblPrompt", "Text");
	options = 4;
}

BaseMessage* SuiTransferBoxImplementation::generateMessage() {
	message = new SuiCreatePageMessage(boxID);
	generateHeader(message);
	
	addOption(lblFrom, "transaction.lblFrom", "Text");
	addOption(lblTo, "transaction.lblTo", "Text");
	
	addOption(lblStartingFrom, "transaction.lblStartingFrom", "Text");
	addOption(lblStartingTo, "transaction.lblStartingTo", "Text");
	
	addOption(lblInputFrom, "transaction.txtInputFrom", "Text");
	addOption(lblInputTo, "transaction.txtInputTo", "Text");
	
	addOption(convertRatioFrom, "transaction", "ConversionRatioFrom");
	addOption(convertRatioTo, "transaction", "ConversionRatioTo");
	
	message->insertLong(0);
	message->insertInt(0);
	message->insertLong(0);

	return message;
}

void SuiTransferBoxImplementation::addOption(const string& itemText, const string& lblType, const string& itemType) {
	message->insertOption(3, itemText, lblType, itemType);
	++options;
}
void SuiTransferBoxImplementation::addFrom(const string& from,
		const string& startingFrom, const string& inputFrom, const string& rFrom) {
	
	lblFrom = from;
	lblStartingFrom = startingFrom;
	lblInputFrom = inputFrom;
	convertRatioFrom = rFrom;
	
}
void SuiTransferBoxImplementation::addTo(const string& to,
		const string& startingTo, const string& inputTo, const string& rTo) {
	
	lblTo = to;
	lblStartingTo = startingTo;
	lblInputTo = inputTo;
	convertRatioTo = rTo;
}
