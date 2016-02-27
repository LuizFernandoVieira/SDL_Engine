#ifndef GAMEACTOR_HPP
#define GAMEACTOR_HPP

#include <iostream>

#include "GameObject.hpp"

class GameActor : public GameObject
{
public:
	virtual void moveTo(float x, float y) { std::cout << "oi";} //= 0;
	virtual void jump() = 0;
};

#endif