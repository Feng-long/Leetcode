// Leetcode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "120_triangle.cpp"
int _tmain(int argc, _TCHAR* argv[])
{
	Solution solu;
	vector<vector<int>> vec;
	vec = { { -1 }, { 2, 3 }, { 1, -1, -3 } };
	solu.minimumTotal(vec);
	return 0;
}

