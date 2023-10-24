#include "Monster.h"
#include <iostream>

Monster::Monster()
{
	_name = "NO_NAME";
}

Monster::Monster(string name)
{
	_name = name;
}

void Monster::printName()
{
	cout << "My name is " << _name << ".\n";
}