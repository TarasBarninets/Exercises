#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int input;
	vector<int> nums;

	cout << "Input numbers into vector " << endl;
	while (cin >> input)
	{
		nums.push_back(input);
	}
		
	cout << endl << "Vector : ";
	for (auto it : nums)
	{
		cout << it << " ";
	}
	
	bool result = false;
	int modifyingCount = 0;
	const int size = nums.size();

	if (size == 1)
	{
		result = true;
	}

	for (int i = 0; i < size - 1; i++)
	{
		if (nums[i] <= nums[i + 1])
		{
			continue;
		}
		else
		{
			// define which element modify - i or i + 1
			if (i > 0 && nums[i - 1] > nums[i + 1])
			{
				nums[i + 1] = nums[i];
			}
			else
			{
				nums[i] = nums[i + 1];
			}
			++modifyingCount;
		}
		if (modifyingCount > 1)
		{
			result = false;
		}
	}

	// check if the sequence is in non-decreasing order : array[i] <= array[i + 1]
	for (int i = 0; i < size - 1; i++)
	{
		if (nums[i] > nums[i + 1])
		{
			break;
		}
	}

	if (!result)
	{
		result = true;
	}

	if (result)
	{
		cout << endl << "Array with " << size << " integers, could become non-decreasing by modifying at most 1 element" << endl;
	}
	else
	{
		cout << endl << "Array with " << size << " integers, could not become non-decreasing by modifying at most 1 element" << endl;
	}
}