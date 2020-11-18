#pragma once
#include "Item.h"

enum armorType { helmet, chestplate, pants, boots };

class Armor :
	public Item
{
	int _armorValue;
	int _durability;
	armorType _armorType;
};

