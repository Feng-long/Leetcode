
#include "stdafx.h"
using namespace std;
class Solution {
public:
	int maxProfit(vector<int>& prices)
	{
		int min = 30000;
		int max = 0;
		for (int i = 0; i < prices.size(); i++)
		{
			min = (min>prices[i]) ? (prices[i]) : (min);
			max = ((prices[i] - min)>max) ? (prices[i] - min) : (max);
		}
		return max;
	}
};