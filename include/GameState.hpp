#ifndef GAMESTATE_HPP
#define GAMESTATE_HPP

#include "State.hpp"
#include "StateMachine.hpp"
#include "StateEventEnum.hpp"
#include "InputHandler.hpp"
#include "FirstLevel.hpp"

class GameState: public State
{
public:
	void create(StateMachine& stateMachine);
	void update(float dt);
	void render();
	void handle(StateEventEnum& event);
private:
	FirstLevel* firstLevel_;
	InputHandler* inputHandler_;
};

#endif