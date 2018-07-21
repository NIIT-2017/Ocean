#include "common.h"
#include "ocean.h"
#include <ctime>
#include <cstdlib>

int main()
{
	srand(time(nullptr));
	Ocean atlantic;
	atlantic.addObjects(200);
	atlantic.print();
	return 0;
}