#include "stdafx.h"
using namespace std;
class Solution
{
public:
	int maxProfit(vector<int>& prices)
	{
		if (prices.size() < 2)
		{
			return 0;
		}
		vector<int>maxprofit1(prices.size());
		vector<int>maxprofit2(prices.size());
		int min = prices[0];
		for (int i = 1; i < prices.size(); i++)
		{
			min = (min > prices[i]) ? (prices[i]) : (min);
			maxprofit1[i] = ((prices[i] - min) > maxprofit1[i - 1]) ? (prices[i] - min) : (maxprofit1[i - 1]);
		}
		int max = prices[prices.size() - 1];
		for (int i = prices.size() - 2; i >= 0; i--)
		{
			max = (max < prices[i]) ? (prices[i]) : (max);
			maxprofit2[i] = ((max - prices[i]) > maxprofit2[i + 1]) ? (max - prices[i]) : (maxprofit2[i + 1]);
		}
		int total = 0;
		for (int i = 0; i< prices.size(); i++)
		{
			total = (total>(maxprofit1[i] + maxprofit2[i])) ? (total) : (maxprofit1[i] + maxprofit2[i]);
		}
		return total;
	}
};