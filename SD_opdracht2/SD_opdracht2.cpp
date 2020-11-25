#include <iostream>
#include <string>;
#include <vector>;
#include "Player.h"
#include "Item.h"
#include "Weapon.h"
#include "Armor.h"
#include "Potion.h"


std::vector < Player* > _players;


int main()
{
    _players.push_back(new Player("Calvin", 10, 0));
    Weapon* weapon = new Weapon("sword", 50, 25, 23, 1);
    Armor* armor = new Armor("chestplate", 15, 5, HELMET, 10, 1);
    Potion* potion = new Potion("potion of healing", "heals", 10, 15, 5);

    _players.at(0)->getInventory().push_back(weapon);
    _players.at(0)->getInventory().push_back(armor);
    std::cout << "Player balance: " << _players.at(0)->GetBalance() << " coins";
}