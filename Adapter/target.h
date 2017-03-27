#ifndef TARGET_H
#define TARGET_H

#include <iostream>

// 俄罗斯提供的插座
class IRussiaSocket
{
public:
    // 使用双脚圆形充电
    virtual void Charge() = 0;
};

#endif // TARGET_H
