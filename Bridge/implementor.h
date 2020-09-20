/****************************************
* @file    IHandler
* @brief   桥接模式
* @author  微信号：iwaleon
* @wechat  微信公众号：高效程序员
* @date    2017/10/01
****************************************/

#ifndef IMPLEMENTOR_H
#define IMPLEMENTOR_H

// 电器
class IEquipment
{
public:
	virtual ~IEquipment() {}

	// 打开
	virtual void PowerOn() = 0;

	// 关闭
	virtual void PowerOff() = 0;
};

#endif // IMPLEMENTOR_H