#ifndef CONCRETE_STRATEGY_H
#define CONCRETE_STRATEGY_H

/****************************************
* @file    IHandler
* @brief   策略模式
* @author  微信号：iwaleon
* @wechat  微信公众号：高效程序员
* @date    2017/10/01
****************************************/

#include "strategy.h"
#include <iostream>

// 自行车
class Bike : public ITransport
{
public:
	void Run() override { 
		std::cout << "By bike" << std::endl;
	}
};

// 汽车
class Car : public ITransport
{
public:
	void Run() override { 
		std::cout << "By car" << std::endl;
	}
};

// 火车
class Train : public ITransport
{
public:
	void Run() override {
		std::cout << "By train" << std::endl;
	}
};

#endif // CONCRETE_STRATEGY_H