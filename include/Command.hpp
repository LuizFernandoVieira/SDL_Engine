#ifndef COMMAND_HPP
#define COMMAND_HPP

#include "GameObject.hpp"

class Command
{
public:
	virtual ~Command() {}
	virtual void execute(GameObject& gameObject) = 0;
};

#endif