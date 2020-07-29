#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <filesystem>
#include "Monster.h"
namespace fs = std::experimental::filesystem;

class Game
{
private:
	std::vector<Monster> monsters{};
	std::string ReadFile(fs::path path);
public:
	Game();
	int Start();
	void RandomMonster();



};

