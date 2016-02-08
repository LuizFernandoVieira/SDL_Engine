#ifndef STATE_HPP
#define STATE_HPP

#include "IState.hpp"
#include "StateMachine.hpp"

class Screen;

class State: public IState
{
public:
	void create(StateMachine& stateMachine);
	void update();
	void render();
	bool quitRequested();
	Screen* getScreen();
	void setScreen(Screen& screen);
	StateMachine* getStateMachine();
	void setStateMachine(StateMachine& stateMachine);
protected:
	bool quit;
private:
	Screen* screen_;
	StateMachine* stateMachine_;
};

#include "Screen.hpp"

#endif