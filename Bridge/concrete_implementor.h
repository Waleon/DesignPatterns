/****************************************
* @file    IHandler
* @brief   桥接模式
* @author  微信号：iwaleon
* @wechat  微信公众号：高效程序员
* @date    2017/10/01
****************************************/

#ifndef CONCRETE_IMPLEMENTOR_H
#define CONCRETE_IMPLEMENTOR_H

#include "implementor.h"
#include <iostream>

// 电灯
class Light : public IEquipment
{
public:
	// 开灯
	void PowerOn() override {
		std::cout << "Light is on." << std::endl;
	}

	// 关灯
	void PowerOff() override {
		std::cout << "Light is off." << std::endl;
	}
};

// 风扇
class Fan : public IEquipment
{
public:
	// 打开风扇
	void PowerOn() override {
		std::cout << "Fan is on." << std::endl;
	}

	// 关闭风扇
	void PowerOff() override {
		std::cout << "Fan is off." << std::endl;
	}
};

#endif // CONCRETE_IMPLEMENTOR_H