#include "stdafx.h"
using namespace std;
class Solution {
public:
	int lengthOfLastWord(string s)
	{
		if (s.empty())
		{
			return 0;
		}
		int count = 0;
		for (string::iterator it = s.begin(); it != s.end() - 1; it++)
		{
			if (*it != ' ')
			{
				count++;
			}
			else if (*it == ' '&&*(it + 1) != ' ')
			{
				count = 0;
			}
		}
		if (*(s.end() - 1) == ' ')
		{
			return count;
		}
		else
		{
			return count + 1;
		}
		return 0;
	}

};