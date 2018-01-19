#ifndef HANDLER_H
#define HANDLER_H

#include <iostream>

// 抽象处理者
class IHandler
{
public:
	IHandler() { m_pSuccessor = NULL; }
	virtual ~IHandler() {}
	void SetSuccessor(IHandler *successor) { m_pSuccessor = successor; }
	virtual void HandleRequest(float days) = 0;

protected:
	IHandler *m_pSuccessor;  // 后继者
};

#endif // HANDLER_H