#ifndef CONCRETE_COLLEAGUE_H
#define CONCRETE_COLLEAGUE_H

#include "colleague.h"
#include <iostream>

// 具体同事类
class ConcreteColleague : public IColleague
{
public:
	using IColleague::IColleague;

	// 通过中介者，将自己的消息发布出去
	virtual void sendMessage(const IMediator& mediator, const std::string& message) const override {
		mediator.distributeMessage(this, message);
	}

private:
	// 接收来自发送者的消息
	virtual void receiveMessage(const IColleague* sender, const std::string& message) const override {
		std::cout << getName() << " received the message from "
			<< sender->getName() << ": " << message << std::endl;
	}
};

#endif // CONCRETE_COLLEAGUE_H