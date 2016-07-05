#include "stdafx.h"
#include <iostream>
#include "mathsFunctions.h"


void doPrint()
{
	using namespace std;
	cout << "In doPrint()" << endl;
}

int main()
{
	using namespace std;
	
	cout << "Starting main()" << endl;
	cout << endl;
	
	cout << "Hello World!" << endl;
	cout << endl;
	
	doPrint();

	cout << "Enter a numer: "; // as user for a number
	int x = 0;
	cin >> x; // read number from console and store it in x
	cout << "You entered " << x << endl;
	cout << endl;

	cout << "6 + 7 = " << add(6, 7) << endl;

	cout << "(" << x << " x 6) + 2 + 3 = " << multiplyX6(x) + add(2, 3) << endl;

	cout << "Ending main()" << endl;
	return 0;
}

