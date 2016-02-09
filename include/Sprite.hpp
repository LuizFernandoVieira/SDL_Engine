#ifndef SPRITE_HPP
#define SPRITE_HPP

#include <SDL2/SDL.h>

#include <memory>

class Sprite
{
public:
	Sprite();
	Sprite(const char* file, int frameCount = 1, float frameTime = 1);
	~Sprite();
	void open(const char* file);
	void setClip(int x, int y, int w, int h);
	void render(int x, int y, float angle = 0);
	void update(float dt);
	int getWidth();
	int getHeight();
	bool isOpen();
	void setScaleX(float scale);
	void setScaleY(float scale);
	void setFrame(int frame);
	void setFrameCount(int frameCount);
	void setFrameTime(float frameTime);
private:
	std::shared_ptr<SDL_Texture> texture_;
	int width_;
	int height_;
	SDL_Rect clipRect_;
	float scaleX_;
	float scaleY_;
	int frameCount_;
	int currentFrame_;
	float timeElapsed_;
	float frameTime_;
};

#endif