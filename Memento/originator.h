/****************************************
* @file    Life
* @brief   备忘录模式
* @author  微信号：iwaleon
* @wechat  微信公众号：高效程序员
* @date    2017/10/01
****************************************/

#ifndef ORIGINATOR_H
#define ORIGINATOR_H

#include "memento.h"
#include <iostream>
#include <string>

// 一生
class Life
{
public:
	Life() {}
	~Life() {}

	void SetDateTime(std::string dt) {
		std::cout << "Set date time to " << dt << std::endl;
		m_dateTime = dt;
	}

	// 仅用于打印
	std::string GetDateTime() {
		return m_dateTime;
	}

	// 恢复日期时间
	void SetMemento(DateTime *dt) {
		if (nullptr != dt)
			m_dateTime = dt->GetDateTime();
	}

	// 创建日期时间
	DateTime *CreateMemento() {
		return new DateTime(m_dateTime);
	}

private:
	std::string m_dateTime;
};

#endif // ORIGINATOR_H
