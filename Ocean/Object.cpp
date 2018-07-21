#include "Object.h"
#include <cstdlib>

Object::Object(Cell * c) :cell(c)
{
	name = rand() % ('Z' - 'A' + 1) + 'A';
}

void Object::setCell(Cell* c)
{
	cell = c;
}

char Object::getName() const
{
	return name;
}