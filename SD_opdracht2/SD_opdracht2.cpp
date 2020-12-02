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
    Player* player = new Player("Calvin", 10, 0);
    _players.push_back(player);

    Weapon* weapon = new Weapon("sword", 50, 25, 23, 1);
    Armor* armor = new Armor("chestplate", 15, 5, HELMET, 10, 1);
    Potion* potion = new Potion("potion of healing", "heals", 10, 15, 5);

    player->GiveItem(potion);
    player->GiveItem(weapon);

   
    player->Equip(potion);
    player->printEquippedItems();
    player->DeEquip(potion);
    std::cout << "------------\n";
    player->printEquippedItems();

    std::cout << "Player balance: " << _players.at(0)->GetBalance() << " coins";
}