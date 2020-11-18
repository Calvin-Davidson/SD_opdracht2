#include "Item.h"
#include <iostream>

#include <windows.h>
Item::Item(std::string name, int coinValue = 0, int ammount = 0)
{
    this->_name = name;
    this->_coinValue = coinValue;
    this->_ammount = ammount;

    std::cout << "new Item created\n";
}

Item::~Item()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 4);
    std::cout << "Item with Name: " << this->_name << " deleted." << "\n";
    SetConsoleTextAttribute(hConsole, 1);
}

#pragma region Getters and setters

std::string Item::GetName()
{
    return this->_name;
}

int Item::GetAmmount()
{
    return this->_ammount;
}

int Item::GetCoinValue()
{
    return this->_coinValue;
}