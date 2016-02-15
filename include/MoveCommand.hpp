#ifndef MOVECOMMAND_HPP
#define MOVECOMMAND_HPP

#include "Command.hpp"

class MoveCommand : public Command
{
public:
	MoveCommand(bool right) { right_ = right; }
	virtual void execute(GameObject& gameObject)
	{
		if(right_) {
			std::cout << "MOVE RIGHT" << std::endl;
			//gameObject_.moveTo(gameObject_.getRect().getX() + 3, 0);	
		} else {
			std::cout << "MOVE LEFT" << std::endl;
			//gameObject_.moveTo(gameObject_.getRect().getX() - 3, 0);	
		}
	}
private:
	bool right_;
};

#endif