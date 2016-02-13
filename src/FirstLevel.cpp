#include "../include/FirstLevel.hpp"
#include "../include/Command.hpp"

FirstLevel::FirstLevel(State& state)
{
	state_ = &state;
	inputHandler_ =  new InputHandler();
	player_ = new Player(32, 32);
}

FirstLevel::~FirstLevel()
{

}

void FirstLevel::create()
{

}

void FirstLevel::update(float dt)
{
	Command* command = inputHandler_->handleInput();
	if(command)
	{
		command->execute(*player_);
	}

	player_->update(dt);

	if (inputHandler_->quitRequested()) {
		state_->setQuit(true);
	}
}

void FirstLevel::render()
{
	player_->render();
}
