#ifndef CONCRETE_VISITOR_H
#define CONCRETE_VISITOR_H

#include "visitor.h"
#include "concrete_element.h"

// 游客
class Tourist : public IVisitor
{
public:
	virtual void Visit(BellTower *) override {
		std::cout << "I'm visiting the Bell Tower!" << std::endl;
	}

	virtual void Visit(TerracottaWarriors *) override {
		std::cout << "I'm visiting the Terracotta Warriors!" << std::endl;
	}
};

// 清洁工
class Cleaner : public IVisitor
{
public:
	virtual void Visit(BellTower *) override {
		std::cout << "I'm cleaning up the garbage of Bell Tower!" << std::endl;
	}

	virtual void Visit(TerracottaWarriors *) override {
		std::cout << "I'm cleaning up the garbage of Terracotta Warriors!" << std::endl;
	}
};

#endif // CONCRETE_VISITOR_H
