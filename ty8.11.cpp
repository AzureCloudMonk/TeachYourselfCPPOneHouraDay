#include <iostream>
using namespace std;

int main()
{
	// Static array of 5 integers
	int myNumbers[5];

	// array assigned to point to int
	int* pointToNums = myNumbers;

	// Display address contained in pointer
	cout << "pointsToNums = 0x" << hex << pointToNums << endl;

	// Address of first element of array
	cout << "&myNumbers[0] = 0x" << hex << &myNumbers[0] << endl;

	return 0;
}
