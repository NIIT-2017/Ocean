#include "common.h"
#include "ocean.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
	srand(time(nullptr));
	Ocean *atlantic = new Ocean;
	Ocean *arctic = new Ocean;
	atlantic->addObjects(200);
	arctic->addObjects(200);
	atlantic->print();
	arctic->print();

	cout << atlantic << endl;
	cout << arctic << endl;
	
	cout << Object::getCount() << endl;
	cout << Object::getAddress() << endl;
	
	delete atlantic;
	delete arctic;
	static int x = 10;
	cout << &x << endl;

	return 0;
}