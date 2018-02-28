#ifndef ABSTRACT_CLASS_H
#define ABSTRACT_CLASS_H

#include <iostream>

// 公司
class Company
{
public:
	virtual ~Company() {}

	// 校园招聘
	void Recruit() {
		std::cout << "---------- Begin ----------" << std::endl;
		CareerTalk();
		ReceiveResume();
		Interview();
		Offer();
		std::cout << "---------- End ----------" << std::endl;
	}

	// 宣讲会
	void CareerTalk() {
		std::cout << "Delivery" << std::endl;
	}

	// 接收简历
	void ReceiveResume() {
		std::cout << "Receive Resume" << std::endl;
	}

	// 面试
	virtual void Interview() = 0;

	// 发放 Offer
	virtual void Offer() = 0;
};

#endif // ABSTRACT_CLASS_H
