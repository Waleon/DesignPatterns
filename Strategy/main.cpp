/****************************************
* @file    IHandler
* @brief   策略模式
* @author  微信号：iwaleon
* @wechat  微信公众号：高效程序员
* @date    2017/10/01
****************************************/

#include "context.h"
#include "concrete_strategy.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete p; p=nullptr;} }
#endif

int main()
{
	ITransport *bike = new Bike();
	ITransport *car = new Car();
	ITransport *train = new Train();

	// 张三骑自行车、李四开车、王五坐火车
	Tourists *zhangsan = new Tourists(bike);
	Tourists *lisi = new Tourists(car);
	Tourists *wangwu = new Tourists(train);

	zhangsan->Travel();
	lisi->Travel();
	wangwu->Travel();

	SAFE_DELETE(bike);
	SAFE_DELETE(car);
	SAFE_DELETE(train);

	SAFE_DELETE(zhangsan);
	SAFE_DELETE(lisi);
	SAFE_DELETE(wangwu);

	getchar();

	return 0;
}