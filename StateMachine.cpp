#include "header/StateMachine.hpp"
#include "header/GameState.hpp"

void StateMachine::create()
{
	state_ = new GameState();
	state_->create(*this); 
}

void StateMachine::update()
{
	state_->update();
}

void StateMachine::render()
{
	state_->render();
}

void StateMachine::changeState(State& state)
{
	state_ = &state;
	state_->create(*this);
}

void StateMachine::handle(StateEventEnum& event)
{
	state_->handle(event);
}

State* StateMachine::getState()
{
	return state_;
}

void StateMachine::setState(State& state)
{
	state_ = &state;
}