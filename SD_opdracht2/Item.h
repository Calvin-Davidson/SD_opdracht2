#pragma once
#include <string>;
#include <vector>;
#include "Item.h";
#include "ItemType.h";

class Item
{
protected:
	ItemType type;
	std::string _name;
	int _amount;
	int _coinValue;
public:
	//Item(std::string name, int coinValue = 0, int amount = 1);
	Item();
	~Item();

	std::string GetName();
	int GetAmount();
	int GetCoinValue();
	ItemType GetItemType();
};

