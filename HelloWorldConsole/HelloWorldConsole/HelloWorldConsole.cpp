// HelloWorldConsole.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	char buf[10];
	std::cout << "Hello World!" << std::endl;

	std::cout << "(Enter any text to continue)" << std::endl;
	std::cin >> buf;
	
	std::cout << "Change by some other guy on another computer! (probably sucks)" << std::endl;
    return 0;
}

