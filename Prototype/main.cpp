/****************************************
* @file    IHandler
* @brief   原型模式
* @author  微信号：iwaleon
* @wechat  微信公众号：高效程序员
* @date    2017/10/01
****************************************/

#include "concrete_prototype.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete p; p=nullptr;} }
#endif

int main()
{
    // 孙悟空
    Monkey *swk = new SunWuKong("Qi Tian Da Sheng");

    // 克隆猴子猴孙
    Monkey *swk1 = swk->Clone();
    Monkey *swk2 = swk1->Clone();

	swk1->Play();
	swk2->Play();

	SAFE_DELETE(swk2);
	SAFE_DELETE(swk1);
	SAFE_DELETE(swk);

	getchar();

    return 0;
}
