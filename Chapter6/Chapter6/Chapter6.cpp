// Chapter6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int getInputNumber()
{
	
	while (true)
	{
		std::cout << "please input a number of 1~9\n";
		int x;
		std::cin >> x;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "oops,please input again\n";

		}
		else
		{
			std::cin.ignore(32767, '\n');
			if (x >= 1 && x <= 9)
				return x;
			else
				std::cout << "oops, please input again\n";
		}

	}
}

void searchArry(int input, int array[], int arrayNumber)
{
	for (int i = 0; i < arrayNumber; ++i)
		if (input == array[i])
			std::cout << "the Index of " << input << " is " << i << "\n";
}

int main()
{
	int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };
	int arrayNumber = sizeof(array) / sizeof(array[0]);
	int input = getInputNumber();
	searchArry(input,array,arrayNumber);
	return 0;
}

