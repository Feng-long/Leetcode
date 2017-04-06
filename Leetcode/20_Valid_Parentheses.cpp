#include "stdafx.h"
using namespace std;
class Solution
{
public:
	bool isValid(string s)
	{
		stack<char> stackstring;
		string left = "({[";
		string right = ")}]";
		for (auto c : s)
		{
			if (left.find(c)!= string::npos)
			{
				stackstring.push(c);
			}
			else if (stackstring.empty() || (stackstring.top() != left[right.find(c)]))
			{
				return false;
			}
			else
			{
				stackstring.pop();
			}

		}
		return stackstring.empty();
	}
};