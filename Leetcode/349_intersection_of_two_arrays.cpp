
/*
ordered map table.
*/
#include "stdafx.h"
using namespace std;
class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
	{
		map<int, int> mapping1;
		map<int, int> mapping2;
		vector <int> finalresult;
		for (int i = 0; i < nums1.size(); i++)
		{
			mapping1[nums1[i]] = i;
		}
		for (int i = 0; i < nums2.size(); i++)
		{
			mapping2[nums2[i]] = i;

		}
		map<int, int>::const_iterator it;
		for (it = mapping1.begin(); it != mapping1.end(); it++)
		{
			if (mapping2.find(it->first) != mapping2.end())
			{
				finalresult.push_back(it->first);
			}
		}
		return finalresult;
	}
};