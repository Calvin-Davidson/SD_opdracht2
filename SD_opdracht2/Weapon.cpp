#include <iostream>
#include "Weapon.h"

Weapon::Weapon(std::string name, int damage, int durability, int coinValue, int amount)
{
	this->_name = name;
	this->_coinValue = coinValue;
	this->_amount = amount;
	this->_damage = damage;
	this->_durability = durability;

	this->type = WEAPON;
}
