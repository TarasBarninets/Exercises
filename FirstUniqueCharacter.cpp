#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
	string str;

	cout << "Enter string that contain only lowercase letters : ";
	cin >> str;

	const int length = str.length();
	unordered_map<char, size_t> characterCount;

	for (int i = 0; i < length; i++)
	{
		auto it = characterCount.find(str[i]);
		if (it == characterCount.end())
		{
			characterCount.insert({ str[i], 1 });
		}
		else
		{
			it->second++;
		}
	}

	cout << "CHARACTER \t COUNT \n";
	for (auto itr = characterCount.begin(); itr != characterCount.end(); ++itr)
	{
		cout << itr->first << "\t \t" << itr->second << '\n';
	}

	int index = -1;
	for (int i = 0; i < length; i++)
	{
		auto it = characterCount.find(str[i]);
		if (it->second == 1)
		{
			index = i;
			cout << "Index of first non-repeating character - " << str[i] << " = " << index << endl;
			break;
		}
	}

	if (index == -1)
	{
		cout << "Doesn't exist non-repeating character " << index << endl;
	}
}