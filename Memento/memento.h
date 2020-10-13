/****************************************
* @file    DateTime
* @brief   备忘录模式
* @author  微信号：iwaleon
* @wechat  微信公众号：高效程序员
* @date    2017/10/01
****************************************/

#ifndef MEMENTO_H
#define MEMENTO_H

#include <iostream>
#include <string>

// 日期时间
class DateTime
{
public:
	DateTime(std::string dt) : m_dateTime(dt) {}
	~DateTime() {}

	void SetDateTime(std::string dt) {
		m_dateTime = dt;
	}

	std::string GetDateTime() {
		return m_dateTime;
	}

private:
	std::string m_dateTime;
};

#endif // MEMENTO_H
