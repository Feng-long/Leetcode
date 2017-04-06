#include "stdafx.h"
using namespace std;
class Solution
{
public:
	vector<int> searchRange(vector<int>& nums, int target)
	{
		int begin = 0;
		int end = nums.size() - 1;
		vector<int> final;
		final.push_back(-1); final.push_back(-1);
		if (end == -1)
		{
			return final;
		}
		while (begin < end)
		{
			int middle = (begin + end) / 2;
			if (nums[middle] < target)
			{
				begin = middle + 1;
			}
			else
			{
				end = middle;
			}
		}
		if (nums[begin] != target)
		{
			return final;
		}
		else final[0] = begin;

		end = nums.size() - 1;

		while (begin < end)
		{
			int middle = (begin + end) / 2 + 1;
			if (nums[middle] > target)
			{
				end = middle - 1;
			}
			else
			{
				begin = middle;
			}
		}
		final[1] = end;
		return final;


	}
};