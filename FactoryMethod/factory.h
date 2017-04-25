#ifndef FACTORY_H
#define FACTORY_H

#include "product.h"

// 工厂接口
class AFactory
{
public:
    virtual ICar* CreateCar() = 0;  // 生产汽车
};

#endif // FACTORY_H
