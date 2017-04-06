#include "stdafx.h"
using namespace std;
class Solution
{
public:
	string process(string n)
	{
		vector<int> number;
		int stringsize = n.size();
		for (int i = 0; i < stringsize; i++)
		{
			number.push_back(n[i] - '0');
		}
		string final;
		int temp = number[0];
		int count = 1;
		for (int i = 1; i < number.size(); i++)
		{
			if (number[i] == temp && i!= number.size())
			{
				count++;
			}
			else if (number[i] != temp && i !=number.size())
			{
				final.push_back(count + '0');
				final.push_back(temp + '0');
				count = 1;
				temp = number[i];
			}
		}
		final.push_back(count + '0');
		final.push_back(temp + '0');
		return final;
	}



	string countAndSay(int n)
	{
		string temp = "1";
		for (int i = 1; i < n; i++)
		{
			temp = process(temp);
		}
		return temp;
	}
};