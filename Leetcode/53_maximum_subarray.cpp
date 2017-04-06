#include "stdafx.h"
using namespace std;
class Solution
{
public:
	int maxSubArray(vector<int>& nums)
	{
		int max = nums[0];
		vector <int> total;
		total.push_back(nums[0]);
		for (int i = 0; i < nums.size() - 1; i++)
		{
			if (total[i] > 0)
			{
				total.push_back(total[i] + nums[i + 1]);
			}
			else
			{
				total.push_back(nums[i + 1]);
			}
			if (total[i] > max)
			{
				max = total[i];
			}
		}
		return max;
	}
};