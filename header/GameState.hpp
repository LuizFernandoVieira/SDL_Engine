#ifndef GAMESTATE_HPP
#define GAMESTATE_HPP

#include "State.hpp"
#include "StateMachine.hpp"
#include "StateEventEnum.hpp"
#include "InputHandler.hpp"

class GameState: public State
{
public:
	void create(StateMachine& stateMachine);
	void update();
	void handle(StateEventEnum& event);
private:
	InputHandler* inputHandler;
};

#endif