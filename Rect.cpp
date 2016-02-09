#include "header/Rect.hpp"

Rect::Rect()
{
	x_ = 0.0;
	y_ = 0.0;
	w_ = 0.0;
	h_ = 0.0;
}

Rect::Rect(const float x, const float y, const float w, const float h)
{
	x_ = x;
	y_ = y;
	w_ = w;
	h_ = h;
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