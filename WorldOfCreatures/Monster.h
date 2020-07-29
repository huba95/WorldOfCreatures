#pragma once
#include <iostream>
#include "Creature.h"
class Monster :
	public Creature
{
private:
	std::string Description;

public:
	Monster(std::string file);
	void Print();



};

