#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string str;

	cout << "Input string : ";
	cin >> str;

	int length = str.length();
	vector<char> reverseStr;
	reverseStr.reserve(length);

	for (int i = 0; i <= length; i++)
	{
		reverseStr.push_back(str[i]);
	}

	char tmp;
	for (int i = 0; i <= length/2; i++)
	{
		tmp = reverseStr[i];
		reverseStr[i] = reverseStr[length - i];
		reverseStr[length - i] = tmp;
	}

	cout << "Reversed string : ";
	for (auto itr : reverseStr)
	{
		cout << itr;
	}
	
	return 0;
}
	
	