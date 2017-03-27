#ifndef CONCRETE_OBSERVER_H
#define CONCRETE_OBSERVER_H

#include "observer.h"
#include <iostream>
#include <string>

using namespace std;

// 具体观察者
class ConcreteObserver : public IObserver
{
public:
    ConcreteObserver(string name) { m_strName = name; }

    void Update(float price) {
        cout << m_strName << " - price: " << price << "\n";
    }

private:
     string m_strName;  // 名字
};

#endif // CONCRETE_OBSERVER_H
