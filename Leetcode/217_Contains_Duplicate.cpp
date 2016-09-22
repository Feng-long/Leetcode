/*simple mapping search*/
#include "stdafx.h"
using namespace std;
class Solution {
public:
	bool containsDuplicate(vector<int>& nums)
	{
		map<int, int> mapping;
		for (int i = 0; i < nums.size(); i++)
		{
			mapping[nums[i]] = i;
		}
		if (mapping.size() != nums.size())
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};