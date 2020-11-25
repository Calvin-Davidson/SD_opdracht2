#pragma once
#include "Item.h"

class Weapon : public Item
{
	int _damage;
	int _durability;
public:
	Weapon(std::string name, int damage, int durability, int coinValue = 0, int amount = 1);
};

