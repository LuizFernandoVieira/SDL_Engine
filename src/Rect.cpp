#include "../include/Rect.hpp"

Rect::Rect()
{
	x_ = 0.0;
	y_ = 0.0;
	w_ = 0.0;
	h_ = 0.0;
}

Rect::Rect(float x, float y, float w, float h)
{
	x_ = x;
	y_ = y;
	w_ = w;
	h_ = h;
}

Point Rect::getCenter()
{
	return Point(x_+(w_ /2), y_+(h_ /2));
}

float Rect::getX()
{
	return x_;
}

float Rect::getY()
{
	return y_;
}

float Rect::getW()
{
	return w_;
}

float Rect::getH()
{
	return h_;
}