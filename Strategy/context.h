#ifndef CONTEXT_H
#define CONTEXT_H

#include "strategy.h"

class Context
{
public:
	Context(IStrategy *strategy) { m_pStrategy = strategy; }
	void Travel() { m_pStrategy->Travel(); }

private:
	IStrategy *m_pStrategy;
};

#endif // CONTEXT_H