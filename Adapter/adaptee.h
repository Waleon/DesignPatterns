#ifndef ADAPTEE_H
#define ADAPTEE_H

#include <iostream>

using namespace std;

// 自带的充电器 - 两脚扁型
class OwnCharger
{
public:
    void ChargeWithFeetFlat() {
        cout << "OwnCharger::chargeWithFeetFlat" << endl;
    }
};

#endif // ADAPTEE_H
