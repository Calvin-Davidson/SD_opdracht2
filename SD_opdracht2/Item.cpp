#include "Item.h"
#include <iostream>

#include <windows.h>
Item::Item(std::string name, int coinValue, int amount)
{
    this->_name = name;
    this->_coinValue = coinValue;
    this->_amount = amount;

    std::cout << "new Item created\n";
}

Item::Item()
{
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

int Item::GetAmount()
{
    return this->_amount;
}

int Item::GetCoinValue()
{
    return this->_coinValue;
}

ItemType Item::GetItemType()
{
    return this->_itemType;
}
