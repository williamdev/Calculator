#pragma once
void add_Onto(int& past, int& present, int& after, bool& Operate, std::string& setting)
{
    if (setting == "+")
    {
        std::cout << "Give another number to add to your previous result, " << past << ":" << std::endl;
        std::cin >> after;
        present = past + after;
        std::cout << present << std::endl;
        Operate = true;
        past = present;
        present = 0;
    }
}

void subtract_From(int& past, int& present, int& after, bool& Operate, std::string& setting)
{
    if (setting == "-")
    {
        std::cout << "Give another number to subtract from your previous result, " << past << ":" << std::endl;
        std::cin >> after;
        present = past - after;
        std::cout << present << std::endl;
        Operate = true;
        past = present;
        present = 0;
    }
}

void multiply_By(int& past, int& present, int& after, bool& Operate, std::string& setting)
{
    if (setting == "*")
    {
        std::cout << "Give another number to multiply by your previous result, " << past << ":" << std::endl;
        std::cin >> after;
        present = past - after;
        std::cout << present << std::endl;
        Operate = true;
        past = present;
        present = 0;
    }
}

void divide_By(int& past, int& present, int& after, bool& Operate, std::string& setting)
{
    if (setting == "/")
    {
        std::cout << "Give another number to divide by your previous result, " << past << ":" << std::endl;
        std::cin >> after;
        present = past / after;
        std::cout << present << std::endl;
        Operate = true;
        past = present;
        present = 0;
    }
}

void modulus_By(int& past, int& present, int& after, bool& Operate, std::string& setting)
{
    if (setting == "%")
    {
        std::cout << "Give another number to divide by your previous result, " << past << ":" << std::endl;
        std::cin >> after;
        present = past / after;
        std::cout << present << std::endl;
        Operate = true;
        past = present;
        present = 0;
    }
}

void first_Num_Prompt(int& first)
{
    std::cout << "Your First Number?" << std::endl; 
    std::cin >> first; 
    while (std::cin.fail())
    {
        std::cout << "Input an integer only with no spaces or characters" << std::endl;
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> first;
    }
}

void second_Num_Prompt_add(int& second, int& first, int& past, bool& Operate, std::string setting)
{
    if (setting == "+")                        
    {
        std::cout << "Your Second Number?" << std::endl;          
        std::cin >> second;
        while (std::cin.fail())
        {
            std::cout << "Input an integer only with no spaces or characters" << std::endl;
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> second;
        }
        past = first + second;
        std::cout << past << std::endl;
        Operate = true;
    }
}

void second_Num_Prompt_subtract(int& second, int& first, int& past, bool& Operate, std::string setting)
{
    if (setting == "-")
    {                     
        std::cout << "Your Second Number?" << std::endl;      
        std::cin >> second;
        while (std::cin.fail())
        {
            std::cout << "Input an integer only with no spaces or characters" << std::endl;
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> second;
        }
        past = first - second;
        std::cout << past << std::endl;
        Operate = true;
    }
}

void second_Num_Prompt_multiply(int& second, int& first, int& past, bool& Operate, std::string setting)
{
    if (setting == "*")
    {
        std::cout << "Your Second Number?" << std::endl;  
        std::cin >> second;
        while (std::cin.fail())
        {
            std::cout << "Input an integer only with no spaces or characters" << std::endl;
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> second;
        }
        past = first * second;
        std::cout << past << std::endl;
        Operate = true;
    }
}

void second_Num_Prompt_divide(int& second, int& first, int& past, bool& Operate, std::string setting)
{
    if (setting == "/")
    {
        std::cout << "Your Second Number?" << std::endl;          
        std::cin >> second;
        while (std::cin.fail())
        {
            std::cout << "Input an integer only with no spaces or characters" << std::endl;
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> second;
        }
        past = first / second;
        std::cout << past << std::endl;
        Operate = true;
    }
}

void second_Num_Prompt_modulus(int& second, int& first, int& past, bool& Operate, std::string &setting)
{
    if (setting == "%")
    {
        std::cout << "Your Second Number?" << std::endl;        
        std::cin >> second;
        while (std::cin.fail())
        {
            std::cout << "Input an integer only with no spaces or characters" << std::endl;
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> second;
        }
        past = first % second;
        std::cout << past << std::endl;
        Operate = true;
    }
}

void operation_Setting_input(std::string &z)
{
    std::cout << "+ for add, - for subtract, * for multiply, / for divide, and % for modulus. Type one to choose operator" << std::endl;
    std::cin >> z;
    if (z != "+" && z != "-" && z != "*" && z != "/" && z != "%")//checks for z and filters out unwanted/incorrect input
    {
        while (z != "+" && z != "-" && z != "*" && z != "/" && z != "%")
        {
            std::cout << "Error, please input +, -, *, /, or %" << std::endl;
            std::cin >> z;
        }
    }
}

void operation_Switch_Setting_input(std::string& x)
{
    std::cout << "Operate onto this result? Y/N" << std::endl;
    std::cin >> x;
    while (std::cin.fail())
    {
        std::cout << "Error" << std::endl;
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> x;
    }
}