#include "stdafx.h"
using namespace std;
class Solution
{
public:
	int searchInsert(vector<int>& nums, int target)
	{
		int begin = 0;
		int end = nums.size() - 1;
		if (nums.empty())
		{
			return 0;
		}
		while (begin <= end)
		{
		    int middle = (begin + end) / 2;
			if (nums[middle] < target)
			{
				begin = middle + 1;
			}
			else if(nums[middle] > target)
			{
				end = middle - 1;
			}
			else
			{
				return middle;
			}
		}
		return begin;
	}
};