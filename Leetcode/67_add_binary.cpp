
/*
A simulation of "Add" with string, don't forget "carry"
*/
#include "stdafx.h"
using namespace std;
class Solution {
public:
	string addBinary(string a, string b)
	{
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		string total;
		int size = (a.size()>b.size()) ? a.size() : b.size();
		int carry = 0;
		for (int i = 0; i < size; i++)
		{
			int ai = i < a.size() ? a[i] - '0' : 0;
			int bi = i < b.size() ? b[i] - '0' : 0;
			total.insert(total.begin(), (ai + bi + carry) % 2 + '0');
			carry = (ai + bi + carry) / 2;
		}
		if (carry != 0)
		{
			total.insert(total.begin(), '1');
		}
		return total;
	}
};