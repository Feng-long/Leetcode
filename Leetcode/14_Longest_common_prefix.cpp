#include "stdafx.h"
using namespace std;
class Solution {
public:
	string longestCommonPrefix(vector<string>& strs)
	{
		if (strs.empty())
		{
			return "";
		}
		int min_length = 10000000;
		int record = 0;
		for (int k = 0; k < strs.size(); k++)
		{
			if (strs[k].size() < min_length)
			{
				min_length = strs[k].size();
				record = k;
			}
		}
		if (min_length == 0)
		{
			return "";
		}
		for (int i = 0; i < min_length; i++)
		{
			for (int j = 0; j <strs.size(); j++)
			{
				if (j == record)
				{
					continue;
				}
				if (strs[j][i] != strs[record][i])
				{
					return strs[record].substr(0, i);
				}
			}
		}
		return strs[record];
	}
};