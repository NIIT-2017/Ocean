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
	atlantic->addObjects(20);
	atlantic->run();
	


	return 0;
}