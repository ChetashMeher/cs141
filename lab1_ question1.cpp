#include <iostream>

using namespace std;

int main()
{
    cout << "Hello , subhankar sir!" << endl;
    // Write a C++ program to perform input/output of all basic data types.

    cout << endl;


	int integer;
	bool boolean;
	float floatingPt;
	char character;

	// input of basic data types

	cout << "Enter an integer value: " << endl;
	cin >> integer;

    cout << "Enter a boolean value: "<< endl ;
	cin >> boolean;

	cout << "Enter a floating point value: " << endl ;
	cin >> floatingPt;

	cout << "Enter a character value: " << endl ;
	cin >> character;

	cout << endl;

	// output of basic data types

	cout << "Integer value: " << "   " << integer << endl;
	cout << "Boolean value: " << "  " << boolean << endl;

	cout << "Floating point value: " << "  " << floatingPt << endl;
	cout << "Character value: " << "    " << character << endl;

	cout << endl;

	return 0;
}
