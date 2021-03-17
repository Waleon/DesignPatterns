#ifndef FACTORY_H
#define FACTORY_H

#include "concrete_product.h"

enum class CAR_TYPE {
    BENZ,  // 奔驰汽车
    BMW,   // 宝马汽车
    AUDI   // 奥迪汽车
};

// 工厂
class Factory
{
public:
    // 生产汽车
    ICar* CreateCar(CAR_TYPE type) {
        ICar *pCar = nullptr;
        switch(type) {
        case CAR_TYPE::BENZ:
            pCar = new BenzCar();  // 奔驰汽车
            break;
        case CAR_TYPE::BMW:
            pCar = new BmwCar();  // 宝马汽车
            break;
        case CAR_TYPE::AUDI:
            pCar = new AudiCar();  // 奥迪汽车
            break;
        default:
            break;
        }
        return pCar;
    }
};

#endif // FACTORY_H
