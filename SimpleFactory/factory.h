#ifndef FACTORY_H
#define FACTORY_H

#include "concrete_product.h"

// 工厂
class Factory
{
public:
    enum CAR_TYPE {
       BENZ_CAR,  // 奔驰汽车
       BMW_CAR,  // 宝马汽车
       AUDI_CAR  // 奥迪汽车
    };

    // 生产汽车
    ICar* CreateCar(CAR_TYPE type) {
        ICar *pCar = NULL;
        switch(type) {
        case CAR_TYPE::BENZ_CAR:
            pCar = new BenzCar();  // 奔驰汽车
            break;
        case CAR_TYPE::BMW_CAR:
            pCar = new BmwCar();  // 宝马汽车
            break;
        case CAR_TYPE::AUDI_CAR:
            pCar = new AudiCar();  // 奥迪汽车
            break;
        default:
            break;
        }
        return pCar;
    }
};

#endif // FACTORY_H
