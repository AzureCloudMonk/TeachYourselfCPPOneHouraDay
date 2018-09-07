#include <iostream>
using namespace std;

int main()
{
	auto coinFlippedHeads = true;
	auto largeNumber  = 25000000000000;

	cout << "coinFlippedHeads = " << coinFlippedHeads;
	cout << " , sizeof(coinFlippedHeads) = " << sizeof(largeNumber) << endl;

	return 0;
}
