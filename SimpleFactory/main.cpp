#include "factory.h"
#include "product.h"
#include <iostream>

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=nullptr;} }
#endif

int main()
{
    // 工厂
    Factory *pFactory = new Factory();

    // 生产奔驰、宝马、奥迪
    ICar *pBenzCar = pFactory->CreateCar(CAR_TYPE::BENZ);
    ICar* pBmwCar = pFactory->CreateCar(CAR_TYPE::BMW);
    ICar* pAudiCar = pFactory->CreateCar(CAR_TYPE::AUDI);
    
    cout << pBenzCar->Name() << endl;
    cout << pBmwCar->Name() << endl;
    cout << pAudiCar->Name() << endl;

    SAFE_DELETE(pBenzCar);
    SAFE_DELETE(pBmwCar);
    SAFE_DELETE(pAudiCar);
    SAFE_DELETE(pFactory);

    getchar();

    return 0;
}
