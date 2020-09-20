/****************************************
* @file    IHandler
* @brief   原型模式
* @author  微信号：iwaleon
* @wechat  微信公众号：高效程序员
* @date    2017/10/01
****************************************/

#ifndef PROTOTYPE_H
#define PROTOTYPE_H

// 猴子
class Monkey
{
public:
    virtual ~Monkey(){}
    virtual Monkey* Clone() = 0;  // 克隆
    virtual void Play() = 0;  // 玩耍
};

#endif // PROTOTYPE_H
