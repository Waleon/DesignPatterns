#include "concrete_factory.h"
#include "product.h"
#include <iostream>

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

int main()
{
    // 奔驰
    AFactory *pFactory = new BenzFactory();
    ICar *pCar = pFactory->CreateCar();
    cout << "Benz factory: " << pCar->Name() << endl;

    SAFE_DELETE(pCar);
    SAFE_DELETE(pFactory);

    // 宝马
    pFactory = new BmwFactory();
    pCar = pFactory->CreateCar();
    cout << "Bmw factory: " << pCar->Name() << endl;

    SAFE_DELETE(pCar);
    SAFE_DELETE(pFactory);

    // 奥迪
    pFactory = new AudiFactory();
    pCar = pFactory->CreateCar();
    cout << "Audi factory: " << pCar->Name() << endl;

    SAFE_DELETE(pCar);
    SAFE_DELETE(pFactory);

    getchar();

    return 0;
}
