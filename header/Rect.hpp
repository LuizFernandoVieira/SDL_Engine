#ifndef RECT_HPP
#define RECT_HPP

class Rect
{
public:
	Rect();
	Rect(const float x, const float y, const float w, const float h);
	float getX();
	float getY();
	float getW();
	float getH();
private:
	float x_;
	float y_;
	float w_;
	float h_;
};

#endif