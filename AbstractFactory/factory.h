#ifndef FACTORY_H
#define FACTORY_H

#include "product.h"

// 抽象工厂
class AFactory
{
public:
    enum FACTORY_TYPE {
        BENZ_FACTORY,  // 奔驰工厂
        BMW_FACTORY,  // 宝马工厂
        AUDI_FACTORY  // 奥迪工厂
    };

    virtual ICar* CreateCar() = 0;  // 生产汽车
    virtual IBike* CreateBike() = 0;    // 生产自行车
    static AFactory* CreateFactory(FACTORY_TYPE factory);  // 创建工厂
};

#endif // FACTORY_H
