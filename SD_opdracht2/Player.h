#pragma once
#include <string>;
#include <vector>;
#include "Item.h"

class Player
{
private:
	std::string _name;
	int balance;

	std::vector < Item* > _inventory;
	std::vector < Item* > _equippedItems;
public:
	Player(std::string name, int coinInventory = 0);
	~Player();

	std::string GetName();
	int GetBalance();

	void AddMoney(int value = 0);
	void RemoveMoney(int value);
	void SetMoney(int value);
	bool hasMoney(int value);

	std::vector < Item* > getInventory();
	std::vector < Item* > getEquippedItems();
};

