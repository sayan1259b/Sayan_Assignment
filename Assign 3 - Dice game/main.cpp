#include <iostream>
#include <ctime>
#include "level.h"
#include "threshold.h"
#include "dice.h"
using namespace std;

int main() {

	int  play = 0, lv_data = 0, dices = 0, dices_in = 0, size = 0, i = 0,
		th = 0, th_val = 0, lv_read = 0, roll = 0, cur_sum = 0, current_level = 0, sum_arr[100], count = 0, sum_result = 0;

	Data_levels lv;
	dice_info di;
	srand(static_cast<unsigned>(time(0)));


	do {

		do {

			cout << " enter data levels " << endl;
			cin >> lv_data;

			while (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Bad entry.  Enter a NUMBER: ";
				std::cin >> lv_data;
			}


			lv.set_data_levels(lv_data);
			lv_data = lv.read_data_levels();
			

			if (lv_data < 1 || lv_data>99) {
				cout << " you entered a value which is out of range - TRY AGAIN " << endl;
			}

		} while (lv_data < 0 || lv_data>99);

		do {

			cout << " set number of dices " << endl;
			cin >> dices_in;

			while (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Bad entry.  Enter a NUMBER: ";
				std::cin >> dices_in;
			}


			di.set_data_num_of_dice(dices_in);

			dices = di.read_num_of_dice();
		

			if (dices < 1 || dices>99) {
				cout << " you entered a value which is out of range - TRY AGAIN " << endl;
			}

		} while (dices < 1 || dices>99);


			threshold * th_ob1_array = new threshold[lv_data]; //check
			dice_info * ob2_array_dice_sum = new dice_info[lv_data];


			cout << " enter " << lv_data << " threshold values in the range " << dices <<" to "<<6*dices<<endl;
			for (i = 0; i < lv_data; i++)
			{

				cin >> th_val;

				while (std::cin.fail()) {
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					std::cout << "Bad entry.  Enter a NUMBER: ";
					std::cin >> th_val;
				}

				th_ob1_array[i].setN(th_val); //check

				if (th_val < dices || th_val > 6 * dices) {
					cout << " you entered a value which is out of range - TRY AGAIN " << endl;
					i--;
				}

			}

  do {

	  th_val = th_ob1_array[current_level].getN(); //check
	  cout << " th_val " << th_val << endl;

	  cout << " press 1 to roll " << endl;
	  cin >> roll;

	  if (roll == 1) {
		
		  sum_result = 0;

		  for (int y = 0; y < dices; y++) {
			  int result = rand() % 6 + 1;
			  sum_result = sum_result + result;
			  cout << " you rolled " << result << endl;
			

		  }
		  cur_sum = sum_result;

		  ob2_array_dice_sum[current_level].set_dice_sum(cur_sum);
		
		  cout << " Your rolled sum " << cur_sum << endl;
	  }

   if (current_level % 2 == 0) {

	
		if (current_level % 4 == 0) {

						if (th_val < cur_sum) { 

							current_level += 1;

							cout << " welcome to next level " << current_level << endl;
						}



						else if (th_val > cur_sum) {
							cout << " roll again " << endl; //do nothing, continue loop

						}
						else {
							cout << " you loose at " << current_level << "level" << endl;
							for (int count2 = 0;count2 <= current_level; count2++) {
								cout << " dice sum value at " << count2 << " level is " << ob2_array_dice_sum[count2].get_dice_sum() << endl;
								cout << " dice threshold value at " << count2 << " level is " << th_ob1_array[count2].getN() << endl;
			
							}
							current_level = 0;
							cout << " press 1 to play again " << endl;
							int play;
							cin >> play;

						}

					}

					else {


						if (th_val > cur_sum) { 

							current_level += 1;
							cout << " welcome to next level " << current_level<< endl;
							

						}



						else if (th_val < cur_sum) {
							cout << " roll again " << endl; //do nothing, continue loop

						}
						else {
							cout << " you loose at " << current_level << "level" << endl;
							for (int count2 = 0;count2 <= current_level; count2++) {
								cout << " dice sum value at " << count2 << " level is " << ob2_array_dice_sum[count2].get_dice_sum() << endl;
								cout << " dice threshold value at " << count2 << " level is " << th_ob1_array[count2].getN() << endl;

							}
							current_level = 0;
							cout << " press 1 to play again " << endl;
							int play;
							cin >> play;

						}

					}

				}

		else {
					

					if (current_level % 3 == 0)
					{

						if (th_val < cur_sum) {
							current_level += 1;

							cout << " welcome to next level " << current_level << endl;

						}

						else if (th_val > cur_sum) {
							cout << " roll again " << endl; //do nothing, continue loop
															//check
						}
						else {
							cout << " you loose at " << current_level << endl;
							for (int count2 = 0;count2 <= current_level; count2++) {
								cout << " dice sum value at " << count2 << " level is " << ob2_array_dice_sum[count2].get_dice_sum() << endl;
								cout << " dice threshold value at " << count2 << " level is " << th_ob1_array[count2].getN() << endl;

							}
							current_level = 0;
							cout << " press 1 to play again " << endl;
							int play;
							cin >> play;

						}


					}

					else
					{

						if (th_val < cur_sum) {
						
							current_level += 1;
							cout << " welcome to next level " << current_level << endl;

						}

						else if (th_val > cur_sum) {
							cout << " roll again " << endl; //do nothing, continue loop
															//check
						}
						else {
							cout << " you loose at " << current_level << endl;
							for (int count2 = 0;count2 <= current_level; count2++) {
								cout << " dice sum value at " << count2 << " level is " << ob2_array_dice_sum[count2].get_dice_sum() << endl;
								cout << " dice threshold value at " << count2 << " level is " << th_ob1_array[count2].getN() << endl;

							}
							current_level = 0;
							cout << " press 1 to play again " << endl;
							int play;
							cin >> play;

						}
					}

				}

			} while (current_level+1 != lv_data);

			if (current_level+1 == lv_data) {
				cout << " you win - you are at last level " << endl;
				for (int count2 = 0;count2 <= current_level; count2++) {
					cout << " dice sum value at " << count2 << " level is " << ob2_array_dice_sum[count2].get_dice_sum() << endl;
					cout << " dice threshold value at " << count2 << " level is " << th_ob1_array[count2].getN() << endl;

				}
				cout << " press 1 to play again " << endl;
				current_level = 0;
				cin >> play;
			}
			delete[] th_ob1_array;

		} while (play == 1);

		
	cout << " end game " << endl;

	system("pause");
	return 0;

}