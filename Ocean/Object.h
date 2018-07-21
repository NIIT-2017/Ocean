#ifndef _OBJECT_H_
#define _OBJECT_H_

#include "common.h"

class Cell;
class Object
{
private:
	Cell *cell;
	char name;
public:
	Object(Cell * = nullptr);
	void setCell(Cell*);
	char getName() const;
};

#endif