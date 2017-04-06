#include "stdafx.h"
using namespace std;
class Solution
{
public:
	bool isPalindrome(string s)
	{
		string s2;
		for (auto c : s)
		{
			if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
			{
				s2.push_back(c);
			}
			if (c >= 'A' && c <= 'Z')
			{
				c = c + 32;
				s2.push_back(c);
			}
		}
		//for(a,b,c) a weill be excuted once always, then decicde whether do it in each iteration by b, 
		if (s2.empty()||s2.size() == 1)
		{
			return true;
		}
	
		for (int i = 0; i < s2.size()/2; i++)
		{

			if (s2[i] != s2[s2.size() - i - 1])
			{
				return false;
			}
		}
		return true;
	}
};