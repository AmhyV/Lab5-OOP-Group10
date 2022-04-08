#pragma once
#ifndef LAB5_GROUP10_H

#define LAB5_GROUP10_H

#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

namespace Lab5
{
	bool isAlpha(string str)
	{
		bool isAlpha = true;

		if (str.empty())
			isAlpha = false;
		else
		{
			char c;
			for (int i = 0; i < str.size(); i++)
			{
				c = str.at(i);
				if (!(isalpha(c)))
					isAlpha = false;
			}
		}

		return isAlpha;
	}

	// Checks if the string provided is a double
	bool isNumeric(string str)
	{
		bool isDouble = true;

		if (str.empty()) // If the string is empty
			isDouble = false;
		else // If the string is not empty
		{
			//int count = 0;
			char c;
			bool isAfterDecimal = false;
			for (int i = 0; i < str.size(); i++)
			{
				c = str.at(i);
				if (!(isdigit(c)))
				{
					if (c == '.' && isAfterDecimal == false) // If the character is the first decimal point
						isAfterDecimal = true;
					else // If the character is not the first decimal point
						isDouble = false;
				}
			}

			//if (count < 1) // If there are no digits
			//	isDouble = false;
		}

		return isDouble;
	}

	bool hasSymbols(string str)
	{
		bool hasSymbols = false;

		if (!(isAlpha(str)) && !(isNumeric(str)))
			hasSymbols = true;


		return hasSymbols;
	}

	bool confirmQuit(string str)
	{
		bool quit = false;
		bool loop = true;
		while (loop) {
			if (str == "y" || str == "Y")
			{
				quit = true;
				loop = false;
			}
			else if (str == "n" || str == "N")
				loop = false;
			else
			{
				cout << "\nERROR: Please enter a valid response: ";
				cin >> str;
				cout << endl;
			}
		}
		return quit;
	}

}

#endif
