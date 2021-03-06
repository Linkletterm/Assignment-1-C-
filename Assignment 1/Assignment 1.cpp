// Assignment 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <random>
#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;


int main()
{
	int i = 0;
		for (; i < 10; i++) //Initializes a loop that will print out 10 random passwords
		{
			//Initializes two vectors and an array to be used at random
			vector<string> words = { "ball", "time", "ever", "tear", "idea", "over", "wear", "peel", "poor", "veer" };
			vector<string> words2 = { "bait", "tale", "meat", "save", "loft", "rate", "mile", "pork", "idle", "weak" };
			string special[] = { ",", "-", "!", "@", "#," "$", "%", "^", "&", "`" };
			//Generates three random numbers, two for the password, and one to pick a random character to change to uppercase
			int numbers;
			numbers = rand() % 999 + 100;
			int numbers2;
			numbers2 = rand() % 999 + 100;
			int randomnumber;
			randomnumber = rand() % 4 + 0;
			//Picks a random number between 1 and 10 to access a random string in words, words2, and special
			std::uniform_int_distribution<int> rand_dist(0, 9);
			std::random_device seed;
			int pick_a_number = rand_dist(seed);
			//Picks a random string
			string wordpicker = words[pick_a_number];
			wordpicker[randomnumber] = toupper(wordpicker[randomnumber]); //Changes the random character to uppercase
			string characterpicker = special[pick_a_number];
			string wordpicker2 = words2[pick_a_number];
			wordpicker2[randomnumber] = toupper(wordpicker2[randomnumber]);
			//Prints the completed password
			std::cout << wordpicker << numbers << characterpicker << wordpicker2 << numbers2 << std::endl;
			
			
		}
		
		return 0;
}	

