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