#include "stdafx.h"
using namespace std;
// from i to p  if diff[i]+...+diff[p] can not work, should start from p+1.
class Solution {
public:
	int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
	{
		int total = 0;  int sum = 0; int start = 0;
		for (int i = 0; i < gas.size(); i++)
		{
			total += (gas[i] - cost[i]);
			if (sum < 0)
			{
				sum = gas[i] - cost[i];
				start = i;
			}
			else
			{
				sum += gas[i] - cost[i];
			}
		}
		return total >= 0 ? start : -1;
	}
};