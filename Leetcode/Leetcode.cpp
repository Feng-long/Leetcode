// Leetcode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "74_search_a_2d_matrixcpp.cpp"
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{

	vector<int> a = {1,3};
	vector<int> b = { 10, 11, 16, 20 };
	vector<int> c = { 23, 30, 34, 50 };
	Solution solu;
	vector<vector<int>> matrix;
	matrix.push_back(a);
	//matrix.push_back(b);
	//matrix.push_back(c);
	solu.searchMatrix(matrix,3);
}

