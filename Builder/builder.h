#ifndef BUILDER_H
#define BUILDER_H

#include "product.h"

// 建造者接口，组装流程
class IBuilder
{
public:
    virtual void BuildCpu() = 0;  // 创建 CPU
    virtual void BuildMainboard() = 0;  // 创建主板
    virtual void BuildRam() = 0;  // 创建内存
    virtual void BuildVideoCard() = 0;  // 创建显卡
    virtual Computer* GetResult() = 0;  // 获取建造后的产品
};

#endif // BUILDER_H
