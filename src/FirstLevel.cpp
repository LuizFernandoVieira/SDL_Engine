#include "../include/FirstLevel.hpp"
#include "../include/Camera.hpp"
#include "../include/Command.hpp"

FirstLevel::FirstLevel(State& state)
{
	state_ = &state;
	inputHandler_ =  new InputHandler();
	Camera::setInputHandler(*inputHandler_);
	tileSet_ = new TileSet(32, 32, "../img/ground.png");
	tileMap_ = new TileMap("../map/tileMap.txt", tileSet_);
	// bg_ = new Sprite("../img/bg.png");
	player_ = new Player(128, 128);
	//Camera::follow(*player_);
}

FirstLevel::~FirstLevel()
{

}

void FirstLevel::create()
{

}

void FirstLevel::update(float dt)
{
	std::vector <Command*> commands = inputHandler_->handleInput();
	for(auto it = commands.begin(); it != commands.end(); ++it)
	{
		(*it)->execute(*player_);
	}

	player_->update(dt);

	Camera::update(dt);

	if (inputHandler_->quitRequested()) {
		state_->setQuit(true);
	}
}

void FirstLevel::render()
{
	tileMap_->render(
		Camera::getPosition().getX(), 
		Camera::getPosition().getY()
	);
	// bg_->render(0, 0);
	player_->render();
}
