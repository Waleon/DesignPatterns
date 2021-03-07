#ifndef CONCRETE_BULIDER_H
#define CONCRETE_BULIDER_H

#include "builder.h"

// ThinkPad 系列
class ThinkPadBuilder : public IBuilder
{
public:
    ThinkPadBuilder() { m_pComputer = new Computer(); }
    void BuildCpu() override { m_pComputer->SetCpu("i5-6200U"); }
    void BuildMainboard() override { m_pComputer->SetMainboard("Intel DH57DD"); }
    void BuildRam() override  { m_pComputer->SetRam("DDR4"); }
    void BuildVideoCard() override { m_pComputer->SetVideoCard("NVIDIA Geforce 920MX"); }
    Computer* GetResult() override { return m_pComputer; }

private:
    Computer *m_pComputer;
};

// Yoga 系列
class YogaBuilder : public IBuilder
{
public:
    YogaBuilder() { m_pComputer = new Computer(); }
    void BuildCpu() override  { m_pComputer->SetCpu("i7-7500U"); }
    void BuildMainboard() override { m_pComputer->SetMainboard("Intel DP55KG"); }
    void BuildRam() override { m_pComputer->SetRam("DDR5"); }
    void BuildVideoCard() override { m_pComputer->SetVideoCard("NVIDIA GeForce 940MX"); }
    Computer* GetResult() override { return m_pComputer; }

private:
    Computer *m_pComputer;
};

#endif // CONCRETE_BULIDER_H
