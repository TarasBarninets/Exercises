/*Description: Write a program that outputs the string representation of numbers from 1 to n.
But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”.
For numbers which are multiples of both three and five output “FizzBuzz”.*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int n;
	cout << "Input number ";
	cin >> n;

	string str1 = "Fizz";
	string str2 = "Buzz";

	vector<string> strVector;
	strVector.reserve(n);

	for (int i = 1; i <= n; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			strVector.push_back(str1+str2);
		}
		else if (i % 3 == 0)
		{
			strVector.push_back(str1);
		}
		else if (i % 5 == 0)
		{
			strVector.push_back(str2);
		}
        	else
        	{
		    strVector.push_back(to_string(i));
        	}
	}

	for (auto itr : strVector)
    	{
        	cout << itr << endl;
    	}
}