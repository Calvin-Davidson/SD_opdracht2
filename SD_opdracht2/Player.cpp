#include <iostream>
#include "Player.h"

#include <windows.h>
Player::Player(std::string name, int coinInventory = 0)
{
    this->_name = name;
    this->_coinInventory = coinInventory;

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

int Player::GetCoinInventory()
{
    return this-> _coinInventory;
}

void Player::AddCoinValueToCoinInventory(int value = 0)
{
    this->_coinInventory += value;
}