#include "header/Player.hpp"

#include <iostream>

Player::Player(float x, float y) : sprite_("img/player.png")
{
	rect_ = Rect(x, y, sprite_.getWidth(), sprite_.getHeight());
}

Player::~Player()
{

}

void Player::update(float dt)
{

}

void Player::render()
{
	sprite_.render(rect_.getX(), rect_.getY());
}