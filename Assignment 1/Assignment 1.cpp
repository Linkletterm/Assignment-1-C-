// Assignment 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <random>
#include <iostream>
#include <vector>
#include <string>


int main()
{
	vector<string> words{ “ball”, “time”, “ever”, “tear”, “idea”, “over”, “wear”, “peel”, “poor”, “veer” };
	std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution(99, 999);
	int numbers = distribution(generator);

	int numbers2;
	numbers2 = rand() % 999 + 99;

	std::cout << numbers << " " << numbers2 << std::endl;
	system("pause");
    return 0;
}

