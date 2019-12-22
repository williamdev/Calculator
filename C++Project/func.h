#pragma once
int add(int x, int y)
{
	int result_Add = x + y;
	return result_Add;
}
int  subtract(int x, int y)
{
	int result_Subtract = x - y;
	return result_Subtract;
}
int  multiply(int x, int y)
{
	int result_Multiply = x * y;				/*
												pretty self explanatory as these functions are quite short.
												Just made these to try out parameters, and I don't think they are very useful
												in the ways of performance/functionality, but they help tidy up the code for people
												reading it
												*/
	return result_Multiply;
}
int  divide(int x, int y)
{
	int result_Divide = x / y;
	return result_Divide;
}
int modulus(int x, int y)
{
	int result_Modulus = x % y;
	return result_Modulus;
}
