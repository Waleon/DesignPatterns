#include "concrete_bulider.h"
#include "director.h"
#include <string>

int main()
{
    Direcror *pDirecror = new Direcror();
    ThinkPadBuilder *pTPBuilder = new ThinkPadBuilder();
    YogaBuilder *pYogaBuilder = new YogaBuilder();

    // 组装 ThinkPad、Yoga
    pDirecror->Create(pTPBuilder);
    pDirecror->Create(pYogaBuilder);

    // 获取组装后的电脑
    Computer *pThinkPadComputer = pTPBuilder->GetResult();
    Computer *pYogaComputer = pYogaBuilder->GetResult();

    // 测试输出
    cout << "-----ThinkPad-----" << endl;
    cout << "CPU: " << pThinkPadComputer->GetCPU() << endl;
    cout << "Mainboard: " << pThinkPadComputer->GetMainboard() << endl;
    cout << "Ram: " << pThinkPadComputer->GetRam() << endl;
    cout << "VideoCard: " << pThinkPadComputer->GetVideoCard() << endl;

    cout << "-----Yoga-----" << endl;
    cout << "CPU: " << pYogaComputer->GetCPU() << endl;
    cout << "Mainboard: " << pYogaComputer->GetMainboard() << endl;
    cout << "Ram: " << pYogaComputer->GetRam() << endl;
    cout << "VideoCard: " << pYogaComputer->GetVideoCard() << endl;

    delete pThinkPadComputer;
    delete pYogaComputer;
    delete pTPBuilder;
    delete pYogaBuilder;
    delete pDirecror;

	getchar();

    return 0;
}
