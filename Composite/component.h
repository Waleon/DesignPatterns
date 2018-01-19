#ifndef COMPONENT_H
#define COMPONENT_H

#include <iostream>
#include <string>

using namespace std;

class Component
{
public:
	Component(string name) : m_strName(name) {}
	virtual ~Component() {}
	virtual void Add(Component *cmpt) = 0;  // 添加构件
	virtual void Remove(Component *cmpt) = 0;  // 删除构件
	virtual Component* GetChild(int index) = 0;  // 获取构件
	virtual void Operation(int indent) = 0;  // 显示构件（以缩进的方式）

private:
	Component();  // 不允许

protected:
	string m_strName;
};

#endif // COMPONENT_H