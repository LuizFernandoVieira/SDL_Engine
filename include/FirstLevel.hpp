#ifndef FIRSTLEVEL_HPP
#define FIRSTLEVEL_HPP

#include "ILevel.hpp"
#include "Player.hpp"

class FirstLevel : public ILevel
{
public:
	FirstLevel();
	~FirstLevel();
	void create();
	void update(float dt);
	void render();
private:
	Player* player_;
};

#endif