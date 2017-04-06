#include "stdafx.h"
using namespace std;
class Solution {
public:
	int search(vector<int>& nums, int target)
	{
		if (nums.empty())
		{
			return -1;
		}
		int first = 0, last = nums.size() - 1;
		while (first <= last)
		{
			int middle = (first + last) / 2;
			if (nums[middle] == target)
			{
				return middle;
			}
			if (nums[first] <= nums[last])
			{
				if (nums[middle] > target)
				{
					last = middle - 1;
				}
				else
				{
					first = middle + 1;
				}
			}
			else if (nums[middle] >= nums[first])
			{
				if ((nums[middle] < target) || (target < nums[first]))
				{
					first = middle + 1;
				}
				else
				{
					last = middle - 1;
				}

			}
			else
			{
				if ((nums[middle] > target) || (target > nums[last]))
				{
					last = middle - 1;
				}
				else
				{
					first = middle + 1;
				}
			}
		}
		return -1;
	}
};