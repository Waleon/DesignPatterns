#ifndef CONCRETE_BULIDER_H
#define CONCRETE_BULIDER_H

#include "builder.h"

// ThinkPad 系列
class ThinkPadBuilder : public IBuilder
{
public:
    ThinkPadBuilder() { m_pComputer = new Computer(); }
    void BuildCpu() { m_pComputer->SetmCpu("i5-6200U"); }
    void BuildMainboard() { m_pComputer->SetmMainboard("Intel DH57DD"); }
    void BuildRam() { m_pComputer->SetmRam("DDR4"); }
    void BuildVideoCard()  { m_pComputer->SetVideoCard("NVIDIA Geforce 920MX"); }
    Computer* GetResult() { return m_pComputer; }

private:
    Computer *m_pComputer;
};

// Yoga 系列
class YogaBuilder : public IBuilder
{
public:
    YogaBuilder() { m_pComputer = new Computer(); }
    void BuildCpu() { m_pComputer->SetmCpu("i7-7500U"); }
    void BuildMainboard() { m_pComputer->SetmMainboard("Intel DP55KG"); }
    void BuildRam() { m_pComputer->SetmRam("DDR5"); }
    void BuildVideoCard()  { m_pComputer->SetVideoCard("NVIDIA GeForce 940MX"); }
    Computer* GetResult() { return m_pComputer; }

private:
    Computer *m_pComputer;
};

#endif // CONCRETE_BULIDER_H
