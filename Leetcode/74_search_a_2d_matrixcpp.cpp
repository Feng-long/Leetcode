#include "stdafx.h"
using namespace std;
class Solution {
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target)
	{
		int begin = 0;
		int end = matrix.size() - 1;	
		if (begin != end)
		{
			while (begin <= end)
			{
				int middle = (begin + end) / 2;
				if (matrix[middle][0] > target)
				{
					end = middle - 1;
				}
				else if (matrix[middle][0] < target)
				{
					begin = middle + 1;
				}
				else
				{
					return true;
				}
			}
		}
		if (end == -1)
		{
			return false;
		}
	
	
		int row = begin-1;
		if (begin == 0)
		{
			row = 0;
		}
		begin = 0;
		end = matrix.front().size() - 1;
		while (begin <= end)
		{
			int middle = (begin + end) / 2;
			if (matrix[row][middle] > target)
			{
				end = middle - 1;
			}
			else if (matrix[row][middle]< target)
			{
				begin = middle + 1;
			}
			else
			{
				return true;
			}
		}
		return false;
	}
};