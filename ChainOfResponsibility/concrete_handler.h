#ifndef CONCRETE_HANDLER_H
#define CONCRETE_HANDLER_H

#include "handler.h"

// 经理
class Manager : public IHandler
{
public:
	Manager() {}
	~Manager() {}
	virtual void HandleRequest(float days) override {
		if (days <= 1) {
			std::cout << "Manager 批准了 " << days << " 天假" << std::endl;
		}
		else {
			m_pSuccessor->HandleRequest(days);
		}
	}
};

// 总监
class Director : public IHandler
{
public:
	Director() {}
	~Director() {}
	virtual void HandleRequest(float days) override {
		if (days <= 3) {
			std::cout << "Director 批准了 " << days << " 天假" << std::endl;
		}
		else {
			m_pSuccessor->HandleRequest(days);
		}
	}
};

// 总裁
class CEO : public IHandler
{
public:
	CEO() {}
	~CEO() {}
	virtual void HandleRequest(float days) override {
		if (days <= 7) {
			std::cout << "CEO 批准了 " << days << " 天假" << std::endl;
		}
		else {
			std::cout << "给你放长假，以后不用来上班啦！" << std::endl;
		}
	}
};

#endif // CONCRETE_HANDLER_H