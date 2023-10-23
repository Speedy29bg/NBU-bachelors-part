// CSCB112_HM3_F114636.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Задача 1. Съставете С++ конзолна програма, чрез която да преобразувате числата от
десетична бройна система в римска до най-голямото римско число (3999).
*/
#include <iostream>
#include <string>
#include <cmath>

const std::string ones[] = { "","I","II","III","IV","V","VI","VII","VIII","IX" };

const std::string tens[] = { "","X","XX","XXX","XL","L","LX","LXX","LXXX","XC" };

const std::string hundreds[] = { "","C","CC","CCC","CD","D","DC","DCC","DCCC","CM" };

const std::string thousands[] = { "","M","MM","MMM" };

int main()
{ 
	uint16_t number;
	uint16_t currentNumber = 0;
	std::cin >> number;
	uint16_t temp = number;
	uint8_t i = 0;
	while (temp != 0)
	{
		currentNumber = temp % 10 + std::pow(10, i);
		i++;
		temp /= 10;
		if (i == 0)
		{
			for (int iterator = 0; iterator; )
		}
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
