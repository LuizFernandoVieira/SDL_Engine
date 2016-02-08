#include "header/State.hpp"

void State::create(StateMachine& stateMachine)
{
	stateMachine_ = &stateMachine;
	screen_->create();
	quit = false;
}

void State::update()
{
	screen_->update();
}

void State::render()
{
	screen_->render();
}

bool State::quitRequested()
{
	return quit;
}

Screen* State::getScreen()
{
	return screen_;
}

void State::setScreen(Screen& screen)
{
	screen_ = &screen;
}

StateMachine* State::getStateMachine()
{
	return stateMachine_;
}

void State::setStateMachine(StateMachine& stateMachine)
{
	stateMachine_ = &stateMachine;
}