#ifndef CONCRETE_FLYWEIGHT_H
#define CONCRETE_FLYWEIGHT_H

#include "flyweight.h"

// 恐怖分子
class Terrorist : public IPlayer
{
public:
	Terrorist() {
		m_task = "Plant a bomb";
	}

	virtual void assignWeapon(std::string weapon) override {
		m_weapon = weapon;
	}

	virtual void mission() override {
		std::cout << "Terrorist with weapon " + m_weapon + "," + " Task is " + m_task << std::endl;
	}
};

// 反恐精英
class CounterTerrorist : public IPlayer
{
public:
	CounterTerrorist() {
		m_task = "Diffuse bomb";
	}

	virtual void assignWeapon(std::string weapon) override {
		m_weapon = weapon;
	}

	virtual void mission() override {
		std::cout << "Counter Terrorist with weapon " + m_weapon + "," + " Task is " + m_task << std::endl;
	}
};

#endif // CONCRETE_FLYWEIGHT_H