#include "factory.h"
#include "product.h"
#include <iostream>

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

int main()
{
    // 工厂
    Factory *pFactory = new Factory();

    // 奔驰汽车
    ICar *pCar = pFactory->CreateCar(Factory::BENZ_CAR);
    cout << pCar->Name() << endl;

    SAFE_DELETE(pCar);

    // 宝马汽车
    pCar = pFactory->CreateCar(Factory::BMW_CAR);
    cout << pCar->Name() << endl;

    SAFE_DELETE(pCar);

    // 奥迪汽车
    pCar = pFactory->CreateCar(Factory::AUDI_CAR);
    cout << pCar->Name() << endl;

    SAFE_DELETE(pCar);

    getchar();

    return 0;
}
