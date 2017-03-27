#ifndef CONCRETE_PROTOTYPE_H
#define CONCRETE_PROTOTYPE_H

#include "prototype.h"
#include <iostream>
#include <string>

using namespace std;

// 孙悟空
class SunWuKong : public Monkey
{
public:
    SunWuKong(string name){ m_strName = name; }
    ~SunWuKong(){}

    // 拷贝构造函数
    SunWuKong(const SunWuKong &other)
    {
        m_strName = other.m_strName;
    }
    Monkey* Clone()
    {
        // 调用拷贝构造函数
        return new SunWuKong(*this);
    }
    void Play()
    {
        cout << m_strName << " play Golden-Hoop-Stick" << endl;
    }

private:
    string m_strName;
};

#endif // CONCRETE_PROTOTYPE_H
