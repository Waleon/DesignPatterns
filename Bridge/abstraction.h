#ifndef ABSTRACTION_H
#define ABSTRACTION_H

#include "implementor.h"

// 开关
class ISwitch
{
public:
	ISwitch(IElectricalEquipment *ee) { m_pEe = ee; }
	virtual ~ISwitch() {}

	// 打开电器
	virtual void On() = 0;

	// 关闭电器
	virtual void Off() = 0;

protected:
	IElectricalEquipment *m_pEe;
};

#endif // ABSTRACTION_H