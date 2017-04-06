#include "stdafx.h"
using namespace std;
class Solution
{
public:
	int removeDuplicates(vector<int>& nums)
	{

		if (nums.empty())
		{
			return 0;
		}
		int index = 0;
		for (vector<int>::iterator iter = nums.begin() + 1; iter != nums.end(); ++iter)
		{
			if (*iter != nums[index])
			{
				nums[++index] = *iter;
			}
		}
		return index + 1;
	}
};