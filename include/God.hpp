#ifndef GOD_HPP
#define GOD_HPP

#include "GameActor.hpp"
#include "Sprite.hpp"

class God : public GameActor
{
public:
	God(float x, float y);
	~God();
	void update(float dt);
	void render();
	void moveTo(float x, float y);
	void jump();
private:
	Sprite sprite_;
};

#endif