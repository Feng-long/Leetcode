#include "stdafx.h"
using namespace std;
class Solution {
public:
	int myAtoi(string str)
	{
		long long int result = 0;
		int sign = 1;
		int i = 0;
		while (str[i] == ' ')
		{
			i++;
		}
		if (str[i] == '+')
		{
			i++;
		}
		else if (str[i] == '-')
		{
			i++;
			sign = -1;
		}
		for (; i < str.size(); i++)
		{
			if (str[i] >= '0' && str[i] <= '9')
			{
				result = 10 * result + (str[i] - '0');
				if (result > INT_MAX)
				{
					return sign == -1 ? INT_MIN : INT_MAX;

				}
			}
			else
			{
				break;
			}
		}
		return sign*result;
	}
}; 