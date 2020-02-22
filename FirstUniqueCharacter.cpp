#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
	string str;

	cout << " Enter string that contain only lowercase letters : ";
	cin >> str;

	int length = str.length();

	unordered_map<char, size_t> characterQuantity;

	for (int i = 0; i < length; i++)
	{
		auto it = characterQuantity.find(str[i]);

		if (it == characterQuantity.end())
		{
			characterQuantity.insert({ str[i], 1 });
		}
		else
		{
			it->second++;
		}
	}

	cout << "CHARACTER \t FREQUENCY \n";
	for (auto itr = characterQuantity.begin(); itr != characterQuantity.end(); ++itr)
	{
		cout << itr->first << '\t' << '\t' << itr->second << '\n';
	}

	int index = -1;

	for (int i = 0; i < length; i++)
	{
		auto it = characterQuantity.find(str[i]);
		if (it->second == 1)
		{
			index = i;
			cout << "Index of first non-repeating character - " << str[i] << " = " << index << endl;
			break;
		}
	}

	if (index == -1)
		cout << "Doesn't exist non-repeating character " << index << endl;
}