#include <iostream>
#include <windows.h>
#include "Potion.h"

Potion::Potion(std::string name, std::string effect, int strength, int coinValue, int amount)
{
	this->_name = name;
	this->_coinValue = coinValue;
	this->_amount = amount;
	this->_effect = effect;
	this->_strength = strength;
	this->_itemType = POTION;

	std::cout << " - " << this->_amount << " new " << this->_name << " created\n";
}
