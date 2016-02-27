#ifndef MOVECOMMAND_HPP
#define MOVECOMMAND_HPP

#include "Command.hpp"

class MoveCommand : public Command
{
public:
	MoveCommand(bool right) { right_ = right; }
	virtual void execute(GameActor& gameActor)
	{
		if(right_) {
			gameActor.moveTo(gameActor.getRect().getX() + 3, 0);	
		} else {
			gameActor.moveTo(gameActor.getRect().getX() - 3, 0);	
		}
	}
private:
	bool right_;
};

#endif