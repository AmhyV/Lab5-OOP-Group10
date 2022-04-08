#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

#include "header.h"

using namespace std;

int main()
{
	string str;
	bool run = true;

	while (run)
	{
		cout << "Enter something: " << endl;
		cin >> str;
		cout << "isAlpha: " << Lab5::isAlpha(str) << endl;
		cout << "isNumeric: " << Lab5::isNumeric(str) << endl;
		cout << "hasSymbols: " << Lab5::hasSymbols(str) << endl;


		cout << endl << "Quit? (Y/N): ";
		cin >> str;
		cout << endl;

		if (Lab5::confirmQuit(str))
			run = false;
	}

	// end of program. 
	cout << endl << endl;

	return 0;
}
