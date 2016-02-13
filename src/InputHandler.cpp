#include "../include/InputHandler.hpp"

InputHandler::InputHandler()
{
	for (int i = 0; i < 6; i++) {
		mouseState[i] = false;
		mouseUpdate[i] = 0;
	}

	for (int i = 0; i < 416; i++) {
		keyState[i] = false;
		keyUpdate[i] = 0;
	}

	quit = false;
	updateCounter = 0;
	mouseX = 0;
	mouseY = 0;
}

void InputHandler::handleInput()
{
	SDL_Event event;

	updateCounter++;
	quit = false;

	SDL_GetMouseState(&mouseX, &mouseY);

	while (SDL_PollEvent(&event))
	{
		if (event.type == SDL_QUIT)
		{
			quit = true;
		}

		if(event.type == SDL_CONTROLLERBUTTONDOWN) 
		{
			if(event.cbutton.button == SDL_CONTROLLER_BUTTON_A)
			{
				quit = true;
			}
		}
	}
}

bool InputHandler::keyPress(int key)
{
	int i = key;
	if (key >= 0x40000000) {
		i -= 0x3FFFFF81;
	}

	if ( keyState[i] && keyUpdate[i] == updateCounter ) {
		return true;
	} else {
		return false;
	}
}

bool InputHandler::keyRelease(int key)
{
	int i = key;
	if (key >= 0x40000000) {
		i -= 0x3FFFFF81;
	}

	if ( !keyState[i] && keyUpdate[i] == updateCounter ) {
		return true;
	} else {
		return false;
	}
}

bool InputHandler::isKeyDown(int key)
{
	int i = key;
	if (key >= 0x40000000) {
		i -= 0x3FFFFF81;
	}

	if (keyState[i]) {
		return true;
	} else {
		return false;
	}
}

bool InputHandler::mousePress(int button)
{
	if ( mouseState[button] && mouseUpdate[button] == updateCounter ) {
		return true;
	} else {
		return false;
	}
}

bool InputHandler::mouseRelease(int button)
{
	if ( !mouseState[button] && mouseUpdate[button] == updateCounter ) {
		return true;
	} else {
		return false;
	}
}

bool InputHandler::isMouseDown(int button)
{
	if (mouseState[button]) {
		return true;
	} else {
		return false;
	}
}

int InputHandler::getMouseX()
{
	return mouseX;
}

int InputHandler::getMouseY()
{
	return mouseY;
}

bool InputHandler::quitRequested()
{
	return quit;
}