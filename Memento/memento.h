#ifndef MEMENTO_H
#define MEMENTO_H

#include <iostream>
#include <string>

// 日期时间
class DateTime
{
public:
	DateTime(std::string dt)
		: m_dateTime(dt) {}

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
