/****************************************
* @file    PandoraBox
* @brief   备忘录模式
* @author  微信号：iwaleon
* @wechat  微信公众号：高效程序员
* @date    2017/10/01
****************************************/

#ifndef CARE_TAKER_H
#define CARE_TAKER_H

#include "originator.h"
#include <vector>

// 月光宝盒
class PandoraBox
{
public:
	PandoraBox(Life *life) : m_pLife(life) {}
	~PandoraBox() {
		for (auto itr = m_history.begin(); itr != m_history.end(); ++itr) {
			delete *itr;
		}
		m_history.clear();
	}

	// 保存备份
	void Save() {
		m_history.push_back(m_pLife->CreateMemento());
	}

	// 穿越至某一时刻（随机取时间）
	void Undo() {
		int index = rand() % m_history.size();
		m_pLife->SetMemento(m_history[index]);
	}

private:
	Life *m_pLife;
	std::vector<DateTime *> m_history;
};

#endif // CARE_TAKER_H
