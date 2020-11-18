#include <iostream>
#include "Weapon.h"

Weapon::Weapon(int damage = 0, int durability = 1)
{
    this->_damage = damage;
    this->_durability = durability;

    std::cout << "new Player created\n";
}