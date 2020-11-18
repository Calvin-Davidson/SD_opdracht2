#pragma once
#include <string>;
#include <vector>;
#include "Item.h"

class Player
{
private:
	std::string _name;
	int _coinInventory;

	std::vector < Item* > _inventory;
	std::vector < Item* > _equippedItems;
public:
public:
	Player(std::string name, int coinInventory = 0);
	~Player();

	std::string GetName();
	int GetCoinInventory();

	void AddCoinValueToCoinInventory(int value = 0);
};

