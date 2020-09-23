/****************************************
* @file    IHandler
* @brief   桥接模式
* @author  微信号：iwaleon
* @wechat  微信公众号：高效程序员
* @date    2017/10/01
****************************************/

#ifndef REFINED_ABSTRACTION_H
#define REFINED_ABSTRACTION_H

#include "abstraction.h"
#include <iostream>

// 拉链式开关
class PullChainSwitch : public ISwitch
{
public:
	PullChainSwitch(IEquipment *equipment) 
		: ISwitch(equipment) {}

	// 用拉链式开关打开电器
	void On() override {
		std::cout << "Switch on the equipment with a pull chain switch." << std::endl;

		if (nullptr != m_pEquipment)
			m_pEquipment->PowerOn();
	}

	// 用拉链式开关关闭电器
	void Off() override {
		std::cout << "Switch off the equipment with a pull chain switch." << std::endl;

		if (nullptr != m_pEquipment)
			m_pEquipment->PowerOff();
	}
};

// 两位开关
class TwoPositionSwitch : public ISwitch
{
public:
	TwoPositionSwitch(IEquipment *equipment)
		: ISwitch(equipment) {}

	// 用两位开关打开电器
	void On() override {
		std::cout << "Switch on the equipment with a two-position switch." << std::endl;

		if (nullptr != m_pEquipment)
			m_pEquipment->PowerOn();
	}

	// 用两位开关关闭电器
	void Off() override {
		std::cout << "Switch off the equipment with a two-position switch." << std::endl;

		if (nullptr != m_pEquipment)
			m_pEquipment->PowerOff();
	}
};

#endif // REFINED_ABSTRACTION_H