#pragma once
#include "Item.h"
class Weapon :
	public Item
{
	int _damage;
	int _durability;
public:
	Weapon(int damage = 0, int durability = 1);
};

