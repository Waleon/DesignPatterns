#include "adapter.h"

int main()
{
    // 创建适配器
    IRussiaSocket *pAdapter = new PowerAdapter();

    // 充电
    pAdapter->Charge();

    SAFE_DELETE(pAdapter);

    getchar();

    return 0;
}
