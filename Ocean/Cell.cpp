#include "Cell.h"

void Cell::init(Pair p, Ocean* oc)
{
	crd = p;
	ocean = oc;
}
Object* Cell::getObject() const
{
	return obj;
}
void Cell::setObject(Object *obj)
{
	this->obj = obj;
}
