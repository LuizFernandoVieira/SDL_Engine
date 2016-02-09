#ifndef GAME_HPP
#define GAME_HPP

#include <SDL2/SDL.h>

#include <iostream>

#include "StateMachine.hpp"

class Game
{
public:
	Game(int width, int height);
	~Game();
	static Game& getInstance();
	void run();
	SDL_Renderer* getRenderer();
private:
	static Game* instance_;
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