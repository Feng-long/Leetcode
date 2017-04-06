#include "stdafx.h"
#include "stdafx.h"
#include <regex>

using namespace std;
class Solution 
{
public:
	bool isNumber(string s)
	{

		std::regex e("\\s?[+-]?(\\d+\\.?|\\.\\d+)\\d*(e[+-]?\\d+)?\\s?");

		if (regex_match(s, e))
		{
			return true;
		}
		else
		{
			return false;
		}
	
	}
};