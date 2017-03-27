#ifndef PROTOTYPE_H
#define PROTOTYPE_H

// 猴子
class Monkey
{
public:
    Monkey(){}
    virtual ~Monkey(){}
    virtual Monkey* Clone() = 0;  // 克隆
    virtual void Play() = 0;  // 玩耍
};

#endif // PROTOTYPE_H
