#include "header/FirstLevel.hpp"

FirstLevel::FirstLevel()
{
	player_ = new Player(32, 32);
}

FirstLevel::~FirstLevel()
{

}

void FirstLevel::create()
{

}

void FirstLevel::update(float dt)
{
	player_->update(dt);
}

void FirstLevel::render()
{
	player_->render();
}
