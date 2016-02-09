#ifndef STATE_HPP
#define STATE_HPP

#include "IState.hpp"
#include "StateMachine.hpp"

class Screen;

class State: public IState
{
public:
	void create(StateMachine& stateMachine);
	void update(float dt);
	void render();
	bool quitRequested();
	StateMachine* getStateMachine();
	void setStateMachine(StateMachine& stateMachine);
protected:
	bool quit;
private:
	StateMachine* stateMachine_;
};

#endif