/****************************************
* @file    IHandler
* @brief   策略模式
* @author  微信号：iwaleon
* @wechat  微信公众号：高效程序员
* @date    2017/10/01
****************************************/

#ifndef CONTEXT_H
#define CONTEXT_H

#include "strategy.h"

// 旅行者
class Tourists
{
public:
	Tourists(ITransport *transport) { 
		m_pTransport = transport;
	}

	void Travel() {
		if (nullptr != m_pTransport)
			m_pTransport->Run(); 
	}

private:
	ITransport *m_pTransport = nullptr;
};

#endif // CONTEXT_H