/****************************************
* @file    IHandler
* @brief   职责链模式
* @author  微信号：iwaleon
* @wechat  微信公众号：高效程序员
* @date    2017/10/01
****************************************/

#ifndef HANDLER_H
#define HANDLER_H

#include <iostream>

// 抽象处理者
class IHandler
{
public:
	virtual ~IHandler() {}
	void SetSuccessor(IHandler *successor) { 
		m_pSuccessor = successor;
	}
	virtual void HandleRequest(int days) = 0;

protected:
	IHandler *m_pSuccessor = nullptr;  // 后继者
};

#endif // HANDLER_H