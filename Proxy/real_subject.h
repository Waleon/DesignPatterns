#ifndef REAL_SUBJECT_H
#define REAL_SUBJECT_H

#include "subject.h"
#include <iostream>

// ÖÐ¹úÒÆ¶¯
class CMCC : public ITelco
{
public:
	void Recharge(int money) override {
		std::cout << "Recharge " << money;
	}
};

#endif // REAL_SUBJECT_H