#pragma once
#include "Item.h"

class Potion : public Item
{
	std::string _effect;
	int _strength;
public:
	Potion(std::string name, std::string effect, int strength = 0, int coinValue = 0, int amount = 1);
};

