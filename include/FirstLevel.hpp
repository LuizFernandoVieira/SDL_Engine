#ifndef FIRSTLEVEL_HPP
#define FIRSTLEVEL_HPP

#include "ILevel.hpp"
#include "State.hpp"
#include "InputHandler.hpp"
#include "Player.hpp"

class FirstLevel : public ILevel
{
public:
	FirstLevel(State& state);
	~FirstLevel();
	void create();
	void update(float dt);
	void render();
private:
	State* state_;
	InputHandler* inputHandler_;
	Player* player_;
};

#endif