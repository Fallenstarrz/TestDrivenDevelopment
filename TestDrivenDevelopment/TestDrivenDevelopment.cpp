// This program is used to demonstrate competency in test driven programming environments.
// Christopher Koon
// University of Advancing Technology
// 9/13/2018

#include "pch.h"
#include <iostream>

using namespace std;

// Tests if argument is a letter 
bool Test_IsLetter(char letter) 
{
	if (isalpha(letter)) 
	{
		cout << "IsLetter\n";
		return true;
	}
	else
	{
		cout << "IsNotLetter\n";
		return false;
	}
}

// Tests if argument is a number
bool Test_IsNumber(int num) 
{
	if (isdigit(num))
	{
		cout << "IsNumber\n";
		return true;
	}
	else
	{
		cout << "IsNotNumber\n";
		return false;
	}
}

// Tests if argument is even
bool IsEven(int num)
{
	if (num % 2 == 0) 
	{ 
		return true; 
	}
	else
	{ 
		return false; 
	}
}

// Runs the IsEven function and reports output to user
bool Test_IsEven()
{
	if (IsEven(2))
	{
		cout << "IsEven\n";
		return true;
	}
	else
	{
		cout << "IsOdd\n";
		return false;
	}
}

// Main function, used to declare variables to pass into functions and call functions.
int main()
{
	auto randLetter = 'A';
	auto randNumber = '4';

	Test_IsEven();
	Test_IsLetter(randLetter);
	Test_IsNumber(randNumber);
}