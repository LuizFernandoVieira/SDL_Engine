#include <iostream>

#include "../include/Game.hpp"

int main()
{

	Game* game = new Game(1024,600);
	game->run();
	
	return 0;
}