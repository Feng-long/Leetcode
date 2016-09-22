#include "stdafx.h"
using namespace std;
class Solution {
public:
	int minimumTotal(vector<vector<int>>& triangle)
	{
		int m = triangle.size();
		if (m == 0)
			return 0;
	

		for (int i = 1; i < m; i++)
		{ 
			triangle[i][0] += triangle[i - 1][0];
			for (int j = 1; j < (triangle[i].size() - 1); j++)
			{
				triangle[i][j] += min(triangle[i - 1][j - 1], triangle[i - 1][j]);
				cout << triangle[i - i][j - 1] << triangle[i - 1][j] << endl;
			}
			triangle[i][triangle[i].size() - 1] += triangle[i - 1][triangle[i - 1].size() - 1];
		}
		int minimum = triangle[m - 1][0];

		for (int j = 1; j < triangle[m - 1].size(); j++)
		{
			if (minimum > triangle[m - 1][j])
			{
				minimum = triangle[m - 1][j];
			}
		}
		return minimum;
	}
};