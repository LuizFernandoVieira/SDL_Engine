#include "header/GameState.hpp"

#include <iostream>

void GameState::create(StateMachine& stateMachine)
{
	setStateMachine(stateMachine);
	firstLevel_	= new FirstLevel();
	inputHandler =  new InputHandler();
	firstLevel_->create();
}

void GameState::update(float dt)
{
	firstLevel_->update(dt);
	inputHandler->handleInput();

	if (inputHandler->quitRequested()) {
		quit = true;
	}
}

void GameState::render()
{
	firstLevel_->render();
}

void GameState::handle(StateEventEnum& event)
{

}