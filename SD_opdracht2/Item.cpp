#include "Item.h"
#include <iostream>

#include <windows.h>
//Item::Item(std::string name, int coinValue = 0, int amount = 0)
//{
//    this->_name = name;
//    this->_coinValue = coinValue;
//    this->_amount = amount;
//
//    std::cout << "new Item created\n";
//}

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
    return this->type;
}

ItemType Item::getItemType()
{
    return this->type;
}
