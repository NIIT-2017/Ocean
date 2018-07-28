#ifndef _OBJECT_H_
#define _OBJECT_H_

#include "common.h"

class Cell;
class Object
{
private:
	Cell *cell;
	char name;
	static unsigned int count;
public:
	Object(Cell * = nullptr);
	~Object();
	void setCell(Cell*);
	char getName() const;
	static unsigned int getCount();
	static unsigned int* getAddress();
};

#endif