/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#ifndef ULTIMA_ULTIMA1_U1DIALOGS_DROP_H
#define ULTIMA_ULTIMA1_U1DIALOGS_DROP_H

#include "ultima/ultima1/u1dialogs/dialog.h"

namespace Ultima {
namespace Ultima1 {
namespace U1Dialogs {

using Shared::CKeypressMsg;

/**
 * Implements the drop dialog
 */
class Drop : public Dialog {
	DECLARE_MESSAGE_MAP;
	bool KeypressMsg(CKeypressMsg &msg);

	enum Mode { SELECT, DROP_PENCE, DROP_WEAPON, DROP_ARMOR };
private:
	Mode _mode;
private:
	/**
	 * Nothing selected
	 */
	void nothing();

	/**
	 * Draw the initial mode selection display
	 */
	void drawSelection();

	/**
	 * Draw the drop pence display
	 */
	void drawDropPence();

	/**
	 * Draw the drop weapon display
	 */
	void drawDropWeapon();

	/**
	 * Draw the drop armor display
	 */
	void drawDropArmor();
public:
	CLASSDEF;

	/**
	 * Constructor
	 */
	Drop(Ultima1Game *game);

	/**
	 * Draws the visual item on the screen
	 */
	virtual void draw();
};

} // End of namespace U1Dialogs
} // End of namespace Ultima1
} // End of namespace Ultima

#endif