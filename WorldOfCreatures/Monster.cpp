#include "Monster.h"

Monster::Monster(std::string file)
{
	
		Name = file.substr(0, file.find_first_of("\n")+1);
		file.erase(0, file.find_first_of("\n")+1);
		Description = file.substr(0, file.find_first_of("\n")+1);
		file.erase(0, file.find_first_of("\n")+1);
		Description += file.substr(0, file.find_first_of("\n")+1);
		file.erase(0, file.find_first_of("\n")+1);
		Level = std::stoi(file.substr(0, file.find_first_of(" ")));
		file.erase(0, file.find_first_of(" ") + 1);
		Treasure = std::stoi(file.substr(0, file.find_first_of(" ")));
		file.erase(0, file.find_first_of(" ") + 1);
		NumberOfWeapons = std::stoi(file.substr(0, file.find_first_of(" ")));
		file.erase(0, file.find_first_of(" ") + 1);
}

void Monster::Print()
{
	
		std::cout << Name << std::endl << Description << std::endl;
	
}
