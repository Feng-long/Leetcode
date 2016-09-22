#include "stdafx.h"
using namespace std;
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		vector<int> result;
		unordered_map<int, int> mapping;
		for (int i = 0; i < nums.size(); i++)
		{
			mapping[nums[i]] = i;
		}
		for (int i = 0; i < nums.size(); i++)
		{
			const int search = target - nums[i];
			if ((mapping.find(search) != mapping.end()) && (mapping[search] > i))
			{
				result.push_back(i);
				result.push_back(mapping[search]);
			}
		}
		return result;
	}
};