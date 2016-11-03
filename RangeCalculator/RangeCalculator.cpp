// RangeCalculator.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "stdafx.h"


int main()
{
	int start = 0, finish = 0, sum = 0;
	std::cout << "Please enter two numbers: " << std::endl;
	std::cin >> start >> finish;
	if (start >= finish) {
		std::cout << "Improper startpoint and endpoint. Please try again.";
	} else {
		int count = start;
		while (count <= finish)
		{
			sum += count;
			++count;
		}
		std::cout << "The sum of the range between " << start << " and " << finish << " is " << sum << std::endl;
	}

    return 0;
}

