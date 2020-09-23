/****************************************
* @file    IHandler
* @brief   桥接模式
* @author  微信号：iwaleon
* @wechat  微信公众号：高效程序员
* @date    2017/10/01
****************************************/

#ifndef ABSTRACTION_H
#define ABSTRACTION_H

#include "implementor.h"

// 开关
class ISwitch
{
public:
	ISwitch(IEquipment *equipment) { m_pEquipment = equipment; }
	virtual ~ISwitch() {}

	// 打开电器
	virtual void On() = 0;

	// 关闭电器
	virtual void Off() = 0;

protected:
	IEquipment *m_pEquipment = nullptr;
};

#endif // ABSTRACTION_H