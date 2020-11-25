#include <iostream>
#include <string>;
#include <vector>;
#include "Player.h"
#include "Item.h"
#include "Weapon.h"


std::vector < Player* > _players;


int main()
{
    _players.push_back(new Player("Calvin", 0));
    Weapon* weapon = new Weapon("gun", 10000, 10000, 23, 1);

    _players.at(0)->getInventory().push_back(weapon);
        
    std::cout << _players.at(0)->GetBalance();
}