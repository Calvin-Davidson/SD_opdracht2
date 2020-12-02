#include <iostream>
#include <windows.h>
#include "Player.h"

Player::Player(std::string name, int startHealth, int startBalance)
{
    this->_name = name;
    this->SetHealth(startHealth);
    this->SetMoney(startBalance);

    std::cout << " - " << "new Player called " << this->_name <<" created\n";
}

Player::~Player()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 4);
    std::cout << "Player with Name: " << this->_name << " deleted." << "\n";
    SetConsoleTextAttribute(hConsole, 1);
}

#pragma region Getters and setters


std::string Player::GetName()
{
    return this->_name;
}

int Player::GetBalance()
{
    return this->_balance;;
}

void Player::AddMoney(int value)
{
    this->_balance += value;
}

void Player::RemoveMoney(int value)
{
    this->_balance -= value;
}

void Player::SetMoney(int value)
{
    this->_balance = value;
}

bool Player::hasMoney(int value)
{
    return this->_balance >= value;
}

int Player::GetHealth()
{
    return this->_health;
}

void Player::AddHealth(int value)
{
    this->_health += value;
}

void Player::RemoveHealth(int value)
{
    this->_health -= value;
}

void Player::SetHealth(int value)
{
    this->_health = value;
}

bool Player::IsAlive()
{
    return _health > 0;
}

void Player::GiveItem(Item* item)
{
    getInventory().push_back(item);
}

void Player::RemoveItem(Item* item)
{
    for (int i = 0; i < getInventory().size(); i++) {
        if (getInventory().at(i) == item) {
            getInventory().erase(getInventory().begin() + i);
        }
    }
}

void Player::Equip(Item* item)
{
    int inventoryPos = 0;
    bool hasItem = false;
    for (int i = 0; i < getInventory().size(); i++) {
        if (getInventory().at(i) == item) {
            inventoryPos = i;
            hasItem = true;
            break;
        }
    }

    if (!hasItem) {
        std::cout << "the player doesn't have this item\n";
        return;
    }

    int itemCount = 0;
    for (int i = 0; i < getEquippedItems().size(); i++) {
        // je hebt het item al. je mag er geen 2 van.
        if (getEquippedItems().at(i)->GetItemType() == item->GetItemType()) {
            itemCount += 1;
        }
    }

    // je mag hem toevoegen
    if ((int)item->GetItemType() > itemCount) {
        getInventory().erase(getInventory().begin() + inventoryPos);
        getEquippedItems().push_back(item);
    }
    else {
        std::cout << "The player has equipped to many of this item\n";
    }
    return;
}

void Player::DeEquip(Item* item)
{
    for (int i = 0; i < getEquippedItems().size(); i++) {
        if (getEquippedItems().at(i) == item) {
            getEquippedItems().erase(getEquippedItems().begin() + i);
            getInventory().push_back(item);
        }
    }
}

void Player::printEquippedItems()
{
    std::cout << getEquippedItems().size();
    std::cout << "\n";

    for (Item* item : getEquippedItems()) {
        std::cout << item->GetName() << "\n";
    }
}

std::vector<Item*> &Player::getInventory()
{
    return _inventory;
}

std::vector<Item*> &Player::getEquippedItems()
{
    return _equippedItems;
}

#pragma endregion