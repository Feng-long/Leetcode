#include "stdafx.h"
using namespace std;
class Solution
{
public:
	void rotate(vector<int>& nums, int k)
	{
		int begin = 0, n = nums.size();

		for (; k %= n; n -= k, begin += k)
		{
			for (int i = 0; i < k; i++)
			{
				swap(nums[begin + i], nums[begin + n - k + i]);
			}

		}
	}
};