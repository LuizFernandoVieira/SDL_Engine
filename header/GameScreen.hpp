#ifndef GAMESCREEN_HPP
#define GAMESCREEN_HPP

#include "Screen.hpp"

class GameScreen: public Screen
{
public:
	GameScreen();
	void create();
	void update();
	void render();
private:
};

#endif