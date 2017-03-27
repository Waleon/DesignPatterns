#include "concrete_prototype.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

int main()
{
    // 孙悟空
    Monkey *pSWK = new SunWuKong("Qi Tian Da Sheng");

    // 克隆猴子猴孙
    Monkey *pSWK1 = pSWK->Clone();
    Monkey *pSWK2 = pSWK1->Clone();

    pSWK1->Play();
    pSWK2->Play();

	SAFE_DELETE(pSWK1);
	SAFE_DELETE(pSWK2);
	SAFE_DELETE(pSWK);

	getchar();

    return 0;
}
