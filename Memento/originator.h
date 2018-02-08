#ifndef ORIGINATOR_H
#define ORIGINATOR_H

#include "memento.h"
#include <iostream>
#include <string>

// 一生
class Life
{
public:
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
