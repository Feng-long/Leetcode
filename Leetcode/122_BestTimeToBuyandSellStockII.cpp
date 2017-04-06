
#include "stdafx.h"
using namespace std;
class Solution
{
public:
	int maxProfit(vector<int>& prices)
	{
		int total = 0;
		if (prices.size() < 2)
			return 0;
		for (int i = 0; i < prices.size()-1; i++)
		{
			total += (((prices[i + 1] - prices[i])>0) ? (prices[i + 1] - prices[i]) : (0));
		}
		return total;
	}
};