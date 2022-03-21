#include <iostream>
#include "level.h"

using namespace std;

Data_levels::Data_levels()
	:levels(0)
{
	//constructor
}



int Data_levels::read_data_levels()
{

	return levels;

}

void Data_levels::set_data_levels(int levels_d) {

	levels = levels_d;
}

