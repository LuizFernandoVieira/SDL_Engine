#ifndef SCREEN_HPP
#define SCREEN_HPP

#include "StateMachine.hpp"

class Screen
{
public:
	Screen();
	~Screen();
	virtual void create() = 0;
	void update();
	void render();
	StateMachine* getStateMachine();
	void setStateMachine(StateMachine& stateMachine);
private:
	StateMachine* stateMachine_;
};

#endif