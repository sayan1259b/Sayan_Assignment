#include <iostream>
#include "level.h"
#include "threshold.h"
#include "dice.h"
#include <ctime>
using namespace std;

dice_info::dice_info() :
	num_of_dice(0),
	dice_sum_value(0),
	input(0)

{
	//constructor
}

int dice_info::read_num_of_dice() {


	return num_of_dice;

}

void dice_info::set_data_num_of_dice(int p) {

	num_of_dice = p;

}

/*int dice_info::return_sum_result()
{

	srand(static_cast<unsigned>(time(0)));
	sum_result = 0;

	for (int y = 0; y < num_of_dice; y++) {
		int result = rand() % 6 + 1;
		sum_result = sum_result + result;
		cout << " you rolled " << result << endl;

	}
	return sum_result;

}*/


void dice_info::set_dice_sum(int dice_sum)
{
	this->input = dice_sum;
}

int dice_info::get_dice_sum()
{
	return input;
}



