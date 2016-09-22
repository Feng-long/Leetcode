/*
The keypoint is to find the recursive function f(n)=f(n-1)+f(n-2); from the end to the begining
*/

#include "stdafx.h"
using namespace std;
class Solution {
public:
	//digui
	int climbStairs(int n)
	{
		vector <int> record(n + 1);
		record[0] = 1; record[1] = 1;
		for (int i = 2; i < (n + 1); i++)
		{
			record[i] = record[i - 1] + record[i - 2];
		}
		return record[n];
	}
};