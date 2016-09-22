/*
simple string problem
*/
#include "stdafx.h"
using namespace std;
class Solution {
public:
	bool canConstruct(string ransomNote, string magazine)
	{
		for (int i = 0; i < ransomNote.size(); i++)
		{
			int index = magazine.find(ransomNote[i]);
			if (index == string::npos)
			{
				return false;
			}
			else
			{
				magazine.erase(index, 1);
			}
		}
		return true;
	}
};