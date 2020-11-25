#include <iostream>
#include <windows.h>
#include "Armor.h"

Armor::Armor(std::string name, int armorValue, int durability, ArmorType armorType, int coinValue, int amount)
{
	this->_name = name;
	this->_coinValue = coinValue;
	this->_amount = amount;
	this->_armorValue = armorValue;
	this->_durability = durability;
	this->_armorType = armorType;
	this->_itemType = ARMOR;

	std::cout << " - " << this->_amount << " new " << this->_name << " created\n";
}
