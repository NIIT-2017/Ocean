#include "Ocean.h"
#include <iostream>
#include <cstdlib>

Ocean::Ocean()
{
	cells = new Cell*[N];
	for (size_t i = 0; i < N; i++)
	{
		cells[i] = new Cell[M];
		for (size_t j = 0; j < M; j++)
			cells[i][j].init(Pair{ j, i }, this);
	}
}
void Ocean::print() const
{
	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < M; j++)
			std::cout << 
			(cells[i][j].getObject() ? 
			 cells[i][j].getObject()->getName() : '.');

		std::cout << std::endl;
	}
}
void Ocean::addObjects(int count)
{
	while (count>0)
	{
		size_t x = rand() % M;
		size_t y = rand() % N;
		if (cells[y][x].getObject())
			continue;
		else
		{
			Object *born = new Object(&cells[y][x]);
			cells[y][x].setObject(born);
			stuff.push_back(born);
			count--;
		}
	}
}