#include <iostream>

#include "header/Game.hpp"

int main()
{

	Game* game = new Game(1024,600);
	game->run();
	
	return 0;
}