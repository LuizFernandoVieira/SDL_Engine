#ifndef COMMAND_HPP
#define COMMAND_HPP

class Command
{
public:
	virtual void ~Command() {}
	virtual void execute(GameActor& actor) = 0;
};

#endif