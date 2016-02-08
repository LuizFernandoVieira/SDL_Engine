#ifndef GAME_HPP
#define GAME_HPP

#ifdef __APPLE__
	#include <SDL2/SDL.h>
#endif

#include <iostream>

#include "StateMachine.hpp"

class Game
{
public:
	Game(int width, int height);
	~Game();
	void run();
private:
	void initSDL();
	void initWindow(int width, int height);
	void initRenderer();
	void calculateDeltaTime();
	SDL_Window* window_;
	SDL_Renderer* renderer_;
	StateMachine* stateMachine_;
	float dt_;
	int frameStart_;
};

#endif