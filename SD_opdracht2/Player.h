#pragma once
#include <string>;
#include <vector>;
#include "Item.h"

class Player
{
private:
	std::string _name;
	int _health;
	int _balance;

	std::vector < Item* > _inventory;
	std::vector < Item* > _equippedItems;
public:
	Player(std::string name, int startHealth, int coinInventory = 0);
	~Player();

	std::string GetName();
	int GetBalance();
	int GetHealth();

	void AddMoney(int value = 0);
	void RemoveMoney(int value);
	void SetMoney(int value);
	bool hasMoney(int value);

	void AddHealth(int value = 0);
	void RemoveHealth(int value = 0);
	void SetHealth(int value);
	bool IsAlive();

	std::vector < Item* > getInventory();
	std::vector < Item* > getEquippedItems();
};

