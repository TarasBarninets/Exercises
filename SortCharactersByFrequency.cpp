#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>

using namespace std;

int main()  
{  
    string str;

	cout << "Enter string : ";
	cin >> str;

	const int length = str.length();
	unordered_map<char, size_t> characterCount;

	for (int i = 0; i < length; i++)
	{
		auto itr = characterCount.find(str[i]);
		if (itr == characterCount.end())
		{
			// char has not found in unordered_map, so insert element
			characterCount.insert({ str[i], 1 });
		}
		else
		{
			// char has found, so increment value - frequency
			itr->second++;
		}
	}

	cout << "CHARACTER \t COUNT \n";
	for (auto itr = characterCount.begin(); itr != characterCount.end(); ++itr)
	{
		cout << itr->first << "\t \t" << itr->second << '\n';
	}

	vector<int> uniqueFrequency;
	for (auto itr = characterCount.begin(); itr != characterCount.end(); ++itr)
	{
		uniqueFrequency.push_back(itr->second);
	}

	sort(uniqueFrequency.begin(), uniqueFrequency.end(), greater<int>());
	// remove duplicate frequency
	uniqueFrequency.erase(unique(uniqueFrequency.begin(), uniqueFrequency.end()), uniqueFrequency.end());

	cout << "Unique frequencies : ";
	for (const auto& itr : uniqueFrequency)
	{
		cout << itr << " ";
	}

	string updatedStr;
	updatedStr.reserve(length);

	// fill string with characters in decreasing order based on the frequency
	for (const auto& itr : uniqueFrequency)
	{
		int frequency = itr;
		for (auto itr = characterCount.begin(); itr != characterCount.end(); ++itr)
		{
			char letter = itr->first;
			if (itr->second == frequency)
			{
				updatedStr.append(frequency, letter);
			}
		}
	}

	cout << endl;
	for (const auto& itr : updatedStr)
	{
		cout << itr;
	}
}