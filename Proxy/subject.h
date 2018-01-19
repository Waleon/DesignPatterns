#ifndef SUBJECT_H
#define SUBJECT_H

// 电信运营商
class ITelco
{
public:
	virtual ~ITelco() {}
	virtual void Recharge(int money) = 0;  // 充值
};

#endif // SUBJECT_H