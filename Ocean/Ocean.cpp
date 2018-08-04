#include "Ocean.h"
#include "Stone.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

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

Ocean::~Ocean()
{
	for (size_t i = 0; i < N; i++)
		delete[] cells[i];
	delete[] cells;
	for (auto item = stuff.begin(); item != stuff.end(); ++item)
		delete *item;
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
			Object *born = new Stone(&cells[y][x]);
			cells[y][x].setObject(born);
			stuff.push_back(born);
			count--;
		}
	}
}


void Ocean::run()
{
	while (1)
	{
		for (auto obj : stuff)
			obj->live();
		clock_t now = clock();
		while (clock() < now + CLOCKS_PER_SEC);
		system("cls");
		print();
	}
}