// Chapter6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

namespace Animal
{
	enum Name
	{
		Chicken,
		DOG,
		CAT,
		ELEPHANT,
		DUCK,
		SNAKE,
		Max_Animal_Number,
	};
}


int main()
{
	int legs[Animal::Max_Animal_Number]{2,4,4,4,2,0};
	std::cout <<"Elephant has "<< legs[Animal::ELEPHANT] << " legs.\n";

	return 0;
}

