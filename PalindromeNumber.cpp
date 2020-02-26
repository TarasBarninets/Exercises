#include <iostream>

using namespace std;

int main()
{
	long long num, reversedNum = 0;
	int remainder;
	
	cout << "Input number ";
	cin >> num;

	if (num < 0)
	{
		cout << num << " not palindrome number" << endl;
	}
	
	long long tmpNum = num;
	while (tmpNum != 0)
	{
		remainder = tmpNum % 10;
		reversedNum = reversedNum * 10 + remainder;
		tmpNum /= 10;
	}

	if (num == reversedNum)
	{
		cout << num << " palindrome number" << endl;
	}
	else
	{
		cout << num << "not palindrome number" << endl;
	}
}