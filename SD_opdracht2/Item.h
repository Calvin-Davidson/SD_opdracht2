#pragma once
#include <string>;
#include <vector>;
#include "Item.h"

class Item
{
private:
	std::string _name;
	int _ammount;
	int _coinValue;
public:
	Item(std::string name, int coinValue = 0, int ammount = 1);
	~Item();

	std::string GetName();
	int GetAmmount();
	int GetCoinValue();
};

