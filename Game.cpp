#include "header/Game.hpp"

Game::Game(int width, int height)
{
	dt_ = 0.0;
	frameStart_ = 0;

	initSDL();
	initWindow(width, height);
	initRenderer();

	stateMachine_ = new StateMachine();
	stateMachine_->create();
}

Game::~Game()
{
	SDL_DestroyRenderer(renderer_);
	SDL_DestroyWindow(window_);
	SDL_Quit();
}

void Game::run()
{
	while(!stateMachine_->getState()->quitRequested())
	{
		calculateDeltaTime();
		stateMachine_->update();
		stateMachine_->render();
		SDL_RenderPresent(renderer_);
		if ( (float)(SDL_GetTicks() - frameStart_) < 1000.0 / 60.0 )
		{
			SDL_Delay( (1000.0/60.0) - (frameStart_ - SDL_GetTicks()) );
		}
	}
}

void Game::initSDL()
{
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		std::cout << "SDL_Init Error: " << SDL_GetError() << 
			std::endl;
		exit(1);
	}
}

void Game::initWindow(int width, int height)
{
	window_ = SDL_CreateWindow 
	( 	
		"title", 
		SDL_WINDOWPOS_CENTERED, 
		SDL_WINDOWPOS_CENTERED, 
		width, height, 0 
	);
	if (window_ == NULL) {
		std::cerr << "Erro na criacao da janela do jogo" << 
			std::endl << SDL_GetError() << std::endl;
		exit(1);
	}
}

void Game::initRenderer()
{
	renderer_ = SDL_CreateRenderer 
	( 
		window_, -1, 
		SDL_RENDERER_ACCELERATED 
	);
	if (renderer_ == NULL) {
		std::cerr << "Erro na criacao do renderizador do jogo" << 
			std::endl << SDL_GetError() << std::endl;
		exit(1);
	}	
}

void Game::calculateDeltaTime()
{
	dt_ = (float)(SDL_GetTicks() - frameStart_) / 1000.0;
	frameStart_ = SDL_GetTicks();
}