*Description: Given a non-empty array of integers, every element appears twice except for one. Find that single one.*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> numbers = { 1, 2, 1, 2, 5, 9, 7, 7, 8, 9, 5 };

	int singleNumber = 0;

	// Based on next info :
	// XOR for number with 0 is always the number itself.
	// XOR for two the same numbers is always 0.
	for (int element : numbers)
	{
		singleNumber = singleNumber ^ element;
	}
	
	cout << "Single number = " << singleNumber << endl;
}