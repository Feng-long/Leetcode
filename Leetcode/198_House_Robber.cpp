/*
dynamic programming like viterbi search
*/
#include "stdafx.h"
using namespace std;
class Solution {
public:
	int rob(vector<int>& nums)
	{
		if (nums.empty())
		{
			return 0;
		}
		int finalmax = 0;
		vector <vector<int>> record(2);
		vector <vector<int>> max(2);
		for (int i = 0; i < 2; i++)
		{
			record[i].resize(nums.size());
			max[i].resize(nums.size());
		}
		max[0][0] = 0; max[1][0] = nums[0];
		for (int i = 1; i<nums.size(); i++)
		{
			max[0][i] = ((max[0][i - 1])>(max[1][i - 1])) ? (max[0][i - 1]) : (max[1][i - 1]);
			max[1][i] = max[0][i - 1] + nums[i];
		}
		finalmax = (max[0][nums.size() - 1]>max[1][nums.size() - 1]) ? (max[0][nums.size() - 1]) : (max[1][nums.size() - 1]);
		return finalmax;

	}
};