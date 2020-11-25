#include <iostream>
#include <windows.h>
#include "Player.h"

Player::Player(std::string name, int startBalance)
{
    this->_name = name;
    this->SetMoney(startBalance);

    std::cout << "new Player created\n";
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
    return this->balance;;
}

void Player::AddMoney(int value)
{
    this->balance += value;
}

void Player::RemoveMoney(int value)
{
    this->balance -= value;
}

void Player::SetMoney(int value)
{
    this->balance = value;
}

bool Player::hasMoney(int value)
{
    return balance >= value;
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