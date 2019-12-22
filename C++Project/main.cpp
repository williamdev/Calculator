#include <iostream>
#include <stdlib.h>
#include "func.h"
int main()
{
	int first_Num; //Your First Number
	int second_Num; //Your Second Number
	int after_Num; //Your Other Number to apply to the previous result with a given operator ex: 2+2 = 4 + 10 <- this is the after_num
	std::string operation_Setting; //the setting for which operator you want to use
	std::string operation_Switch_Setting; //the setting for continuing to operate on to previous result, prompted after every operation
	int check_Stop = 10; //check_Stop is used to stop the while loop if the user declines the option to add, subtract, multiply, divide, or modulus the previous result by a subsequently given number.
	int past_Output; //previous output
	int present_Output; //current output
	bool didOneOperation = false; //to check if the program can prompt the user to operate on previous result, is set to true after you do one operation with the first_Num and second_Num

	first_Num_Prompt(first_Num);
	
	operation_Setting_input(operation_Setting);
	while (didOneOperation != true)
	{
		second_Num_Prompt_add(second_Num, first_Num, past_Output, didOneOperation, operation_Setting);
		second_Num_Prompt_subtract(second_Num, first_Num, past_Output, didOneOperation, operation_Setting);
		second_Num_Prompt_divide(second_Num, first_Num, past_Output, didOneOperation, operation_Setting);
		second_Num_Prompt_multiply(second_Num, first_Num, past_Output, didOneOperation, operation_Setting);
		second_Num_Prompt_modulus(second_Num, first_Num, past_Output, didOneOperation, operation_Setting);
    }

	while(didOneOperation == true)
	{
		operation_Switch_Setting_input(operation_Switch_Setting);

		if (operation_Switch_Setting == "Y" || operation_Switch_Setting == "y")
		{
			operation_Setting_input(operation_Setting);
			add_Onto(past_Output, present_Output, after_Num, didOneOperation, operation_Setting);
			subtract_From(past_Output, present_Output, after_Num, didOneOperation, operation_Setting);
			multiply_By(past_Output, present_Output, after_Num, didOneOperation, operation_Setting);
			divide_By(past_Output, present_Output, after_Num, didOneOperation, operation_Setting);
			modulus_By(past_Output, present_Output, after_Num, didOneOperation, operation_Setting);
		}

		else if (operation_Switch_Setting == "N" || operation_Switch_Setting == "n")
		{
			std::cout << "Ok, shutting down...";
			abort;
			exit;
			return 0;

		}
	}
}


