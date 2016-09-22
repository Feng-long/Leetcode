#include "stdafx.h"
using namespace std;
class Solution {
public:
	int lengthOfLIS(vector<int>& nums)
	{
		vector<int> record;
		if (nums.empty())
		{
			return 0;
		}
		record.push_back(1);
		for (int i = 1; i < nums.size(); i++)
		{
			int temp = 0;
			for (int j = i - 1; j >= 0; j--)
			{
				if (nums[j]<nums[i])
				{
					temp = (record[j]>temp) ? (record[j]) : (temp);
				}
			}
			record.push_back(temp + 1);
		}
		return *max_element(record.begin(), record.end());
	}
};