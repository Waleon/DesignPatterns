#include "concrete_prototype.h"
#include <iostream>

using namespace std;

int main()
{
    // 孙悟空
    Monkey *pSWK = new SunWuKong("Qi Tian Da Sheng");

    // 克隆猴子猴孙
    Monkey *pSWK1 = pSWK->Clone();
    Monkey *pSWK2 = pSWK1->Clone();

    pSWK1->Play();
    pSWK2->Play();

    delete pSWK1;
    delete pSWK2;
    delete pSWK;

	getchar();

    return 0;
}
