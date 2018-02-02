#ifndef CONCRETE_MEDIATOR_H
#define CONCRETE_MEDIATOR_H

#include "mediator.h"

// 具体中介者
class ConcreteMediator : public IMediator
{
public:
	// 将发送者的消息发送给所有参与者（但不包括发送者自己）
	virtual void distributeMessage(const IColleague* sender, const std::string& message) const override {
		for (const IColleague* c : getColleagues())
			if (c != sender)  // 不要将消息发送给自己
				c->receiveMessage(sender, message);
	}
};

#endif // CONCRETE_MEDIATOR_H