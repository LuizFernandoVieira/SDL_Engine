#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "GameObject.hpp"
#include "Sprite.hpp"

class Player: public GameObject
{
public:
	Player(float x, float y);
	~Player();
	void update(float dt);
	void render();
private:
	Sprite sprite_;
};

#endif