#include "facade.h"

int main()
{
    OnlineShoppingFacade facade;

    // 提交订单
    facade.submitRequest();

    // 跟踪订单，直到订单完成
    while (!facade.checkStatus());

    std::cout << "********** 订单完成，跟踪次数：" << facade.followupNum() << " **********" << std::endl;

    getchar();

    return 0;
}
