#include "../include/God.hpp"

God::God(float x, float y) : sprite_("../img/god.png")
{
	rect_ = Rect(x, y, sprite_.getWidth(), sprite_.getHeight());
}

God::~God()
{

}

void God::update(float dt)
{

}

void God::render()
{
	sprite_.render(rect_.getX(), rect_.getY());
}

void God::moveTo(float x, float y)
{
	rect_.setX(x);
	rect_.setY(y);
}

void God::jump()
{

}

