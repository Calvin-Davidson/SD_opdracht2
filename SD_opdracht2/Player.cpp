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

std::vector<Item*> Player::getInventory()
{
    return std::vector<Item*>();
}

std::vector<Item*> Player::getEquippedItems()
{
    return std::vector<Item*>();
}

#pragma endregion