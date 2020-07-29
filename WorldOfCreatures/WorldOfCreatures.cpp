#include <iostream>
#include <vector>
#include "Monster.h"
#include "Game.h"

int main()
{

	
	Game play;
	int typenumber = play.Start();
	play.RandomMonster();

	return 0;
 
}
