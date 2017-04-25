#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

using namespace std;

// 汽车接口
class ICar
{
public:
    virtual string Name() = 0;  // 汽车名称
};

// 自行车接口
class IBike
{
public:
    virtual string Name() = 0;  // 自行车名称
};

#endif // PRODUCT_H
