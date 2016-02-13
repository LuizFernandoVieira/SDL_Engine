#include "../include/GameState.hpp"

void GameState::create(StateMachine& stateMachine)
{
	setStateMachine(stateMachine);
	firstLevel_	= new FirstLevel();
	inputHandler_ =  new InputHandler();
	firstLevel_->create();
}

void GameState::update(float dt)
{
	firstLevel_->update(dt);
	inputHandler_->handleInput();

	if (inputHandler_->quitRequested()) {
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