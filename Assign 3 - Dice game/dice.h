#pragma once
class dice_info {

	int num_of_dice;
//	int sum_result;
	int dice_sum_value;
	int input;

public:
	dice_info();
	int read_num_of_dice();
	void set_data_num_of_dice(int );
	void set_dice_sum(int);
		//	int return_sum_result();
	int get_dice_sum();

};