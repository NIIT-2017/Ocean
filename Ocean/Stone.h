#ifndef _STONE_H_
#define _STONE_H_

#include "common.h"
#include "Object.h"
#include "Cell.h"


class Stone :public Object
{
	int liveTime;
	static unsigned int count;
public:
	Stone(Cell * = nullptr);
	~Stone();
	void live();
	static unsigned int getCount();
};

#endif