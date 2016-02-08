#include "header/GameState.hpp"
#include "header/GameScreen.hpp"

void GameState::create(StateMachine& stateMachine)
{
	setStateMachine(stateMachine);
	GameScreen* gameScreen = new GameScreen();
	setScreen(*gameScreen);
	getScreen()->setStateMachine(stateMachine);
	getScreen()->create();

	inputHandler =  new InputHandler();
}

void GameState::update()
{
	getScreen()->update();

	inputHandler->handleInput();

	if (inputHandler->quitRequested()) {
		quit = true;
	}
}

void GameState::handle(StateEventEnum& event)
{

}