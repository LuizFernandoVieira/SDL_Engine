#ifndef GAMEOBJECT_HPP
#define GAMEOBJECT_HPP

#include "Rect.hpp"

class GameObject
{
public:
	virtual ~GameObject() {}
	virtual void update(float dt) = 0;
	virtual void render() = 0;
protected:
	Rect rect_;
};

#endif