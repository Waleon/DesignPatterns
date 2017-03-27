#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

using namespace std;

// 电脑
class Computer
{
public:
    void SetmCpu(string cpu) { m_strCpu = cpu;}
    void SetmMainboard(string mainboard) { m_strMainboard = mainboard; }
    void SetmRam(string ram) { m_strRam = ram; }
    void SetVideoCard(string videoCard) { m_strVideoCard = videoCard; }

    string GetCPU() { return m_strCpu; }
    string GetMainboard()  { return m_strMainboard; }
    string GetRam() { return m_strRam; }
    string GetVideoCard() { return m_strVideoCard; }

private:
    string m_strCpu;  // CPU
    string m_strMainboard;  // 主板
    string m_strRam;  // 内存
    string m_strVideoCard;  // 显卡
};

#endif // PRODUCT_H
