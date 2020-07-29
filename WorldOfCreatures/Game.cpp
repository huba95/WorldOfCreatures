#include "Game.h"

Game::Game()
{

	for (const auto & entry : fs::directory_iterator("monstr"))
	{
		Monster readin{ReadFile(entry.path())};
		monsters.push_back(readin);
	}
	
}

int Game::Start()
{

	std::cout << ReadFile("start/kezdoszoveg.txt");
	int type;
	std::cin >> type;
	return type;
}

std::string Game::ReadFile(fs::path path)
{
	std::ifstream file(path);
	std::string text;
	while (!file.eof())
	{
		std::string some;
		std::getline(file, some);
		text += some + "\n";
	}
	return text;
}

void Game::RandomMonster()
{
	int random= rand() % monsters.size();
	monsters[random].Print();
}

