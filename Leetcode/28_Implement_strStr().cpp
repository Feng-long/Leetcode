#include "stdafx.h"
using namespace std;

// string.size() returns unsigned int , int and unsiged int can not compare 
class Solution
{
private:
	void getnext(string needle, vector<int>& next)
	{
		next[0] = -1;
		int k = -1, j = 0;
		while (j < (needle.size() - 1))
		{
			if (k == -1 || needle[j] == needle[k])
			{
				next[++j] = ++k;
			}
			else
			{
				k = next[k];
			}
		}
	}
public:
	int strStr(string haystack, string needle)
	{
		if (haystack.size() == 0 && needle.size() == 0)
			return 0;
		if (needle.size() == 0)
			return 0;
		vector<int> next(needle.size());
		getnext(needle, next);

		int i = 0, j = 0;
		while ((i < (long int)haystack.size()) && (j < (long int)needle.size()))
		{
		
			//j=-1, matching from the begining  (j=0 and ith+1 compare)
			if ((j == -1 )|| (haystack[i] == needle[j]))
			{
				j++;
				i++;
			}
			else
			{
				j = next[j];
			}
		}
		if (j == needle.size())
		{
			return i - j;
		}
		else
			return -1;
	}


};