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
	IEquipment *m_pEquipment;
};

#endif // ABSTRACTION_H