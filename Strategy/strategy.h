/****************************************
* @file    IHandler
* @brief   策略模式
* @author  微信号：iwaleon
* @wechat  微信公众号：高效程序员
* @date    2017/10/01
****************************************/

#ifndef STRATEGY_H
#define STRATEGY_H

// 出行策略
class ITransport
{
public:
	virtual ~ITransport() {}
	virtual void Run() = 0;
};

#endif // STRATEGY_H