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
	
	while (check_Stop > 0) //check_Stop is used to stop the while loop if the user declines the option to add, subtract, multiply, divide, or modulus the previous result by a subsequently given number.
	{
		std::cout << "Your First Number?" << std::endl; //prompt for first number
		std::cin >> first_Num; //first number input by user
		while (std::cin.fail())
		{
			std::cout << "Input an integer only with no spaces or characters" << std::endl;
			std::cin.clear();
			std::cin.ignore(256, '\n');
			std::cin >> first_Num;
		}
		std::cout << "+ for add, - for subtract, * for multiply, / for divide, and % for modulus. Type one to choose operator" << std::endl; 
		//prompt for operator
		std::cin >> operation_Setting; //input the operator
		if (didOneOperation == false)
		{
			if (operation_Setting == "+")//addition								// Way too many if statements, maybe could be shortened 
			{
				std::cout << "Your Second Number?" << std::endl; //prompts second number			
				std::cin >> second_Num;
				while (std::cin.fail())
				{
					std::cout << "Input an integer only with no spaces or characters" << std::endl;
					std::cin.clear();
					std::cin.ignore(256, '\n');
					std::cin >> second_Num;
				}
				past_Output = add(first_Num, second_Num);
				std::cout << past_Output << std::endl;
				didOneOperation = true;
			}

			else if (operation_Setting == "-")//subtraction
			{
				std::cout << "Your Second Number?" << std::endl; //prompts second number				// Way too many if checks, maybe could be shortened 
				std::cin >> second_Num;
				past_Output = subtract(first_Num, second_Num);
				std::cout << past_Output << std::endl;
				didOneOperation = true;
			}

			else if (operation_Setting == "*")//multiplication						 // Way too many if checks, maybe could be shortened 
			{
				std::cout << "Your Second Number?" << std::endl; //prompts second number
				std::cin >> second_Num;
				past_Output = multiply(first_Num, second_Num);
				std::cout << past_Output << std::endl;
				didOneOperation = true;
			}

			else if (operation_Setting == "/")//division							 // Way too many if checks, maybe could be shortened 
			{
				std::cout << "Your Second Number?" << std::endl; //prompts second number
				std::cin >> second_Num;
				past_Output = divide(first_Num, second_Num);
				std::cout << past_Output << std::endl;
				didOneOperation = true;
			}

			else if (operation_Setting == "%")//modulus                // Way too many if checks, maybe could be shortened 
			{
				std::cout << "Your Second Number?" << std::endl; //prompts second number
				std::cin >> second_Num;
				past_Output = modulus(first_Num, second_Num);
				std::cout << past_Output << std::endl;	
				didOneOperation = true;
			}

			else
			{
				std::cout << "Please input an operator";
			}
		}




		//NOTE: This next section uses the same logic as before just with different variables




			if(didOneOperation == true)
			{
				while (check_Stop > 0)
				{
					std::cout << "Operate onto this result? Y/N" << std::endl;
					std::cin >> operation_Switch_Setting;
					while (std::cin.fail())
					{
						std::cout << "Input Y or N" << std::endl;
						std::cin.clear();
						std::cin.ignore(256, '\n');
						std::cin >> operation_Switch_Setting;
					}
					if (operation_Switch_Setting == "Y" || operation_Switch_Setting == "y") //checks for yes option
					{	
						std::cout << "+ for add, - for subtract, * for multiply, / for divide, and % for modulus. Type one to choose operator" << std::endl;
						std::cin >> operation_Setting;
						if (operation_Setting == "+")                 // Way too many if checks, maybe could be shortened 
						{
							std::cout << "Give another number to add to your previous result, " << past_Output << ":" << std::endl;
							std::cin >> after_Num;
							present_Output = add(past_Output, after_Num);
							std::cout << present_Output << std::endl;
							didOneOperation = true;
							past_Output = present_Output;
							present_Output = 0;
						}

						else if (operation_Setting == "-")          // Way too many if checks, maybe could be shortened 
						{ 
							std::cout << "Give another number to subtract from your previous result, " << past_Output << ":" << std::endl;
							std::cin >> after_Num;
							present_Output = subtract(past_Output, after_Num);
							std::cout << present_Output << std::endl;
							didOneOperation = true;
							past_Output = present_Output;
							present_Output = 0;
						}

						else if (operation_Setting == "*")          // Way too many if checks, maybe could be shortened 
						{
							std::cout << "Give another number to multiply your previous result, " << past_Output << ", by:" << std::endl;
							std::cin >> after_Num;
							present_Output = multiply(past_Output, after_Num);
							std::cout << present_Output << std::endl;
							didOneOperation = true;
							past_Output = present_Output;
							present_Output = 0;
						}

						else if (operation_Setting == "/")          // Way too many if checks, maybe could be shortened 
						{
							std::cout << "Give another number to divide your previous result," << past_Output << ", by:" << std::endl;
							std::cin >> after_Num;
							present_Output = divide(past_Output, after_Num);
							std::cout << present_Output << std::endl;
							didOneOperation = true;
							past_Output = present_Output;
							present_Output = 0;
						}

						else if (operation_Setting == "%")          // Way too many if checks, maybe could be shortened 
						{
							std::cout << "Give another number to modulus your previous result," << past_Output << ", by:" << std::endl;
							std::cin >> after_Num;
							present_Output = modulus(past_Output, after_Num);
							std::cout << present_Output << std::endl;
							didOneOperation = true;
							past_Output = present_Output;
							present_Output = 0;
						}
						else
						{
							std::cout << "Please input an operator";
						}
						
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


	}
}