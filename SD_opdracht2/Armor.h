#pragma once
#include "Item.h"
#include "ArmorType.h"

class Armor : public Item
{
	int _armorValue;
	int _durability;
	ArmorType _armorType;
public:
	Armor(std::string name, int armorValue, int durability, ArmorType armorType, int coinValue = 0, int amount = 1);
};

